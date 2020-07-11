#include "tic_tac_toe.h"

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
  std::string repeat;

	do //do while all of program
	{
	
		do //initializing the player
		{
		std::cout<<"Enter X or O: ";
		std::cin>>player;

		if(player != "X" && player != "O")
		{
			std::cout<<"That wasn't an X or an O."<<"\n";
		}

		}while(player != "X" && player != "O");

		tic_tac_toe.start_game(player);


    do //do while playing game
    {
	      int position;
	      std::cout<<"Enter position from 1 to 9";
	      std::cin>>position;
	      tic_tac_toe.mark_board(position);
	      tic_tac_toe.display_board();

    } while (tic_tac_toe.game_over() == false);

    std::cout<<"Game Over"<<"\n";
    std::cout<<"Winner: "<<tic_tac_toe.get_winner()<<"\n";

    //asks user to repeat program or not
    std::cout<<"Enter y or Y to play the game again: ";
    std::cin>>repeat;
    std::cout<<"\n"


  }while (repeat== "y" || repeat == "Y");
	return 0;
}