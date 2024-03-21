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
    //f(t)=atan(bt)+c
    anal = a * b / pow(cos((b * t)), 2);
    num = (a * tan(b * (t + dt)) - a * tan(b * t)) / dt;
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100) << "%" << endl;

    //적분
    float t1, t2, N;
    cout << "a,b,c: ";
    cin >> a >> b >> c;
    cout << "t1,t2,N: ";
    cin >> t1 >> t2 >> N;
    anal = a / b * (log(abs(pow(cos(b * t2), -1))) + log(abs(pow(cos(b * t1), -1)))) + c * (t2 - t1);
    dt = (t2 - t1) / N;
    num = 0;
    for (int i = 0; i < N; i++)
    {
        num += (a * tan(b * (t1 + i * dt)) + c) * dt;
    }
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100) << "%";
}