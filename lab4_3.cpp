#include <iostream>
using namespace std;
int findDivisor(int x)
{
    int i=x,y=0;
    while(i>1)
    {
        if(x%i==0)
        {
            y = i;
        }
        i--;
    }
    return y;
}
int main()
{
    int x;
    cin >> x;
    cout << findDivisor(x);
    return 0;

}
