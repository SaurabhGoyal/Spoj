#include<stdio.h>
int main(){
	int num=1;
	while(1){
		scanf("%d",&num);
		if(num==0)
		 break;
		int i=0,numOfSquares=0;
		for(i=1;i<=num;i++){
			numOfSquares+=(num-i+1)*(num-i+1);
		}
		printf("%d\n",numOfSquares);
	}
	return 0;
}
