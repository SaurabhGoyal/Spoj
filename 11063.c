#include<stdio.h>
int main(){
	int t=0;
	scanf("%d",&t);
	while(t--){
		unsigned long long int t3,t3last,sum,numOfTerms,diff,t1,i;
		scanf("%llu%llu%llu",&t3,&t3last,&sum);
		numOfTerms=(2*sum)/(t3+t3last);
		printf("%d\n",numOfTerms);
		diff=(t3last-t3)/(numOfTerms-5);
		t1=t3-(2*diff);
		for(i=0;i<numOfTerms;i++){
			printf("%llu ",(t1+(i*diff)));
		}
		printf("\n");
	}
	return 0;
}
