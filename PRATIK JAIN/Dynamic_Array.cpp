#include<iostream>
using namespace std;

class Array
{
    private:
    int *array;
    int size;
    int capacity;

    public:

    Array()
    {
        array=new int[1];
        size=0;
        capacity=1;
        
    }

    int getsize()
    {
        return size;
    }

    int getcapacity()
    {
        return capacity;
    }

    void insertByshift(int index,int value)
    {
        if(size == capacity)
        {
            resize();
        }
        if(index >= capacity || index < 0)
        {
            cout<<"Index Does not Exist"<<endl;
        }

        for (int i = size; i>=index; i--)
        {
            array[i]=array[i-1];
        }
        array[index]=value;
        size++;
        
        
    }


    void inert(int index,int value)
    {
        if(size == capacity)
        {
            resize();
        }
        if(index >= capacity || index < 0)
        {
            cout<<"Index Does not Exist"<<endl;
        }
        array[index]=value;
        size++;
    }


    void resize()
    {
        int *temp=new int[2*size];

        for (int i = 0; i < size; i++)
        {
            temp[i]=array[i];
        }

        delete []array;
        array=temp;
        capacity=2*capacity;
        
    }


    void print()
    {
        cout<<"\nElements of Array :";
        for (int i = 0; i < size; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
        cout<<"size= "<<getsize()<<",Capacity= "<<getcapacity()<<endl;
    }



    void delete_at(int index)
    {
        if(index >=size) //
        {
            cout<<"Index Does not Exist"<<endl;
            return;
        }

        for (int i = index; i < size-1; i++)
        {
            array[i]=array[i+1];
        }
        size--;
        
    }


    void shrinktofit()
    {
        int *temp=new int[size];
        for (int i = 0; i < size; i++)
        {
            temp[i]=array[i];
        }
        delete []array;
        array=temp;
        capacity=size;

        
    }


    int search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if(array[i]==value)
            {
                return i;
            }
            return -1;
            
        }
        
    }

    ~Array()
    {
        delete []array;
        size=0;
        capacity=0;
        cout<<"Memory Deleted"<<endl;
    }
   

};

int main()
{
    Array a;
    int n;    
    a.inert(0,10);
    a.print();

    a.inert(1,20);
    a.print();

    a.inert(2,30);
    a.print();

    a.inert(3,40);
    a.print();

    a.inert(4,50);
    a.print();

    a.insertByshift(2,100);
    a.print();


    a.delete_at(1);
    a.shrinktofit();
    a.print();
    cout<<endl;
    int i; 
    i=a.search(10);

    if(a.search(i)!=-1)
    {
        cout<<"Element Found at "<<i<<endl;
    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }


    return 0;
}