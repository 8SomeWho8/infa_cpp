/*#include <iostream>
using namespace std;

class SpacePort
{
private:
    unsigned int SP_size;
    bool *a;
public:
    SpacePort(unsigned int SP_size)
    {
        this->SP_size = SP_size;
        a = new bool [SP_size];
        for (int i = 0; i < SP_size; i++)
            a[i] = true;
    }
    ~SpacePort()
    {
        delete [] a;
    }
    bool requestLanding(unsigned int dockNumber)
    {
        if (dockNumber < 0 || dockNumber >= SP_size)
            return false;
        if (a[dockNumber])
        {
            a[dockNumber] = false;
            return true;
        }
        else
            return false;
    }
    bool requestTakeoff(unsigned int dockNumber)
    {
        if (dockNumber < 0 || dockNumber >= SP_size)
            return false;
        if (!a[dockNumber])
        {
            a[dockNumber] = true;
            return true;
        }
        else
            return false;
    }

};

int main()
{
    SpacePort s(5);

    cout << boolalpha << s.requestLanding(0) << endl;

    cout << boolalpha << s.requestLanding(4) << endl;

    cout << boolalpha << s.requestLanding(5) << endl;

    cout << boolalpha << s.requestTakeoff(0) << endl;

    cout << boolalpha << s.requestTakeoff(4) << endl;

    cout << boolalpha << s.requestTakeoff(5) << endl;

}
*/
