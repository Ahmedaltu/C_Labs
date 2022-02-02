//Write a program that reads positive numbers and calculates the average of read numbers. 
//Program calls readint() to read an integer. Program stops reading if zero or negative number is entered.
// Program must print average value with 4 decimal accuracy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readint(void);

int main(void)
{
    float ave;
int num; 
int count = 0;
int sum = 0;

num = readint();
while( num > 0 ){
    
    count++;
    sum = num + sum;
    num = readint();
}  

ave = (float) sum / count;       
printf("%.4f", ave);


return 0;
}