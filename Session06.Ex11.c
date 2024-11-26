#include <stdio.h>

int main(){
	int i,n,c,kiemtra=0;
	printf("nhap so nguyen n bat ki");
	scanf("%d",&n);
	for (i=3;i<=n;i++){
		  kiemtra=0;
          for(c=2;c<i;c++){
          	if (i%c==0){
          		kiemtra=1;
			  }
	
		  }
		  if (kiemtra==0){
		  	printf("%d ,",i);
		  }
	} 
	return 0;
}
