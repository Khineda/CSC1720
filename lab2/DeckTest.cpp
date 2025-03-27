// DeckTest.cpp 
// Tests the Deck class 

#include"Card.h" 
#include"Deck.h" 

int main() 
{   
    Deck deck; 
    for(int i = 0; i < 52; i++)    
    { 
        Card card = deck.draw(); 
        cout << card.getName() << endl; 
    } 
    return 0; 
} 