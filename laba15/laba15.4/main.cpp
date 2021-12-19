#include <iostream>

using namespace std;

int Quater(float x, float y){
    if ((x > 0) and (y > 0)){
        return 1;
    }
    if ((x < 0) and (y > 0)){
        return 2;
    }
    if ((x < 0) and (y < 0)){
        return 3;
    }
    if ((x > 0) and (y < 0)){
        return 4;
    }
}
int main()
{
    float x,y;
    cin >> x >> y;
    cout << Quater(x,y);
}
