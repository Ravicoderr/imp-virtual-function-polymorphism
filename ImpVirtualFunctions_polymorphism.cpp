#include <iostream>
using namespace std;
class shop
{
protected:
    int size;
    string fabric;

public:
    shop(int s, string f)
    {
        size = s;
        fabric = f;
    }
    virtual void display(){};
};

class girlsjeans : public shop
{
protected:
    int rate;

public:
    girlsjeans(int s, string f, int r) : shop(s, f)
    {
        rate = r;
    }
    void display()
    {
        cout << "the size of the pant is " << size << endl
             << "the fabric of the jeans is " << fabric
             << endl
             << "the rate of the girl jeans is " << rate;
    }
};
class boysjeans : public shop
{
protected:
    int rate;

public:
    boysjeans(int s, string f, int r) : shop(s, f)
    {
        rate = r;
    }
    void display()
    {
        cout << "the size of the pant is " << size << endl
             << "the fabric of the jeans is " << fabric
             << endl
             << "the rate of the boy jeans is " << rate;
    }
};
int main()
{
    int size, rate;
    string fabric;
    size = 32;
    rate = 12000;
    fabric = "cotton";
    girlsjeans girl(size, fabric, rate);
    rate = 1000;
    boysjeans boy(size, fabric, rate);

    shop *ptr[2];
    ptr[0] = &girl;
    ptr[1] = &boy;
    ptr[0]->display();
    cout << endl;
    ptr[1]->display();

    return 0;
}