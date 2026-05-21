//Q: Write a C program to count the number of tokens in a given C source code string.
//  Classify tokens as keywords, identifiers, operators, literals, and punctuation. 
// Use a simplified set of keywords: int, float, if, else, return, while.



#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000];
    int i=0;
    int j=0;
    char token[100];
    int operators, keywords, identifiers, literals, punctuation=0;
    while(str[i]!='\0'){


        //iterate over string


        //operators
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%'||str[i]=='<'||str[i]=='>'||str[i]=='!'){

            operators++;
            printf("operator>>--%s", string[i]);
        }

         char keywords[][10]={
            "int", "float", "if", "else", "return", "while"

         }
        
         for(int k=0;k<6;k++){
            if(strcmp(str[i], keywords[k])==0){
                keywords++;
                printf("operator>>--%s", keywords[i]);

            }
         }



         //identifier
         while(str[i]!='\0'||str[i]!='_'){

            token[j++]=str[i++];


         }
         printf("identifier>> %s", token);

         //literals
        while (isdigit(str[i]) || str[i] == '.') {
                token[j++] = code[i++];
            }
            i++;
            printf("literals>> %s", token);
         if(str[i]=='/0'){
            i++;
         }
        


    }





    return 0;
}