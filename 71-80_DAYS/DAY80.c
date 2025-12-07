//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a student record
struct S {
    char n[50]; // n: name
    int r;      // r: roll number
    float m;    // m: marks
};

// Function to write student records to a file
void w_r(const char *fn, struct S *s, int c) {
    FILE *f; // f: file pointer
    int i;   // i: loop counter

    // Open the file in write mode ("w"). This clears the file if it exists.
    f = fopen(fn, "w");
    if (f == NULL) {
        printf("Error: Could not open file %s for writing.\n", fn);
        exit(EXIT_FAILURE);
    }

    // Write the number of records first (useful for reading back later)
    fprintf(f, "%d\n", c); 

    // Use fprintf to write each record in a fixed format
    for (i = 0; i < c; i++) {
        // Format: Name RollNumber Marks\n
        fprintf(f, "%s %d %.2f\n", s[i].n, s[i].r, s[i].m);
    }

    printf("Successfully wrote %d records to %s.\n", c, fn);
    fclose(f);
}

// Function to read and display student records from a file
void r_r(const char *fn) {
    FILE *f; // f: file pointer
    int c;   // c: total count of records
    int i;
    struct S s; // s: temporary structure to hold the current record

    // Open the file in read mode ("r")
    f = fopen(fn, "r");
    if (f == NULL) {
        printf("Error: Could not open file %s for reading.\n", fn);
        exit(EXIT_FAILURE);
    }

    // Read the total count of records (the first line)
    if (fscanf(f, "%d\n", &c) != 1) {
        printf("Error reading record count from file.\n");
        fclose(f);
        return;
    }
    
    printf("\n--- Reading %d Records from File ---\n", c);
    printf("Name\t\tRoll No\tMarks\n");
    printf("--------------------------------------\n");

    // Use fscanf() to read each record according to the fixed format
    for (i = 0; i < c; i++) {
        // Format: Name (%s) RollNumber (%d) Marks (%.2f)
        if (fscanf(f, "%s %d %f\n", s.n, &s.r, &s.m) == 3) {
            printf("%s\t\t%d\t%.2f\n", s.n, s.r, s.m);
        } else {
            printf("Error reading record #%d.\n", i + 1);
            break;
        }
    }

    fclose(f);
}

int main() {
    const char *fn = "records.txt";
    
    // Define initial student data
    struct S students[] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 78.0},
        {"Charlie", 103, 92.25}
    };
    int c = sizeof(students) / sizeof(students[0]);

    // 1. Write records to file
    w_r(fn, students, c);

    // 2. Read records from file and display
    r_r(fn);

    return 0;
}