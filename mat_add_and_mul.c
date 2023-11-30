#include<stdio.h>
#include<math.h>

void matrixmultip(int mat1[][10],int mat2[][10],int rows,int columns)
{

int i,j,k,mat3[10][10];

for(i=0;i<rows;i++){

for(j=0;j<columns;j++)
{
    mat3[i][j]=0;
    for (k=0;k<columns; k++)
        mat3[i][j]+=(mat1[i][k])*(mat2[k][j]);
    }
}
printf("result of mat multiplication \n");
for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++){
        printf("%d ",mat3[i][j]);
        }
         printf("\n");
    }
}

void matrixaddition(int mat1 [][10], int mat2[][10], int rows, int columns)
{
    int mat3[10][10],i,j;
for (i=0; i<rows; i++){
    for(j=0;j<columns;j++){
        mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
}
printf("result of mat addition \n");
for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++){
        printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
}



void main(){
int mat1[10][10],mat2[10][10],i,j,rows,columns;
printf("enter number of rows and columns\n");
scanf("%d%d",&rows,&columns);
printf("enter inputs for first matrix\n");
for(i=0;i<rows;i++){
    for(j=0; j<columns; j++){
        scanf("%d",&mat1[i][j]);
    }
}

printf("enter inputs for second matrix\n");

for(i=0;i<rows;i++){

    for(j=0; j<columns; j++){
        scanf("%d",&mat2[i][j]);
    }

}

matrixmultip(mat1,mat2,rows,columns);
matrixaddition(mat1,mat2,rows,columns);
}
