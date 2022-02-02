/*
Write a function named print_string. Print_string returns number of characters it prints. 
Print_string takes two parameters: a character pointer (the string to print) and a 
pointer to a function that takes a char as parameter and returns no value. Print_string must use the 
function pointer to print the string character by character and it may not modify the string it prints.

*/



int print_string(char *str, void (*func) (char ) ){
    
    int k=0;
    while(*str!='\0'){
        func(*str);
        *str++;
        k++;
    }   
    return k;
}