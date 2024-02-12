#include<stdio.h>

int main(){
   float n1, n2, n3, n4, n5, n6, n7, n8 ,n9 ,n10, n11;
   printf("Digite as 11 notas:\n");
   scanf("%f%f%f%f%f%f%f%f%f%f%f", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
   float media = (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11)/11;
   printf("A media das notas: %f",media);
}
