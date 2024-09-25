#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int result(char you,char comp)
{
    //if game draw : 0
    if(you == comp)
        return 0;

    //if you won : -1 or you lose : 1
    if(you=='s' && comp=='w')
        return -1;
    else if(you=='w' && comp=='s')
        return 1;
    else if(you=='s' && comp=='g')
        return 1;
    else if(you=='g' && comp=='s')
        return -1;
    else if(you=='g' && comp=='w')
        return 1;
    else if(you=='w' && comp=='g')
        return -1;
}

int main()
{
    char you,comp;
    int n,ch=1;
    char arr[] = {'s','w','g'};
    while(ch!=2)
    {
        srand(time(NULL));
        n = rand()%3;
        comp = arr[n];
        fflush(stdin);
        printf("\nEnter 's' for snake, 'w' for water and 'g' for gun : ");
        scanf("%c",&you);
        int r = result(you,comp);
        if(r==1)
            printf("You lose!..\nYou selected : %c\ncomputer selected : %c\n\n",you,comp);
        else if(r==-1)
            printf("You Won..\nYou selected : %c\ncomputer selected : %c\n\n",you,comp);
        else if(r==0)
            printf("Game draw!..\nBoth selected : %c\n\n",comp);
        printf("choose an option\n");
        printf("1. play again\n");
        printf("2. Exit\n");
        printf("Enter option : ");
        scanf("%d",&ch);
    }
    return 0;
}