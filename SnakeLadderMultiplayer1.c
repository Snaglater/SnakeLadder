#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void rowdivider (){
            int onerow;
            for(onerow=0;onerow<171;onerow++){
            printf("_");}
            printf("\n");
}
void coldivider (){
            int onecol;
            for(onecol=0;onecol<11;onecol++){
            printf("|                ");}
            printf("\n");
}
int coldivider5 (int x,int n,int current[],int previous[],int z[],int player,int roll,int moves,int times[]){
            int onecol,reset,loop,a,same=0;
            for(onecol=0;onecol<11;onecol++){
                    if ((x==4)&&(z[n]==onecol)&&((current[n]<=11)||(previous[n]<=11))){
                            if(moves==roll){
                            if((current[0]==current[1])&&(current[0]==current[2])&&(current[1]==current[2]))
                               {
                        printf("|   X    Y    O  ");
                               }
                               else if((current[0]==current[1])&&(n!=2))
                               {
                                   printf("|   X    Y       ");
                               }
                               else if(current[0]==current[2]&&(n!=1))
                               {
                                   printf("|   X         O  ");
                               }
                               else if(current[1]==current[2]&&(n!=0))
                               {
                                   printf("|        Y    O  ");
                               }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if (n==2)
                        {
                            printf("|             O  ");
                        }
                            }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if(n==2)
                        {
                           printf("|             O  ");
                        }
                    }
                        else if((x==3)&&(((current[n]>11)&&(current[n]<=21))||(previous[n]<=21))&&(z[n]==onecol)&&(previous[n]>11)){
                        if(moves==roll){
                            if((current[0]==current[1])&&(current[0]==current[2])&&(current[1]==current[2]))
                               {
                        printf("|   X    Y    O  ");
                               }
                               else if((current[0]==current[1])&&(n!=2))
                               {
                                   printf("|   X    Y       ");
                               }
                               else if(current[0]==current[2]&&(n!=1))
                               {
                                   printf("|   X         O  ");
                               }
                               else if(current[1]==current[2]&&(n!=0))
                               {
                                   printf("|        Y    O  ");
                               }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if (n==2)
                        {
                            printf("|             O  ");
                        }
                            }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if(n==2)
                        {
                           printf("|             O  ");
                        }
                        }
                        else if((x==2)&&(((current[n]>21)&&(current[n]<=31))||(previous[n]<=31))&&(z[n]==onecol)&&(previous[n]>21))
                        {
                            if(moves==roll){
                            if((current[0]==current[1])&&(current[0]==current[2])&&(current[1]==current[2]))
                               {
                        printf("|   X    Y    O  ");
                               }
                               else if((current[0]==current[1])&&(n!=2))
                               {
                                   printf("|   X    Y       ");
                               }
                               else if(current[0]==current[2]&&(n!=1))
                               {
                                   printf("|   X         O  ");
                               }
                               else if(current[1]==current[2]&&(n!=0))
                               {
                                   printf("|        Y    O  ");
                               }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if (n==2)
                        {
                            printf("|             O  ");
                        }
                            }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if(n==2)
                        {
                           printf("|             O  ");
                        }
                        }
                        else if ((x==1)&&(((current[n]>31)&&(current[n]<=41))||(previous[n]<=41))&&(z[n]==onecol)&&(previous[n]>31))
                        {
                            if(moves==roll){
                            if((current[0]==current[1])&&(current[0]==current[2])&&(current[1]==current[2]))
                               {
                        printf("|   X    Y    O  ");
                               }
                               else if((current[0]==current[1])&&(n!=2))
                               {
                                   printf("|   X    Y       ");
                               }
                               else if(current[0]==current[2]&&(n!=1))
                               {
                                   printf("|   X         O  ");
                               }
                               else if(current[1]==current[2]&&(n!=0))
                               {
                                   printf("|        Y    O  ");
                               }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if (n==2)
                        {
                            printf("|             O  ");
                        }
                            }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if(n==2)
                        {
                           printf("|             O  ");
                        }
                        }
                        else if ((x==0)&&(((current[n]>41)&&(current[n]<=51))||(previous[n]<=51)||(current[n]>51))&&(z[n]==onecol)&&(previous[n]>41))
                        {
                            if(moves==roll){
                            if((current[0]==current[1])&&(current[0]==current[2])&&(current[1]==current[2]))
                               {
                        printf("|   X    Y    O  ");
                               }
                               else if((current[0]==current[1])&&(n!=2))
                               {
                                   printf("|   X    Y       ");
                               }
                               else if(current[0]==current[2]&&(n!=1))
                               {
                                   printf("|   X         O  ");
                               }
                               else if(current[1]==current[2]&&(n!=0))
                               {
                                   printf("|        Y    O  ");
                               }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if (n==2)
                        {
                            printf("|             O  ");
                        }
                            }
                        else if(n==0)
                            {
                            printf("|   X            ");
                            }
                        else if (n==1)
                        {
                            printf("|        Y       ");
                        }
                        else if(n==2)
                        {
                           printf("|             O  ");
                        }
                        }
                        else{
                    printf("|                ");
                    }
            }
            printf("\n");
}
int boxnumber (int rowcounter,int idcounter){

            int id=0;
            if ((rowcounter==2)||(rowcounter==4)){
                for(id=idcounter;id>idcounter-10;id--){
                printf("|       %2d       ",id);}
            }else{
                for(id=idcounter-9;id<idcounter+1;id++){
                printf("|       %2d       ",id);}
                }
            printf("|\n");
            rowcounter++;
            return rowcounter;
            }
