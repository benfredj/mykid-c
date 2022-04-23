#include <stdio.h>

int main(){
	int heure,minute;
	printf("ahlan\n");
	printf("heure:");
	scanf("%d",&heure);
	printf("minute:");
	scanf("%d",&minute);
	if(heure<=23 && minute<=59){
		if(minute==59){
			minute=0;
	    	if(heure==23){
	    		heure=0;
			}else{
				heure=heure+1;
			}		
		}else{
			minute=minute+1;	
		}
		printf("%2d:%2d",heure,minute);	
	}else{
		printf("heure invalide\n");
	}
 
	return 0;
}