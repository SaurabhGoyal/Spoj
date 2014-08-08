#include <stdio.h>
int main()
{
	while(1){
		int noa,nod,i;
		scanf("%d%d",&noa,&nod);
		if(noa==0&&nod==0) break;
		int att,def,closestAtt=10000,firstdef=10000,seconddef=10000;
		for(i=0;i<noa;i++){
			scanf("%d",&att);
			if(att<closestAtt) closestAtt=att;
			att=0;
		}
		for(i=0;i<nod;i++){
			scanf("%d",&def);
			if(def<firstdef){
				seconddef=firstdef;
				firstdef=def;
			}
			else if(def<seconddef){
				seconddef=def;
			}
		}
		seconddef>closestAtt?printf("Y\n"):printf("N\n");
	}
	return 0;
}
