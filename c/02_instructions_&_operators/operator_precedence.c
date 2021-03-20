#include <stdio.h>

int main()
{
    // priority//  1st- (*/%)
    //         //  2nd- (+-)
    //         //  3rd- (=)  in absence of paranthesis

    // if same priority list occur then operate according to left to right written

    int x = 8;
    int y = 2;
    printf(" the value of 3x-4y is %d\n ", 3 * x - 4 * y);
    printf("the value of 3x/4y is %d\n ", 3 * x / 4 * y); // not give true ans
    printf("the value of 3x/4y is %d\n ", (3 * x) / (4 * y));
    
    return 0;
}