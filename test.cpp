#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    char str[10];
    //cin.width(5);
    int w=4;
    while(cin>>setw(5)>>str){
        cout<<setw(w)<<str<<endl;
        ++w;
    }
   // system("pause");
    return 0;
}