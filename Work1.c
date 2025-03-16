// 1. Write a C program to ask for an input character from a user and tell if that
// character is a number, an uppercase letter, or a lowercase letter. If none of the
// above, display a message “That is not a number nor a letter”. Hint: Convert a
// given character to a number then use ASCII code to check. Ex.: ASCII code from
// 48 to 57, it is a number (0-9) (See Table 1 for ASCII Code).

#include<stdio.h>
int main(void) {
    //declare variables
    char input;
    
    //prompt uesr for char
    printf("Enter a character: ");
    scanf("%c", &input);

    if(input>=48 && input<=57) {
        printf("This is a number\n");
    } else if(input >= 97 && input <= 122) {
        printf("This is a lowercase character\n");
    } else if ( input >= 65 && input <= 90) {
        printf("This is a uppercase character\n");
    } else {
        printf("This isn't a letter or a number\n");
    }

    return 0;
}