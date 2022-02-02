//Write a function that prints ascending sequence of numbers. 
//Function receives two integers as a parameter and prints a sequence of number starting from the lowest number and ending at the largest number. 
//Program must print each number on a separate line and print an empty line at the end of the sequence.


#include <stdio.h>
#include <string.h>

void sequence(int num1, int num2)
{
    int i, max, min;
    
    if (num1 > num2){
        max = num1;
        min = num2;
    }else{
            max = num2;
            min = num1;
    }
    
    for( i = min; i <= max; i++){
      printf("%d\n", i);
    }
    printf("\n");
    return 0; 


}