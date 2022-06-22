#include<bits/stdc++.h>
using namespace std;

//Time complexity: 0(N), Space complexity: 0(N)

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){

        cin>>a[i];
    }

    int target;
    cin>>target;

    unordered_map<int, int>mapSum; // here in mapSum, as key I will put the value of a[i] and as value I will put the index of i
    vector<int>sumIndex; // here I will keept the indexes of two of sum values which is equal to the target.

    for(int i=0; i<n; i++){

        if(mapSum.find(target-a[i]) != mapSum.end()){ // here I try to find every time that in my mpSum array new value(target - a[i]) is available or not
            sumIndex.push_back(mapSum[target-a[i]]); //here I push the index number of the previous mapSum array value which is matched with new mapSum value.
            sumIndex.push_back(i); // here I push the current index value of array
            break;
        }
        mapSum[a[i]]=i; // here I put the value of a[i] into (hash map => mapSum) and I put the index i as value.
    }

    for(int i=0; i<sumIndex.size(); i++){

        cout<<sumIndex[i]<<" ";
    }

    return 0;
}
