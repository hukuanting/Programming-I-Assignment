#include<stdio.h>

int main () {
int i,j,x,y,n;
	scanf("%d %d",&i,&j);
	if(i==1){
		for(x=0;x<j;x++){
				for(y=x;y<j;y++){
		   			printf("*");
			}
				printf("\n");
		    }
    }   
    if(i==2){
       for(x=0;x<j;x++){
				for(y=0;y<=x;y++){
					printf("*");
			}
				printf("\n");
		    }
    }
    if(i==3){
   			for(x=0;x<j;x++){
				for(y=1;y<=x;y++){
		   			printf(" ");
			}
				for(n=0;n<j-x;n++){
		   			printf("*");
			}
				printf("\n");
				}
    }
    if(i==4){
            for(x=0;x<j;x++){
				for(y=1;y<j-x;y++){
		  			printf(" ");
				}
				for(n=0;n<=x;n++){
		   			printf("*");
				}
				printf("\n");
			}
          
    }
  
    
    return 0;
}
