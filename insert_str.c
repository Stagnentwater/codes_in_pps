#include<stdio.h>
#include<string.h>
    void insertSubstring(char *mainString,char *subString,int position){
    int mainLength=strlen(mainString);
    int subLength=strlen(subString);
    if(position<0||position>mainLength)
        {
        printf("Invalid position for insertion.\n");
        return;
    }
    char result[100];
    strncpy(result,mainString,position);
    result[position]='\0';
    strcat(result,subString);
    strcat(result,mainString+position);
    strcpy(mainString,result);
    }
    void main(){
    char mainString[100],subString[50];
    int position;
    printf("Enter the main string: ");
    scanf("%[^\n]",mainString);
    printf("Enter the substring to insert: ");
    scanf("%s",subString);
    printf("Enter the position to insert (0 to length of main string): ");
    scanf("%d",&position);
    insertSubstring(mainString,subString,position);
    printf("Result after insertion: %s\n",mainString);
    }
