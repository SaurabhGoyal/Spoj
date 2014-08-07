#include<stdio.h>
int reverse(int);
int expo(int,int);
int main()
{
 	int a=0,b=0,num=0;
 	scanf("%d",&num);
 	while(num--){
 		scanf("%d\t%d",&a,&b);
 		printf("%d\n",reverse(reverse(a)+reverse(b)));
 }
 return 0;
}
int expo(int a,int b){
	int m=1,i=0;
	while(i++<b){
		m*=a;
	}
	return m;
}
int reverse(int n){
 int reversedNum=0,a[7]={0},nod=0,i=1;
 while(1)
 {
 	 if(n/10==0){
 	  a[i]=n;
 	  nod++;
	  break; 	
 	 }
     else{
	  a[i]=n%10;
  	  nod++;
	  n/=10;
	 }
	 i++;
 }
 int power=nod-1;
 for(i=1;i<=nod;i++,power--)
	 reversedNum+=(a[i]*expo(10,power));
 return reversedNum;	
}
int omitZero(int n){
 while(n/10!=0){
 	if(n%10==0)
     n/=10;
    else
	 break; 
 }	
 return n;
}
