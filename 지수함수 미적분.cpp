#include <iostream>
#include<stdlib.h>
using namespace std;
void main()
{
    //미분
    float a, b, c, t, dt, anal, num;
    // f(t)=a*exp(bt)+c
    cout << "a,b,c: ";
    cin >> a >> b >> c;
    cout << "t,dt: ";
    cin >> t >> dt;
    anal = a * b * exp(b * t);
    num = (a * exp(b * (t + dt)) - a * exp(b * t)) / dt;
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100) << "%" << endl;

    //적분
    // f(t)=a*exp(bt)+c
    float i, t1, t2, N;
    cout << "t1,t2,N: ";
    cin >> t1 >> t2 >> N;
    anal = a / b * exp(b * t2) + c * t2 - a / b * exp(b * t1) - c * t1;
    dt = (t2 - t1) / N;
    num = 0;
    for (i = 0; i < N; i++)
    {
        num += (a * exp(b * (t1 + i * dt))) * dt;
    }
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100);
}
