#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int fx(int x, int y, int z){
return 2*x + 3*y + 4*z;

}

int main(int argc, char *argv[]){

int x = atoi(argv[1]); 
int y = atoi(argv[2]);
int z = atoi(argv[3]);

printf("F(x,y,z) = 2*x + 3*y + 4*z = %d\n", fx(x , y, z));

}
