#include <stdio.h>
#include "library.h"

int main(void) {
    hello();
    int a=111111;
    int b=222222;
    int result = add(a,b);
    printf("a+b=%d\n",result);
    int sub = subtract(b,a);
    printf("a-b=%d\n",sub);
    return 0;
}
