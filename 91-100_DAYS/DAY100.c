/*Use pointer to struct to modify and display data using -> operator.
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
Explanation 1:
Pointer to structure accesses and modifies data using the arrow (->) operator.
*/
#include <stdio.h>
#include <string.h>

// Define the structure for a student record
struct S {
    char n[50]; // n: name
    int r;      // r: roll number
    int m;      // m: marks
};

// Function to display the structure data using a pointer
void d_s(struct S *p) {
    // Access members using the arrow operator (->)
    printf("Name: %s | Roll: %d | Marks: %d\n", p->n, p->r, p->m); 
}

// Function to modify the structure data using a pointer
void m_s(struct S *p, const char *new_n, int new_r, int new_m) {
    // Modify members using the arrow operator (->)
    strcpy(p->n, new_n); 
    p->r = new_r; 
    p->m = new_m; 
}

int main() {
    // Create an instance of the struct
    struct S student = {"Alice", 101, 85}; 
    
    // p: pointer to the struct S
    struct S *p = &student; 
    
    printf("--- Initial Data ---\n");
    // Display initial data
    d_s(p); 

    // Define new values
    const char *new_name = "John";
    int new_roll = 106;
    int new_marks = 91;

    // Modify the data using the pointer and arrow operator
    m_s(p, new_name, new_roll, new_marks); 

    printf("\n--- Modified Data ---\n");
    // Display modified data
    d_s(p); // Output: Name: John | Roll: 106 | Marks: 91

    return 0;
}