//
//  AOCV211.hpp
//  codechef_cpp
//
//  Created by Yash Saxena on 24/01/24.
//

#ifndef AOCV211_hpp
#define AOCV211_hpp

#include <stdio.h>
#include <vector>
#include "iostream"
using namespace std;

class Leave{
public:
    Leave();
    
    void storeUniqueElements(const int* inputArray, int size, std::unordered_map<int, bool>& hashMap, int*& uniqueElements, int& uniqueSize);
    void find_leave(vector<int>,int);
};
#endif /* AOCV211_hpp */
