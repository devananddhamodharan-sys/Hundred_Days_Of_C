#include <stdio.h>

enum Department {
    DEPT_ENGINEERING,
    DEPT_HR,
    DEPT_OPERATIONS,
    DEPT_FINANCE
};

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[100];
    double salary;
    enum Department dept;
    struct Date joining_date;
};

static const char *departmentName(enum Department dept) {
    switch (dept) {
        case DEPT_ENGINEERING: return "Engineering";
        case DEPT_HR:          return "HR";
        case DEPT_OPERATIONS:  return "Operations";
        case DEPT_FINANCE:     return "Finance";
        default:               return "General";
    }
}

int main(void) {
    struct Employee emp;
    int deptCode;

    if (scanf("%d %99s %lf %d %d %d %d",
              &emp.id,
              emp.name,
              &emp.salary,
              &deptCode,
              &emp.joining_date.day,
              &emp.joining_date.month,
              &emp.joining_date.year) != 7) {
        return 1;
    }

    emp.dept = (enum Department)deptCode;

    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: ₹%.2f\n", emp.salary);
    printf("Department: %s\n", departmentName(emp.dept));
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joining_date.day,
           emp.joining_date.month,
           emp.joining_date.year);

    return 0;
}