#include<stdio.h>
#define ROW 3
#define COL 4
int main(void)
{
        int i,j,mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];
        printf("Enter the matrix1 row wise :\n");
        for(i=0;i<ROW;i++)
            for(j=0;j<COL;j++)
            scanf("%d",&mat1[i][j]);
        printf("Enter the matrix2 row wise:\n");
        for(i=0;i<ROW;i++)
            for(j=0;j<COL;j++)
            scanf("%d",&mat2[i][j]);
        for(i=0;i<ROW;i++)
            for(j=0;j<COL;j++)
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            printf("The resultant matrix is :\n");
        for(i=0;i<ROW;i++)
            for(j=0;j<COL;j++)
            printf("%d",mat3[i][j]);
        printf("\n");
}
