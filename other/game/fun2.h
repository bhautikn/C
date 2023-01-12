#include<termios.h>
#include<stdio.h>
#include<sys/ioctl.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

static struct termios old, new;

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
void tank_posion(int p){
    int height,width;
    screen_size(&height,&width);
    p=(p<1)?1:p;
    p=(p>width)?width:p;
    gotoxy(p+3,height-2);
    printf("\033[0;35m");
    printf("***");
    gotoxy(p,height-1);
    printf("*********");
    gotoxy(p,height);
    printf("*********");
    printf("\033[0m"); 
}
void *bullates(void *a){
    int *p=(int *)a;
    int height,width;
    screen_size(&height,&width);
    for (int i = 0;; ++i)
    {
        gotoxy(*p,height-3-i);
        printf("\033[0;36m");
        printf("+\n");
        printf("\033[0m");
        usleep(10000);
        if (height-6<i)
        {
            break;
        }
    }
}
void *enter(void *i){
    char c;
    c=getch();
    pthread_exit(NULL);

}
void fire(int p,int h){
    int i;char c; 
    h=h-3;
    p=p+4;
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, enter, NULL);
    pthread_create(&thread2, NULL, bullates, (void *)&p);
    pthread_join(thread1, NULL);
}