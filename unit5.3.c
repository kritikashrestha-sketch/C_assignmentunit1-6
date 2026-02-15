#include <stdio.h>
int main() {
    int guess, num = 7;
printf("Enter your guess:");
scanf("%d", &guess);
     while (guess!=0) {
        
        if (guess == num) {
            printf("Bang On!");
           break;
        } else
            printf("OO sorry try again\n");
            break;
    }
    return 0;
}