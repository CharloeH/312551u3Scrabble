#include <iostream>
#include <string>
#include"ScrabbleLetter.h"
using namespace std;


class ScrabbleLetter
{
	public: 
		ScrabbleLetter(char L)
		{
			_letter = L;

			switch (_letter)
			{
			case 'J':
			case 'K':
			case 'Q':
			case 'X':
			case 'Z':
				_numberOfLetters = 1;
				break;
			case 'B':
			case 'C':
			case 'F':
			case 'H':
			case 'M':
			case 'P':
			case 'V':
			case 'W':
			case 'Y':
			case ' ':
				_numberOfLetters = 2;
				break;
			case 'G':
				_numberOfLetters = 3;
				break;
			case 'D':
			case 'L':
			case 'S':
			case 'U':
				_numberOfLetters = 4;
				break;
			case 'N':
			case 'R':
			case 'T':
				_numberOfLetters = 6;
				break;
			case 'O':
				_numberOfLetters = 8;
				break;
			case 'A':
			case 'I':
				_numberOfLetters = 9;
				break;
			case 'E':
				_numberOfLetters = 12;
				break;	

			default: 
				throw new exception("This character is not used in Scrabble");
			}
			switch (_letter)
			{


			case 'Q':
			case 'Z':
				_points = 10;
				break;
			case 'J':
			case 'X':
				_points = 8;
				break;
			case 'K':
				_points = 5;
				break;
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y':
				_points = 4;
				break;
			case 'B':
			case 'C':
			case 'M':
			case 'P':
				_points = 3;
				break;
			case 'G':
			case 'D':
				_points = 2;
				break;
			case 'L':
			case 'S':
			case 'U':
			case 'N':
			case 'R':
			case 'T':
			case 'O':
			case 'A':
			case 'I':
			case 'E':
				_points = 1;
				break;
			case ' ':
				_points = 0;
				break;
			default:
				throw new exception("This character is not used in Scrabble");
			}
		}
		char Letter()
		{
			return _letter;;
		}
		int NumberOfLetters()
		{
			return _numberOfLetters;
		}
		int Points()
		{
			return _points;
		}

		static int HowManyTiles(char L)
		{
			ScrabbleLetter s = ScrabbleLetter(L);
			return s.NumberOfLetters();
		}
	private:
		char _letter;
		int _numberOfLetters;
		int _points;


};


