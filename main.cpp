#include <iostream>
#include <vector>
#include <stdexcept> // invalid_argument
#include <algorithm> // for_each

<<<<<<< HEAD
#include "card.h"
#include "generTableau.h"
using namespace N;
=======
#include "../Poker/include/Card.h"
#include "../Poker/src/JeuEssai.cpp"

>>>>>>> upstream/main
using namespace std;

void show_card(const Card& c) {  // function:
  std::cout << c << ", " ;
}

<<<<<<< HEAD
=======
bool straight ()
{
 if
 cout << "c'est une suite" << endl


}

>>>>>>> upstream/main
void test_cards()
{
    cout << "Start of test for Card class" << endl ;
    Card c = Card(COEUR, DIX) ;
    cout << c << endl ;
<<<<<<< HEAD
    try {
        Card d = Card('Q', 100) ;
    }
    catch(const std::invalid_argument& ia) {
=======
    try
    {
        Card d = Card('Q', 100) ;
    }
    catch(const std::invalid_argument& ia) 
    {
>>>>>>> upstream/main
	  std::cerr << "Invalid argument: " << ia.what() << std::endl ;
    }

    std::vector<Card> hand ;
<<<<<<< HEAD
    try {
=======
    try 
    {
>>>>>>> upstream/main
        hand.push_back(Card('T', 10)) ;
        hand.push_back(Card('T', 3)) ;
        hand.push_back(Card('C', VALET)) ;
        hand.push_back(Card('P', ROI)) ;
        hand.push_back(Card('P', DAME)) ;
    }
<<<<<<< HEAD
    catch(const std::invalid_argument& ia) {
=======
    catch(const std::invalid_argument& ia) {**
>>>>>>> upstream/main
	  std::cerr << "Invalid argument: " << ia.what() << std::endl ;
    }
    std::cout << "--------- hand (for const Card&) --------------" << std::endl ;
    for(const Card& c: hand)
        show_card(c) ;
    std::cout << endl ;
    std::cout << "--------- == --------------" << std::endl ;
    std::cout << hand[0] << " == " << hand[1] << " -> " << (hand[0] == hand[1]) << std::endl ;

<<<<<<< HEAD
     for_each(hand.cbegin(), hand.cend(), show_card) ;
    std::cout << "--------- hand2 (for with auto) --------------" << std::endl ;
    try {
        std::vector<Card> hand2 = { Card('P', 9), Card(TREFLE, 7) } ;
         for(const Card& c: hand2)
=======
    // for_each(hand.cbegin(), hand.cend(), show_card) ;
    std::cout << "--------- hand2 (for with auto) --------------" << std::endl ;
    try {
        std::vector<Card> hand2 = { Card('P', 9), Card(TREFLE, 7) } ;
        // for(const Card& c: hand2)
>>>>>>> upstream/main
        for(auto c: hand2)

            show_card(c) ;
        std::cout << endl ;

        std::cout << "--------- == --------------" << std::endl ;
        hand2.push_back(hand2[1]) ;
        std::cout << hand2[1] << " == " << hand2[2] << " -> " << (hand2[1] == hand2[2]) << std::endl ;
    }
    catch(const std::invalid_argument& ia) {
	  std::cerr << "Invalid argument: " << ia.what() << std::endl ;
    }
    catch(const std::exception& e) {
	  std::cerr << "Exception: " << e.what() << std::endl ;
    }
    std::cout << "--------- static of Card --------------" << std::endl ;
    cout << Card::StringColors[TREFLE] << std::endl ;
    cout << Card::StringValues[UN] << std::endl ;
    cout << hand[3] << " vs " << hand[3].Getm_str() << std::endl ;
<<<<<<< HEAD

}

/*void GenerJeuxCarte(){


    Card *JeuxCarte[52];
    int carte;
    int tmp = 0;


    for(int a = 1; a<5; a++){
        for(int i = 2 ; i < 15; i++){
            tmp = tmp+1;
 //   cout << tmp << endl;

            if (a==1){
                carte = 67;
               // cout << carte << endl;
            }else if (a==2){
             carte = 75;
                       //      cout << carte << endl;
            }else if (a==3){
             carte = 80;
                      //       cout << carte << endl;
            }else if (a==4){
             carte = 84;
                           //  cout << carte << endl;
            }

            JeuxCarte[tmp]=new Card(carte,i);

            cout << *JeuxCarte[tmp] << endl;



    }

}


//    cout << JeuxCarte[4] << endl ;

}*/

int main()
{
    Carte J1;
    J1.GenerJeuxCarte();
    std::cout << "Hello world!" << std::endl;
    test_cards() ;
    return 0;
}


=======
}
int main(void)
{
    std::cout << "Hello world!" << std::endl;
    //test_cards() ;
    JeuEssai();
    return 0;
}
>>>>>>> upstream/main
