#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "library.txt"

typedef struct {
    int id;
    char title[50];
    char author[50];
} Book;

// Function Prototypes
void addBook();
void displayBooks();
void searchBook();
void deleteBook();

int main() {
    int choice;

    while (1) {
        printf("\n=== Library Management System ===\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete Book by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Function to add a new book
void addBook() {
    FILE *file = fopen(FILE_NAME, "ab");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    Book newBook;
    printf("Enter Book ID: ");
    scanf("%d", &newBook.id);
    getchar();  // Clear buffer
    printf("Enter Book Title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; // Remove newline

    printf("Enter Author Name: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; // Remove newline

    fwrite(&newBook, sizeof(Book), 1, file);
    fclose(file);

    printf("Book added successfully!\n");
}

// Function to display all books
void displayBooks() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (!file) {
        printf("No books found!\n");
        return;
    }

    Book book;
    printf("\nID\tTitle\t\tAuthor\n");
    printf("-----------------------------------\n");
    while (fread(&book, sizeof(Book), 1, file)) {
        printf("%d\t%s\t%s\n", book.id, book.title, book.author);
    }
    fclose(file);
}

// Function to search a book by ID
void searchBook() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (!file) {
        printf("No books found!\n");
        return;
    }

    int id, found = 0;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    Book book;
    while (fread(&book, sizeof(Book), 1, file)) {
        if (book.id == id) {
            printf("\nBook Found!\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\n", book.id, book.title, book.author);
            found = 1;
            break;
        }
    }
    fclose(file);

    if (!found) {
        printf("Book not found!\n");
    }
}

// Function to delete a book by ID
void deleteBook() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (!file) {
        printf("No books found!\n");
        return;
    }

    int id, found = 0;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    FILE *tempFile = fopen("temp.dat", "wb");
    if (!tempFile) {
        printf("Error opening temporary file!\n");
        fclose(file);
        return;
    }

    Book book;
    while (fread(&book, sizeof(Book), 1, file)) {
        if (book.id == id) {
            found = 1;
        } else {
            fwrite(&book, sizeof(Book), 1, tempFile);
        }
    }
    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found) {
        printf("Book deleted successfully!\n");
    } else {
        printf("Book not found!\n");
    }
}
