#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256], newLine[512];
    if (scanf("%255s", filename) != 1) {
        return 1;
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }

    if (!fgets(newLine, sizeof(newLine), stdin)) {
        return 1;
    }

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file in append mode");
        return 1;
    }

    fputs(newLine, fp);
    size_t len = strlen(newLine);
    if (len == 0 || newLine[len - 1] != '\n') {
        fputc('\n', fp);
    }

    fclose(fp);
    printf("Line appended successfully.\n");
    return 0;
}