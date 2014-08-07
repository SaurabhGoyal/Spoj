#include <stdio.h>
int main()
{
	float c;
	scanf("%f",&c);
	while(c!=0.00){
		float sum=0;
		int i=1;
		while(sum<c){
			float k=1.00/(float)(1+i);
			sum+=k;
			i++;
		}
		printf("%d card(s)\n",i-1);
		scanf("%f",&c);
	}
	return 0;
}
