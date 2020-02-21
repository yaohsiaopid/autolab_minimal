#include <iostream>
#include "fibo.h"
int main(int argc, char* argv[]) {
    int x, score = 0;
    int test_cases[] = {-2,0,1,2,3,4,5,8,10,15}; 
    int gold[] =       {-1,0,1,1,2,3,5,21,55,610};
    for(int i = 0; i < 10; i++) {
        score += (fibo(test_cases[i]) == gold[i]);
    }
    printf("{\"scores:\" {\"Correctness\":%d}}\n", score*10);
    return 0;
}
