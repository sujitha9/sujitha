#include<stdio.h>
int main()
{
double n1,n2,n3;
printf("enter three numbers:");
scanf("%1f %1f %1f",&n1,&n2,&n3);
if(n1>=n2)&&(n1>=n3)
  printf("%.2f is the largest number.",n1);
elseif(n2>=n1)&&(n2>=n3)
  printf("%.2f is the largest number.",n2);
else(n3>=n1)&&(n3>=n2)
  printf("%.2f is the largest number.",n3);
return 0;
}
