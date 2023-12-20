#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int getrom(char c){
    switch(c){
        case 'i':
            return 1;
            break;
        case 'I':
            return 1;
            break;
        case 'v':
            return 5;
            break;
        case 'V':
            return 5;
            break;
        case 'x':
            return 10;
            break;
        case 'X':
            return 10;
            break;
        case 'l':
            return 50;
            break;
        case 'L':
            return 50;
            break;
    }
}
void main(){
    char *str;
    int j,n;
    printf("give the numbe of elements");
    scanf("%d",&n);
    str=(char *)calloc(n+1,sizeof(char));
    scanf("%s",str);
    int sum=0;
        for(int i=0;i<n;i++){ 
            if(getrom(str[i+1])>getrom(str[i])){
                sum+=getrom(str[i+1])-getrom(str[i]);;
                i++;
            }else{
                sum+=getrom(str[i]);
            }   
        }
    printf("the result is %d",sum);


}
