#include <iostream>

using namespace std;

class Turtle
{
    private:
        string type;
        int age;

    public:
        void setType(string t);
        string getType();
        void setAge(int a);
        int getAge();
};
