#include<stdio.h>

int main(){
	int sotien,sothang;
	float laisuat,tienlai,tiennhan;
	printf("nhap so tien gui ngan hang");
	scanf("%d",&sotien);
	printf("nhap so thang gui");
    scanf("%d",&sothang);
    printf("nhap lai suat thang");
    scanf("%f",&laisuat);
    laisuat=laisuat/100;
    tienlai = laisuat*sothang*sotien;
    tiennhan = sotien+tienlai;
    printf("lai suat nhan duoc la %f",tienlai);
    printf("so tien nhan duoc la %f",tiennhan);
    return 0;
    
	
}
