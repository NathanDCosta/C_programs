#include<stdio.h>
int mean(int arr[],int n){
    int mean=0;
    for(int i=0;i<n;i++){
        mean +=arr[i];
    }
    printf("%d",mean);

}
 int main(){
    int n,arr[1];
    printf("enter elemnts of array");
    scanf("%d,&n");
    arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mean(arr[n],n);


 }