#include <iostream>
using namespace std;
class number
{
    public:
    int side;
    int square;
    int cube;
};

int main()
{
    number n;
    cout<<"Enter the side: ";
    cin>>n.side;
    
    n.square=n.side*n.side;
    n.cube=n.side*n.side*n.side;
    
    cout<<"The square value is: "<<n.square<<endl;
    cout<<"The cube value is: "<<n.cube<<endl;
    return 0;
}
