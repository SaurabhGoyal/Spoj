#include <stdio.h>
int main()
{
	int t=0,j=0;
	scanf("%d",&t);
	while(j<t){
		float r=0.0;
		scanf("%f",&r);
		float max=(4*r*r)+(0.25);
		printf("Case %d: %.2f\n",++j,max);
	}
	return 0;
}
