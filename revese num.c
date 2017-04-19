#include<stdio.h>
main()
{
int a,i,rem=0;
printf("Enter the number:");
scanf("%d",&a);
while(a!=0)
{
i=a%10;
rem=rem*10+i;
a=a/10;
}
printf("Reversed number:%d",rem);
}
