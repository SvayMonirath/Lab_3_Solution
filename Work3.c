// 3. Display all numbers from 1 to 100 except the number 50.

#include<stdio.h>
int main(void) {

    //declare variables
    int num = 100, avoid=50;
    
    //write number from target all the way down to 1(for loop)
    for(int i= 1; i<=num; i++) {
        if(i<=num && i!=avoid) { //print all number except the avoid
            printf(" %d", i);
            
            if(i<num && i!=avoid) { //print ','
            printf(",");
            
            }
        }

        
        
    }

    //code run successfully
    return 0;
}