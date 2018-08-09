#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/range/irange.hpp>

using namespace std;

std::vector<int> naiveElimination(std::vector<int> input){
    std::vector<int> result;
    for(auto& e : input){
        if(std::count(input.begin(),input.end(), e) == 1){
            result.push_back(e);
        }
    }
}

std::vector<int> makeRandomVector(int size){
    //for
}


int main() {

    return 0;
}