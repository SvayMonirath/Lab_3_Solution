#include<stdio.h> 
int main(void) {

    //declare variables
    int start = 8, end = 1000;

    //use for loop to print the outcome 
    for(int i = start; i<=end; i++) {
        // Check if the number is odd and not 11, 17, or 21
        if(i % 2 != 0 && (i != 11 && i != 17 && i != 21)) {
            printf(" %d", i);
            if(i < end) {
                printf(",");
            }
        }
    }

    return 0; //code success
}
