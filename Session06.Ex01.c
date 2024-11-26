#include<stdio.h>

int main(){
	int so1,so2,so3,so4,so5,sum;
	printf("nhap so thu nhat\n");
	scanf("%d",&so1);
	printf("nhap so thu hai\n");
	scanf("%d",&so2);
	printf("nhap so thu ba\n");
	scanf("%d",&so3);
	printf("nhap so thu tu\n");
	scanf("%d",&so4);
	printf("nhap so thu nam\n");
	scanf("%d",&so5);
	if (so1%2!=0){
	   sum=sum+so1;
	}
    if (so2%2!=0){
	   sum=sum+so2;
	}
	if (so3%2!=0){
	   sum=sum+so3;
	}
	if (so4%2!=0){
	   sum=sum+so4;
	}
	if (so5%2!=0){
	   sum=sum+so5;
	}
	printf("tong cac so le la:%d ",sum);
	return 0;
}
