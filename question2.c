#include <stdio.h>
#include <ctype.h>
#include <string.h>


int isOperator(char ch){

return (ch=='+'||ch=='-'||ch=='/'||ch=='=');


}



int main(){
    char str[1000];
    int i=0;



    while(str[i]!='\0'){
        if(isspace(str[i])){
            i++;
continue;

        }

        if(isdigit(str[i])){
            char num[50];
            int j=0;
            while(isdigit(str[i])){
           num[j++]=str[i++];
            }
             printf("integer%d", num);
             i++;

continue;



        }

        if(isalnum(str[i]||str[i]=="_")){
            char id[50];
            int j=0;
            while(isdigit(str[i])){
           id[j++]=str[i++];
            }
             printf("identifier%s", id);
             i++;
            continue;

        }

        if(str[i]=="("||str[i]==")")
        {
             printf("integer%s", str[i]);
             i++;

continue;
        }
         if(isOperator(str[i]))
        {
             printf("integer%s", str[i]);
             i++;

continue;
        }


        printf("unknown");
        i++;








    }




    return 0;

}