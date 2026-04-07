#pragma once
#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
class creature{
private:
    int live,attack,defence,critical_rating,critical_chance,attribute,sensitive;
    
public:
    //初始化
    creature(int a=100,int b=10,int c=5,int d=2,int e=10,int f=0,int g=10):
    live(a),attack(b),defence(c),critical_rating(d),critical_chance(e),attribute(f),sensitive(g)
    {}

    int attack_plain();
    int attack_hard();
    int attack_ex();
    bool sensitive_success();
    bool critical_success();
};



class iron_tiger:public creature{
    std::string name;
public:
    iron_tiger():creature(),name("铁拳虎"){}
};

class tree_monkey:public creature{
    std::string name;
public:
    tree_monkey():creature(),name("木灵猴"){}
};

class ice_dear:public creature{
    std::string name;
public:
    ice_dear():creature(),name("冰晶鹿"){}
};

class fire_bird:public creature{
    std::string name;
public:
    fire_bird():creature(),name("火烈鸟"){}
};

class rock_bear:public creature{
    std::string name;
public:
    rock_bear():creature(),name("岩甲熊"){}
};


/*
起名，选择难度
剧情引导。
对局开始：
while（都还没输）｛
if（当前宠物死了｜｜还没有出战宠物）｛
    提供可选的出战宠物列表，并出战该宠物。
｝
if（对手死了｜｜还没有对战宠物）｛
    随机出战，根据难度选择，出战属性克制、相同/无克制、被克制的宠物。
｝
if（如果是第一回合）｛
    随机分配先手
｝
开始战斗！！！
打印当前局势信息：环境buff；我方：宠物名称、宠物属性、五大件；敌方：名称、属性、五大件

我方回合时：选择技能或跳过回合什么都不做，
敌方回合时：根据难度发动技能，简单时只用普通攻击和战技，普通时都用，困难时大量使用强力技能并有策略的战斗；
打印效果，如：暴击！闪避！伤害数值，克制情况

剧情模式下：
    此时通过判断回合数以及双方剩余生命值触发剧情函数。

进入下一回合，此时可以处理迭代器。
｝
结束时根据战斗结果，触发剧情。
*/
