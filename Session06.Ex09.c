#include<stdio.h>

int main(){
	int n,hangdonvi,hangchuc,hangtram;
	for(n=100;n<1000;n++){
	hangdonvi=n%10;
	hangchuc=(n/10)%10;
	hangtram=n/100;
	if((hangdonvi*hangdonvi*hangdonvi)+(hangchuc*hangchuc*hangchuc)+(hangtram*hangtram*hangtram)==n){
		printf("%d,",n);
	}
}
return 0;
}
