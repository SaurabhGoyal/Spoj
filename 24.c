#include<stdio.h>
unsigned long long int fact(int n){
	if(n==0||n==1)
	 return 1;
	else
	 return n*fact(n-1); 
}
int main(){
 int n=0,i;
 scanf("%d",&n);
 printf("\n");
 int a[100]={0};
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 printf("\n");
 for(i=0;i<n;i++){
 	printf("%30llu\n",fact(a[i]));
 }
 return 0;
}
