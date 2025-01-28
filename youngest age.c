#include <stdio.h>
 
int main(){
    float a,b,c;
printf("enter the age of ram");
scanf("%f",&a);

printf("enter the age of shyam");
scanf("%f",&b);

printf("enter the age of ajay");
scanf("%f",&c);

 if(a<b & a<c){
     printf("ram is youngest");
 }
 if(b<c & b<a){
   printf("shyam is youngest");
}
 if(c<a & c<b){
    printf("ajay is youngest");
    
 }
 
 
   return 0;
}
