#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int getrom(char c){
    switch(c){
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    }
}
int romtodec(char*str){
    int i,n=strlen(str),sum=0;
    for(i=0;i<n;i++){
        if(getrom(str[i])<getrom(str[i+1])){
            sum+=getrom(str[i+1])-getrom(str[i]);
            i++;
        }else{
            sum+=getrom(str[i]);
        }
    }
    return sum;
}
void main(){
    char *roman;
    roman=(char *)calloc(50,sizeof(char));
    scanf("%s",roman);
    int n=strlen(roman);
    roman=(char *)realloc(roman,n*sizeof(char));
    printf("%d this is the result",romtodec(roman));
    free(roman);
}
