// 7. Write a C program to add all the numbers input by a user until the user inputs
// zero. Notice that a number is input one by one until user inputs zero, then
// display the summation and stop the program.

#include<stdio.h>
int main(void) {
    float sum=0, num;
    do {
        printf("Enter a number: ");
        scanf("%f", &num);
        sum +=num;

        printf("\nResult: %.2f\n", sum);
    } while(num!=0); //keep adding the number until user input 0

    printf("Final Summation: %.2f\n", sum); //last output after input 0
    return 0; //code success
}