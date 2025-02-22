#include<stdio.h>

int main () {
    int arr1[10]={10,10,10,10,10,10,10,10,10,10},arr2[10]={10,10,10,10,10,10,10,10,10,10},arr3[10]={10,10,10,10,10,10,10,10,10,10};
	int cnt,x,num,money;
	int i;
	scanf("%d",&cnt);

	for(i=0;i<cnt;i++){
		scanf("%d %d",&x,&num);
		
		if(x>=1&&x<=10){
			if(num>=arr1[x-1]){
				money = money + arr1[x-1]*10;
				arr1[x-1] = 0;
			}
			else{
				arr1[x-1] = arr1[x-1] - num;
				money = money + num*10;
			}	
		}
		if(x>=11&&x<=20){
		
			if(num>=arr2[x-11]){
				money = money + arr2[x-11]*20;
				arr2[x-11] = 0;	
			}
			else{
				arr2[x-11] = arr2[x-11] - num;
				money = money + num*20;
			}	
		}
		if(x>=21&&x<=30){
			
			if(num>=arr3[x-21]){
				money = money + arr3[x-21]*30;
				arr3[x-21] = 0;
			}
			else{
				arr3[x-21] = arr3[x-21] - num;
				money = money + num*30;
			}	
		}	
	}
	for(i=0;i<10;i++){
			printf("%d ",arr1[i]);
		}
		printf("\n");
		for(i=0;i<10;i++){
			printf("%d ",arr2[i]);
		}
		printf("\n");
		for(i=0;i<10;i++){
			printf("%d ",arr3[i]);
		}
		printf("\n");
		printf("Earned: $%d",money);
	return 0;
}
