#include<stdio.h>
#include<math.h>
int main(){
	unsigned long long int num;
	long double lognum,exp;
	scanf("%llu",&num);
	lognum=log2l(num);
	exp=lognum/log2l(2);
	if(ceill(exp)==exp)
		printf("TAK\n");
	else
		printf("NIE\n");
	return 0;
}
