/*
CS 410 OS
Prudhvi Balusu
Lab 04
*/


#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void SignalHandler(int signal)
{
 if(signal == SIGFPE) {
        printf("\n\nDivision by 0 exception\n");
        exit(1);
    }
}

int main()
{
    signal(SIGFPE, SignalHandler);
    
    int j;
    int first[5] = {1000, 300, 1020, 907, 50};
    int second[5] = {500, 2, 3, 0, 50};
    
    for (j = 0; j < 5; j++ ) {
      printf("%d divided by %d \t", first[j], second[j] );
      printf("%d\n", first[j]/second[j]);
      sleep(1);
      
   }


    return 0;
}