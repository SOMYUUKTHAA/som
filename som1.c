#include<stdio.h>
main()
{
int a;
printf("Enter a value");
scanf("%d",&a);
if(a>0)
{
printf("THE ENTERED VALUE IS POSITIVE");
}
elseif(a<0)
{
printf("THE ENTERED VALUE IS NEGATIVE");
}
else
{
printf("THE ENTERED VALUE IS ZERO");
}
}
