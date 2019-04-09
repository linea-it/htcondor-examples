#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
*
name: calculapi
argument: <int> number of iteration

version: 1.0
date: 2019-04-09

dependencies: gcc

how to compile and use:
  gcc calculapi.c -o calculapi
  ./calculapi <int>
*  
*/

int main(int argc, char *argv[])
{
int i,N,incirc=0;
double x,y,circrad2;

sscanf(argv[1], "%d", &N); // get iteration number from input
srand(time(NULL));         // seed random number generator

circrad2=1.0*RAND_MAX; 
circrad2*=circrad2;        // Define radius squared 

for(i=0;i<N;i++){
x=1.0*rand(); y=1.0*rand();     // get rand. point and
incirc += (x*x+y*y) < circrad2; // check if inside circle
} 

printf("pi=%.12f\n",4.0*incirc/N); // display probability
return 0;
}
