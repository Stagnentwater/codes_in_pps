#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void decitoroman(int n){
    int i,k;
    char symbols[7][2]={"I","IV","V","IX","X","XL","L"};
    char values[7]={1,4,5,9,10,40,50};
    for(i=6;n>=0;i--){
        int divi=n/values[i];
        n=n%values[i];
        while(divi--){
            for(k=0;k<2;k++){
                printf("%c",symbols[i][k]);
            }
        }
    }
}
void main(){
    int n;
    scanf("%d",&n);
    decitoroman(n);
}
