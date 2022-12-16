#include <stdio.h>
#include <unistd.h>

int main ()
{
    for (int i = 0;; ++i)
     {
        usleep(600000);
        printf("%d\n", i);
        
     } 

}
