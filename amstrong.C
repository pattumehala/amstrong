#include<stdio.h>
int main()
{
int multiple=0,num,n,digit,i;
printf("Enter the number:");
scanf("%d",&num);
  n=num;
while(n!=0)
{
digit=n%10;
multiple=multiple+(digit*digit*digit);
n=n/10;
}
if(multiple==num)
{
  printf("yes");
}
  else
  {
    printf("no");
  }
return 0;
}
