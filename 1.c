#include<stdio.h>
int main()
{
 int a=0;
 while(1)
 {
  scanf("%d",&a);
  if(a==42) break;
  else 
  	printf("%d\n",a); 
 }
 return 0;
}