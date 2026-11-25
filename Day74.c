#include <stdio.h>

int main(void) {
    char srcName[256], destName[256];
    if (scanf("%255s %255s", srcName, destName) != 2) {
        return 1;
    }

    FILE *src = fopen(srcName, "r");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("Copied %s to %s successfully.\n", srcName, destName);
    return 0;
}