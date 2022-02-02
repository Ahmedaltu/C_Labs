//Write a program that fills 5 x 3 array so that first column contain numbers 1-5, 
//second column 6-10 and third column 11-15.

#include <stdio.h>
#include <string.h>



int main(void)
{
    int matrix[5][3];
    int row;
    int col;
    int i = 1;
    
    
    for(col = 0; col < 3; col++) {
        for(row = 0; row < 5; row++) {
            matrix[row][col] = i;
            
            i++;
            
        }
        
    
    }
    return 0;
}