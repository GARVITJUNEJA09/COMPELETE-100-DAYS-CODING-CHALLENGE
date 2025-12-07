// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/



#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[max_index].name, students[max_index].marks);

    return 0;
}