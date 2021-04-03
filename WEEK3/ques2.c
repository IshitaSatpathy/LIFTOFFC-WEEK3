# include<stdio.h>
int fact(int num){
    int i,f=1;
    for(int i=1;i<=num;i++)
    {
        f=f*i;
    }
}
int main()
{
    int number,factorial;
    printf("enter the number");
    scanf("%d",&number);
    factorial=fact(number);
    printf("the factorial of a number=%d\n",factorial);
} 