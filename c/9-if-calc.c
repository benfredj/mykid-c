#include <stdio.h>

int main(){
	float a,b,resultat;
	char operation;
	printf("ahlan\n");
	printf("operation: ");
	scanf("%c",&operation);
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	
	if(operation=='/'){
		resultat=a/b;	
	}else if(operation=='*'){
		resultat=a*b;	
	}else if(operation=='+'){
		resultat=a+b;	
	}else if(operation=='-'){
		resultat=a-b;	
	}
	if(operation=='/' || operation=='*'|| 
		operation=='-'|| operation=='+' ){
		printf("%.2f%c%.2f=%.2f\n",a,operation,b,resultat);
	}else{
		printf("operation invalide");	
	}
	return 0;
}