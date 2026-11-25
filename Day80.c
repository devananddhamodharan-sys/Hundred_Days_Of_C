#include <stdio.h>

typedef struct {
    char name[100];
    int roll;
    float marks;
} Student;

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    Student s[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %f", s[i].name, &s[i].roll, &s[i].marks) != 3) {
            return 1;
        }
    }

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        perror("Error opening students.txt for writing");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        perror("Error opening students.txt for reading");
        return 1;
    }

    Student rec;
    while (fscanf(fp, "%99s %d %f", rec.name, &rec.roll, &rec.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", rec.name, rec.roll, rec.marks);
    }

    fclose(fp);
    return 0;
}