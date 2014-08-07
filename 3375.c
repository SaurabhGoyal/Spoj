#include<stdio.h>
#include<stdlib.h>
unsigned long long int cmpfunc (const void * a, const void * b)
{
   return ( *(unsigned long long int*)b - *(unsigned long long int*)a);
}
int main(){
	int t=0,j=0;
	scanf("%d",&t);
	while(t--){
		unsigned long long int numOfFriends,i,sum=0,res;
		long long int reqdStamps;
		scanf("%lld%llu",&reqdStamps,&numOfFriends);
		unsigned long long int stamps[numOfFriends];
		for(i=0;i<numOfFriends;i++){
			scanf("%llu",&stamps[i]);
			sum+=stamps[i];
		}
		printf("Scenario #%d:\n",++j);
		if(sum<reqdStamps){
			printf("impossible\n\n");
			continue;
		}
		qsort(stamps,numOfFriends,sizeof(unsigned long long int),cmpfunc);
		res=0;
		while(reqdStamps>0){
			printf("reqdStamps %llu, stamps %llu\n",reqdStamps,stamps[res]);
			reqdStamps-=stamps[res++];
		}
		printf("%d\n\n",res);
	}
	return 0;
}
