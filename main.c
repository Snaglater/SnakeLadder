#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//Function to show message after user choose to quit (decoration purpose)
void end(){
    printf("\n\n");printline();
    printf("\n");printline2();
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n  |  |            _____________                                  __     __                                                             |  | ");
    printf("\n  |  |           |_____   _____|          ______     __      __ |  |   '  '                                                            |  | ");
    printf("\n  |  |                 |  |  __     __   '   _   '  |   '   |  ||  |  '  '                                                             |  | ");
    printf("\n  |  |                 |  | |  |   |  | |   |_|   | |     ' |  ||  | '  '  _____                                                       |  | ");
    printf("\n  |  |                 |  | |  |___|  | |   ___   | |  |'   '  ||      '  |  __.|-|                                                    |  | ");
    printf("\n  |  |                 |  | |   ___   | |  |   |  | |__|  '____||  |'  '  |  |__                                                       |  | ");
    printf("\n  |  |                 |__| |  |   |  | |__|   |__|             |  | '  ' |___  |                                                      |  | ");
    printf("\n  |  |                      |__|   |__|                         |__|  '__'  _|  |                                                      |  | ");
    printf("\n  |  |                       ______                                        |____|                                                      |  | ");
    printf("\n  |  |                      |  ____|          ___                                                                                      |  | ");
    printf("\n  |  |                      |  |___   _____  |  _ '                                                                                    |  | ");
    printf("\n  |  |                      |   ___| |  _  | | |_| |                                                                                   |  | ");
    printf("\n  |  |                      |  |     | |_| | |  _ '                                                                                    |  | ");
    printf("\n  |  |                      |__|     |_____| | | ' '                                                                                   |  | ");
    printf("\n  |  |                                       |_|  '_'                                                                                  |  | ");
    printf("\n  |  |                                      _____         ___                               _______                                    |  | ");
    printf("\n  |  |                                     |  _  '  _    ' __ '                            | ______|                                   |  | ");
    printf("\n  |  |                                     | |_| | | |  | '__' |  __     __      __    __  | |                                         |  | ");
    printf("\n  |  |                                     |  ___' | |  |      |  ' '   ' ' .'. |  '   | | | |   ____                                  |  | ");
    printf("\n  |  |                                     |  |    | |  | ____ |   ' ' ' '   _  | |' ' | | | |  |__  |                                 |  | ");
    printf("\n  |  |                                     |  |    | |__|_|__|_|___  '  '   | | | | ' '| | | |_____| |                                 |  | ");
    printf("\n  |  |                                     |__|    |_______________|  | |   | | |_|   '__| |_________|                                 |  | ");
    printf("\n  |  |                                                                |_|   |_|                                                        |  | ");
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n");printline2();
    printf("\n");printline();
}

//function to print line (decoration purpose)
void printline2(){
    int dash2;
    for(dash2=0;dash2<139;dash2++){
        if((dash2>=0)&&(dash2<2)||(dash2<=137&&dash2>134)||(dash2>=3&&dash2<6)){
            printf(" ");
        }else if(dash2==2||dash2==138){
            printf("|");
        }else{printf("-");}
    }


}
//Another function to print line (decoration purpose)
void printline(){
    int dash;
    for(dash=0;dash<138;dash++){
        if((dash>=0)&&(dash<3)){
        printf(" ");
        }else{printf("-");}
    }

}

