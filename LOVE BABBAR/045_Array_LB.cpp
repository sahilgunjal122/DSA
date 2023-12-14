#include<iostream>
#include<vector>
using namespace std;

class DynamicArray
{
    //Practice/Learning
    public:
    void function()
    {
        vector<int> arr;
        int ans =(sizeof(arr)/(sizeof(int)));
        cout<<ans<<endl;

        arr.push_back(1);
        arr.push_back(2);
        arr.emplace_back(3);
        arr.emplace_back(4);
        arr.emplace_back(5);

        cout<<"Size of Array:"<<arr.size()<<endl;
        cout<<"Capacity of Array:"<<arr.capacity()<<endl;
        

        for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        } 

        arr.pop_back();
        cout<<endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }

        int n;
        cout<<"Enter the Size of Array:"<<endl;
        cin>>n;

        vector<int> brr(n,-1);

        cout<<"\nSize of b:"<<brr.size()<<endl;
        cout<<"Capacity of b:"<<brr.capacity()<<endl;

        for (int i = 0; i < brr.size(); i++)
        {
            cout<<brr[i]<<" ";
        }
        cout<<"\n";


        vector<int> crr{10,20,30,40};
        for (int i = 0; i < crr.size(); i++)
        {
            cout<<crr[i]<<" ";
        }

        cout<<"Is Vector Empty "<<crr.empty()<<endl;  // 0 for False





        
    }   

};

int uniquenumber(vector<int> arr)
{
    int ans=0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool ans=;
        for(int i=0;i<arr.size();i++)
        {
            ans=ans^arr[i];
        }
        return ans;
    }
};



int main()
{
    // DynamicArray d1;
    // d1.function();   

   int n;
   cout<<"Enter the Size of the Array:"<<endl;
   cin>>n;
   vector<int> vec(n);

    cout<<"Enter Elements:"<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cin>>vec[i];
    }
    

   int Result=uniquenumber(vec);
   cout<<"The Unique Number is "<<Result<<endl;

    
    
    
    
    
    return 0;
}