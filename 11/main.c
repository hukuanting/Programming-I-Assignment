#include<stdio.h>
#include<ctype.h>

int main () {
    int n,i,count=1;
    char c;
    char name[1000]={0};
    scanf("%d\n",&n);
  if(n>=1&&n<=100){
      for(i=0;i<1000;i++){
     if(count<=n){
        scanf("%c",&name[i]);
        if(name[i]==44||name[i]==46||name[i]==59){
            count=count+1;
          }
     }else if(count>n){
         break;
     }
     }
      for(i=0;i<1000;i++){
            if(i==0){
                if(name[i]>=97&&name[i]<=122){
                    name[i]=name[i]-32;
                }   
            }
            if(name[i]==32||name[i]==44||name[i]==46||name[i]==59){
                if(name[i+1]>=97&&name[i+1]<=122){
                    name[i+1]=name[i+1]-32;
                }
            }
            if((name[i]>=65&&name[i]<=90)&&((name[i-1]>=97&&name[i-1]<=122)||(name[i-1]>=65&&name[i-1]<=90))){
                name[i]=name[i]+32;
            }
                
            
     
        }
        for(i=0;i<1000;i++){
         if(name[i]==44||name[i]==46||name[i]==59){
             name[i]=10;
            }
            if(name[i]!=0){
                printf("%c",name[i]); 
            }else if(name[i+2]==0){
                break;
            }
        }
  }
    return 0;
}
