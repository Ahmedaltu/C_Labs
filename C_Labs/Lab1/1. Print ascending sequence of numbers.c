//Write a function that prints an ascending sequence of numbers. Function receives two parameters:
// first parameter is the first number of the sequence and second parameter is the last number in the sequence. 
//Program must print each number on a separate line and print one empty line at the end of the sequence.

#include <stdio.h>
#include <string.h>

void sequence(int num1, int num2)
{
    int i;
    for( i = num1; i <= num2; i++){
      printf("%d\n", i);
    }
    printf("\n");
    return 0; 

}