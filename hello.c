#include<stdio.h>
struct emp{
    int id;
    char name[10];
    int salary;
};
int main(){
    struct emp e1={101,"raj",30000};
    printf("emp1= %d %s %d",e1.id, e1.name, e1.salary);
    return 0;
}