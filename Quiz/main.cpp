#include "DisplayManager.h"
using namespace std;

int main()
{
	cout << "main" <<endl;

	DisplayManager displayManager;
	// "1"을 "@"로 바꾸기
	cout << "converting ======" << endl;
	displayManager.replaceAlphabetCharacter();


	int nPrintCharacters = 5;

	displayManager.setScaledAlphabet();

	char inBuffer[500];
	cout << "input the word: " <<endl;
	cin.getline(inBuffer, 500);
	cout << "typed word: " << inBuffer <<endl;

	std::string strWord(inBuffer);

	cout << "=======================" << endl;
	for (int cnt = 0; cnt < strWord.size(); cnt++)
	{
		int idxCurrentAlphabet = displayManager.getAlphabetIdx(strWord[cnt]);
		displayManager.printVerticalScaledAlphabet(idxCurrentAlphabet);
		cout << endl;
	}

	return 0;
}