#include<stdio.h>
#include<stdbool.h>

bool isLeap(int year);

int main(){
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);
    if(isLeap(year)){
        printf("%d is a leap Year.\n",year);
    }else{
        printf("%d is not a leap year.\n",year);
    }
    return 1;
}
bool isLeap(int year){
    if(year % 4 == 0){
        return true;
    }else{
        return false;
    }
}