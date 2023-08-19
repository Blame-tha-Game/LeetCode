#ifndef BETTERSOLUTION_H
#define BETTERSOLUTION_H

struct betterstruct
{
    int primary, secondary;
    betterstruct(int primary, int secondary) : primary(primary), secondary(secondary) {}
};

void printStructVector (vector<betterstruct> printvector);

#endif