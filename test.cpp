#include<iostream>
#include<string>
using namespace std;
class Sphere{
    
    public:
    Sphere(){
        cout<<"sdfghj"<<endl;
    }
    ~Sphere(){
        cout<<"qwerty"<<endl;
    }
};
struct f{
    int aa=10;
};
int main(){
    Sphere aasd;
    struct f q;
    cout<<sizeof(q)<<endl;
    cout<<sizeof(aasd)<<endl;
    char m='a';
    char *p=&m;
    cout<<sizeof(m)<<endl;
    return 0;
}