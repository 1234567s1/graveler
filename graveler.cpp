#include <iostream>
#include <random>

int main(){
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0,3);
    int max = 0;
    long long rolls = 1000000000;
    for (long long i = 0; i<rolls; i++){
        int para = 0;
        for (int j = 0; j<231; j++){
            int val = distribution(generator);
            if (val == 0){
                para++;
            }
        }
        if (para > max){
            max = para;
        }
    }
    printf("Highest Ones Roll:%d\n", max);
    printf("Number of Roll Sessions: %lld\n", rolls);
    return 0;
}