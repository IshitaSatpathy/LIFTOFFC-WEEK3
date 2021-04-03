# include<stdio.h>
int fact(int num){
    if(num>=1)
      return num*fact(num-1);
    else
      return 1;
}
int main(){
    int number,result;
    printf("enter the number");
    scanf("%d",&number);
    result=fact(number);
    printf("the factorial of a number using recursion id=%d\n",result);
    return 0;
}