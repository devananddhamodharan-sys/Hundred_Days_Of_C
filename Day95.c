#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

static struct Student getTopStudent(const struct Student arr[], int n) {
    struct Student best = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > best.marks) {
            best = arr[i];
        }
    }
    return best;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks) != 3) {
            return 1;
        }
    }

    struct Student top = getTopStudent(s, n);
    printf("Top Student -> Name: %s, Roll No: %d, Marks: %.2f\n",
           top.name, top.roll_no, top.marks);
    return 0;
}