#include"creature.h"
//在每次使用各种判定之前先初始化随机种子,要放到主程序里
void initRandom(){
    srand(time(0));
}

bool creature::critical_success(){
    int r=rand()%100;
    return r<critical_chance;
}

bool creature::sensitive_success(){
    int r=rand()%100;
    return r<sensitive;
}

int creature::attack_plain(){
    return attack;
}