#include<termios.h>
#include<stdio.h>
#include<sys/ioctl.h>
#include<time.h>
#include <unistd.h>

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