//Function to print the whole board
void printboard (char x[],char y[],char o[]){
    //The number in each box is arranged accordingly to print at correct sequence
    int coloumn,row,boxnumber[]={41,42,43,44,45,46,47,48,49,50,40,39,38,37,36,35,34,33,32,31,21,22,23,24,25,26,27,28,29,30,20,19,18,17,16,15,14,13,12,11,1,2,3,4,5,6,7,8,9,10}
    ,counter_box_number=0,counter_X=0,counter_Y=0,counter_O=0;

    for (row=0;row<5;row++){
    for(coloumn=0;coloumn<10;coloumn++){
    printf(" ------------ ");
    }printf("\n");
    for(coloumn=0;coloumn<10;coloumn++){
    printf("|            |");
    }printf("\n");
    for(coloumn=0;coloumn<10;coloumn++){
    //To print instruction in boxes with special effects
    if (row==0){
        if (counter_box_number==0){printf("|    GT49    |");}
        else if (counter_box_number==7){printf("|    GT 2    |");}
        else {printf("|     %d     |",boxnumber[counter_box_number]);}
        counter_box_number++;
    }else if (row==1){
        if (counter_box_number==10){printf("|    R 10    |");}
        else if (counter_box_number==14){printf("|    GT11    |");}
        else if (counter_box_number==19){printf("|     P2     |");}
        else {printf("|     %d     |",boxnumber[counter_box_number]);}
        counter_box_number++;
    }else if (row==2){
        if (counter_box_number==21){printf("|    GT33    |");}
        else {printf("|     %d     |",boxnumber[counter_box_number]);}
        counter_box_number++;
    }else if (row==3){
        if (counter_box_number==32){printf("|    GT40    |");}
        else {printf("|     %d     |",boxnumber[counter_box_number]);}
        counter_box_number++;
    }else if (row==4){
        if (counter_box_number==41){printf("|     P1     |");}
        else if (counter_box_number==47){printf("|     R3     |");}
        else if (counter_box_number==49){printf("|     %d     |",boxnumber[counter_box_number]);}
        else {printf("|      %d     |",boxnumber[counter_box_number]);}
        counter_box_number++;
    }
    }printf("\n");
    for(coloumn=0;coloumn<10;coloumn++){
    printf("|            |");
    }printf("\n");
    for(coloumn=0;coloumn<10;coloumn++){
    printf("|  %c  %c  %c   |",x[counter_X],y[counter_Y],o[counter_O]);
    counter_O++,counter_X++,counter_Y++;
    }printf("\n");
    for(coloumn=0;coloumn<10;coloumn++){
    printf("|            |");
    }printf("\n");
    for(coloumn=0;coloumn<10;coloumn++){
    printf(" ------------ ");
    }
    printf("\n");
    //To show the meaning of GT, R and P
    }printf("GT : Go to tile\nR : Reverse steps\nP : Pause round\n\n\n");}

//Function to print the first page (decoration purpose), to get to the game mode user want to
int firstpage (){
    int number;
    printf("\n\n");printline();
    printf("\n");printline2();
    printf("\n  |  |                                                                                  ___                         ___                |  | ");
    printf("\n  |  |                                                                                 |   |                       |   |               |  | ");
    printf("\n  |  |                           ____                                                  |   |_______________________|   |               |  | ");
    printf("\n  |  |             _____________|    .|_____|                                          |   |_______________________|   |               |  | ");
    printf("\n  |  |            |  ___________     .|     |                                          |   | Enter 1 for :         |   |               |  | ");
    printf("\n  |  |            |  |           -----                                                 |   |                       |   |               |  | ");
    printf("\n  |  |            |  |                                          __                     |   |     Single Player     |   |               |  | ");
    printf("\n  |  |            |  |_______________  _____     _    ______   |  |  __   _____        |   |_______________________|   |               |  | ");
    printf("\n  |  |            |_______________   | |    '   | |  '      '  |  | '  ' |  ___|       |   |_______________________|   |               |  | ");
    printf("\n  |  |                            |  | |  |' '  | | |   __   | |  |'  '  |  |__        |   | Enter 2 for :         |   |               |  | ");
    printf("\n  |  |                            |  | |  | ' ' | | |  |__|  | |     '   |   __|       |   |                       |   |               |  | ");
    printf("\n  |  |             _______________|  | |  |  ' '  | |   ___  | |  |'  '  |  |__        |   |     Multiplayer       |   |               |  | ");
    printf("\n  |  |            <__________________| |__|   ' __| |__|   |_| |__| '__' |_____|       |   |_______________________|   |               |  | ");
    printf("\n  |  |                           __                                         ____       |   |_______________________|   |               |  | ");
    printf("\n  |  |                          |  |              AND___     ___     ____  |  _ '      |   | Enter 3 to :         |   |               |  | ");
    printf("\n  |  |                          |  |        ____    |  _ '  |  _ '  |  __| | |_| |     |   |                       |   |               |  | ");
    printf("\n  |  |                          |  |       ' ___ '  | | ' ' | | ' ' | |__  |    _'     |   |        Quit           |   |               |  | ");
    printf("\n  |  |                          |  |      |  |_|  | | | | | | | | | |  __| | |' '      |   |_______________________|   |               |  | ");
    printf("\n  |  |                          |  |____  |  ___  | | |_' ' | |_' ' |  |___|_|_'_'___  |   |_______________________|   |               |  | ");
    printf("\n  |  |                          |_______| |__| |__| |____'  |___ '  |________________| |   |                       |   |               |  | ");
    printf("\n  |  |                                                                                 |___|                       |___|               |  | ");
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n  |  |                                                                                                                                 |  | ");
    printf("\n");printline2();
    printf("\n");printline();
    printf("\n\tPlease Enter Your Choice Here : ");
    scanf(" %d",&number);
    return number;}

