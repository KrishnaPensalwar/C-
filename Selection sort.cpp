//       SELECTION SORT

#include<iostream>
using namespace std;

int selection_sort()
{

}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int array[n];
    cout<<"Enetr the array:";
    for(int i = 0 ;i<n;i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]= temp;
            }

        }
    }

    cout<<"Sorted array is:";
    for(int i = 0 ;i<n;i++)
    {
        cout<<array[i]<<"  ";
    }
}


