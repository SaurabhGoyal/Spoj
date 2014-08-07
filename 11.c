#include<stdio.h>
long long fact(int n){
	if(n==0||n==1)
	 return 1;
	else
	 return n*fact(n-1); 
}
int expo(int a,int b){
	int m=1,i=0;
	while(i++<b){
		m*=a;
	}
	return m;
}
int countZeroesInFactorial(long n){
	int noz=0,num=0,i=1;
	while(num<n){
		num=expo(5,i++);
		noz+=n/num;
	}
	return noz;
}
int main(){
 int n=0,num=0;
 scanf("%d",&num);
 while(num--){
  scanf("%d",&n);
  printf("%d\n",countZeroesInFactorial(n));
 }
 return 0;
}
