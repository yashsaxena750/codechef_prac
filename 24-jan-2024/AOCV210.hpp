//
//  AOCV210.hpp
//  codechef_cpp
//
//  Created by Yash Saxena on 24/01/24.
//

#ifndef AOCV210_hpp
#define AOCV210_hpp

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
#endif /* AOCV210_hpp */
