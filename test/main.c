#include <stdio.h>
#include <stdlib.h>

void printBar(int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("#");
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("missing filename\n");
        return 0;
    }

    // open file
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("cannot open file\n");
        return 0;
    }

    // initialize counting array
    int counts[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int allCount = 0;

    // read every character in the file and count if it's a letter
    while (1) {
        int character = fgetc(file);
        if (character < 0) {
            // we reached end of file
            break;
        }
        if (character >= 'A' && character <= 'Z') {
            // we found a capital letter
            counts[character - 'A']++;
            allCount++;
        } else if (character >= 'a' && character <= 'z') {
            // we found a letter
            counts[character - 'a']++;
            allCount++;
        }
    }

    // close the file
    fclose(file);

    // print the results
    int i;
    for (i = 0; i < 26; i++) {
        printf("%c : %3d  ", (char)(i + 'A'), counts[i]);
        printBar((counts[i] * 300) / allCount);
        printf("\n");
    }
}