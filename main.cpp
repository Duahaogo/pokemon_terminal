#include<iostream>
#include<string>
#include<windows.h>
#include<iomanip>
class creature
{
private:
  int live,attack,defence;
  std::string name;
public:
  creature(std::string p,int a=100,int b=10,int c=5):name(p){
    live=a;
    attack=b;
    defence=c;
  }
  int get_data(int x){
    if(x==1){
      return live;
    }else if(x==2){
      return attack;
    }else if(x==3){
      return defence;
    }else{
      return -1;
    }
  }
  int skill_attack(int x){
    if(x==1){
      return attack;
    }else if(x==2){
      return attack*2;
    }else if(x==3){
      return attack*3;
    }else{
      return -1;
    }
  }
  int skill_defence(int x){
    if(x==1){
      return defence;
    }else if(x==2){
      return defence*2;
    }else if(x==3){
      return defence*3;
    }else{
      return -1;
    }
  }
  void change_data(int x,int off){
    if(x==1){
      live-=off;
      if(live<0) live=0;
    }else if(x==2){
      attack-=off;
      if(attack<0) live=0;
    }else if(x==3){
      defence-=off;
      if(defence<0) defence=0;
    }else{
      std::cout<<"搞毛啊，错了错了。"<<std::endl;
      system("pause");
      exit(-1);
    }
  }
};

int main(){
  creature pat("爱酱"),enemy("马鹿酱");
  std::cout<<"战斗开始啦宝贝!"<<std::endl;
  Sleep(1000);
  while(pat.get_data(1)&&enemy.get_data(1)){
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"live    "<<"attack  "<<"defence "<<std::endl;
    std::cout<<std::setw(8)<<pat.get_data(1)<<std::setw(8)<<pat.get_data(2)<<std::setw(8)<<pat.get_data(3)<<std::endl;
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"live    "<<"attack  "<<"defence "<<std::endl;
    std::cout<<std::setw(8)<<enemy.get_data(1)<<std::setw(8)<<enemy.get_data(2)<<std::setw(8)<<enemy.get_data(3)<<std::endl;
    std::cout<<"----------------------------------------\n"<<std::endl;
    std::cout<<"轮到你了，小美。"<<std::endl;
  
    std::cout<<"请输入宠物的技能方向,攻击(1)还是防御(2)?"<<std::endl;
    int choose;
    std::cin>>choose;
    while(!(choose==1||choose==2)){
      std::cout<<"重来，攻击(1)还是防御(2)?"<<std::endl;
      std::cin>>choose;
    }
    
  }

}


