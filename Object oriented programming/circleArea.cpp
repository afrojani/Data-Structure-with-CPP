#include <bits/stdc++.h>
using namespace std;

class Circle
{
    double radius;
    const double PI = 3.141592653589793;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area()
    {
        return PI * radius * radius;
    }
};

int main()
{
    Circle c(5.0);
    double a = c.area();
    cout << a << endl;
    return 0;
}