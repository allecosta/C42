#include <stdio.h>

/*void setMessage(char *text) 
{
    char *message;

    for (int i = 0; i < sizeof(message); i++) {
        message[i] = text[i];

        if (text[i] == 0) {
            return;
        }

        puts("A mensagem é muito longa para `message\n`");
    }
}*/

int main(void) 
{
    /*char text[] = {'h', 'e', 'l', 'l', 'o', 0};

    for (int i = 0; i < 6; i++) {
        printf("%s", text[i]);
    }*/

    char text2[] = "hello";
    printf("%s\n", text2); // hello


    return 0;
}