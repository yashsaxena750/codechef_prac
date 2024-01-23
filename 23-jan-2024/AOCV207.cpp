//
//  AOCV207.cpp
//  codechef_cpp
//
//  Created by Yash Saxena on 23/01/24.
//
//                           /
//                          /
//       *         (__)    /
//        \        ( OO   /
//         \---\___/\_|\=/>
//         |        \===/>
//         | /______/  /
// _________\\_\\_____/____________________
//           ^  ^    /
//                  /
//                 /
//    Cow Circus: Tightrope walking

#include "AOCV207.hpp"

DUPEL::DUPEL(){
    
}

void DUPEL::storeUniqueElements(const int* inputArray, int size, std::unordered_map<int, bool>& hashMap, int*& uniqueElements, int& uniqueSize) {
    for (int i = 0; i < size; i++) {
        if (hashMap.find(inputArray[i]) == hashMap.end()) {
            hashMap[inputArray[i]] = true;
            uniqueElements[uniqueSize++] = inputArray[i];
        }
    }
}


void DUPEL::find_dup(int A[], int N)
{
    
       int arraySize = N;

       std::unordered_map<int, bool> hashMap;
       int* uniqueElements = new int[arraySize];
       int uniqueSize = 0;

       storeUniqueElements(A, arraySize, hashMap, uniqueElements,uniqueSize);

       for (int i = 0; i < uniqueSize; ++i) {
           std::cout << uniqueElements[i] << " ";
       }
       std::cout << std::endl;
    
}

int main()
{
    DUPEL obj;
    int t;
    cin >> t;
        
    while(t--)
    {
        int N;
        cin >> N;
        int A[N];
        for(int i=0; i < N; i++)
        {
            cin >> A[i];
        }
        
        obj.find_dup(A, N);
    }
    
}
