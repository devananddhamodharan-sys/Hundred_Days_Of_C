#include <stdio.h>

#define COUNT 5

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student s[COUNT];

    for (int i = 0; i < COUNT; i++) {
        if (scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks) != 3) {
            return 1;
        }
    }

    for (int i = 0; i < COUNT; i++) {
        printf("Student %d -> Name: %s, Roll No: %d, Marks: %.2f\n",
               i + 1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}