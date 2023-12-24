#include<iostream>
#include<limits.h> //for INT_MAX INT_MIN
#include<vector>
using namespace std;

class _2DArray{
    private:
    //Declaration
    //int arr[3][3];

    //Initialization
    //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr[3][3];
    
    public:

    void input(){
        cout<<"Enter Numbers:"<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        
    }

    void displayArray()
    {
        //Row-Wised Printing
        cout<<"Row Wised Printing:"<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            
        }

        //Column-Wised Printing
        cout<<"Coulumn Wised Printing:"<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
            
        }
        
    }

};


//ROW-SUM
void rowsum(int arr[][4],int row,int cols){
    cout<<"Row Sum:"<<endl;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < cols; j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"The Sum of Row "<<i<<" is:"<<sum<<endl;
        
    }
    

}

//COLUMN-SUM
void ColumnSum(int arr[][4],int row,int cols){
    cout<<"Column Sum:"<<endl;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < cols; j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"The Sum of Column "<<i<<" is:"<<sum<<endl;
        
    }
    

}

//LINEAR SEARCH

bool linearSearch(int arr[][4],int row,int cols,int Number){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]==Number)
            {
                return true;
            }
        }
        
    }
    return false;
    

}

//MAX NUMBER IN 2D-ARRAY

int MaxNumber(int arr[][4],int row,int cols)
{
    int max=INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        
    }
    return max;
    
}

//MIN NUMBER IN 2D-ARRAY

int MinNumber(int arr[][4],int row,int cols)
{
    int min=INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
        
    }
    return min;
    
}

//TRANSPOSE ARRAY

void printArray(int arr[][4],int row,int cols)
{
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int TransposeArray(int arr[][4],int row,int cols,int TransposeArrayyyy[][4])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            TransposeArrayyyy[j][i]=arr[i][j];
        }
        
    }
    
    
}

void function1(){
    vector<vector<int>> brr(5, vector<int>(5, -8));

    for (int i = 0; i < brr[3].size(); i++)
    {
        for (int j = 0; j < brr[3].size(); j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    


}

class _2DVectorArray{
    private:
    vector<vector<int> > arr;
    int row=3;
    int cols=5;
    //vector<vector<int>> brr(3, vector<int>(5, 0));

    public:

    void input(){
        vector<int> a{1,2,3,4};
        vector<int> b{5,6,7,8,55};
        vector<int> c{9,10,11,12};


        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);

    }

    void display(){
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
    }

};


int main()
{
    // _2DArray a1;
    // a1.input();
    // a1.displayArray();

    //ROW-SUM
    // int rows=4;
    // int cols=4;
    // int arr[4][4]={{1,2,3,4},
    //                 {5,6,7,8},
    //                 {9,10,11,12},
    //                 {13,14,15,16}
    // };
    // rowsum(arr,rows,cols);
    // ColumnSum(arr,rows,cols);

    //LINEAR SEARCH
    // int num;
    // cout<<"Enter Number to be search:"<<endl;
    // cin>>num;
    // int result=linearSearch(arr,rows,cols,num);

    // if(result==true)
    // {
    //     cout<<"Number Found"<<endl;
    // }
    // else{
    //     cout<<"Number Not Found"<<endl;
    // }

    //MAX NUMBER
    // int value=MaxNumber(arr,rows,cols);
    // cout<<"Maximum Number="<<value<<endl;

    //MIN NUMBER

    // int val=MinNumber(arr,rows,cols);
    // cout<<"Miniimum Number="<<val<<endl;

    //TRANSPOSE ARRAY
    // cout<<"Before:"<<endl;
    // printArray(arr,rows,cols);
    // int TransposeArrayyyy[4][4];
    // TransposeArray(arr,rows,cols,TransposeArrayyyy);
    // cout<<"After:"<<endl;
    // printArray(TransposeArrayyyy,rows,cols);


    _2DVectorArray v1;

    // v1.input();
    // v1.display();

    function1();
    











    return 0;
}