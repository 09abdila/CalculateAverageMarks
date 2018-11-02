#include <stdio.h>
int main() {
    // Initialize the marks
    int m1, m2, m3, m4;

    // Initialize the average
    float avg;

    // Display the type of program
    printf("Student Marks\n");

    // Obtain results from the user
    printf("\nEnter Mark 1: ");
    scanf("%i", &m1);

    printf("\nEnter Mark 2: ");
    scanf("%i", &m2);

    printf("\nEnter Mark 3: ");
    scanf("%i", &m3);

    printf("\nEnter Mark 4: ");
    scanf("%i", &m4);

    // Calculate the average
    avg = (m1 + m2 + m3 + m4) / 4 ;

    // Print the average to the user
    printf("\nThe average is = %.2f", avg);

    // If the student has got an average of 40 or over
    if (avg >= 40) {
        printf("\nThis Student has passed! Congratulations!!\n");
    }

    // If the student has got an average below 40
    else {
        printf("\nThis Student has failed. Try again next time.\n");
    }

    // Signal to OS everything is working fine
    return 0;

}
