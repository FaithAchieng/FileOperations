#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp_write;
    char content[] = "This is a text file";

    // Open the file for writing
    fp_write = fopen("copy.txt", "w");
    if (fp_write == NULL) {
        perror("Error opening copy.txt for writing");
        return 1;
    }

    // Write the content to the file
    fwrite(content, 1, strlen(content), fp_write);

    // Close the write file
    fclose(fp_write);

    return 0;
}
