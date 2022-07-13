#include <stdio.h>

int main(){
	int heure,minute,seconde;
	printf("ahlan\n");
	printf("heure:");
	scanf("%d",&heure);
	printf("minute:");
	scanf("%d",&minute);
	printf("seconde:");
	scanf("%d",&seconde);
	if(heure<=23 && minute<=59 && seconde<=59){
		if(seconde==0){//decrement secondes
	        seconde = 59;
	        if(minute==0){//decrement minutes
	           minute = 59;
	           if(heure==0){
	               heure = 23;
	           } else{
	               heure--;
	           }
	        }else{
	            minute--;
	        }
	    }else{
	        seconde--;
	    }    
		printf("heure decremente: %d:%d:%d",heure,minute,seconde);
	}else{
		printf("heure invalide");
	}
 	
	return 0;
}