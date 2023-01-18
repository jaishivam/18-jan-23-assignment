#include <iostream>
using namespace std;

class numb {
public:
    int num;
    public:
    void getnumb(void)
    {
        cout << "enter a number: ";
        cin >> num;
    }
    int returnnumb(void)
    {
        return num;
    }
};
class square:public numb
{
public:
int numsquare()
{
	int num,sq;
	num=returnnumb();
	sq=num*num;
	return sq;
}
};
class cube:public numb 
{
public:
    int numcube(void)
    {
        int num,cube;
        num = returnnumb();
        cube = num * num * num;
        return cube;
    }
};
int main()
{
    square f;
    cube c;
    int sq,cube;
    f.getnumb();
    sq = f.numsquare();
    cout << "square of " << f.returnnumb() << "is = " <<sq<< endl;
    c.getnumb();
    cube = c.numcube();
    cout << "cube  of " << c.returnnumb() << "is = " <<cube<< endl;	
}
