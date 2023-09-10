#include "utils.h"
#include "assert.h"

int main() {
    assert(321 == reversed(123));
    //already give compliation error for input as string so it is commented out
    //assert(321 == reversed("123"));
    assert(321 == reversed(123.00));

    auto[binary, octal] = formatter(123);
    assert(binary == 1111011 && octal == 173);
    //already give compliation error for input as string so it is commented out
    //auto[binary2, octal2] = formatter("123");
    //assert(binary == 1111011 && octal == 173);
    auto[binary3, octal3] = formatter(123.00);
    assert(binary == 1111011 && octal == 173);
    return 0;
}