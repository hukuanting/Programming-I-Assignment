#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=0;
	int arr[i];
	
	while(1){
		
		scanf("%d",&arr[i]);
		
		if(arr[i]==-1){
        	break;
		} 
		i=i+1;
	}

	
	int temp1=arr[0];
	int temp2=arr[0];
	int a;
	
	for(a=1;a<i;a++){
		if(arr[a-1]<arr[a]){	
			temp1=arr[a];	
		}	
		if(arr[a-1]>arr[a]){	
			temp2=arr[a];	
		}	
	}
	
	int ans;
	ans=temp1-temp2;
    printf("%d\n",ans); 
	
	return 0;
}
