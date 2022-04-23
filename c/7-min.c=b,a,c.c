#include <stdio.h>

int main(){
	float a,b,c;
	float min;
	printf("ahlan\n");
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	if(a>b){
		if(b>c){ // a>b et b>c
			min=c;	
		}else{ // a>b et b<=c
			min=b;
		}
	}else{ //b>=a
		if(a<c){ //b>=a et c>a
			min=a;	
		}else{ //b>=a et a>=c
			min=c;
		}	
	}
	
	printf("min(%.2f,%.2f,%.2f)=%.2f\n",a,b,c,min);
	return 0;
}