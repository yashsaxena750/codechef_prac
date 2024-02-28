//
// Created by yashs on 28-02-2024.
//

#include "STICK.h"

#include <bits/stdc++.h>

using namespace std;



int main()

{

    int t;

    cin >> t;

    while (t--)

    {

        int n;

        cin >> n;

        vector<int> a(n);



        for (int i = 0; i < n; i++)

        {

            cin >> a[i];

        }



        sort(a.begin(), a.end(), greater<int>());



        long int max_area = -1;

        bool found_rectangle = false;



        for (int i = 0; i < n - 1; i++)

        {

            if (a[i] == a[i + 1])

            {

                for (int j = i + 2; j < n - 1; j++)

                {

                    if (a[j] == a[j + 1])

                    {

                        max_area = a[i] * a[j];

                        found_rectangle = true;

                        break;

                    }

                }

                if (found_rectangle)

                {

                    break;

                }

            }

        }



        if (found_rectangle)

        {

            cout << max_area << endl;

        }

        else

        {

            cout << -1 << endl;

        }

    }

    return 0;

}

