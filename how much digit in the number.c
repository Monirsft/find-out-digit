#include<stdio.h>
int main(){
int num,i,reminder;
scanf("%d",&num);  //11255
while(num!=0){
    reminder=num%10;
    num=num/10;

}
for(i=0;i<=9;i++){
    if(i==reminder){
       // printf("%d ",i);
    }
     printf("%d ",i);
}

}
