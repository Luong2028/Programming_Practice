#include <stdio.h>
#include <assert.h>

const short FLAG_ON = 1 << 0;
const short FLAG_MOVEMENT = 1 << 1;
const short FLAG_TRANSPARENT = 1 << 2;
const short FLAG_ALIVE = 1 << 3;
const short FLAG_BROKEN = 1 << 4;
const short FLAG_EDIBLE = 1 << 5;

int main(){
    short attributes = 0;

    attributes = FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN;
    assert(attributes = (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN));

    attributes = FLAG_ON | FLAG_ALIVE;
    assert(attributes = (FLAG_ON | FLAG_ALIVE));

    assert(attributes & FLAG_ALIVE);

    assert(!(attributes & FLAG_BROKEN));

    attributes = FLAG_EDIBLE;
    assert(attributes == FLAG_EDIBLE);

    printf("Done!");
    return 0;
}