#include <iostream>
#include<stdlib.h>
using namespace std;
void main()
{
    float a, b, c, d, t, dt, anal, num;
    //f(t)=at^3+bt^2+ct+d
    cout << "a,b,c,d: ";
    cin >> a >> b >> c >> d;
    cout << "t,dt: ";
    cin >> t >> dt;
    anal = 3 * a * pow(t, 2) + 2 * b * pow(t, 1) + c;
    num = (a * pow(t + dt, 3) + b * pow(t + dt, 2) + c * (t + dt) + d - a * pow(t, 3) - b * pow(t, 2) - c * t - d) / dt;
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100) << "%" << endl;

    //РћКа
    float t1, t2, N;
    cout << "a,b,c,d: ";
    cin >> a >> b >> c >> d;
    cout << "t1,t2,N: ";
    cin >> t1 >> t2 >> N;
    anal = (a / 4 * pow(t2, 4) + b / 3 * pow(t2, 3) + c / 2 * pow(t2, 2) + d * t2) - (a / 4 * pow(t1, 4) + b / 3 * pow(t1, 3) + c / 2 * pow(t1, 2) + d * t1);
    dt = (t2 - t1) / N;
    num = 0;
    for (int i = 0; i < N; i++)
    {
        num += (a * pow(t1+dt*i, 3) + b * pow(t1+i*dt, 2) + c * (t1+i*dt) + d) * dt;
    }
    cout << "anal: " << anal << " num: " << num << endl;
    cout << "error: " << abs((anal - num) / anal * 100) << "%";
}