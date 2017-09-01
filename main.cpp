#include <iostream>
// #include "..\Base\Base.h"
// #include "..\User\User.h"

using namespace std;

int main()
{
	// Menu

	BackToMenu:

	try
	{
		enum Menu
		{
			Continue = 1,
			NewGame,
			Rules,
			Exit
		};

		switch( User::Menu() ) // 0 = error
		{
			case Continue:

				// if( !data.CheckData() ) throw InPut::DamagedFiles();
				data.CheckData();

			break;

			case NewGame:

				//GUI and InPut
					//declaration
				int size;
				char* BotsChips;
				char* PlayersChips;
					//realization
				User::NewGame( size, BotsChips, PlayersChips );

				data.SetNewGame
				(
					size,
					BotsChips,
					PlayersChips
				);
				// till end
			break;

			case Rules:

				User::Rules();
			
			break;

			case Exit:

				// GUI::Exit(); // maybe
				return 0;
				// till end
			break;
		}

		data.CleanFile();

	}
	catch( InPut::DamagedFiles )
	{
		//BTM or use the Default
		GUI::Error::DamagedFiles();
		InPut::PressEnter();
		data.Default();
		goto BackToMenu;
	}
	catch( InPut::UnknownInput )
	{
		//error
		GUI::Error::UnknownInput();
		InPut::PressEnter();
		goto BackToMenu;
	}



	// Game

	GameCycle cycle;
	do
	{
		try
		{
			GUI::Field( data. );

			void Answer[3];
			if( Answer = InPut::Game() < 0 || Answer > 9)

		}
		catch( InPut::UnknownInput )
		{

		}
		catch(...)
		{

		}
	}
	while( cycle.FindWinner() ) // may be like that


	// Results

	return 0;
}
