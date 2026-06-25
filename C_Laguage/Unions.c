#include <stdio.h>

union intCharacters{
    char chars[21];
    int ints[6];
};

int main(){
    union intCharacters intCharacters = {.ints = {1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0} };
    printf("[");
    for(int i = 0; i < 19; i++){
        printf("%c, ", intCharacters.chars[i]);
    }
    printf("%c]\n", intCharacters.chars[19]);

    printf("%s", intCharacters.chars);

    return 0;
}