

#include <stdlib.h>
#include <stdio.h>

int StringCopy(char* quelle, char* ziel);

int main() {
    
}

int StringCopy(char* quelle, char* ziel) {
    int index = 0;
    if (quelle[index] == 0x00)  {
        ziel[index] = quelle[index];

        return 0;
    }   else {
        while (quelle[index] != 0x00)
        {
            ziel[index] = quelle[index];
            index++;
        }
        return index;
        
    }
    
}