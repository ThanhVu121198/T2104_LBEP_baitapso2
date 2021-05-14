#include<stdio.h>
#include<math.h>

   int main(){
   	float a,b,c,delta,x,x1,x2;
   	printf("Nhap a=");
   	scanf("%f",&a);
   	printf("Nhap b=");
   	scanf("%f",&b);
   	printf("Nhap c=");
   	scanf("%f",&c);
	   
	   if(a==0){
	   	 if(b==0){
	   		if(c==0){
	   			printf("Phuong trinh co vo so nghiem");
	   			
			   }else{
			   	printf("Phuong trinh vo nghiem");
			}
			   
		    }else{
		   	printf("Phuong trinh co 1 nghiem kep: %f",x);
		   	x = -c/b;
	        }
	        
		    
	    }else{
		   	delta = b*b -4*a*c;
		   	if(delta <0){
		   	printf("Phuong trinh vo nghiem");
		   	
		   }else
		   	if(delta==0) {
			   printf("Phuong trinh co 1 nghiem: %f",b/(2*a));
		   	
		   	
		   }else{
		   	printf("Phuong trinh co 2 nghiem phan biet: \n");
		   	x1 = (-b+sqrt(delta))/(2*a);
		   	printf("x1 = %f", x1);
		   	x2 = (-b-sqrt(delta))/(2*a);
		   	printf("x2 = %f", x2);
		   	
		   	
		   	
		   }
		   
		   
		
	   }
	    return 0;
	      }
	      
	      
	      
	     
	      
			
	
