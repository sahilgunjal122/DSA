#include<iostream>
using namespace std;

class Array
{
    private:
    int a[10];
    int size=0;

    public:

    void insert(int index,int value)
    {
       
        a[index]=value;
        size++;
    }

    int get(int index)
    {
        return a[index];
    }
    
    int getsize()
    {
        return size;
    }

    int search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if(a[i]==value)
            {
                return i;
            }
            else
            {
                return -1;
            }
        }
        
    }

    int del(int index)
    {
        for (int i = index; i < size-1; i++)
        {
            a[i]=a[i+1];
        }
        size--;
        
    }

    int printArray()
    {
        cout<<"The elements of array:"<<endl;
        for (int i = 0; i <size; i++)
        {
        cout<<a[i]<<" ";
        }


    }

    int insertParticular(int index,int value)
    {
        for (int i = index; i < size+1; i++)
        {
            a[i+1]=a[i];
        }
        a[index]==value;
        size++;
        
    }


};



int main()
{
    Array a1,a2;
    int n,x,index,value;
    cout<<"How many number want to insert:";
    cin>>n;

    cout<<"Enter "<<n<<" elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a1.insert(i,x);
    }

    a1.printArray();

    int size=a1.getsize();
    cout<<"\nThe size of the array is:"<<size;


    cout<<"\nEnter element want to search:";
    cin>>value;

    index =a1.search(value);
    if(index != -1)
    {
        cout<<"Element Found at "<<index;
        
    }
    else
    {
        cout<<"Element Not Found";
    }

    int in;
    cout<<"\nEnter the index to be Deleted:";
    cin>>in;


    a1.del(in);
    a1.printArray();

    int insert,inoo;
    cout<<"\nEnter Value To be add:";
    cin>>insert;
    cout<<"\nEnter Index:";
    cin>>inoo;
    a1.insertParticular(inoo,insert);

    a1.printArray();




    

    
    

    return 0;
}