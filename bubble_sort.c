// BUBBLE SORT
#include <stdio.h>

int main() {
    int n,i,j,temp;
    int a[5];
    printf("enter number of element in array : ");
    scanf("%d",&n);
    a[n];
     printf("enter elements to be sorted :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted elements are :\n");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
        
    }
    

    return 0;
}
