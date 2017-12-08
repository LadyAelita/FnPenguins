
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "display.h"
#define SIZE 20

void map_big();
int main()
{
    char data[100][100];
    
    int rows = 20;
    int columns = 20;
    int min=0,max=3;    /*
                            0 represent water ; 
                            1 represent one fish;
                            2 represent two fish
                            3 represent three fish
                         
                         */
  
    
    print_map(data, rows, columns,min,max);
    
   
    return 0;
}

