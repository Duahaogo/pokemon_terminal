#include<iostream>
#include<string>
//#include<windows.h>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
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
    }else if(x==4){
      defence=5;attack=10;
    }else{
      std::cout<<"搞毛啊，错了错了。"<<std::endl;
      system("pause");
      exit(-1);
    }
  }
  std::string get_name(){
    return name;
  }
};

int main(){
  creature pat("爱酱"),enemy("马鹿酱");
  std::cout<<"战斗开始啦宝贝!"<<std::endl;
  //Sleep(1000);
  while(pat.get_data(1)&&enemy.get_data(1)){
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"live    "<<"attack  "<<"defence "<<std::endl;
    std::cout<<std::left<<std::setw(8)<<pat.get_data(1)<<std::setw(8)<<pat.get_data(2)<<std::setw(8)<<pat.get_data(3)<<std::endl;
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
    if(choose==2){
      pat.change_data(3,-2);
      std::cout<<"小美选择了防御，"<<pat.get_name()<<"的防御力增加了2点"<<std::endl;
      
    }else if(choose==1){
      std::cout<<"请选择你要发动的技能，普攻（1）、战技（2）、绝技（3）"<<std::endl;
      int ski;
      std::cin>>ski;
      while(!(ski==1||ski==2||ski==3)){
        std::cout<<"重来，普攻（1）、战技（2）、绝技（3）?"<<std::endl;
        std::cin>>ski;
      }
      
      std::cout<<pat.get_name()<<"对"<<enemy.get_name()<<"造成了"<<pat.skill_attack(2)-enemy.get_data(3)<<"点伤害"<<std::endl;
      std::cout<<enemy.get_name()<<"的生命值降至"<<enemy.get_data(1)<<std::endl;
      enemy.change_data(1,pat.skill_attack(2)-enemy.get_data(3));
    }

    std::cout<<"现在是小帅的回合"<<std::endl;
    srand(time(0));
    int choose_enemy=rand()%2+1;
    if(choose_enemy==2){
      enemy.change_data(3,-2);
      std::cout<<"小帅选择了防御，"<<enemy.get_name()<<"的防御力增加了2点"<<std::endl;
      
    }else if(choose_enemy==1){
      int ski=rand()%3+1;
      
      std::cout<<enemy.get_name()<<"对"<<pat.get_name()<<"造成了"<<enemy.skill_attack(ski)-pat.get_data(3)<<"点伤害"<<std::endl;
      std::cout<<pat.get_name()<<"的生命值降至"<<pat.get_data(1)<<std::endl;
      pat.change_data(1,enemy.skill_attack(ski)-pat.get_data(3));
    }
    pat.change_data(4,0);
    enemy.change_data(4,0);
    
  }
  if(pat.get_data(1)==0){
    std::cout<<"cainiao,hhhh";
  }else{
    std::cout<<"有点东西。";
  }
  //system("pause");
    
}




