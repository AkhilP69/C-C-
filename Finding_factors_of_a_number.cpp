#include <iostream>
using namespace std;

int main()
{
    int flag, i, n; int k = 0;
    cout <<"Enter number:"<<endl;
    cin >> n;
    int factors[n/2];
    flag = 0;
    for(i=2;i<(n/2)+1;i++)
    {
       if (n%i == 0){
           
           flag = 1;
           factors[k] = i;
           k=k+1;
       }
       
    }
     if (flag == 0)
        {
            cout << "The number " << n <<" is prime."<< endl;
        }
        else 
        { cout << "The number " << n <<" is NOT prime."<< endl;
            cout << n <<" is divisible by: ";  
            while(k>0){
                cout << factors[k-1]<<" " ;
                k--;
            }
                  
            
        }
        return 0;
}
