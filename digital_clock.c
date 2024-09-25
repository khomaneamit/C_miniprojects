#include<stdio.h>
#include<windows.h>
int main()
{
    int h,m,s;
    int delay = 1000;//delay of 1000 milliseconds
    printf("Set Time : ");
    scanf("%d%d%d",&h,&m,&s);
    if(h>60 || m>60 || s>60)
    {
        printf("Error!...");
        return 0;
    }
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\nClock : ");
        printf("\n%02d:%02d:%02d",h,m,s);
        Sleep(delay);
        system("cls");
    }
    return 0;
}