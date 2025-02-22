#include <stdio.h>
#define AMERICANO  110
#define LATTE      150
#define CAPPUCCINO 135
#define MOCHA      145

int main() {
    int i, j, temp;
    scanf("%d %d",&i,&j);
    if(i>=1 && i<=100 && j>=1 && j<=20){
       if(i==1){
         temp= AMERICANO*j;
         printf("The total price is %d dollars",temp);    
       }
       else if(i==2){
         temp= LATTE*j;
         printf("The total price is %d dollars",temp);    
       } 
       else if(i==3){
         temp= CAPPUCCINO*j;
         printf("The total price is %d dollars",temp);    
       }
       else if(i==4){
         temp= MOCHA*j;
         printf("The total price is %d dollars",temp);    
       }
       else {
         printf("Wait, what?");
       }
    }   
    else {
    printf("Wait, what?");
    }
    return 0;
}
