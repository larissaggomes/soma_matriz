#include<stdio.h>


int main(void){

int a [5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int b [5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int c[5][3];
int i=0,j=0;

for(i=0; i<=4; i++){
for(j=0; j<=2; j++){

c[i][j]= a[i][j]+b[i][j];

}
}
for(i=0; i<=4; i++){
for(j=0; j<=2; j++){

printf("%i\t",c[i][j]);
}
printf("\n");

}

}
