#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

float circleArea(float r)
{
    return PI * r * r;
}

float circleCircumference(float r)
{
    return 2 * PI * r;
} 

// finding max

void getMax()
{

    int a = 12;
    int b = 13;
    int c = MAXX(a, b);
}

int main()
{
    cout << "Area is : " << circleArea(2.3) << endl;
    cout << "Circumference is : " << circleCircumference(2.5) << endl;
}