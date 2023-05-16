#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int fx(int x, int y){
return x * y;

}

int main(int argc, char *argv[]){

int x = atoi(argv[1]); 
int y = atoi(argv[2]);

printf("F(x,y) = x*y = %d\n", fx(x , y));

}
