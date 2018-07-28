#include <stdio.h>
#include <stdlib.h>
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
    int row,idcounter=50,rowcounter=1;
    for(row=0;row<5;row++){
            rowdivider();
            coldivider();
            boxdirections(rowcounter,idcounter);
            coldivider();
            rowcounter = boxnumber(rowcounter,idcounter);
            coldivider();
            coldivider();
            coldivider();
            idcounter-=10;
    }
            rowdivider();


    return 0;
}
