#include<stdio.h> 
#include<string.h>
struct vehicle {
    int vid;
    int vnumber;
    char city[10];
    
}el[10];

int main(){ 
    int n=3;
    for(int i=1; i<=n; i++){ 
        printf("enter id: ");
        scanf("%d",&el[i].vid);
        printf("enter no: ");
        scanf("%d",&el[i].vnumber);
        printf("enter city: ");
        scanf("%s",&el[i].city);
        
    }
    for(int i=1; i<=n; i++){ 
        if(strcmp(el[i].city,"vadodra")==0){
            printf("\nvehicle id: %d, vehicle number: %d",el[i].vid, el[i].vnumber);
        }
    }
    
    return 0;
}