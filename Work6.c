// 6. Read n input numbers from a user and then find a minimum and maximum
// value. Finally, display the minimum and maximum number.

#include<stdio.h>
int main(void) {
    
    const int size=5;
    int num[size] = {9,-2,33,79,53}; //initialize array

    int max = num[0], min = num[0]; //assume max and min value

    for(int i=0; i<size; i++) { //using for loop shfiting through array finding max and min
        if(num[i]< min) {
            min = num[i];
        }

        if(num[i]> max) {
            max = num[i];
        }

    }

    printf("MAX: %d\nMIN: %d", max,min); //print output 
    return 0; //code success 
}