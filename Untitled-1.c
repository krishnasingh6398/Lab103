#include <stdio.h>
int main(){
    int i,arr[100],n,pos;
    printf("Enter the elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter position: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;

        
        
    }