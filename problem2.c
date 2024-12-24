#include <stdio.h> 

int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x,&y);

    if(x == 0){
        x = y;
        y = 0;
    }
    else if(y == 0){
        y = x;
        x = 0;
    }
    else if( x > 0 && y > 0){
        x = x * y; 
        y = x / y; 
        x = x / y; 
    }

    printf("After swapping num1 = %d and num2 = %d", x, y);
    return 0;
}