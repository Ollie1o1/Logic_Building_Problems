#include <stdio.h>

int findSum (int n){
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
    }
    return total;
}

int main (){
    int number;
    printf("Provide a number: ");
    scanf("%d", &number);
    printf("The sum of the first natural numbers before and equal to your number is: %d", findSum(number));
    return 0;
}