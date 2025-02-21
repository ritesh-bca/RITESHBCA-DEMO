#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    int total_marks;
    int average;
};

void aver(struct student *s1) {
    s1->average = (s1->total_marks * 100) / 500;
}

int main() {
    struct student s1;
    s1.rollno = 32322323;
    s1.total_marks = 300;
    strcpy(s1.name, "ritesh tiwari");

    aver(&s1);
    printf("-----------> AVERAGE OF STUDENT<-------------\n");
    printf("**********************************************\n");
    printf("*                                            *\n");
    printf("* Roll number is: %-26d *\n", s1.rollno);
    printf("* Marks is: %-32d *\n", s1.total_marks);
    printf("* Name is: %-33s *\n", s1.name);
    printf("* Average is: %-30d *\n", s1.average);
    printf("*                                            *\n");
    printf("**********************************************\n");

    return 0;
}
