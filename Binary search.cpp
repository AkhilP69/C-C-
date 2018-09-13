#include <iostream>
#include <time.h>
using namespace std;
int num = 200; int size = 200;
int binsearch(int arr[],int n){
    int l=0; int i=1;
    int h = n; int ans;
    int mid = (l+h)/2;
    printf("Step %d:Low = %d, Mid = %d, High = %d\n",i,l,mid,h);
    while(l<h){
        if      (num==arr[mid]) {ans = mid;     break;}
        else if (num==l)        {ans = l;       break;}
        else if (num==h)        {ans = h;       break;}
        else if (num<arr[mid])  { h  = mid-1;   mid = (l+h)/2;}
        else if (num>arr[mid])  { l  = mid +1;  mid = (l+h)/2;}
        i++;
        printf("Step %d:Low = %d, Mid = %d, High = %d\n",i,l,mid,h);
    }
    return ans;
}
int main(){
    clock_t  begin = clock(); 
    int a[size];
    int i=0;
    for (i=0;i<size;i++){
        a[i]=i;
    }
    cout<< a[0]<<endl;
    int ind = binsearch(a,i);
    
    cout<< "Position of " <<num<<" is "<< ind << endl;
    clock_t end = clock();
    double ti=double(end - begin)/CLOCKS_PER_SEC;
    cout << "Time: "<< ti<< endl;
    return 0;   
}
