#include<stdio.h>

    int squareFunc(int num){
        int square;
        square=num*num;
        printf("the square of the number is=%d\n",square);
        return 0;
    }
int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    squareFunc(number);
    return 0;
}