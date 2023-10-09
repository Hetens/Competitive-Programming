#include <algorithm>
#include <numeric>
#include <vector>
#include<iostream>
#include<set>
int main() {
    std::vector<int64_t> A = {6 ,3, 1,1,1, 2, 5}; // Example input data
    std::multiset<int64_t> sprted(A.begin(), A.end());
    // Sort the elements in the vector A in ascending order
    std::sort(A.begin(), A.end());

    // Calculate the sum of elements in the vector A
    int64_t sum = std::accumulate(A.begin(), A.end(), INT64_C(0));

    // Print the sorted vector and the sum
    for (const int64_t& num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    sprted.insert(1);
    std::cout << "Sum: " << sum << std::endl;
    for(auto int64_t : sprted){
        std::cout<<int64_t<<" ";
    }

    return 0;
}
