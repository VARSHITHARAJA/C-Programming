#include<stdio.h>
int main()
{
int a,b;
int sum, product;
int c;
scanf("%d%d",&a,&b);
sum = (a+b);
product = (a*b);
c = abs (product-sum);
printf("%d",c);

return 0;
}
