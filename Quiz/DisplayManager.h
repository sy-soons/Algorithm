#include <iostream>
#include <string>
#include "CharacterTable.h"

class DisplayManager 
{
public:
	DisplayManager()
	{
	}
	~DisplayManager()
	{
	}
	std::string replaceAll(std::string &str, const std::string& from, const std::string& to);
	void replaceAlphabetCharacter();
	void setScaledAlphabet();
	void printHorizontalAlphabet();
	void printHorizontalScaledAlphabet();
	void printVerticalScaledAlphabet(int idxAlphabet);
	int getAlphabetIdx(char ch);

private:
	std::string scaledStrAlphabet[TOTAL_ALPHABET][SCALED_HEIGTH_ALPHABET];
};