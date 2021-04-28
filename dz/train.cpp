/*#include <iostream>
#include <string>

using namespace std;

class Train
{
private:
    float mass;
    float velocity;
    float x;
public:
    Train(double mass)
    {
        this->mass = mass;
    };
    void move_train(double dt)
    {
        x += velocity*dt;
    };
    void accelerate(double dp)
    {
        velocity += dp/mass;
    }
    double get_x()
    {
        return x;
    }
};

int main()
{
    Train t(10);
    t.accelerate(1);

    t.move_train(1);

    cout << "Current X: " << t.get_x() << endl;

    t.move_train(1);

    cout << "Current X: " << t.get_x() << endl;

    t.accelerate(-2);

    t.move_train(3);

    cout << "Current X: " << t.get_x() << endl;
}*/
