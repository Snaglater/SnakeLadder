#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void printline(){
    int dash;
    for(dash=0;dash<138;dash++){
        if((dash>=0)&&(dash<3)){
        printf(" ");
        }else{printf("-");}
    }

}
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
void singleplayer(){

    printf("HI");


}
void multiplayer(){


    printf("HI2");





}
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
int main()
{
    char number;
    do{
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
    printf("\n  |  |                          |  |              AND___     ___     ____  |  _ '      |   | Enter 3 for :         |   |               |  | ");
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
    scanf("%c",&number);


    switch(number){

    case('1'): system("cls");singleplayer();break;
    case('2'): system("cls");multiplayer();break;
    case('3'): system("cls");end();break;
    default: printf("\n\tInvalid input please try again !!!! ");Sleep(500);system("cls");break;
    }
   }while((number!='1')&&(number!='2')&&(number!='3'));


    return 0;
}

