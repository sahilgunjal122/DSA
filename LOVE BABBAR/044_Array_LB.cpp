#include<bits/stdc++.h>
using namespace std;

class arrayy
{
    private:
    int arr[10]={1,0,1,0,0,1,0,1,1,1};
    int arr1[10]={100,45,56,39,41,9,4,33,88,12};
    int arr2[5]={10,20,30,40,50};
    int size=10;
    int oddsize=5;
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
        int max=INT_MIN; //INT_MIN is the lowest value of the integer 2^-31

        for (int i = 0; i < size; i++)
        {
            if(arr1[i]>max)
            {
                max=arr1[i];
            }
        }
        return max;
        
    }

    int min()
    {
        int min=INT_MAX;

        for (int i = 0; i < size; i++)
        {
            if(arr1[i]<min)
            {
                min=arr1[i];
            }
        }
        return min;
        
    }

    //First-last Number of Array(Even Case)
    int extermineprinteven()
    {
        cout<<"Exterm Print:"<<endl;
        int start=0;
        int end=size-1;

        while (start<=end)
        {
            if(start>end)
                break;
            cout<<arr1[start]<<" ";
            cout<<arr1[end]<<" ";
            start++;
            end--;
        }
        
    }

    //First-last Number of Array(Odd Case)
    int extermineprintodd()
    {
        cout<<"Exterm Print:"<<endl;
        int start=0;
        int end=oddsize-1;

        while (start<=end)
        {
            if(start>end)
                break;
            if(start==end)
            {
                cout<<arr2[start]<<" ";
            }
            else
            {
                cout<<arr2[start]<<" ";
                cout<<arr2[end]<<" ";
                
            }
            start++;
            end--;
        }
        
    }

    //reverse a Array

    void reverseArray()
    {
        cout<<"Reverse Array:"<<endl;
        int start=0;
        int end=oddsize-1;

        while (start<=end)
        {
            if(arr2[start]<arr2[end])
            {
                int temp;
                temp=arr2[start];
                arr2[start]=arr2[end];
                arr2[end]=temp;
            }
            //swap(arr2[start],arr2[end]);
            start++;
            end--;
        }
        
        
    }

    void displayarr()
    {
        for (int i = 0; i < 10; i++)
        {   
            cout<<arr[i]<<" ";
        }
        
    } 

    void displayarr1()
    {
        for (int i = 0; i < 10; i++)
        {   
            cout<<arr1[i]<<" ";
        }
        
    } 
    void displayarr2()
    {
        for (int i = 0; i < 5; i++)
        {   
            cout<<arr2[i]<<" ";
        }
        
    } 
};



int main()
{
    arrayy a1;
   
    a1.displayarr();
    cout<<"\n";
    a1.counttt();

    int max=a1.max();
    cout<<"\nThe Max Number in Array Two is "<<max;

    int min=a1.min();
    cout<<"\nThe Min Number in Array Two is "<<min;

    //Even Case
    cout<<endl;
    a1.displayarr1();
    cout<<"\n";
    a1.extermineprinteven();
    cout<<"\n";
    cout<<"\n";
    //Odd Case
    a1.displayarr2();
    cout<<"\n";
    a1.extermineprintodd();
    cout<<"\n";
    cout<<"\n";
    

    //Reverse an Array

    a1.displayarr2();
    cout<<endl;
    a1.reverseArray();
    a1.displayarr2();


    return 0;
}