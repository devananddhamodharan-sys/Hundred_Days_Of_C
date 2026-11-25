#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

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

    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIdx].marks) {
            topIdx = i;
        }
    }

    printf("Topper: %s (Roll No: %d, Marks: %.2f)\n",
           s[topIdx].name, s[topIdx].roll_no, s[topIdx].marks);
    return 0;
}