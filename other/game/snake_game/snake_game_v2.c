#include<termios.h>
#include<stdio.h>
#include<sys/ioctl.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

static struct termios old, new;
int screen_width,screen_height,direction=3,snake_potion[105][2];

void initTermios(int echo)
{
    tcgetattr(0, &old);
    new = old;
    new.c_lflag &= ~ICANON;
    new.c_lflag &= echo ? ECHO : ~ECHO;
    tcsetattr(0, TCSANOW, &new);
}

void resetTermios(void)
{
    tcsetattr(0, TCSANOW, &old);
}

char getch_(int echo)
{
    char ch;
    initTermios(echo);
    ch = getchar();
    resetTermios();
    return ch;
}

char getch(void)
{
    return getch_(0);
}

char getche(void)
{
    return getch_(1);
}
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int screen_size(int *he,int *wi){
    int height,width;
    struct winsize w;
    ioctl(0,TIOCGWINSZ,&w);
    height=w.ws_row;
    width=w.ws_col;
    *he=height;
    *wi=width;
}

int *get_direction(void *){
    char ch;
    while(1){
        if (getch()!=27)
        {
            direction=0;
        }
        getch();
        ch=getch();
        if (ch=='A')
        {
            if (direction==2){}
            else
                direction=1;
        }
        else if (ch=='B')
        {
            if (direction==1){}
            else
                direction=2;
        }
        else if (ch=='C')
        {
            if (direction==4){}
            else
                direction=3;
        }
        else if (ch=='D')
        {
            if (direction==3){}
            else
                direction=4;  
        }
    }
}

void print_star(int *x,int *y){
    *x=rand()%(screen_width-3)+3;
    *y=rand()%(screen_height-3)+3;
    gotoxy(*x,*y);
    printf("\033[0;31m");
    printf("\e[1m");
    printf("●\n");
    printf("\e[m");
    printf("\033[0m");
}

void set_potion(int x,int y,int s_length){
    int temp,temp2,j;
    temp2=x;
    for (int j=s_length;j>=0;--j)
    {
        temp=snake_potion[j][0];
        snake_potion[j][0]=temp2;
        temp2=temp;
     }
    temp2=y;
    for (int j=s_length;j>=0;--j)
    {
        temp=snake_potion[j][1];
        snake_potion[j][1]=temp2;
        temp2=temp;
    }
}

int main(){
    int s_length=1,x_pos,y_pos,x_point,y_point;
    int i=0,time_laps,score=0,dif,temp,temp2;
    char c;
    pthread_t t;
    screen_size(&screen_height,&screen_width);
    system("clear");
    gotoxy(screen_width/2-15,screen_height/2);
    printf("\e[?25h");
    printf("Enter difficulty level from 1 to 5: ");
    scanf("%d",&dif);
    if (dif==1){time_laps=500000;}
    else if(dif==2){time_laps=100000;}
    else if(dif==3){time_laps=70000;}
    else if(dif==4){time_laps=50000;}
    else if(dif==5){time_laps=30000;}
    else{time_laps=100000;}
    printf("\e[?25l");
    system("clear");
    pthread_create(&t, NULL,get_direction, NULL);
    x_pos=s_length+2;
    y_pos=screen_height/2;
    printf("\e[1m");
    for (int i=0;i<screen_width;++i)
    {
        gotoxy(i,2);
        printf("-");
    }
    for (int i=0;i<=screen_height;++i)
    {
        gotoxy(screen_width,i);
        printf("|");
    }
    for (int i=0;i<screen_width;++i)
    {
        gotoxy(i,screen_height);
        printf("-");
    }
    for (int i=0;i<=screen_height;++i)
    {
        gotoxy(0,i);
        printf("|");
    }
    for (int i=4;i<=s_length+4;++i)
    {
        gotoxy(i,y_pos);
        printf("●\n");
        snake_potion[i-3][0]=i;
        snake_potion[i-3][1]=y_pos;
    }
    print_star(&x_point,&y_point);
    gotoxy(screen_width-4,0);
    printf("\033[0;32m");
    printf("%03d\n",score);
    printf("\033[0m");
    gotoxy(screen_width/2-15,0);
    printf("press any arrow key to continue\n");
    for (int j = 0; j < 40; ++j)
    {
        gotoxy(screen_width/2-15+j,0);
        printf(" ");
    }
    while(1)
    {
        if (score==100)
        {
            gotoxy(screen_width/2-10,screen_height/2);
            printf("\033[0;32m");
            printf("\e[1m");
            printf("You Are Win\n");
            gotoxy(0,screen_height);
            printf("your Score is %d ", score);
            printf("\e[?25h");
            break;
        }
        if (x_pos>screen_width-1 || x_pos<2 || y_pos>screen_height-1 || y_pos<3 )
        {
            gotoxy(screen_width/2-10,screen_height/2);
            printf("\033[0;31m");
            printf("\e[1m");
            printf("You Are Out\n");
            gotoxy(0,screen_height);
            printf("your Score is %d ", score);
            printf("\e[?25h");
            break;
        }
        if (x_pos==x_point && y_pos==y_point)
        {
            score++;
            s_length++;
            print_star(&x_point,&y_point);
            gotoxy(screen_width-4,0);
            printf("\e[1m");
            printf("\033[0;32m");
            printf("%03d\n",score);
            printf("\033[0m");
        }
        printf("\033[0;36m");
        printf("\e[1m");
        if (direction==3)
        {
            x_pos++; 
            gotoxy(x_pos,y_pos);
            printf("●\n");
            usleep(time_laps-10000);
            set_potion(x_pos,y_pos,s_length);
            gotoxy(snake_potion[0][0],snake_potion[0][1]);
            printf(" ");
            
        }
        else if(direction==2)
        {
            y_pos++;
            gotoxy(x_pos,y_pos);
            printf("●\n");
            usleep(time_laps);
            set_potion(x_pos,y_pos,s_length);
            gotoxy(snake_potion[0][0],snake_potion[0][1]);
            printf(" ");
        }
        else if(direction==1){

            y_pos--;
            gotoxy(x_pos,y_pos);
            printf("●\n");
            usleep(time_laps);
            set_potion(x_pos,y_pos,s_length);
            gotoxy(snake_potion[0][0],snake_potion[0][1]);
            printf(" ");
        }
        else if (direction==4)
        {
            x_pos--;
            gotoxy(x_pos,y_pos);
            printf("●\n");
            usleep(time_laps-10000);
            set_potion(x_pos,y_pos,s_length);
            gotoxy(snake_potion[0][0],snake_potion[0][1]);
            printf(" ");
        }
        printf("\033[0m");
        if (direction==0)
        {
            gotoxy(screen_width/2-15,0);
            printf("press any arrow key to continue\n");
            getch();
            for (int j = 0; j < 40; ++j)
            {
                gotoxy(screen_width/2-15+j,0);
                printf(" ");
            }
            direction=3;
        }
        for (int j=s_length-2;j>=0; --j)
        {
            if (x_pos==snake_potion[j][0] && y_pos==snake_potion[j][1])
            {
                gotoxy(screen_width/2-10,screen_height/2);
                printf("\033[0;31m");
                printf("\e[1m");
                printf("You Are Out\n");
                gotoxy(0,screen_height);
                printf("your Score is %d ", score);
                printf("\e[?25h");
                return 0;
            }
        }
    }
}