void boxdirections (int rowcounter,int idcounter){

            int id=0;
            if ((rowcounter==2)||(rowcounter==4)){
                for(id=idcounter;id>idcounter-10;id--){

                switch (id){
                    case 40:
                        printf("|Reverse 10 steps");break;
                    case 36:
                        printf("|  Go to box 11  ");break;
                    case 31:
                        printf("| Pause 2 turns  ");break;
                    case 18:
                        printf("|  Go to box 40  ");break;
                    default:
                        printf("|                ");break;

                    }
                }
            }else{
                for(id=idcounter-9;id<idcounter+1;id++){

                switch (id){
                    case 50:
                        printf("|      Win!      ");break;
                    case 48:
                        printf("|   Go to box 1  ");break;
                    case 41:
                        printf("|  Go to box 49  ");break;
                    case 22:
                        printf("|   Go to box 33 ");break;
                    case 8:
                        printf("| Reverse 3 steps");break;
                    case 2:
                        printf("|  Pause 1 turn  ");break;
                    default:
                        printf("|                ");break;

                    }
                }
            }
            printf("|\n");

    }



int main()
{
    int row,idcounter=50,rowcounter=1,roll=0,moves=0,x=0,reset=0,reverse=0,loop=0,n=0,player=3;
    char again='y',go;
    int current[3]={1,1,1},previous[3]={1,1,1},movement[3]={0,0,0},times[3]={0,0,0};
    time_t t;
    srand((unsigned)time(&t));
    scanf("%c",&again);
    while(again=='\n'){
    for(n=0;n<player;n++){
    roll=rand()%6;
    roll++;
    printf("%d",roll);
    current[n]+=roll;
    for(moves=0;moves<=roll;moves++)
    {
        if (moves==0)
        {

        }
        else if ((current[n]<=11)&&(times[n]>=1))
            {
                movement[n]++;
            }
            else if((current[n]>11)&&(current[n]<=21))
            {
                if(previous[n]<=11)
                {
                    if (previous[n]==11)
                    {
                        if(current[n]>11)
                        {
                            previous[n]++;
                            x++;
                        }

                    }
                    else if (previous[n]<=11){
                    movement[n]++,previous[n]++,x++;
                    }
                }
                else if(previous[n]==12)
                {
                    if (roll>1){
                        if(moves>0)
                        {
                            movement[n]=9;
                        }
                        else{
                                movement[n]--;}

                    }
                    else{
                        movement[n]--;
                    }
                }
                else{
                movement[n]--;
            }}
            else if((current[n]>21)&&(current[n]<=31))
            {
                if (previous[n]<=21)
                {
                    if (previous[n]==21)
                    {
                        if(current[n]>21)
                        {
                            previous[n]++;
                            x++;
                        }

                    }
                    else if(previous[n]<=21){
                        movement[n]--,previous[n]++,x++;
                    }
                }
                else if(previous[n]==22)
                {
                    if (roll>1){
                            if(moves>0)
                        {
                            movement[n]=0;
                        }
                        else{
                                movement[n]++;}
                    }
                    else
                    {
                        movement[n]++;
                    }
                }
                else
                {
                    movement[n]++;
                }
            }
            else if((current[n]>31)&&(current[n]<=41))
            {
                if (previous[n]<=31)
                {
                    if (previous[n]==31)
                    {
                        if(current[n]>31)
                        {
                            previous[n]++;
                            x++;
                        }

                    }
                    else if(previous[n]<=31){
                        movement[n]++,previous[n]++,x++;
                    }
                }
                else if(previous[n]==32)
                {
                    if (roll>1)
                    {
                            if(moves>0)
                        {
                            movement[n]=9;
                        }
                        else{
                                movement[n]--;}
                    }
                    else
                        {
                        movement[n]--;
                        }

                }
                else
                {
                    movement[n]--;
                }
            }
            else if((current[n]>41)&&(current[n]<=51)||(current[n]>51))
            {
                if (previous[n]<=41)
                {
                    if (previous[n]==41)
                    {
                        if(current[n]>41)
                        {
                            previous[n]++;
                            x++;
                        }
                    }
                    else if(previous[n]<=41){
                        movement[n]--,previous[n]++,x++;
                    }}
                else if(previous[n]==42)
                {
                    if (roll>1)
                    {
                        if(moves>0)
                        {
                            movement[n]=0;
                        }
                        else{
                                movement[n]++;}
                    }
                    else
                    {
                        movement[n]++;
                    }
                }
                else if(previous[n]<=51)
                {
                    if(current[n]>51)
                {
                    reverse=current[n]-51;
                    loop=roll-reverse;
                    if (moves>=loop)
                {
                movement[n]--;
                }
                else
                {
                    movement[n]++;
                }
                }
                else{
                    movement[n]++;
                }
                }
            }
            times[n]++;
        int row,idcounter=50,rowcounter=1;
    for(row=0;row<5;row++){
            rowdivider();
            coldivider();
            boxdirections(rowcounter,idcounter);
            coldivider();
            rowcounter = boxnumber(rowcounter,idcounter);
            coldivider();
            coldivider();
            coldivider5(row,n,current,previous,movement,player,roll,moves,times);
            idcounter-=10;
    }
            rowdivider();
            if (moves==0)
            {
                scanf("%c",&go);
            }
            if(moves==roll)
            {

            }
            else{
            Sleep(300);
             system("cls");
            }
             if ((previous[n]==11)||(previous[n]==12)||(previous[n]==21)||(previous[n]==22)||(previous[n]==31)||(previous[n]==32)||(previous[n]==41)||(previous[n]==42))
             {
                 previous[n]++;
                 x++;
             }

    }
    scanf("%c",&again);
    Sleep(0);
    system("cls");
    previous[n]+=roll-x;
    if(current[n]>51)
    {
        current[n]=current[n]-roll+loop-reverse;
        previous[n]=current[n];
    }
    if (current[n]==51)
    {
        printf("PLAYER %d HAS WON THE GAME!!!!!",n+1);
        return 0;
    }
    loop=0,reverse=0;
    x=0;
    }
    }
    return 0;
}
