#include <vector>

std::vector<int> increaseVector(std::vector<int> vec, int n) {
    for (int &num : vec) {
        num += n;
    }
    return vec;
}
