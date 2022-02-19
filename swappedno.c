#include<stdio.h>
int main()
{
printf("The numbers before swapping\n");
int x,y;
printf("x = ",x);
scanf("%d",&x);
printf("y = ",y);
scanf("%d",&y);
x=x*y;
y=x/y;
x=x/y;
printf("The numbers after swapping\n");
printf("x = %d\n",x);
printf("y = %d",y);

return 0;
}
