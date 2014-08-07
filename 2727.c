#include <stdio.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b);
}
int main()
{
	int t=0;
	scanf("%d",&t);
	while(t--){
		int nog,nomg,nob,i;
		scanf("%d%d",&nog,&nomg);
		nob=nog>nomg?nog:nomg;
		int g[nog],mg[nomg];
		for(i=0;i<nog;i++){
			scanf("%d",&g[i]);	
		}
		qsort(g,nog,sizeof(int),cmpfunc);
		for(i=0;i<nomg;i++){
			scanf("%d",&mg[i]);	
		}
		qsort(mg,nomg,sizeof(int),cmpfunc);
		int j=0;
		for(i=0;i<nob&&j<nob;){
			if(g[i]>=mg[j])
			{
				nomg--;
				j++;
			}	
			else
			{
				nog--;
				i++;
			}	
			if(nog==0){
				printf("MechaGodzilla\n");
				break;	
			}
			if(nomg==0){
				printf("Godzilla\n");
				break;	
			}
		}			
	}
	return 0;
}
