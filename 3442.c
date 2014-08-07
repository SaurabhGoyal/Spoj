#include<stdio.h>#include<string.h>
int main(){
	int t=0;scanf("%d",&t);
	while(t--){
		unsigned long long int b;char a[1010];
		int c,d;
		scanf("%s%llu",&a,&b);
		if(b==0){printf("1\n");continue;}
		b%=100;
		d=a[strlen(a)-1]-48;
		switch(d){
		case 0:case 1:case 5:case 6:printf("%d\n",d);break;
		case 2:case 3:case 7:case 8:b%=4;c=d*d;
		switch(b){case 1:printf("%d\n",d);break;case 2:printf("%d\n",(c)%10);break;case 3:printf("%d\n",(c*d)%10);break;case 0:printf("%d\n",(c*c)%10);break;}break;
		case 4:case 9:b%=2;(b==1)?printf("%d\n",d):printf("%d\n",(d*d)%10);break;
		}
	}
	return 0;
}
