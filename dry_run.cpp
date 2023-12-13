#include<bits/stdc++.h>
using namespace std;

class arrayy
{
    private:
    int arr[10]={0};
    int size=0;

    public:

    void insert(int index,int value)
    {
        arr[index]=value;
        size++;
    }

    void display()
    {
        for (int i = 0; i < 10; i++)
        {   
            cout<<arr[i]<<" ";
        }
        
    }

    void sames()
    {
        memset(arr,0,sizeof(arr));
        
    }
};



int main()
{
    arrayy a1;
    //a1.insert(0,1000);
    //a1.sames();
    a1.display();



    return 0;
}