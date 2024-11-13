#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(islower(ch)){
            printf("%c\n",toupper(ch));
        }
        else{
            printf("%c\n",tolower(ch));
        }
    }
    else{
        printf("Invalid input\n");
    }
    return 0;
}