//Function to determine the location of 'X' chess
void x_move(int *current_x, int *previous_x,char location_of_chess_Y[],int *counter,char location_of_chess_X[],char location_of_chess_O[],int *win,int *pause_x){
    int roll,moved=0,move_left=0;
    time_t t;
    srand((unsigned)time(&t));
    roll=rand()%6;
    roll++;
    //To pause the chess when it stops at special tiles
    if (((*previous_x)==2)&&(((*current_x)==2))&&(*pause_x>=1)){printf("X is trapped, "),roll=0,(*pause_x)-=2;}
    if (((*previous_x)==31)&&(((*current_x)==31))&&(*pause_x>=1)){printf("X is trapped, "),roll=0,(*pause_x)--;}
    printf("X get %d point",roll);
    Sleep(1000);
    //To record the distance the chess has went through
    (*current_x)+=roll;
    system("cls");
        for (;((*previous_x)<(*current_x))||(move_left!=0);(*previous_x)++){
        location_of_chess_X[(*counter)]='X';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
        Sleep(400);
        system("cls");
        location_of_chess_X[(*counter)]=' ';
        //To move the chess to new location when it stops at special tiles
        if (((*previous_x)==17)&&(((*current_x)==18))){printf("X is moved to box 40, \n"),Sleep(1000),(*current_x)=40,(*previous_x)=39,roll=0,location_of_chess_X[(*counter)]=' ',(*counter)=11;}
        if (((*previous_x)==7)&&(((*current_x)==8))){printf("X is forced to reverse 3 steps, \n"),Sleep(1000),(*current_x)-=3,(*previous_x)-=3,roll=0,location_of_chess_X[(*counter)]=' ',(*counter)-=3;}
        if (((*previous_x)==21)&&(((*current_x)==22))){printf("X is moved to box 33, \n"),Sleep(1000),(*current_x)=33,(*previous_x)=32,roll=0,location_of_chess_X[(*counter)]=' ',(*counter)=18;}
        if (((*previous_x)==35)&&(((*current_x)==36))){printf("X is moved to box 11, \n"),Sleep(1000),(*current_x)=11,(*previous_x)=10,roll=0,location_of_chess_X[(*counter)]=' ',(*counter)=49;}
        if (((*previous_x)==39)&&(((*current_x)==40))){printf("X is forced to reverse 10 steps, \n"),Sleep(1000),(*current_x)-=10,(*previous_x)-=10,roll=0,location_of_chess_X[(*counter)]=' ',(*counter)=28;}
        if (((*previous_x)==40)&&(((*current_x)==41))){printf("X is moved to box 49, \n"),Sleep(1000),(*current_x)=49,(*previous_x)=48,roll=0,location_of_chess_X[(*counter)]=' ',(*counter)=7;}
        if (((*previous_x)+1==(*current_x))&&((*counter==8)||(*counter==6))){printf("X is moved to box 2, \n"),Sleep(1000),(*current_x)=2,(*previous_x)=1,roll=0,location_of_chess_X[(*counter)]=' ';
                    if((*counter)==6){(*counter)=40;
                    }else if((*counter)==8){(*counter)=42;}
        }
        if (*pause_x==0){(*pause_x)=2;}
        if ((((((*counter)<=48)&&((*counter)>=40))||(((*counter)<=28)&&((*counter)>=20))||(((*counter)<=8)&&((*counter)>=0)))&&(moved==0))&&(move_left==0)){(*counter)++,moved=1;}
        if ((((((*counter)>=31)&&((*counter)<=39))||(((*counter)>=11)&&((*counter)<=19)))&&(moved==0))&&(move_left==0)){(*counter)--,moved=1;}
        if ((((*counter)==49||(*counter)==39||(*counter)==29||(*counter)==19||(*counter)==30||(*counter)==20||(*counter)==10)&&(moved==0))&&(move_left==0)){(*counter)=(*counter)-10,moved=1;}
        if ((*counter==9)&&((*previous_x)!=((*current_x)-1))){move_left=((*current_x)-(*previous_x));}
        if ((move_left!=0)&&(moved==0)){(*counter)--,moved=1,move_left--;}
        if (move_left==0&&(*counter)==9){system("cls"),printf("X win\n"),Sleep(1500),(*win)=1;}
        moved=0;
        }
        location_of_chess_X[(*counter)]='X';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
}

