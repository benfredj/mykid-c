#include <stdio.h>

int main(){
	float a,b,c;
	float max;
	printf("ahlan\n");
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	if(a<b){
		if(b<c){ // a<b et b<c
			max=c;	
		}else{ // a<b et b>=c
			max=b;
		}
	}else{ //b<=a
		if(a<c){ //b<=a et c>a
			max=c;	
		}else{ //b<=a et a>=c
			max=a;
		}	
	}
	
	printf("max(%.2f,%.2f,%.2f)=%.2f\n",a,b,c,max);
	return 0;
}