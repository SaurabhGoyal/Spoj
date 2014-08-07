#include<stdio.h>
//if AP,returns difference else 0
int isAP(int a,int b,int c){
	int d=c-b;
	if(d==b-a)
	 return d;
	return 0; 
}
//if GP,returns rate else 0
double isGP(double a,double b,double c){
	double r=c/b;
	double r1=b/a;
	if(r==r1)
	 return r;
	return 0.0; 
}
int main(){
	while(1){
		int a=0,b=0,c=0;
		scanf("%d\t%d\t%d",&a,&b,&c);
		if(c==0&&b==0&&a==0)
		 break;
	 	int ap=isAP(a,b,c);
	 	double gp=isGP(a,b,c);
	 	if(ap!=0)
	 	 printf("AP %d\n",c+ap);
 	 	if((int)gp!=0)
 	 	 printf("GP %d\n",(int)(c*gp));
	}
	return 0;
}