//Function to determine the location of computer chess
void computermove (int *current_y, int *previous_y,char location_of_chess_Y[],int *counter1,char location_of_chess_X[],char location_of_chess_O[],int *win,int *pause_y){
    int roll,moved=0,move_left=0;
    time_t t;
    srand((unsigned)time(&t));
    roll=rand()%6;
    roll++;
    if (((*previous_y)==2)&&(((*current_y)==2))&&(*pause_y>=1)){printf("Y is trapped, "),roll=0,(*pause_y)-=2;}
    if (((*previous_y)==31)&&(((*current_y)==31))&&(*pause_y>=1)){printf("Y is trapped, "),roll=0,(*pause_y)--;}
    printf("Computer get %d point",roll);
    Sleep(1000);
    (*current_y)+=roll;
    system("cls");
        for (;(*previous_y)<(*current_y);(*previous_y)++){
        location_of_chess_Y[(*counter1)]='Y';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
        Sleep(400);
        system("cls");
        location_of_chess_Y[(*counter1)]=' ';
        if (((*previous_y)==17)&&(((*current_y)==18))){printf("Y is moved to box 40, \n"),Sleep(1000),(*current_y)=40,(*previous_y)=39,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=11;}
        if (((*previous_y)==7)&&(((*current_y)==8))){printf("Y is forced to reverse 3 steps, \n"),Sleep(1000),(*current_y)-=3,(*previous_y)-=3,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)-=3;}
        if (((*previous_y)==21)&&(((*current_y)==22))){printf("Y is moved to box 33, \n"),Sleep(1000),(*current_y)=33,(*previous_y)=32,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=18;}
        if (((*previous_y)==35)&&(((*current_y)==36))){printf("Y is moved to box 11, \n"),Sleep(1000),(*current_y)=11,(*previous_y)=10,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=49;}
        if (((*previous_y)==39)&&(((*current_y)==40))){printf("Y is forced to reverse 10 steps, \n"),Sleep(1000),(*current_y)-=10,(*previous_y)-=10,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=28;}
        if (((*previous_y)==40)&&(((*current_y)==41))){printf("Y is moved to box 49, \n"),Sleep(1000),(*current_y)=49,(*previous_y)=48,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=7;}
        if (((*previous_y)+1==(*current_y))&&((*counter1==8)||(*counter1==6))){printf("Y is moved to box 2, \n"),Sleep(1000),(*current_y)=2,(*previous_y)=1,roll=0,location_of_chess_Y[(*counter1)]=' ';
                    if((*counter1)==6){(*counter1)=40;
                    }else if((*counter1)==8){(*counter1)=42;}
        }
        if (*pause_y==0){(*pause_y)=2;}
        if ((((((*counter1)<=48)&&((*counter1)>=40))||(((*counter1)<=28)&&((*counter1)>=20))||(((*counter1)<=8)&&((*counter1)>=0)))&&(moved==0))&&(move_left==0)){(*counter1)++,moved=1;}
        if ((((((*counter1)>=31)&&((*counter1)<=39))||(((*counter1)>=11)&&((*counter1)<=19)))&&(moved==0))&&(move_left==0)){(*counter1)--,moved=1;}
        if ((((*counter1)==49||(*counter1)==39||(*counter1)==29||(*counter1)==19||(*counter1)==30||(*counter1)==20||(*counter1)==10)&&(moved==0))&&(move_left==0)){(*counter1)=(*counter1)-10,moved=1;}
        if ((*counter1==9)&&((*previous_y)!=((*current_y)-1))){move_left=((*current_y)-(*previous_y));}
        if ((move_left!=0)&&(moved==0)){(*counter1)--,moved=1,move_left--;}
        if (move_left==0&&(*counter1)==9){system("cls"),printf("Computer win\n"),Sleep(1500),(*win)=1;}
        moved=0;
        }
        location_of_chess_Y[(*counter1)]='Y';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
}
//Function to determine the location of 'Y' chess
void y_move (int *current_y, int *previous_y,char location_of_chess_Y[],int *counter1,char location_of_chess_X[],char location_of_chess_O[],int *win,int *pause_y){
    int roll,moved=0,move_left=0;
    time_t t;
    srand((unsigned)time(&t));
    roll=rand()%6;
    roll++;
    if (((*previous_y)==2)&&(((*current_y)==2))&&(*pause_y>=1)){printf("Y is trapped, "),roll=0,(*pause_y)-=2;}
    if (((*previous_y)==31)&&(((*current_y)==31))&&(*pause_y>=1)){printf("Y is trapped, "),roll=0,(*pause_y)--;}
    printf("Y get %d point",roll);
    Sleep(1000);
    (*current_y)+=roll;
    system("cls");
        for (;(*previous_y)<(*current_y);(*previous_y)++){
        location_of_chess_Y[(*counter1)]='Y';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
        Sleep(400);
        system("cls");
        location_of_chess_Y[(*counter1)]=' ';
        if (((*previous_y)==17)&&(((*current_y)==18))){printf("Y is moved to box 40, \n"),Sleep(1000),(*current_y)=40,(*previous_y)=39,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=11;}
        if (((*previous_y)==7)&&(((*current_y)==8))){printf("Y is forced to reverse 3 steps, \n"),Sleep(1000),(*current_y)-=3,(*previous_y)-=3,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)-=3;}
        if (((*previous_y)==21)&&(((*current_y)==22))){printf("Y is moved to box 33, \n"),Sleep(1000),(*current_y)=33,(*previous_y)=32,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=18;}
        if (((*previous_y)==35)&&(((*current_y)==36))){printf("Y is moved to box 11, \n"),Sleep(1000),(*current_y)=11,(*previous_y)=10,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=49;}
        if (((*previous_y)==39)&&(((*current_y)==40))){printf("Y is forced to reverse 10 steps, \n"),Sleep(1000),(*current_y)-=10,(*previous_y)-=10,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=28;}
        if (((*previous_y)==40)&&(((*current_y)==41))){printf("Y is moved to box 49, \n"),Sleep(1000),(*current_y)=49,(*previous_y)=48,roll=0,location_of_chess_Y[(*counter1)]=' ',(*counter1)=7;}
        if (((*previous_y)+1==(*current_y))&&((*counter1==8)||(*counter1==6))){printf("Y is moved to box 2, \n"),Sleep(1000),(*current_y)=2,(*previous_y)=1,roll=0,location_of_chess_Y[(*counter1)]=' ';
                    if((*counter1)==6){(*counter1)=40;
                    }else if((*counter1)==8){(*counter1)=42;}
        }
        if (*pause_y==0){(*pause_y)=2;}
        if ((((((*counter1)<=48)&&((*counter1)>=40))||(((*counter1)<=28)&&((*counter1)>=20))||(((*counter1)<=8)&&((*counter1)>=0)))&&(moved==0))&&(move_left==0)){(*counter1)++,moved=1;}
        if ((((((*counter1)>=31)&&((*counter1)<=39))||(((*counter1)>=11)&&((*counter1)<=19)))&&(moved==0))&&(move_left==0)){(*counter1)--,moved=1;}
        if ((((*counter1)==49||(*counter1)==39||(*counter1)==29||(*counter1)==19||(*counter1)==30||(*counter1)==20||(*counter1)==10)&&(moved==0))&&(move_left==0)){(*counter1)=(*counter1)-10,moved=1;}
        if ((*counter1==9)&&((*previous_y)!=((*current_y)-1))){move_left=((*current_y)-(*previous_y));}
        if ((move_left!=0)&&(moved==0)){(*counter1)--,moved=1,move_left--;}
        if (move_left==0&&(*counter1)==9){system("cls"),printf("Y win\n"),Sleep(1500),(*win)=1;}
        moved=0;
        }
        location_of_chess_Y[(*counter1)]='Y';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
}
//Function to determine the location of 'O' chess
void o_move (int *current_o, int *previous_o,char location_of_chess_Y[],int *counter2,char location_of_chess_X[],char location_of_chess_O[],int *win,int *pause_o){
    int roll,moved=0,move_left=0;
    time_t t;
    srand((unsigned)time(&t));
    roll=rand()%6;
    roll++;
    if (((*previous_o)==2)&&(((*current_o)==2))&&(*pause_o>=1)){printf("O is trapped, "),roll=0,(*pause_o)-=2;}
    if (((*previous_o)==31)&&(((*current_o)==31))&&(*pause_o>=1)){printf("O is trapped, "),roll=0,(*pause_o)--;}
    printf("O get %d point",roll);
    Sleep(1000);
    (*current_o)+=roll;
    system("cls");
        for (;(*previous_o)<(*current_o);(*previous_o)++){
        location_of_chess_O[(*counter2)]='O';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
        Sleep(400);
        system("cls");
        location_of_chess_O[(*counter2)]=' ';
        if (((*previous_o)==17)&&(((*current_o)==18))){printf("O is moved to box 40, \n"),Sleep(1000),(*current_o)=40,(*previous_o)=39,roll=0,location_of_chess_O[(*counter2)]=' ',(*counter2)=11;}
        if (((*previous_o)==7)&&(((*current_o)==8))){printf("O is forced to reverse 3 steps, \n"),Sleep(1000),(*current_o)-=3,(*previous_o)-=3,roll=0,location_of_chess_O[(*counter2)]=' ',(*counter2)-=3;}
        if (((*previous_o)==21)&&(((*current_o)==22))){printf("O is moved to box 33, \n"),Sleep(1000),(*current_o)=33,(*previous_o)=32,roll=0,location_of_chess_O[(*counter2)]=' ',(*counter2)=18;}
        if (((*previous_o)==35)&&(((*current_o)==36))){printf("O is moved to box 11, \n"),Sleep(1000),(*current_o)=11,(*previous_o)=10,roll=0,location_of_chess_O[(*counter2)]=' ',(*counter2)=49;}
        if (((*previous_o)==39)&&(((*current_o)==40))){printf("O is forced to reverse 10 steps, \n"),Sleep(1000),(*current_o)-=10,(*previous_o)-=10,roll=0,location_of_chess_O[(*counter2)]=' ',(*counter2)=28;}
        if (((*previous_o)==40)&&(((*current_o)==41))){printf("O is moved to box 49, \n"),Sleep(1000),(*current_o)=49,(*previous_o)=48,roll=0,location_of_chess_O[(*counter2)]=' ',(*counter2)=7;}
        if (((*previous_o)+1==(*current_o))&&((*counter2==8)||(*counter2==6))){printf("O is moved to box 2, \n"),Sleep(1000),(*current_o)=2,(*previous_o)=1,roll=0,location_of_chess_O[(*counter2)]=' ';
                    if((*counter2)==6){(*counter2)=40;
                    }else if((*counter2)==8){(*counter2)=42;}
        }
        if (*pause_o==0){(*pause_o)=2;}
        if ((((((*counter2)<=48)&&((*counter2)>=40))||(((*counter2)<=28)&&((*counter2)>=20))||(((*counter2)<=8)&&((*counter2)>=0)))&&(moved==0))&&(move_left==0)){(*counter2)++,moved=1;}
        if ((((((*counter2)>=31)&&((*counter2)<=39))||(((*counter2)>=11)&&((*counter2)<=19)))&&(moved==0))&&(move_left==0)){(*counter2)--,moved=1;}
        if ((((*counter2)==49||(*counter2)==39||(*counter2)==29||(*counter2)==19||(*counter2)==30||(*counter2)==20||(*counter2)==10)&&(moved==0))&&(move_left==0)){(*counter2)=(*counter2)-10,moved=1;}
        if ((*counter2==9)&&((*previous_o)!=((*current_o)-1))){move_left=((*current_o)-(*previous_o));}
        if ((move_left!=0)&&(moved==0)){(*counter2)--,moved=1,move_left--;}
        if (move_left==0&&(*counter2)==9){system("cls"),printf("O win\n"),Sleep(1500),(*win)=1;}
        moved=0;
        }
        location_of_chess_O[(*counter2)]='O';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
}

