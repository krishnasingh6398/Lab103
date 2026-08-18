// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[50],n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp= a[min];
        a[min]= a[i];
        a[i]= temp;
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}