//
// Created by yashs on 29-02-2024.
//

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;

    cin >> t;

    while(t--){

        int n;

        cin >> n;

        int arr[n];

        map<int, int> mp;

        for(int i = 0; i < n; i++){

            cin >> arr[i];

            mp[arr[i]]++;

        }



        cout << mp.size() << endl;

    }

    return 0;

}