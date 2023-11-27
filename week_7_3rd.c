#include<stdio.h>
#include<stdlib.h>
void add(int **a,int **b,int n,int m,int **c);
void mul(int **a,int **b,int n,int m,int **c);
void transpose(int **a,int n,int m,int **c);
int main(){
int i,j,m,n;
    printf("give the number of elements:");
    scanf("%d%d",&n,&m);
    int **a,**b,**c;//the 3 arrays
    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));
    c=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        a[i]=(int *)calloc(m,sizeof(int));
        b[i]=(int *)calloc(m,sizeof(int));
        c[i]=(int *)calloc(m,sizeof(int));
    }
    printf("give the elements for the A array\n");
    for(i=0;i<n;i++){

    }
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&a[i][j]);//scanned a
            }
    }
    printf("the given elements for the A array\n");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d",a[i][j]);//displayed a
            }
            printf("\n");
    }
    printf("give the elements for the B array\n");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&b[i][j]);//scaned b
            }
    }
    printf("the given elements for the B array\n");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d",b[i][j]);//displayed b
            }
            printf("\n");
    }
    printf("\n******/choose on of the following optios/******\n");
    printf("**********/1.for Addition of the matrics/********\n");
    printf("*******/2.for multiplication of the matrics/******\n");
    printf("*******/3.for transpose of the a matrics/******\n");
    printf("*******/4.for transpose of the b matrics/******\n");
    printf("*************/5. exit the menu/****************\n");
    int choi;
    scanf("%d",&choi);
    switch(choi){
    case 1:
        add(a,b,n,m,c);
        break;
    case 2:
        mul(a,b,n,m,c);
        break;
    case 3:
        transpose(a,n,m,c);
        break;
    case 4:
        transpose(b,n,m,c);
        break;
    case 5:
        printf("exiting menu.........");
        return 0;
        break;
    default:
        printf("invalid input");
    }
    main();

}
void add(int **a,int **b,int n,int m,int **c){
    int i,j;
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
    }
    printf("here is the addition of the given matrics\n");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d",c[i][j]);
            }
            printf("\n");
    }
}
void mul(int **a,int **b,int n,int m,int **c){
    int i,j,k;
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                c[i][j]=0;
                for(k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
    }
    printf("here is the multiplication of the given matrics\n");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d",c[i][j]);
            }
            printf("\n");
    }
}
void transpose(int **a,int n,int m,int **c){
    printf("transpose is\n");
    int i,j;
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d",a[j][i]);
            }
            printf("\n");
    }
}
