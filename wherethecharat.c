#include <stdio.h>
#include <string.h>
int whereisthis(char a,char str[1000]){
    int i,n=strlen(str),notthere=1;
    for(i=0;i<n;i++){
        if(str[i]==a){
            notthere=0;
            return i;
        }
    }
    if(notthere){
        return -1;
    }
}

int main() {
    char A[1000];
    printf("Enter a string: ");
    fgets(A, sizeof(A), stdin);
    char a;
    printf("the character you wanna know the index of");
    scanf("%c",&a);
    printf("%d",whereisthis(a,A));
    return 0;
}
