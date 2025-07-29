#include <stdio.h>

// Define a structure to store student data
struct Student {
    int roll_no;
    float percentage;
};

int main() {
    struct Student students[100];
    int n, i;
    int topper_index = 0;

    printf("Enter the number of students in your class: \n");
    scanf("%d", &n);

    // Input data for each student
    for (i = 0; i < n; i++) {
        printf("Enter details for Student %d\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // Find the index of the topper
    for (i = 1; i < n; i++) {
        if (students[i].percentage > students[topper_index].percentage) {
            topper_index = i;
        }
    }

    // Display the roll number of the topper
    printf("Topper of the class is Roll No: %d \n",
           students[topper_index].roll_no);

    return 0;
}