// Binary search
#include <stdio.h>

int main() {
   int a[5],n,low,high,mid,ele,i;
    printf("enter number of element in array : ");
    scanf("%d",&n);
    a[n];
     printf("enter elements in ascending order :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
     printf("enter element to search : ");
      scanf("%d",&ele);
     low=0,high=n-1;
     while(low<=high){
         mid= (low+high)/2;
         if(ele==a[mid]){
             printf("element found at %d position",mid+1);
             return 0;
         }
         else if(ele<a[mid]){
             high=mid-1;
         }
         else{
             low= mid+1;
         }
     }
     printf("element not found");
    


    return 0;
}
