#include<stdio.h>
int main(){
int raw,col;
scanf("%d%d",&raw,&col);
int x[raw][col],i,j,Tmat[col][raw];
for(i=0;i<raw;i++){
    for(j=0;j<col;j++){
            printf("x[%d][%d]=",i,j);
        scanf("%d",&x[i][j]);
    }
}
for(i=0;i<raw;i++){
    for(j=0;j<col;j++){
        printf("%d ",x[i][j]);
        Tmat[j][i]=x[i][j];
    }
    printf("\n");
}
printf("transpose matrix is :");
for(i=0;i<col;i++){
    for(j=0;j<raw;j++){
      printf("%d ",Tmat[i][j]);
    }

 printf("\n");
}







}
