#include<stdio.h>
#include<conio.h>

void main(){
 int n=24,i;

 for(i=1; i<=n; i++){
  if(n%i==0)
   printf("%d ",i);
  else
   continue;
 }
 
}
