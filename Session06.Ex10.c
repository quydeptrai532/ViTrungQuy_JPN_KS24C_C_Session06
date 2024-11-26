#include <stdio.h>

int main(){
	int i,n,kiemtra=0;
	printf("nhap so nguyen can kiem tra");
	scanf("%d",&n);
	for(i=2;i<n;i++){
			if(n%i==0) {
				kiemtra=1;
			}
		
	}
     if (kiemtra==0){
     	printf("so ban vua nhap: %d la so nguyen to",n);
	 }
	 else {printf("so ban vua nhap %d ko phai la so nguyen to",n);
	 }
	 return 0;
}
