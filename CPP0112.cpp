#include <iostream>
#include <math.h>
#include <iomanip>
#define ll long long 
using namespace std;
struct Point{
    double a,b;
};
void input( Point &p ){
    cin >> p.a >> p.b;
}
double distance( Point p, Point q){
    return sqrt(pow(p.a-q.a,2) + pow(p.b - q.b,2));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
