/* 
name:JOSEPH MUSE WABUGE
REG NO;PA106/G/29042/25
DESCRIPTION:progarm to display student information
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    char reg_no[20];
    int total_marks;
};

int main() {
    FILE *fp;
    struct Student student;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Could not open file results.dat\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("---------------------------------------------\n");
    printf("%-25s %-15s %s\n", "Name", "Reg No", "Total Marks");
    printf("---------------------------------------------\n");

    while (fread(&student, sizeof(struct Student), 1, fp) == 1) {
        printf("%-25s %-15s %d\n", student.name, student.reg_no, student.total_marks);
    }

    fclose(fp);
    return 0;
}