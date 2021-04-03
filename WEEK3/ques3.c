# include<stdio.h>
int gcdLcm(int n1 , int n2){
    int dividend,divisor,remainder,gcd,lcm;
    if(n1>n2){
        dividend=n1;
        divisor=n2;
    }
    else{
        dividend=n2;
        divisor=n1;
    }
    remainder=dividend/divisor;
    while(remainder!=0)
    {
        dividend=divisor;
        divisor=remainder;
        remainder=dividend/divisor;
    }
     gcd=divisor;
     lcm=n1*n2/gcd;

     printf("the hcf of two nos. is=%d\n",gcd);
     printf("the lcm of two nos.=%d\n",lcm);
}


    int main()
    {
        int num,num2;
        printf("enter the 2 numbers");
        scanf("%d %d",&num,&num2);
        gcdLcm(num,num2);
    }