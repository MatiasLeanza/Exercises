#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int RandomSeed(){

srand(time(NULL));
int RandomNumber = rand(); 
printf("%d\n", RandomNumber);

}


int main(){

RandomSeed();
return 0;

}

