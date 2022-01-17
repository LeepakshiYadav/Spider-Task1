#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

void func(long long int sum)     //formula taken into consideration is [(n)*(n+1)]/2      (sum of 1st n natural nos)
{
    int ans;
    int d=sqrt(1+8*(sum));      // calculation of discriminant
    ans=(d-1)/2;                // calculating positive root
    cout<<ans<<endl;            // showing result
}

int main()
{
    int r;                      //r: no of rooms
    cin>>r;
    long long int i,a;          //i: looping variable, a: no of boxes in current room
    for(i=0;i<r;i++)
    {
        cin>>a;
        func(a);                //calling func for each room by passing no of boxes in current room
    }

    return 0;
}
