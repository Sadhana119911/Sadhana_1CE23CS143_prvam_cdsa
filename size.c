#include<stdio.h>
int main(){
    char ch;
    char str[100];
    char sentence[100];
    scanf("%c",&ch);
    getchar();
    fgets(str,sizeof(str),stdin);
    fgets(sentence,sizeof(sentence),stdin);
    printf("%c\n",ch);
    printf("%s",str);
    printf("%s",sentence);
    return 0;
}