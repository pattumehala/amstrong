#include<stdio.h>
int main()
{
int multiple=1,num,digit,i;
printf("Enter the number:");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
for(i=1;i<=3;i++)
{
multiple=multiple*digit;
}
num=num/10;
}
printf("%d",digit);
return 0;
}
