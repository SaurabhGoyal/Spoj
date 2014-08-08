#include <stdio.h>
#include<math.h>
int main()
{
	long long int num=0;
	scanf("%lld",&num);
	while(num!=-1){
		long long int d=9+(12*(num-1));
		long double root=sqrt(d);
		(root==floorl(root))?printf("Y\n"):printf("N\n");
		scanf("%lld",&num);
	}
	return 0;
}
