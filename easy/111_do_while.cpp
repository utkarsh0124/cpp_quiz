#include <iostream>

int main() {
    int i=1;
    do {
        std::cout << i;
        i++;
        if(i < 3) continue;
    } while(false);
    return 0;
}








































//A do...while(false) loop always executes exactly once,
//unless there’s a continue or break before reaching the end (but since the condition is false, the loop never repeats).
//
//continue skips to the loop condition check —
//but since the condition is false, the loop ends immediately.
