//
//  display.c
//  board
//
//  Created by app on 2017/11/21.
//  Copyright © 2017年 ning. All rights reserved.
//

#include "display.h"
#define SIZE 20

int random_number(int min, int max){
    return (rand()%(max-min+1)+min);
}

void print_map(char data[100][100], int rows, int columns,int min, int max){
    
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            data[i][j]=random_number(min,max);
            if(data[i][j]==0)
                printf("   ");
            else printf(" %d ",data[i][j]);
            
        }
        printf("\n");
        }
    
}
