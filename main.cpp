/*CSC 478 - Deck of Cards Test
Author: Jenny Trippett
Date: 2-3-2016 */


#include <iostream>
#include <windows.h>
#include "Deck.h"

#define _In_

/*int WinMain(_In_ HINSTANCE hInstance,
  _In_ HINSTANCE hPrevInstance,
  _In_ LPSTR     lpCmdLine,
  _In_ int       nCmdShow){ */

int main() {

    Deck deck;
    for(int i = 0; i < 52; i++) {
        std::cout<<"The "<<deck.my_deck[i].value<<" of "<<deck.my_deck[i].suit<<"\r\n";
    }

    return 0;

}
