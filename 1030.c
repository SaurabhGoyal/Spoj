#include<stdio.h>
int main(){
	int num=0;
	scanf("%d",&num);
	while(num--){
		unsigned long long int i=0;
		scanf("%llu",&i);
		printf("%llu\n",192+250*(i-1));
	}
	return 0;
}
