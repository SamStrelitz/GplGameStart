#include <iostream>

using namespace std;

class CPlayerCharacter
{
public:
	CPlayerCharacter(string sName)
	{
		GeneratePlayer(sName);
	}
	void GeneratePlayer(string sName)
	{
		sCharacterName = sName;
		iHitPoints = 50 + rand() % 50;
		iStamina = 50 + rand() % 50;
		iCharisma = rand() % 100;
	}

	void PrintCharacterInfo()
	{
		cout << "Character Info:\n";
		cout << iHitPoints << endl << iStamina << endl << iCharisma << endl;
	}
private:
	
	string sCharacterName;

	int iHitPoints;
	int iStamina;
	int iCharisma;
};

int main()
{
	srand(time(NULL));
	cout << "Enter your character's name: ";

	string sCharacterName;
	cin >> sCharacterName;

	cout << "Generating Character.\n";
	CPlayerCharacter oThePlayer(sCharacterName);

	cout << "Character Generated.\n";

	oThePlayer.PrintCharacterInfo();
	return 0;
}

