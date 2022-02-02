/*
Write a program that reads input lines using read_line-function. 
read_line returns true if input was read and false when input ends. 
Each line contains two numbers and a command "add", "sub", "mul", or "div". 
Program reads lines one by one and checks that input is valid (first 2 integers then
 a string that is a valid command). If line is not properly formatted the program prints the line and displays an error message. 
 For each properly formatted line the program prints out a calculation which is determined by the command.

*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/* call this function to read input */
bool read_line(char *line, size_t size);

int main() {

    size_t size = 20;

    char line[size];

    char str[size];

    int input1,input2;

    while (read_line(line,size)) {

       int d = sscanf(line, "%d %d %s", &input1,&input2, str);

 

       if (d == 3) {

 

           if((strcmp(str,"add"))==0){

                printf("%d + %d = %d\n", input1,input2,input1+input2);

           }

           else if((strcmp(str,"sub"))==0){

                printf("%d - %d = %d\n", input1,input2,input1-input2);

           }else if((strcmp(str,"mul"))==0){

                printf("%d * %d = %d\n", input1,input2,input1*input2);

           }else if((strcmp(str,"div"))==0){

               printf("%d / %d = %d\n", input1,input2,input1/input2);

           }

           else{

                printf("Input: \"%s\" Unknown command: %s\n", line,str);

          

           }

       }

       else if(d==0){

            printf("Input: \"%s\" Invalid argument in position: %d\n", line,1);

 

       }

       else if(d==1){

           printf("Input: \"%s\" Invalid argument in position: %d\n", line,2);

       }

      

    }

    return 0;

}