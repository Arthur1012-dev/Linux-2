#include <stdio.h>
#include <string.h> 

int main() {
    char diretorio_atual[256] = "root/home";
    struct root {
        char home[51];
    };

    struct home {
        char documents[51];
        char documentacao_txt[51];
        char downloads[51];
    };

    struct terminal {
        char terminal[501];
    };
    
    struct terminal myterminal; 
    printf("digite um comando: ");
    scanf("%s", myterminal.terminal);

    
    if (strcmp(myterminal.terminal, "pwd") == 0) {
        printf("root/home/\n");
    }
    
    if (strcmp(myterminal.terminal, "ls") == 0) {
        printf("root/home/ls");
    }

    if (strcmp(myterminal.terminal, "shutdown") == 0) {
        int exit();
    }

    if (strcmp(myterminal.terminal, "cd documents") == 0) {
        strcat(diretorio_atual, "/documents");
        printf("%s", diretorio_atual);
    }

    if (strcmp(myterminal.terminal, "tree") == 0) {
    
        printf("root\nhome\ndocuments\ndownloads");
    }
    return 0;
}
