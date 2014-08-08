#include<stdio.h>#include<math.h>
void printpow(int num){
	int lognum=floor(log2(num));
	switch(num){
		case 1:printf("2(0)");return;
		case 2:printf("2");return;
		case 3:printf("2+2(0)");return;
		default:break;
	}
	num-=pow(2,lognum);
	printf("2(");printpow(lognum);printf(")");
	if(num!=0){printf("+");printpow(num);}
}
int main()
{
	int arr[7]={137,1315,73,136,255,1384,16385},i;
	for(i=0;i<7;i++){printf("%d=",arr[i]);printpow(arr[i]);i==6?:printf("\n");}
	return 0;
}
