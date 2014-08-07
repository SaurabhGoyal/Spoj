#include<stdio.h>
int main(){
	int num=0;
	scanf("%d",&num);
	while(num--){
		unsigned long long int numOfChildren=0,candies=0,i=0;
		scanf("%llu",&numOfChildren);
		i=numOfChildren;
		while(i--){
			unsigned long long int a=0;
			scanf("%llu",&a);
			candies=(candies+a)%numOfChildren;
		}
		if(candies==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
