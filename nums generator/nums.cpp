#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <fstream>

int main() {
    const int N = 10000;
    const int MAX = 99999;
    std::vector<int> numbers;

    // Create pool 1..MAX and pick first N
    for(int i = 1; i <= MAX; ++i) numbers.push_back(i);

    // Shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(numbers.begin(), numbers.end(), g);

    // Open file
    std::ofstream outfile("output.txt");
    if(!outfile){
        std::cerr << "Error opening file\n";
        return 1;
    }

    // Write first N numbers
    for(int i = 0; i < N; ++i){
        outfile << numbers[i] << " , ";
    }
    outfile.close();

    std::cout << "Generated " << N << " random numbers in output.txt\n";
    return 0;
}
