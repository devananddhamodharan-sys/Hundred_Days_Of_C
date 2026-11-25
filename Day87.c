#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main(void) {
    int role;
    if (scanf("%d", &role) != 1) {
        return 1;
    }

    switch ((enum Role)role) {
        case ADMIN:
            printf("Welcome, Admin: Full system and user access granted.\n");
            break;
        case USER:
            printf("Welcome, User: Standard workspace access granted.\n");
            break;
        case GUEST:
            printf("Welcome, Guest: Read-only access granted.\n");
            break;
        default:
            printf("Invalid role.\n");
            break;
    }

    return 0;
}