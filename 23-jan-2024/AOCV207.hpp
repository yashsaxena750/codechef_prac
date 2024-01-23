//
//  AOCV207.hpp
//  codechef_cpp
//
//  Created by Yash Saxena on 23/01/24.
//

#ifndef AOCV207_hpp
#define AOCV207_hpp

#include <stdio.h>
#include <unordered_map>
#include <vector>
#include "iostream"
using namespace std;

class DUPEL{
public:
    DUPEL();
    
    void storeUniqueElements(const int* inputArray, int size, std::unordered_map<int, bool>& hashMap, int*& uniqueElements, int& uniqueSize);
    
    void find_dup(int[],int);
};

#endif /* AOCV207_hpp */
