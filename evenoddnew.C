#include<stdio.h>
int main()
{
int a;
printf("Enter the number:\n",a);
scnaf("%d",&a);
if(a%2==0)
{
printf("The number %d even\n",a);
}
else
printf("The number %d odd\n",a);
return 0;
}
