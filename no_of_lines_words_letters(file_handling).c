#include<stdio.h>
#include<string.h>
void main(){
FILE *fptr;
int no_of_lines=0,no_of_words=0,no_of_letters=0,i,j;
fptr = fopen("file.txt", "r");
char myString[100];
for(i=0;fgets(myString, 100, fptr);i++){
    for(j=0;j<strlen(myString);j++){
        if(myString[j]==' '){//counting the spaces for the word but it will leave the end line ones for that i've added the lines at the end 
            no_of_words++;
        }
        if(myString[j]!=' '){
            no_of_letters++;//this will count extra new line characters for that i subtracted total lines -1 cause the last line will not give a new line char
        }
    }

    no_of_lines++;
    }
   
no_of_words+=no_of_lines;//end of the line words
no_of_letters-=no_of_lines-1;//eliminating the new line characters which were counted
fclose(fptr);
printf("the number of lines%d\nthe no. of words %d\nno of letters %d",no_of_lines,no_of_words,no_of_letters);


}
