# SnakeLadder
Project

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

int main()
{
    int row,idcounter=50,rowcounter=1;
    for(row=0;row<5;row++){
            rowdivider();
            coldivider();
            coldivider();
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
