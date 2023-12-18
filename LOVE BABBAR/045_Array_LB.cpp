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

//Unique Number In an Array
int uniquenumber(vector<int> arr)
{
    int ans=0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans=ans^arr[i];    //XOR Return False when Elements are same Otherwise True.
    }
    return ans;
}

//UNION OF ARRAY

void UnionArray(vector<int> arr,vector<int> brr)
{
     vector<int> ans;
    //Elements of Array 1
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    //Elements of Array 2
    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }

    //Print Ans Array
    cout<<"Union of Numbers:"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}

//INTERSECTION OF ARRAY

int InterSectionArray(vector<int> arr,vector<int> brr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element=arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element==brr[j])
            {
                //mark
                brr[j]=-1;  //just for positive Numbers otherwise use INT_MIN
                ans.push_back(element);
            }
            
        }
        
    }
    cout<<"InterSection Array:"<<endl;
    for(auto value:ans)
    {
        cout<<value<<" "; 
    }
}



int main()
{
    // DynamicArray d1;
    // d1.function();  

    //UNIQUE NUMBER
//    int n;
//    cout<<"Enter the Size of the Array:"<<endl;
//    cin>>n;
//    vector<int> vec(n);

//     cout<<"Enter Elements:"<<endl;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cin>>vec[i];
//     }
//    int Result=uniquenumber(vec);
//    cout<<"The Unique Number is "<<Result<<endl;

    //UNION OF TWO ARRAY

    // vector<int> arr1{1,2,3,4,5};
    // vector<int> brr1{6,7};

    // UnionArray(arr1,brr1);


    //INTERSECTION OF ARRAY

    // vector<int> arr2{1,2,4,4,5};
    // vector<int> brr2{4,6,8,9};

    // InterSectionArray(arr2,brr2);
    

    



    



    
    
    
    
    return 0;
}