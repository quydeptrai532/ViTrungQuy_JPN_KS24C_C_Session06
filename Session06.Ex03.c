#include<stdio.h>

int main(){
	int matkhau=152,mknhap,kiemtra=0,solannhap=3;
	while (kiemtra==0 ) {
		printf("nhap mat khau ");
		scanf("%d",&mknhap);
		if (mknhap==matkhau){
			printf("ban da nhap dung mat khau\n ");
			kiemtra=1;
		}
		else{
			printf("ban da nhap sai mat khau\n");
			
		}
	}
	return 0;
	
}
