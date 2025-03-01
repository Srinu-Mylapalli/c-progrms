#include <stdio.h>
#include <stdlib.h>

#define FILENAME "students1.csv"

// Structure to store student data
struct Student {
    char name[50];
    int age;
    float grade;
};

// Function to write student data to a CSV file
void writeCSV() {
    FILE *file = fopen(FILENAME,"w");  // Open in write mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Writing the CSV header
    fprintf(file,"Name,Age,Grade\n");

    // Writing student data
    struct Student students[] = {
        {"Srujan",20,97.5},
        {"Bob",22,76.0},
        {"Charlie",21,92.3}
    };
    int numStudents = sizeof(students)/sizeof(students[0]);

    for (int i = 0;i<numStudents;i++) {
        fprintf(file,"%s,%d,%.2f\n",students[i].name,students[i].age,students[i].grade);
    }

    fclose(file);
    printf("CSV file written successfully.\n");
}

// Function to read and display student data from a CSV file
void readCSV() {
    FILE *file = fopen(FILENAME,"r");  // Open in read mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    char line[100];

    // Read and display the file content
    printf("\nStudent Records:\n");
    while (fgets(line,sizeof(line),file)) {
        printf("%s",line);
    }

    fclose(file);
}

int main() {
    writeCSV();  // Write data to CSV
    readCSV();   // Read and display CSV data
    return 0;
}
