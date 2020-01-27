#include <iostream>
using namespace std;

int main(){

  string table_card, hand_cards, x;
  int flag = 0; //0 dont play, 1 play
  
  cin >> table_card;

  int i = 0;
  while(true){
    cin >> x;
    hand_cards = x;

    //evaluate the rank
    if(hand_cards[0] != table_card[0]){
      
      //evalute the suit
      if(hand_cards[1] != table_card[1]){
	
	//if there's some card that can be played it will be played
	if(flag != 1) flag = 0;
      }
      else  flag = 1;
    }
    else flag = 1; 
    
    if(cin.get() == '\n') break;
    i++;
  }

  if(flag == 0) cout << "NO" << endl;
  else cout << "YES" << endl;

  return 0;
}
