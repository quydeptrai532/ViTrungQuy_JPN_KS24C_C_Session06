#include<stdio.h>

int main(){
	int so1,so2,so3,so4,so5,chan=0,le=0;
	printf("nhap so thu nhat\n ");
	scanf("%d",&so1);
	printf("nhap so thu hai \n");
	scanf("%d",&so2);
	printf("nhap so thu ba \n");
	scanf("%d",&so3);
	printf("nhap so thu tu \n");
	scanf("%d",&so4);
	printf("nhap so thu nam \n");
	scanf("%d",&so5);
	if(so1%2==0){
		chan++;
	}
	else{
		le++;
	}
		if(so2%2==0){
		chan++;
	}
	else{
		le++;
	}
		if(so3%2==0){
		chan++;
	}
	else{
		le++;
	}
		if(so4%2==0){
		chan++;
	}
	else{
		le++;
	}
		if(so5%2==0){
		chan++;
	}
	else{
		le++;
	}
	printf("so luong so chan la : %d \n",chan);
	printf("so luong so le la :%d \n",le);
	return 0;
}
