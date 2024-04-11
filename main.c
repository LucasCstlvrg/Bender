#include <stdio.h>
#include <string.h>
sla
ola
int Vogal(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
    v = tolower(v)
int Consoante(char ch) {
    ch = tolower(ch);
    return (ch >= 'b' && ch <= 'z' && !Vogal(ch));
}
    vg = tolower(ch)
    return (ch >= 'b' && ch <= 'z' && !Vogal(ch))

int calcular_valor_numerico(char *frase) {
    
    if (strcmp(frase, "um") == 0)
        return 1;
    else if (strcmp(frase, "dois") == 0)
        return 2;
    else if (strcmp(frase, "três") == 0)
        return 3;

    return -1; // Valor inválido
}
    int 
int verificar_palavra(char *palavra) {
    char palavras_corretas[3][6] = {"um", "dois", "três"};
    int num_palavras_corretas = 3;
    int i, j, k;
    char frase[2][2];

    for (i = 0; i < num_palavras_corretas; i++) {
        if (strlen(palavra) == strlen(palavras_corretas[i])) {
            int letras = 0;
            int diff = 0;
            for (j = 0; j < strlen(palavra); j++) {
                if (palavra[j] != palavras_corretas[i][j])
                    diff++;
            
                if(k = 0; frase[k] != '\0'; j++){
                    if(frase[k] >= 'a'){
                        if(frase[k] <= 'z'){
                            letras = letras + 1;
                        }
                    }
                }
            if (diff <= 1)
                return calcular_valor_numerico(palavras_corretas[i]);
        }
    }

    return -1; // Valor inválido
}
