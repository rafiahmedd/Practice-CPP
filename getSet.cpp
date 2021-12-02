#include <iostream>
#include <string>
using namespace std;

class runTest
{
    private:
        string name;
    public:
        void setName(string nam)
        {
            name=nam;
        }
        string getName()
        {
            return name;
        }
};



int main()
{
    runTest rt;

    rt.setName("Rafi");
    cout << rt.getName() << endl;
    int a;
    int b;
    int sum;

    cout << "Please input the number:" << endl;
    cin >> a;

    cout << "Please input the number" << endl;
    cin >> b;

    sum = a + b;

    cout << rt.getName() << " Your result is " << sum << endl;

    return 0;
}