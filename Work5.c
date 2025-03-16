// 5. Show all integer divisible by 3 between 1 to 100 except 30, 60, and 90.

#include<stdio.h>
int main(void) {
    //declare variables
    int start = 1, end =100;

    //using for loop to print outcome
    for(int i = start; i<=end; i++) {

        //print unless divisible by 3 and not 30,60,90
        if(i%3==0 && (i!=30 && i!=60 && i!=90)) {
            printf(" %d", i);

            if(i<end-1) {
                printf(",");
            }
        }
    }

    return 0; //code success
}