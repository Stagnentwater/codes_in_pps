#include<stdio.h>
#include<string.h>
void deleteCharacters(char *mainString,int position,int n) {
    int mainLength=strlen(mainString);
    if (position<0||position>=mainLength||n<0){
        printf("Invalid position or number of characters to delete.\n");
        return;
    }
    char result[100];
    strncpy(result,mainString,position);
    result[position]='\0';
    strcat(result,mainString+position+n);
    strcpy(mainString,result);
    }
void main() {
    char mainString[100];
    int position,n;
    printf("Enter the main string: ");
    scanf("%s",mainString);
    printf("Enter the position to start deletion (0 to length-1): ");
    scanf("%d",&position);
    printf("Enter the number of characters to delete: ");
    scanf("%d",&n);
    deleteCharacters(mainString,position,n);
    printf("Result after deletion: %s\n",mainString);
    }
