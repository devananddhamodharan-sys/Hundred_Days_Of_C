#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

static void printStudent(struct Student st) {
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", st.name, st.roll_no, st.marks);
}

int main(void) {
    struct Student s;
    if (scanf("%99s %d %f", s.name, &s.roll_no, &s.marks) != 3) {
        return 1;
    }

    printStudent(s);
    return 0;
}