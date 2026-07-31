#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2;
    printf("Enter row and coloumn of 1st matrix: ");
    scanf("%d %d", &r1, &c1);
        printf("Enter row and coloumn of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1==r2 && c1==c2)
    {
        printf("Enter elements of 1st matrix: \n");
        for(int i=0; i<r1;i++)
        {
            for(int j=0; j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
         printf("Enter elements of 2nd matrix: \n");
        for(int i=0; i<r2;i++)
        {
            for(int j=0; j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }   
        printf("Subtraction matrix: \n");
         for(int i=0; i<r1;i++){
             for(int j=0; j<c1;j++)
            {
                c[i][j]=a[i][j] - b[i][j];            
            }

         }

         for(int i=0; i<r1;i++)
        {
            for(int j=0; j<c1;j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("Matrix cannot be added due to unequal order ");
    }



  
}
