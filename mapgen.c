#include "mapgen.h"
#define SIZE 20


int random_number(int min, int max){

    return (rand()%(max-min+1)+min);

}

void generate_map(char map[100][100],int min,int max){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            map[i][j]=random_number(min,max);
            if(map[i][j]==0)
                printf("   ");
            else printf(" %c ",map[i][j]);
        }
    
    
    }



}
