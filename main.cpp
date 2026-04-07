#include<iostream>
#include<string>

int main(){
  std::string x,temp;
  int m=40,n=40;
  while(n--){
    getline(std::cin,temp);
    x+=temp+'\n';
  };
  std::cout<<x;
  system("pause");
  return 0;
}


