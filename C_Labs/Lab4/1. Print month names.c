/*
Write a function that takes two parameters: month number and language. The function returns a 
const char pointer to the name of the month in given language. 
If an invalid value is given as a parameter the function returns a pointer to "Error".

Write a function that takes one parameter: language and returns a const char pointer to 
the name of the language. If an unknown language is given function returns a pointer to "Error".
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


typedef enum { English, Italian, Spanish } language;
const char *month(int number, language lang);
const char *lang2str(language lang);


const char *month(int number, language lang)
{
    const char *eng[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char *ita[] = {"Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"};
    const char *spa[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    const char *error = {"Error"};
   
    if (lang >= 0 && lang <= 2 && number >= 1 && number <= 12)
    {
        switch (lang)
        {
            case English:
            return eng[number - 1];
            break;
           
            case Italian:
            return ita[number - 1];
            break;
           
             case Spanish:
            return spa[number - 1];
            break;
        }
    }
    else return error;
}
const char *lang2str(language lang) {
    const char *x[] = { "English",  "Italian", "Spanish" };
    const char *error = { "Error" };

    if(lang >= 0 && lang <= 2){
        switch(lang) {
            case English:
            return x[lang];
            break;
            case Italian:
            return x[lang];
            break;
            case Spanish:
            return x[lang];
            break;
        }
    }
    else return error;
}