#include <iostream>
using namespace std;
class Box
{
private:
    int width;
    int height;

public:
    Box()
    {
        width = 10;
        height = 20;
    }
    Box(int h, int width)
    {
        height = h;
        this->width = width;
    }
    friend void printBox(Box &b);
};
void printBox(Box &b)
{
    cout << "Width: " << b.width << " height: " << b.height << endl;
}
int main()
{
    Box bOne;
    Box bTwo(4, 5);
    printBox(bOne);
    printBox(bTwo);

    return 0;
}