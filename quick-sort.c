#include <stdio.h>
int Partition( int a[], int low , int high){
    int p= a[low], temp;
    int i=low;
    for(int j=low+1 ; j<= high; j++){
        if( a[j] < p){
            i++;
            temp = a[j];
            a[j]= a[i];
            a[i]= temp;
        }
    }
    temp= a[i];
    a[i]= a[low];
    a[low]= temp;
    return i;
}

void QuickSort(int a[], int low, int high){
    if( low< high){
        int m= Partition( a, low, high);
        QuickSort( a, low, m-1);
        QuickSort( a, m+1, high);
    }
}

int main(){
    int a[20], n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    QuickSort( a, 0, n-1);

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
