#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

class pairr{
    public:
    int extermeprint(vector<int> arr)
    {
        int start=0;
        int end=arr.size()-1;

        while (start<=end)
        {
            if(start>end)
                break;
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            start++;
            end--;
        }
        
    }

    


};

int main()
{
    pairr p1;

    vector<int> barr{10,20,30,40,50};

    p1.extermeprint(barr);


int main=INT_MIN;




    return 0;
}