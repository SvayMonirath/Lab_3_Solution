// 2. Display all numbers from 99 to 1.

#include<stdio.h>
int main(void) {
    //declare variables
    int num = 99;
    
    //write number from target all the way down to 1(for loop)
    for(int i= num; i>0; i--) {
        printf(" %d", i);
        if(i>1) {
            printf(",");
        }
    }

    //code run successfully
    return 0;
}