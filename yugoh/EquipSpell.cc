#include <iostream>
#include <string>
#include "EquipSpell.h"

EquipSpell::EquipSpell(std::string Name,int change, bool enemy){
    setname(Name);
    setchange(change);
    settarget(enemy);
}
 EquipSpell:: EquipSpell(){
        setname("DEFAULT");
    }
    void EquipSpell::setboard(Board* own){
        ownboard=own;
    }
    void EquipSpell::setchange(int change){
        Change=change;
    }
    int EquipSpell::getchange(){
        return Change;
    }

    void EquipSpell::settarget(bool enemy){
        Effectsenemy=enemy;
    }

    bool EquipSpell::gettarget(){
        return Effectsenemy;
    }


    void EquipSpell::effect(Monster* target){
        Target=target;
        target->changeattack(Change);

    }

    void EquipSpell::Display(){
        std::cout<<getname()<<" - adds "<<getchange()<<std::endl;
    }

    EquipSpell::~EquipSpell(){
        std::cout<<"SELF DESTRUCT WOWWA"<<std::endl;
       Target->changeattack(-Change);
    }
