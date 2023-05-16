#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int fx(int n){
return (n* (n + 1)) / 2 ; 

}

int main(int argc, char *argv[]){

int n = atoi(argv[1]); 


printf("F(n) = (n* (n + 1)) / 2 = %d\n", fx(n));

}
