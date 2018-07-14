#include "DisplayManager.h"

using namespace std;

std::string DisplayManager::replaceAll(std::string &str, const std::string& from, const std::string& to)
{
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // from.length() > to.length()
    }
    return str;
}


void DisplayManager::replaceAlphabetCharacter()
{
	for (int i = 0; i < TOTAL_ALPHABET; i++)
	{
		for (int j = 0; j < HEIGHT_ALPHABET; j++) 
		{
			strAlphabet[i][j] = replaceAll(strAlphabet[i][j], "1", "@");
			// cout << strAlphabet[i][0] << endl;
		}
	}	
}

void DisplayManager::setScaledAlphabet()
{
	std::string curStr[TOTAL_ALPHABET][HEIGHT_ALPHABET];
	for (int i = 0; i < TOTAL_ALPHABET; i++)
	{

		// cout << "===============> scaling width result"<<endl;

		//가로 확대
		for (int j = 0; j < HEIGHT_ALPHABET; j++)
		{
			curStr[i][j] = replaceAll(strAlphabet[i][j], "0", "  ");
			curStr[i][j] = replaceAll(strAlphabet[i][j], "@", "@@");
			// cout << curStr[i][j] << endl;
		}
		// cout << "===============>"<<endl;


		//세로 확대(x6) -> 한 행을 6번 쓰기
		// int curIdx = 0;
		// cout << "scaled rate: " << SCALE_RATE_HEIGHT <<endl;
		// cout << "scaled height : " << SCALED_HEIGTH_ALPHABET <<endl;

		for (int curIdx = 0; curIdx < SCALED_HEIGTH_ALPHABET; curIdx+=SCALE_RATE_HEIGHT)
		{
			std::string strTemp = curStr[i][curIdx/SCALE_RATE_HEIGHT];
			for (int k = 0; k < SCALE_RATE_HEIGHT; k++)
			{
				scaledStrAlphabet[i][curIdx+k] = strTemp;
				// cout << scaledStrAlphabet[i][curIdx+k]<<endl;
			}
		}
	}
}

void DisplayManager::printHorizontalAlphabet()
{
	int nPrintCharacters = 5;
	for (int i = 0; i < HEIGHT_ALPHABET; i++)
	{
		for (int j = 0; j < nPrintCharacters; j++) 
		{
			cout << strAlphabet[j][i];
			cout << " ";
		}
		cout << endl;
	}
}

void DisplayManager::printHorizontalScaledAlphabet()
{
	int nPrintCharacters = 5;
	for (int i = 0; i < SCALED_HEIGTH_ALPHABET; i++)
	{
		for (int j = 0; j < nPrintCharacters; j++) 
		{
			cout << scaledStrAlphabet[j][i];
			cout << " ";
		}
		cout << endl;
	}
}

void DisplayManager::printVerticalScaledAlphabet(int idxAlphabet)
{

	// cout << "vertical ~~~" <<endl;
	for (int i = 0; i < SCALED_WIDTH_ALPHABET; i++)
	{
		for (int k = SCALED_HEIGTH_ALPHABET-1; k >= 0; k--)
		{
			std::string currentStr = scaledStrAlphabet[idxAlphabet][k];
			cout << currentStr[i];
		}
		cout << endl;
	}

}

int DisplayManager::getAlphabetIdx(char ch)
{
	int errVal = -1;

	if (ch >= 0x61) 
	{
		return ch - 0x61;
	}
	else if (ch >= 0x41)
	{
		return ch - 0x41;
	}
	else if (ch == ' ')
	{
		return TOTAL_ALPHABET-1;
	}
	else 
	{
		cout << "invalid character: " << ch << endl;
		return -1;
	}
return errVal;
}