#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x;                        //n: max no till which prime nos are to be considered , x: min required harsh prime nos
    cin>>n>>x;
    int ar[10001]={0};              //index indicates the no, 0 indicates that it is prime(initially taking all are primes)
    int i,j;                        //looping variables
    vector<int> primes;
    for(i=3;i<=n;i=i+2)          //starting from 3 as we know 2+3+1 won't result in harsh prime no
    {
        if(ar[i]==0)                        //if current no is 0
        {
            primes.push_back(i);            //insert it array of primes
            for(j=(i*i);j<=n;j=j+i)      //marking current prime nos multiples as non prime
            {
                ar[j]=-1;                   //-1 indicates non prime
            }
        }
    }
    int no,count=0,l=primes.size();
    for(i=0;i<l-1;i++)
    {
        no=primes[i]+primes[i+1]+1;         //no: stores contender for harsh prime no
        if(no>n)                            //if greater than the max limit allowed
        {
            break;                          //break
        }
        else
        {
            for(j=i+2;j<l;j++)              //check if the no is in the list of primes
            {
                if(no==primes[j])           //if yes
                {
                    count++;                //increment count
                    break;                  //break loop for current contender
                }
                else if(no<primes[j])       //if the no is lesser than the current prime (no is not a harsh prime no)
                {
                    break;                  //break
                }
            }
        }
        if(count==x)                        //if required count is already achieved
        {
            break;                          //break
        }
    }

    if(x<=count)                            //if count is greater or equals to the required count
    {
        cout<<"YES";                        // output yes
    }
    else                                    //else
    {
        cout<<"NO";                         //output false
    }

    return 0;
}
