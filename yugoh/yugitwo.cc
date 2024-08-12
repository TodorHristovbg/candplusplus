#include <iostream>
#include <time.h>  
#include "card.h"
#include "Monster.h"
#include "Spell.h"
#include "EquipSpell.h"
#include "Board.h"
#include "Player.h"
#include "gameplay.h"


int main(){

    std::string name;

    std::cout<<"Name of first player"<<std::endl;
    std::cin>>name; 
    Player player1(name);
  


    std::cout<<"Name of second player"<<std::endl;
    std::cin>>name; 
    Player player2(name);

    whogoesfirst(&player1,&player2);
    


  //  Monster a("Blue eyes white dragon",3000,2000,4,&player1);
 // player1.Draw(&a);




    return 0;
}
