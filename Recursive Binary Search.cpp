#include <iostream>
#include <time.h>
using namespace std;
int num = 150; int size = 200;

int recursive_binsearch (int arr[],int l,int h,int step)
{
    int mid = (l+h)/2;          int ans;
    printf("Step %d:Low = %d, Mid = %d, High = %d\n",step,l,mid,h);
        if      (num==arr[mid]) {ans = mid;     return ans;}
        else if (num==l)        {ans = l;       return ans;}
        else if (num==h)        {ans = h;       return ans;}
        else if (num<arr[mid])  {ans = recursive_binsearch(arr,l,mid-1,step+1) ;}
        else if (num>arr[mid])  {ans = recursive_binsearch(arr,mid+1,h,step+1) ;}
        return ans;
}

int main()
{
    clock_t  begin = clock(); 
    int a[size];    int i=0;
    
    for (i=0;i<size;i++)  { a[i]=i; }
    int l = 0   ;       int h = i;
    int step = 1;       int ans;
    ans = recursive_binsearch(a,l,h,step);
    cout<< "\nPosition of " <<num<<" is "<< ans << endl;
    
    clock_t end = clock();
    double ti=double(end - begin)/CLOCKS_PER_SEC;
    cout << "\nProcessing Time: "<< ti<< endl;
    return 0;   
}
