#include <stdio.h>
#include <string.h>

FILE *concatFopen(char *s1, char *s2, char *mode) 
{
    char str[strlen(s1) + strlen(s2) + 1];
    strcpy(str, s1);
    strcat(str, s2);

    return fopen(str, mode);
}

int main(void) 
{
   FILE *fp = concatFopen("log_", "2025.txt", "w");

   if (fp == NULL) {
    perror("OPS! Erro ao abrir o arquivo.");
    return 1;
   }

    fprintf(fp, "Registro de log iniciado...");
    fclose(fp);

    puts("Arquivo criado com sucesso!\n");
   
    return 0;
} 