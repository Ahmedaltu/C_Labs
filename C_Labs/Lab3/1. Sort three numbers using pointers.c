/*
Write a function that takes three integer pointers as parameters. T
he function sorts the three numbers in ascending order.

The prototype of the function is:

void sort3(int *a, int *b, int *c);

For example if we have following:

int n1 = 5;

int n2 = 3;

int n3 = 9;

sort3(&n1, &n2, &n3);

printf("%d, %d, %d", n1, n2, n3);

The program prints: 3, 5, 9


*/


void sort3(int *a, int *b, int *c){
    int max, mid, min;
    int n1, n2, n3;
    
   if ( *a < *b && *b < *c){
       //printf("%d %d %d", &a, &b, &c);
       min = *a ; mid = *b; max = *c;
       //*a = min; *b = mid; *c = max;
   }else if ( *a < *c && *c < *b){
       //printf("%d %d %d", &a, &c, &b);
       min = *a ; mid = *c; max = *b;
       *a = min; *b = mid; *c = max;
   }else if ( *b < *a && *a < *c){
       //printf("%d %d %d", &b, &a, &c);
       min = *b ; mid = *a; max = *c;
       *a = min; *b = mid; *c = max;
       
   }else if ( *b < *c && *c < *a){
    
       min = *b ; mid = *c; max = *a;
       *a = min; *b = mid; *c = max;
       
   }else if ( *c < *a && *a < *b){
 
       min = *c ; mid = *a; max = *b;
       *a = min; *b = mid; *c = max;
       
   }else if ( *c < *b && *b < *a){
      
       min = *c ; mid = *b; max = *a;
       *a = min; *b = mid; *c = max;
       
   }
       
       
    
}