#include "main.h"

int main()
{
  int want_to_game = 1;

  while(want_to_game)
  {
    printMenu();
    switch(choice)
    {
      case PLAY_IN_PAIRS:
	want_to_game = runGameInPairs();
	break;
      case PLAY_WITH_IA:
	want_to_game = runGameWithAI();
	break;
      case REVISUALIZE_GAME:
	want_to_game = revisualizeGame();
	break;
      case SETTINGS:
	want_to_game = settings();
	break;
      case RULES:
	want_to_game = printRules();
	break;
      case QUIT:
	want_to_game = 0;
	break;
      default:
	want_to_game = printErrorMessage();
	break;
    }
  }

  return EXIT_SUCCESS;
}
