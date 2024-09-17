#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isArmstrong(int num);

int main(){
    int num[20];
    printf("Enter 20 Integers : ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if(isArmstrong(num[i])){
            printf("%d is Armstrong Number!\n",num[i]);
        }else{
            printf("%d is Not an Armstrong Number!\n", num[i]);
        }
    }
}
bool isArmstrong(int num){
    int originalNum, remainder, result = 0;
    int n = 0;
    originalNum = num;
    while(originalNum != 0){
        originalNum = originalNum / 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + pow(remainder, n);
        originalNum = originalNum / 10;
    }
    return (result == num);
}