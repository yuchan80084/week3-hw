#include <iostream>
#include<stdlib.h>
using namespace std;
void main()
{
    float a, b, c, t, dt, anal, num;
    float func;
    //미분
    cout << "a,b,c:";
    cin >> a >> b >> c;
    cout << "t,dt";
    cin >> t >> dt;
    //f(t)=asin(bt)+c
    anal = a * b * cos(b * t);
    num = (a * sin(b * (t + dt)) - a * sin(b * t)) / dt;
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100) << "%" << endl;

    //적분
    float t1, t2, N;
    cout << "a,b,c: ";
    cin >> a >> b >> c;
    cout << "t1,t2,N: ";
    cin >> t1 >> t2 >> N;
    anal = -a / b * (cos(b * t2) - cos(b * t1)) + c * (t2 - t1);
    dt = (t2 - t1) / N;
    num = 0;
    for (int i = 0; i < N; i++)
    {
        num += (a * sin(b * (t1 + i * dt)) + c ) * dt;
    }
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100);
}


