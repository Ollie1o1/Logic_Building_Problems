#include <stdio.h> 
#include <stdlib.h>

int findSum(int n){
    char str[100];
    int total = 0;
    
    sprintf(str, "%d", n);  // convert int to string

    for(int i = 0; str[i] != '\0'; i++){
         total += str[i] - '0'; // - '0' converts the character to its numeric value
    }
    return total;
}

int main (){
    int number;
    printf("Provide a integer: ");
    scanf("%d", &number);

    printf("The sum of the integers in your number is: %d", findSum(number));
    return 0;
}