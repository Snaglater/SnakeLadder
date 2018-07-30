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
int coldivider5 (int x,int y,int current,int previous,int z,int reverse){
            int onecol,reset,loop;
            for(onecol=0;onecol<11;onecol++){
                    if ((x==4)&&(z==onecol)&&((current<=11)||(previous<=11))){
                        printf("|        X       ");
                        }
                        else if((x==3)&&(((current>11)&&(current<=21))||(previous<=21))&&(z==onecol)&&(previous>11)){
                        printf("|        X       ");
                        }
                        else if((x==2)&&(((current>21)&&(current<=31))||(previous<=31))&&(z==onecol)&&(previous>21))
                        {
                            printf("|        X       ");
                        }
                        else if ((x==1)&&(((current>31)&&(current<=41))||(previous<=41))&&(z==onecol)&&(previous>31))
                        {
                            printf("|        X       ");
                        }
                        else if ((x==0)&&(((current>41)&&(current<=51))||(previous<=51)||(current>51))&&(z==onecol)&&(previous>41))
                        {
                            printf("|        X       ");
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
                    case 18:
                        printf("|  Go to box 38  ");break;
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
    int pause=2,row,idcounter=50,rowcounter=1,roll=0,moves=0,current=1,previous=1,movement=0,times=0,x=0,reset=0,reverse=0,loop=0,reset1=0;
    char again='y';
    time_t t;
    srand((unsigned)time(&t));
    scanf("%c",&again);
    while(again=='\n'){
    roll=rand()%6;
    roll=6;
    if (previous!=3){pause=2;}
    if (previous==3&&pause!=0){
            printf("Trapped for 1 round, ");
            roll=0,pause-=2;}

    printf("You can move %d steps",roll);
    if (current==9){current=6,previous=6,movement-=3;}
    if (current==23){current=34,previous=34,movement+=6;}
    if (current==42){current=50,previous=50,movement+=8;}
    if (current==49){current=2,previous=2,movement-=7;}
    if (current==19){current=39,previous=39;}
    if (current==37){current=12,previous=12,movement+=5;}
    if (current==41){current=31,previous=31,movement+=9;}

    current+=roll;
    for(moves=0;moves<roll;moves++)
    {
        if ((current<=11)&&(times>=1))
            {
                movement++;
            }
            else if((current>11)&&(current<=21))
            {
                if(previous<=11)
                {
                    if (previous==11)
                    {
                        if(current>11)
                        {
                            previous++;
                            x++;
                        }

                    }
                    else if (previous<=11){
                    movement++,previous++,x++;
                    }
                }
                else if(previous==12)
                {
                    if (roll>1){
                        if(moves>0)
                        {
                            movement=9;
                        }
                        else{
                                movement--;}

                    }
                    else{
                        movement--;
                    }
                }
                else{
                movement--;
            }}
            else if((current>21)&&(current<=31))
            {
                if (previous<=21)
                {
                    if (previous==21)
                    {
                        if(current>21)
                        {
                            previous++;
                            x++;
                        }

                    }
                    else if(previous<=21){
                        movement--,previous++,x++;
                    }
                }
                else if(previous==22)
                {
                    if (roll>1){
                            if(moves>0)
                        {
                            movement=0;
                        }
                        else{
                                movement++;}
                    }
                    else
                    {
                        movement++;
                    }
                }
                else
                {
                    movement++;
                }
            }
            else if((current>31)&&(current<=41))
            {
                if (previous<=31)
                {
                    if (previous==31)
                    {
                        if(current>31)
                        {
                            previous++;
                            x++;
                        }

                    }
                    else if(previous<=31){
                        movement++,previous++,x++;
                    }
                }
                else if(previous==32)
                {
                    if (roll>1)
                    {
                            if(moves>0)
                        {
                            movement=9;
                        }
                        else{
                                movement--;}
                    }
                    else
                        {
                        movement--;
                        }

                }
                else
                {
                    movement--;
                }
            }
            else if((current>41)&&(current<=51)||(current>51))
            {
                if (previous<=41)
                {
                    if (previous==41)
                    {
                        if(current>41)
                        {
                            previous++;
                            x++;
                        }

                    }
                    else if(previous<=41){
                        movement--,previous++,x++;
                    }
                }
                else if(previous==42)
                {
                    if (roll>1)
                    {
                        if(moves>0)
                        {
                            movement=0;
                        }
                        else{
                                movement++;}
                    }
                    else
                    {
                        movement++;
                    }
                }
                else if(previous<=51)
                {
                    if(current>51)
                {
                    reverse=current-51;
                    loop=roll-reverse;
                    if (moves>=loop)
                {
                movement--;
                }
                else
                {
                    movement++;
                }
                }
                else{
                    movement++;
                }
                }
            }
            times++;
        int row,idcounter=50,rowcounter=1;
    for(row=0;row<5;row++){
            rowdivider();
            coldivider();
            boxdirections(rowcounter,idcounter);
            coldivider();
            rowcounter = boxnumber(rowcounter,idcounter);
            coldivider();
            coldivider();
            coldivider5(row,moves,current,previous,movement,reverse);
            idcounter-=10;
    }
            rowdivider();
            if(moves==roll-1)
            {

            }
            else{
            Sleep(600);
             system("cls");
            }
             if ((previous==11)||(previous==12)||(previous==21)||(previous==22)||(previous==31)||(previous==32)||(previous==41)||(previous==42))
             {
                 previous++;
                 x++;
             }

    }
    scanf("%c",&again);
    Sleep(300);
    system("cls");
    previous+=roll-x;
    if(current>51)
    {
        current=current-roll+loop-reverse;
        previous=current;
    }
    if (current==51)
    {
        Sleep(1000);
        printf("YOU HAVE WON THE GAME!!!!!");
        return 0;
    }
    loop=0,reverse=0;
    x=0;
    }


    return 0;
}
