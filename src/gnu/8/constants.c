#include <stdio.h>

int main(void) 
{
    /**
     * BASE 8 (octal) 0 a 7:
     * 
     * 0 ....... zero
     * 077 ..... 63
     * 0403 .... 259 
     * 
     * 
     * BASE 16 (hexadecimal) - Iniciando com 0x. 0 .... 9 e a .... f:
     * 
     * 0xff .... 255
     * 0XA0 .... 160
     * 0xffff ... 65535
     * 
     * 
     * BASE 2 (binaria) - Iniciando com 0b. 0 .... 1
     * 
     * 0b101 .... 5
     * 
     * 
     * CONSTANTES INTEIROS 
     * 
     * 1- int
     * 2- unsigned int
     * 3- long int
     * 4- unsigned long int
     * 5- long long int
     * 6- unsigned long long int
     * 
     * 
     * CONSTANTES FLOATING
     * 
     * Formas de representar o valor 1500
     * 1500.0, 15e2, 15e+2, 15.0e2, 1.5e+3, .15e4’ e 15000e-1
     * 
     * Constantes floating normalmente são do tipo double, porém o tipo float é utilizado acrescentando f ou F, no final.
     * Por exemplo:
     * 
     * 3.14159f
     * 3.14159e0f
     * 1000.f
     * 100E1F
     * .0005f
     * .05e-2f
     * 
     * 
     * CONSTANTES DE CARACTERES
     * 
     *  '\a' ⇒ 7       alarm, CTRL-g
     *  '\b' ⇒ 8       backspace, BS, CTRL-h
     *  '\t' ⇒ 9       tab, TAB, CTRL-i 
     *  '\n' ⇒ 10      newline, CTRL-j
     *  '\v' ⇒ 11      vertical tab, CTRL-k 
     *  '\f' ⇒ 12      formfeed, CTRL-l
     *  '\r' ⇒ 13      carriage return, RET, CTRL-m
     *  '\e' ⇒ 27      escape character, ESC, CTRL-[
     *  '\\' ⇒ 92      backslash character, \
     *  '\'' ⇒ 39      single quote character, '
     *  '\"' ⇒ 34      double quote character, "
     *  '\?' ⇒ 63      question mark, ? 
     *  
     * 
     * CONSTANTES STRINGS UTF-8
     * 
     * Utiliza "u8" imediatamente antes da string, por exemplo;
     * 
     * u8"helllo";
     * 
     * 
     * CÓDIGO DE CATRACTETRES UNICODE
     * 
     * \u6C34 .......... 16-bit (UTF-16) 
     * \U0010ABCD ...... 32-bit (UTF-32) 
     * 
     * 
     * CONSTANTES DE CARACTERES WIDE
     * 
     * wchar_t, que definido pelo header stddef.h para o tipo de dado inteiro, utilizado para especificar a largura.
     * 
     * char16_t e char32_t definido pelo header uchar.h
     * Onde 'u' representa 16-bit e 'U' representa 32-bit
     */

     // Constantes strings
     char stringArray[] = {'h', 'e', 'l', 'l', 'o', '\0'};

     printf("%c\n", stringArray[1]); // e

     for (int i = 0; i < 6; i++) {
        printf("%s", stringArray); // hello
     }

    return 0;
}
