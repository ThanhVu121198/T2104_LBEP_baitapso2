#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap lan luot 3 so a b c\n");
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a< b){
		if(c>b){
			printf("So nho nhat: %d",a);
		}else{
			printf("So nho nhat: %d",c);
		}
}else{
	if(c<b){
		printf("So nho nhat: %d",c);
		
	}else{
		printf("So nho nhat: %d",b);
		
	}
}    return 0;

		}
	

