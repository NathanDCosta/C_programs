#include<stdio.h>
int mean(int arr[],int n){
    float mean=0;
    for(int i=0;i<n;i++){
        mean +=arr[i];
    }
    mean = mean/2;
    printf("%.3f",mean);

}
int mode(int arr[],int n){
    int mode=arr[0];
    int count =1,maxcount=1;
    
    for(int i=0;i<n;i++){
        count =1;
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            
            
        }
        if(count>maxcount){
            maxcount=count;
            mode=arr[i];
        }
    }
    if(maxcount==1){
   
          printf("no mode");
    }
    else{
      
         printf("mode is %d",mode);
    }
    
}
 int main(){
    int n;
    printf("enter number of elemnts in array");
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mean(arr,n);
    mode(arr,n);


 }
