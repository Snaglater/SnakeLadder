#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <conio.h>

int main()
{
    int x,y,total=41,counter,counter2=0,counter3=0,moves=0,z;
    char move[50],roll[2];
    move[45]='x';
    move[49]='x';
    printf("Press Enter to roll the dice: ");
    fgets(roll,sizeof(roll),stdin);
    system("cls");
    for(x=0;x<1;x++)
    {
        moves=(rand()%6)+1;

    }
    while (roll[0]=='\n'){
    for(x=0;x<5;x++)
    {
        if (x==1){
            total= 40;
        }
        if (x==2)
        {
            total = 21;
        }
        if(x==3){
            total = 20;
        }
        if(x==4)
        {
            total = 1;
        }
        for(y=0;y<10;y++)
        {
            if ((x==0)||(x==2)){
            if(move[total-1]=='x')
            {
                for(z=0;z<=moves;z++){
                    for (counter=0;counter<counter3;counter++)
            {
                printf("\n");
            }

                for (counter=0;counter<counter2;counter++){
                printf("  ");
            }
                Sleep(100);
                printf("X");
                Sleep(300);
                system("cls");
                total++;
                counter2++;
                y++;
                }
            }
            else{
            for (counter=0;counter<counter3;counter++)
            {
                printf("\n");
            }
            for (counter=0;counter<counter2;counter++){
                printf("  ");
            }
            Sleep(100);
            printf("%d ",total);
            Sleep(300);
            system("cls");
            total++;
            counter2++;
            }
            }
            if(x==4){
                if(move[total-1]=='x')
            {
                for(z=0;z<=moves;z++){
                    for (counter=0;counter<counter3;counter++)
            {
                printf("\n");
            }

                for (counter=0;counter<counter2;counter++){
                printf("  ");
            }
                Sleep(100);
                printf("X");
                Sleep(300);
                system("cls");
                total++;
                counter2++;
                y++;
                }
            }

            else{
            for (counter=0;counter<counter3;counter++)
            {
                printf("\n");
            }
            for (counter=0;counter<counter2;counter++){
                printf("  ");
            }
            Sleep(100);
            printf("%d ",total);
            Sleep(300);
            system("cls");
            total++;
            counter2++;
            }
            }
            if ((x==1)||(x==3)){
                if(move[total-1]=='x')
            {
                for(z=0;z<=moves;z++){
                    for (counter=0;counter<counter3;counter++)
            {
                printf("\n");
            }

                for (counter=0;counter<counter2;counter++){
                printf("  ");
            }
                Sleep(100);
                printf("X");
                Sleep(300);
                system("cls");
                total--;
                counter2++;
                y++;
                }
            }

            else{
            for (counter=0;counter<counter3;counter++)
            {
                printf("\n");
            }
            for (counter=0;counter<counter2;counter++){
                printf("  ");
            }
            Sleep(100);
            printf("%d ",total);
            Sleep(300);
            system("cls");
            total--;
            counter2++;
            }
        }
    }
    counter3++;
    counter2=0;
    }
    printf("Press Enter to roll the dice: ");
    fgets(roll,sizeof(roll),stdin);
}
}
