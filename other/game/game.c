#include "fun2.h"

int main(){
    int height,width,pos;
    char c;
    screen_size(&height,&width);
    pos=width/2;
    system("clear");
    tank_posion(pos);
    printf("\e[?25l");
    while(1){
        fire(pos,height);
        c=getch();
        if (c=='d')
        {
            system("clear");
            pos=pos+3;
            tank_posion(pos); 
        }
        else if (c=='a')
        {
            system("clear");    
            pos=pos-3;
            tank_posion(pos);
        }
        if (c=='p')
        {
            system("clear");
            break;
        }

    }
    printf("\e[?25h");
}