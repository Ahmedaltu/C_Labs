//Write a function that receives string as a parameter.
// Function finds all occurrences of letter 't' and replaces them with '*'. Function returns no value.

#include <stdio.h>
#include <string.h>

void replace(char *str)
{
    int lower = 0;
  
    int i = 0;
   
    while (str[i] != 0) {
        if (str[i] == 't' ){
           str[i] = '*';
        }else{
           lower++;
        }
        i++;
    }
    
    return str;

}


int main(void)
{
char test1[] = "Two teas to thirtytwo";
char test2[] = "this is a t-test";
char test3[] = "where have all the flowers gone there's not a single one left here";

replace(test1);
replace(test2);
replace(test3);

printf("%s\n", test1);
printf("%s\n", test2);
printf("%s\n", test3);


return 0;
}