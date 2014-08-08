#include <stdio.h>
#define PI 3.14159265359;
int main()
{
	while(1){
		int l=0;
		scanf("%d",&l);
		if(l==0)
			return;
		float area=(l*l)/PI;
		printf("%.2f\n",area/2);
	}
	return 0;
}
