#include<bits/stdc++.h>
using namespace std;

class arrayy
{
    private:
    int arr[10]={1,0,1,0,0,1,0,1,1,1};
    int arr1[10]={100,45,56,39,41,9,4,33,88,12};
    int size=10;
    int numofZ=0;
    int numofO=0;
    public:

    void counttt()
    {
        for (int i = 0; i < size; i++)
        {
            if(arr[i]==0)
            {
                numofZ++;
            }
            if(arr[i]==1)
            {
                numofO++;
            }
        }

        cout<<"Zeros:"<<numofO<<endl;
        cout<<"Ones:"<<numofZ<<endl;
        
    }

    int max()
    {
        int max=INT_MIN;

        for (int i = 0; i < size; i++)
        {
            if(arr1[i]>max)
            {
                max=arr1[i];
            }
        }
        return max;
        
    }

    void display()
    {
        for (int i = 0; i < 10; i++)
        {   
            cout<<arr[i]<<" ";
        }
        
    }  
};



int main()
{
    arrayy a1;
   
    a1.display();
    cout<<"\n";
    a1.counttt();

    int result=a1.max();
    cout<<"\nThe Max Number in Array Two is "<<result;

    return 0;
}