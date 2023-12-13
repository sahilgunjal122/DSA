#include<bits/stdc++.h>
using namespace std;

class Array
{
    private:
    int arr[10];
    int size=0;


    public:

    int insert(int index,int value)
    {
        arr[index]=value;
        size++;
    }

    int getindex(int index)
    {
        return arr[index];
    }

    int getsize()
    {
        return size;
    }

    int search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if(arr[i]==value)
            {
                return i;
            }
            
        }
        return -1; //number not found
        
    } 

    int deletee(int index)
    {
        for (int i = index; i < size; i++)
        {
            arr[i]=arr[i+1];
        }

        size--;
        
    }

    void display()
    {
        for (int i = 0; i <size;i++)
        {
            cout<<arr[i]<<" ";
        }
    
    }       
};

int main()
{
    Array a1;
    int n,x;
    cout<<"How Many Numbers You Want to Insert:";
    cin>>n;

    cout<<"Enter "<<n<<" Numbers:";
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a1.insert(i,x);
    }

    a1.display();
    int find;
    cout<<"\nEnter Number to be Search:";
    cin>>find;

    int result=a1.search(find);

    if(result != -1)
    {
        cout<<"Number Found at "<<result<<endl;
    }
    else
    {
        cout<<"Number Not Found";
    }

    int val;
    cout<<"Enter Index of The Number to be Deleted:";
    cin>>val;

    a1.deletee(val);
    a1.display();
    int value,index;
    cout<<"\nEnter Number To be Insert:";
    cin>>value;
    cout<<"\nEnter Number Index:";
    cin>>index;



    return 0;
}