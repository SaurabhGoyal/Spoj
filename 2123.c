#include<stdio.h>
int main(){
	int numOfPackets=0;
	while(numOfPackets!=-1){
		scanf("%d",&numOfPackets);
		if(numOfPackets==-1)
			return 0;
		int i=0,candies[10000],sumOfCandies=0;
		for(i=0;i<numOfPackets;i++){
			scanf("%d",&candies[i]);
			sumOfCandies+=candies[i];
		}
		int rem=sumOfCandies%numOfPackets;
		if(rem!=0){
			printf("-1\n");
			continue;
		}
		int avg=sumOfCandies/numOfPackets;
		int numOfMoves=0;
		for(i=0;i<numOfPackets;i++){
			if(candies[i]>avg)
				numOfMoves+=candies[i]-avg;
		}
		printf("%d\n",numOfMoves);	
	}
	return 0;
}
