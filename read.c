#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp_read;
    char buffer[256];
    size_t bytesRead;

    
    fp_read = fopen("sample.txt", "r");
    if (fp_read == NULL) {
        perror("Error opening sample.txt for reading");
        return 1;
    }

    
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), fp_read)) > 0) {
        buffer[bytesRead] = '\0'; 
        printf("%s", buffer);
    }

    // Close the read file
    fclose(fp_read);

    return 0;
}

