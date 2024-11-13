#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]){
    int left=0,right=strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }    
return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s", str);
    printf("%d",isPalindrome(str));
}