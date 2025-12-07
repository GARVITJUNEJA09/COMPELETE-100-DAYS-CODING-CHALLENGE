/*Store employee data in a binary file using fwrite() and read using fread().
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
Explanation 1:
Demonstrates writing and reading structures using binary file handling functions.*/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;
    FILE *fp;
  
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    printf("Enter employee id: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    fread(&emp, sizeof(emp), 1, fp);
    printf("\nEmployee details from file:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    fclose(fp);

    return 0;
}