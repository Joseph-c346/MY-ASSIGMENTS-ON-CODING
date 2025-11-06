/*
name :JOSEPH MUSE WABUGE
REG NO:PA106/G/29042
DESCRIPTION: program to check borrowed books tracking program
*/ 
#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LEN 256

int main() {
    char title[MAX_TITLE_LEN];

    printf("Enter the book title to borrow: ");
    // Read a line from user
    if (fgets(title, sizeof(title), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(title);
    if (len > 0 && title[len-1] == '\n') {
        title[len-1] = '\0';
    }

    // Open file in append mode
    FILE *fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening the file borrowed_books.txt.\n");
        return 1;
    }

    // Write the title to the file
    fprintf(fp, "%s\n", title);
    fclose(fp);

    printf("Book title \"%s\" has been successfully recorded!\n", title);

    return 0;
}