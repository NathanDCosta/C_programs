//c program to find mean,mode,variance using arrays
#include<stdio.h>
int mean(int arr[],int n){
    arr[n];
    float mean=0,var=0,sum=0.00;

    for(int i=0;i<n;i++){
        mean +=arr[i];
    }

    mean = mean/n;
    printf("mean is %.3f \n",mean);

    for(int i=0;i<n;i++){
     sum =sum+((arr[i]-mean)*(arr[i]-mean));
       }

    var=sum/n;
    printf("variance is %f \n",var);
    

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
   
          printf("There is no mode");
    }
    else{
      
         printf("mode is %d",mode);
    }
    
}
 int main(){
    int n;
    printf("enter number of elements in array : ");
    scanf("%d",&n);
       printf("\nenter elements of array : ");
    int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mean(arr,n);
    mode(arr,n);


 }
