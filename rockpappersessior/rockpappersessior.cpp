#include <iostream>
#include <ctime>
char takeuserchoice();
char computerchoice();
void findwinner(char player,char computer);
int main(){
           char a = takeuserchoice();
           char b = computerchoice();
           findwinner(a,b);
}    
char takeuserchoice(){
    char player;
        std :: cout << "welcome to rock papper seesior game:\n";
       do{ std :: cout << "select from given option:\n";
        std :: cout << "**************************\n";
        std :: cout << "'r' for rock\n";
        std :: cout << "'p' for paper\n";
        std :: cout << "'s' for sessior\n";
        std :: cout << "**************************\n";
        std :: cin >> player;
        

         }while( player != 'r' && player != 'p' && player != 's');
    
    switch(player){
        case 'r':std :: cout << "Your choice is rock\n";
                 break;
        case 'p':std :: cout << "Your choice is paper\n";
                 break;
        case 's':std :: cout << "Your choice is sessior\n";
                 
    }

    return player;

}   
char computerchoice(){
                      char computer;
                      srand(time(NULL));
                      computer = (rand() % 3)+1;
                      switch(computer){
                        case 1:std :: cout << "Computer choice is rock\n";
                               return 'r';
                               break;
                        case 2:std :: cout << "Computer choice is sessior\n";
                               return 's';
                               break;
                        case 3:std :: cout << "computer choice is paper\n";
                               return 'p';
                               break;
                      }

}
void findwinner(char player,char computer){
    switch(player){
        case 'r':if(computer == 'r'){
                 std :: cout << "It's a tie";
                 }
                 else if( computer == 's'){
                    std :: cout << "Congrats! You win";
                 }
                 else if( computer == 'p'){
                    std :: cout << "opps! You lost";
                 }
                 break;
        case 'p':if(computer == 'p'){
                 std :: cout << "It's a tie";
                 }
                 else if( computer == 'r'){
                    std :: cout << "Congrats! You win";
                 }
                 else if( computer == 's'){
                    std :: cout << "opps! You lost";
                 }
                 break;
        case 's':if(computer == 's'){
                 std :: cout << "It's a tie";
                 }
                 else if( computer == 'p'){
                    std :: cout << "Congrats! You win";
                 }
                 else if( computer == 'r'){
                    std :: cout << "opps! you lost";
                 }
    }
}