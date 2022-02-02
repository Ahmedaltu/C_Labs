//Write a function that counts number of upper case letters in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(char *str)
{
    int upper = 0;
    int lower = 0;
    int i = 0;
    
    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z'){
           upper++;
        }else{
           lower++;
        }
        i++;
    }
    
    return upper;

}


int main(void)
{
char test1[] = "A Quick  BROwn fox jumps over THE laZY DOGG";
char test2[] = "no upper case letter in this sentence";
char test3[] = "WHY ARE YOU SHOUTING IN THE INTERNET";

printf("%d\n", count(test1));
printf("%d\n", count(test2));
printf("%d\n", count(test3));
return 0;
}