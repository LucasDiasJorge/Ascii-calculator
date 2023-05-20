#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Use: ./main <input>\n");
        return 1;
    }

    char *input = argv[1];
    int i = 0;

    while (input[i] != '\0') {
        printf("Caractere: %c - Valor ASCII: %d\n", input[i], input[i]);
        i++;
    }

    return 0;
}
