#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp_seek;
    char buffer[256];
    size_t bytesRead;

    
    fp_seek = fopen("sample.txt", "r");
    if (fp_seek == NULL) {
        perror("Error opening sample.txt for seeking and reading");
        return 1;
    }

    
    fseek(fp_seek, 5, SEEK_SET);

    
    bytesRead = fread(buffer, 1, sizeof(buffer) - 1, fp_seek);
    buffer[bytesRead] = '\0';  

    printf("Content from the 5th byte: %s\n", buffer);

    
    fclose(fp_seek);

    return 0;
}
