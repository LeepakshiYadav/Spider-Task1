/*approach:-
In order to make him purchase max amount of toffees, we will want him to purchase the cheapest toffee first, then next cheapest toffee and so on.
We will stop when either no more toffees are left to be purchased or he don't have enough money to buy them.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;    //n: no of toffees , m: initial amount of money
    cin>>n>>m;
    vector<int> ar(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];             // ar array contains cost of each toffee
    }
    sort(ar.begin(),ar.end());      //will sort toffees in increasing order of their prices
    i=0;                            // i will store the max no of toffees that could be purchased; i initially contains 0
    while(m>=ar[i]&&i<n)            // We will stop when either no more toffees are left to be purchased or he don't have enough money to buy them.
    {
        m=m-ar[i];                  //money amount decreased if he purchases a toffee
        i++;                        //incrementing the count of toffees that could be purchased
    }
    cout<<i;                        //printing final answer
    return 0;
}
