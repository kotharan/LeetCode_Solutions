
#include <iostream>

using namespace std;
int arr[] = {6,4,2,5,3,5,6,7,1};
int n = sizeof(arr)/sizeof(arr[0]);
void swapit(int *arr,int a , int b)
    {
           int temp = arr[a];
           arr[a] = arr[b] ;
           arr[b] = temp;
    }

void bubbleSort(int arr[] , int size)
{
       for(int i = 0 ; i<size-1; i ++)
       {
           if(arr[i]>arr[i+1])
           {
               swapit(arr,i,i+1);
               bubbleSort(arr,size);
           }
       }


}

int main()
{
    bubbleSort(arr,n);
    for (i:arr)
    {
        cout<<i;
    }
    return 0;
}
