#include <stdio.h>
#include <string.h>
 
int main() {
   
    
 
    char source[2000] = {
        "// This is a single-line comment\n"
        "#include <stdio.h>\n"
        "/* This is a\n"
        "   multi-line comment */\n"
        "int main() {\n"
        "    int x = 10; // declare x\n"
        "    int y = 20; /* declare y */\n"
        "    printf(\"x+y = %d\", x+y);\n"
        "    return 0;\n"
        "}\n"
    };
 
    char cleaned[2000];
    int i = 0, j = 0;
    int len = strlen(source);
 
    printf("Original Source Code:\n%s\n", source);
    printf("------------------------------------\n");
 
    while (i < len) {
        // Single-line comment
        if (source[i] == '/' && source[i+1] == '/') {
            while (i < len && source[i] != '\n') i++;
        }
        // Multi-line comment
        else if (source[i] == '/' && source[i+1] == '*') {
            i += 2;
            while (i < len - 1 && !(source[i] == '*' && source[i+1] == '/')) i++;
            i += 2;
        }
        else {
            cleaned[j++] = source[i++];
        }
    }
    cleaned[j] = '\0';
 
    printf("Cleaned Source Code (comments removed):\n%s\n", cleaned);
 
    return 0;
}
