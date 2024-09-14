#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int isVowel(char ch){
    ch = tolower(ch);
    int cond;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cond = 0;
    }
    else if(ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g'
     || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' 
     || ch == 'n' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' 
     || ch == 't' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' 
     || ch == 'z'){
        cond = 1;
    }
    else{
        cond = -1;
    }
    return cond;
}

int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(isVowel(ch) == 0){
        printf("%c is Vowel\n",ch);
    }else if(isVowel(ch) == 1){
        printf("%c is a Consonant\n",ch);
    }else if(isVowel(ch) == -1){
        printf("%c is not an English alphabet\n",ch);
    }
    return 1;
}