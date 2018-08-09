#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/range/irange.hpp>
#include <iostream>
#include <ctime>
#define boundries(x) x.begin(), x.end()


using namespace std;
using namespace boost;


template <typename T>
std::ostream& operator<< (std::ostream& out, const std::vector<T>& v) {
    if ( !v.empty() ) {
        out << '[';
        std::copy (v.begin(), v.end(), std::ostream_iterator<T>(out, ", "));
        out << "\b\b]";
    }
    return out;
}

vector<int> naiveElimination(std::vector<int> input){
    vector<int> result;
    for(auto& e : input){
        if(std::count(result.begin(),result.end(), e) == 0){
            result.push_back(e);
        }
    }
    sort(boundries(result));
    return result;
}

std::vector<int> makeRandomVector(int size, int lower = 0, int upper = 1000){
    assert(lower<upper);
    srand(std::time(nullptr));
    vector<int> result;
    for(auto i : irange(0,size)){
        result.push_back(rand()%(upper-lower + 1) + lower);
    }
    return result;
}


int main() {

    //todo
    //measure time, export data to csv, print graph
    cout<<naiveElimination(makeRandomVector(10,1,1500000))<<endl;
    return 0;
}