int main()
{
    char location_of_chess_X[50]={},location_of_chess_Y[50]={},location_of_chess_O[50]={},again='\n';
    int userchoice=1,sequence,roll,current_x=1,previous_x=1,current_y=1,previous_y=1,current_o=1,previous_o=1,counter=40,counter1=40,counter2=40,moved=0,win=0
        ,pause_x=2,pause_y=2,pause_o=2,no_player=0;
    time_t t;
    //Continue the game unless user input is 3 which is to leave the game
    while (userchoice==1||userchoice==2){
    userchoice=firstpage();
    if (userchoice==1){
        system("cls");
        location_of_chess_X[40]='X',location_of_chess_Y[40]='Y',location_of_chess_O[40]='O';
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
        printf("You will be playing with the computer");
        printf("\nPress 1 to start first, press 2 to let computer start first :");
        scanf(" %d",&sequence);
        scanf("%c",&again);
        if (sequence==1){
            system("cls");
            printf("You will start first");
            Sleep(1000);
            system("cls");
            location_of_chess_X[40]='X',location_of_chess_Y[40]='Y',location_of_chess_O[40]='O';
            printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
            while((again=='\n')&&(win==0)){
            printf("Press enter to roll dice \n");
            scanf("%c",&again);
            x_move(&current_x,&previous_x,location_of_chess_Y,&counter,location_of_chess_X,location_of_chess_O,&win,&pause_x);
            //computermove(&current_y,&previous_y,location_of_chess_Y,&counter1,location_of_chess_X,location_of_chess_O,&win,&pause_y);
            }if (win==1){current_x=0,previous_x=0,current_y=0,previous_y=0,current_o=0,previous_o=0,
                        location_of_chess_O[counter2]='\0',location_of_chess_Y[counter1]='\0',location_of_chess_X[counter]='\0',
                        counter1=40,counter=40,counter2=40,win=0;}
            }
        else if(sequence==2){
            system("cls");
            printf("Second to start");
            Sleep(1000);
            system("cls");
            location_of_chess_X[40]='X',location_of_chess_Y[40]='Y',location_of_chess_O[40]='O';
            printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
            while((again=='\n')&&(win==0)){
            computermove(&current_y,&previous_y,location_of_chess_Y,&counter1,location_of_chess_X,location_of_chess_O,&win,&pause_y);
            printf("Press enter to roll dice \n");
            scanf("%c",&again);
            x_move(&current_x,&previous_x,location_of_chess_Y,&counter,location_of_chess_X,location_of_chess_O,&win,&pause_x);
            }if (win==1){current_x=0,previous_x=0,current_y=0,previous_y=0,current_o=0,previous_o=0,
                        location_of_chess_O[counter2]='\0',location_of_chess_Y[counter1]='\0',location_of_chess_X[counter]='\0',
                        counter1=40,counter=40,counter2=40,win=0;}
            }else {printf("Error input");}
    }else if (userchoice==2){
        system("cls");
        printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
        printf("How many players ? (MAX 3)(LEAST 2) : ");
        scanf(" %d",&no_player);
        scanf("%c",&again);
        if (no_player==2){
            system("cls");
            printf("2 players");
            system("cls");
            location_of_chess_X[40]='X',location_of_chess_Y[40]='Y',location_of_chess_O[40]='O';
            printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
            while((again=='\n')&&(win==0)){
            printf("X's turn - Press enter to roll dice \n");
            scanf("%c",&again);
            x_move(&current_x,&previous_x,location_of_chess_Y,&counter,location_of_chess_X,location_of_chess_O,&win,&pause_x);
            printf("Y's turn - Press enter to roll dice \n");
            scanf("%c",&again);
            y_move(&current_y,&previous_y,location_of_chess_Y,&counter1,location_of_chess_X,location_of_chess_O,&win,&pause_y);
            }if (win==1){current_x=0,previous_x=0,current_y=0,previous_y=0,current_o=0,previous_o=0,
                        location_of_chess_O[counter2]='\0',location_of_chess_Y[counter1]='\0',location_of_chess_X[counter]='\0',
                        counter1=40,counter=40,counter2=40,win=0;}
        }else if (no_player==3){
            system("cls");
            printf("3 players");
            system("cls");
            location_of_chess_X[40]='X',location_of_chess_Y[40]='Y',location_of_chess_O[40]='O';
            printboard(location_of_chess_X,location_of_chess_Y,location_of_chess_O);
            while((again=='\n')&&(win==0)){
            printf("X's turn - Press enter to roll dice \n");
            scanf("%c",&again);
            x_move(&current_x,&previous_x,location_of_chess_Y,&counter,location_of_chess_X,location_of_chess_O,&win,&pause_x);
            printf("Y's turn - Press enter to roll dice \n");
            scanf("%c",&again);
            y_move(&current_y,&previous_y,location_of_chess_Y,&counter1,location_of_chess_X,location_of_chess_O,&win,&pause_y);
            printf("O's turn - Press enter to roll dice \n");
            scanf("%c",&again);
            o_move(&current_o,&previous_o,location_of_chess_Y,&counter2,location_of_chess_X,location_of_chess_O,&win,&pause_o);
            }if (win==1){current_x=0,previous_x=0,current_y=0,previous_y=0,current_o=0,previous_o=0,
                        location_of_chess_O[counter2]='\0',location_of_chess_Y[counter1]='\0',location_of_chess_X[counter]='\0',
                        counter1=40,counter=40,counter2=40,win=0;}
        }else {printf("Input error");}
    }system("cls");
    }end();
    return 0;
}
