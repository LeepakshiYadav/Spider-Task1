#include <iostream>
using namespace std;

int main()
{
    int st1,e1,st2,e2,t;                    //st1: start 1, e1: end 1 , st2: start 2, e2: end 2, t: temp
    cin>>st1>>e1>>st2>>e2;
    if(st1>st2)                             // if st1 is greater than st2
    {
        t=st1;                              //swap st1,e1 with st2,e2 respectively
        st1=st2;
        st2=t;
        t=e1;
        e1=e2;
        e2=t;
    }
    if(e1<=st2)                             //if end 1 is less than or equals to start2         (------------   **********) //no overlapping case
    {
        cout<<"0";                          //in this case common timing is 0, therefore swap 0
    }
    else
    {
        if(e1<e2)                           //if end 1 is less than end 2                       (-----------------
                                            //                                                                *****************)
        {
            cout<<e1-st2;                                                                       //overlapping is end 1 minus start 2
        }
        else
        {                                  //                                                   (--------------------------------------)
            cout<<e2-st2;                  //overlapping is end 2 minus start 2                              ****************
        }
    }
    return 0;
}
