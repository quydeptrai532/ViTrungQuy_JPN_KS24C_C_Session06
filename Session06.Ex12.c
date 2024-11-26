#include<stdio.h>
 
int main(){
    int f1,f2,f0,n,i;
	printf("nhap so nguyen duong bat ky\n");
	scanf("%d",&n);
	f1=1;
	f0=0;
	f2=0;
	printf("day fibonaci thu %d la :",n);
	for (i=1;i<=n;i++){
		printf("%d ,",f0);
		f2=f1+f0;
		f0=f1;
		f1=f2;
		
	}
	return 0;
}
