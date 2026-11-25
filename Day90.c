#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[100];
    int age;
    enum Gender gender;
};

int main(void) {
    struct Person p;
    int g;

    if (scanf("%99s %d %d", p.name, &p.age, &g) != 3) {
        return 1;
    }
    p.gender = (enum Gender)g;

    const char *genderLabel = "Unknown";
    if (p.gender == MALE) genderLabel = "Male";
    else if (p.gender == FEMALE) genderLabel = "Female";
    else if (p.gender == OTHER) genderLabel = "Other";

    printf("Name: %s, Age: %d, Gender: %s\n", p.name, p.age, genderLabel);
    return 0;
}