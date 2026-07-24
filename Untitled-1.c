#include <stdio.h>
int main(){
    int arr[100],n,pos;
    printf("Enter the elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("enter position: ");
    scanf("%d",&pos);
    for(int i=pos-1;i=n-1;i++){
        arrr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        return 0;
    }

        
        
    }
