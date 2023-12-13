#include<iostream>
using namespace std;

class Array
{   
    private:
    int target=9;

    public:

    pair<int,int> search(int arr[],int n)
    {   
        for (int i = 0; i < n; i++)
        {
           for (int j = i+1; j < n; j++)
           {
                if(arr[i]+arr[j]==target)
                {
                    return make_pair(i,j);
                }
                
           }
           
        }
        return make_pair(-1,-1);
        
    }

};

int main()
{
   Array a;
   int n=5;
   int arr[]={2,7,11,15};
   pair<int,int> result=a.search(arr,n);

   if(result.first!=-1 && result.second!=-1)
   {
    cout<<"Found:"<<result.first<<" "<<result.second<<endl; 
   }
   else
   {
    cout<<"Not Found"<<endl;
   }


    return 0;
}