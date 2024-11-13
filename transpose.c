#include<stdio.h>
void transpose(int n,int arr[][n]){
    for(int i=0;i<n ;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<n ;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }        
}
int main(){
    int n;
    scanf("%d",&n);
    int c;
    scanf("%d",&c);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    transpose(n,arr);
    

}