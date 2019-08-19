#include <iostream>
#include <string>

//This programs aims to calculate a value for PHI

using namespace std;

static const int n = 100;

class ratio {
    public:
        ratio(int a):result(a==0?0:a==1?1:a==2?1:ratio(a-1)+ratio(a-2))
            { /* empty */ }
    public:operator int(){return result;}
    private:int result;
};

int main() {
    for(int a=0;a<n;a++)
        cout << ratio(a) << "\n";
    return 0;
}
