/*#include <iostream>

using namespace std;

class GasHolder
{
private:
    float v;
    float mu;
    float T;
public:
    GasHolder(float v)
    {
        this->v = v;
        T = 273;
    };
    void inject(float m, float M)
    {
        mu += m/M;
    };
    void cool (float dT)
    {
        T -= dT;
        if (T < 0)
            T = 0;
    };
    void heat (float dT)
    {
        T += dT;
    }
    float getPressure()
    {
        return mu*8.31*T/v;
    }
};

int main()
{
    GasHolder h(1.0);

h.inject(29, 29);

cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;

h.inject(29, 29);

cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;

h.heat(273);

cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;

h.cool(373);

cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;

h.cool(373);

cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
}
*/
