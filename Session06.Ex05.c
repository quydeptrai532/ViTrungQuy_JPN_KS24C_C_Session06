#include<stdio.h>

int main(){
	int nam,thang;
	printf("nhap vao nam ");
	scanf("%d",&nam);
	printf("nhap vao so thang ");
	scanf("%d",&thang);
	switch(thang){
		case 1 :case 3 :case 5: case 7: case 8: case 10: case 12 :printf("thang %d nam %d  co 31 ngay",thang,nam);
				  
		break;
		case 4 :case 6 : case 9 : case 11 : printf("thang %d nam %d  co 30 ngay",thang,nam);
				 break;
		case 2: if (nam%4==0&&nam%100!=0 || nam%400==0)
		          {printf("thang %d nam %d  co 29 ngay",thang,nam);
				  }
				  else {
				  	printf("thang %d nam %d  co 28 ngay",thang,nam);
				  }
		break;
		default : printf("nhap sai"); 
		}
			return 0;
	}
	

	

