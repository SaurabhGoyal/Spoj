#include <stdio.h>
int main()
{
	unsigned long long int num;
	scanf("%llu",&num);
	int d=num%10;
	if(d==0){
		printf("2\n");
		return;
	}	
	printf("1\n%d",d);
	return 0;
}
