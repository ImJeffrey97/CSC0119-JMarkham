#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomGen();

int main( ){
	srand(time(0));
	int heroHealth;
	int damage;
	int bossHealth;
	int randNum;
	int potion;
	int str;
	char usePotion;
	int numPotion;
	char key = 'n';
	char boots = 'n';
	char sword = 'n';
	char helmet = 'n';
	char soulGem = 'n';
	char breastplate = 'n';
	char points;
	int defend;
	string userAnswer;
	int low;
	int userInput;
	int books = 0;

	cout << "Guard: WELCOME TO PRISON, SCUM!" << endl;
	cout << "Sometime later..." << endl;
	cout << "Cell mate: Oh, you are finally awake." << endl;
	cout << "Cell mate: I'm too old to leave this place. Below the floor there are some items for your journey. " << endl;
	system("pause");

	randNum = rand() % (20 - 1) + 1;

	switch (randNum) {
	case 1:
		cout << "As you are picking up items from the floor, your cell mate shanks you in the back and you bleed out and die. Game over try again loser." << endl;
		system("pause");
		return 0;
		break;
	case 2:
	case 3:
	case 4:
	case 5:
		heroHealth = rand() % (50 - 1) + 1;
		cout << "Your starting health is: " << heroHealth << endl;
		str = rand() % (5 - 1) + 1;
		cout << "Your starting strength is: " << str << endl;
		potion = 1;
		cout << "You start with " << potion << " potion." << endl;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		heroHealth = rand() % (75 - 45) + 45;
		cout << "Your starting health is: " << heroHealth << endl;
		potion = 2;
		cout << "You start with " << potion << " potions." << endl;
		str = rand() % (10 - 5) + 5;
		cout << "You start with spiked blood soaked solid gold brass knuckles. Grants +5 strength." << endl;
		cout << "Your starting strength is: " << str << endl;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		heroHealth = rand() % (90 - 75) + 75;
		cout << "Your starting health is: " << heroHealth << endl;
		potion = 2;
		cout << "You start with " << potion << " potions." << endl;
		str = rand() % (12 - 8) + 8;
		cout << "You start with a crude shank. Grants +8 strength." << endl;
		cout << "Your starting strength is: " << str << endl;
		break;
	case 16:
	case 17:
	case 18:
	case 19:
		heroHealth = rand() % (100 - 85) + 85;
		cout << "Your starting health is: " << heroHealth << endl;
		potion = 3;
		cout << "You start with " << potion << " potions." << endl;
		str = rand() % (15 - 10) + 10;
		cout << "You start with an iron sword. Grants +10 strength." << endl;
		cout << "Your starting strength is: " << str << endl;
		break;
	case 20:
		heroHealth = 10000;
		cout << "Your starting health is: " << heroHealth << endl;
		potion = 10;
		cout << "You start with " << potion << " potions." << endl;
		str = 1000;
		cout << "You find a hole under the cell floor. In that hole you find Excalibur. Grants +1000 strength." << endl;
		cout << "Your starting strength is: " << str << endl;
		cout << "You have been blessed by the heavens and God has granted you all the items you need for your journey." << endl;
		break;
	}

	cout << "Do you want to use a potion (y/n)?" << endl;
	cin >> usePotion;
	usePotion = tolower(usePotion);
	if (usePotion == 'y') {
		cout << "How many potions do you want to use?" << endl;
		cin >> numPotion;
		if (numPotion <= potion) {
			heroHealth = (numPotion * 15) + heroHealth;
			cout << "Your current health is: " << heroHealth << endl;
		}
		else {
			heroHealth = (potion * 15) + heroHealth;
			cout << "Your current health is: " << heroHealth << endl;
		}
	}

	//this is the beginning of the level
	cout << "Ye finds yeself in the corner of a dark, damp dungeon chained against a stone wall. ";
	cout << endl; system("pause");
	cout << "Ye right hand is free. In ye immediate reach, ye find a guard's leftover meal. ";
	cout << endl; system("pause");
	cout << "There is a half bottle of rum, and a plate with some scraps. ";
	cout << endl; system("pause");
	cout << "What does ye do?";
	cout << endl; system("pause");
	cout << "(1: Grab rum bottle. 2: Salvage food from plate) ";

	cin >> userInput;

	if (userInput == 1) {
		cout << "Ye drinks yeself to sleep. Ye eventually wake up, still chained to the wall. NOW what does ye do? (2: Salvage food from plate) ";
		cout << endl; system("pause");
		cin >> userInput;
	}

	if (userInput == 2){
		cout << "Ye finds a small amount of scraps to eat. Under the plate, you miraculously find a key to escape the shackles! ";
		cout << endl; system("pause");
		cout << "Ye takes the key and free yeself from the wall. You stand to find yeself still in awful room. ";
		cout << endl; system("pause");
		cout << "Ye notice a deceased fellow prisoner to your left, and a bookshelf to your right. ";
		cout << endl; system("pause");
		cout << "In the far corner of the room is a staircase that has a gleam of light at the top of it. ";
		cout << endl; system("pause");
		cout << "There is broken glass all over the pathway to the stairs. ";
		cout << endl; system("pause");
		cout << "What does ye do?";
		cout << endl; system("pause");
		cout << "(1: Search the dead body. 2: Browse the books. 3: Climb the staircase) ";
	}

	cin >> userInput;

	if (userInput == 1) {
		if (boots == 0) {
			cout << "Ye reluctantly approach the dead body. Ye loot his boots for foot protection. Ye also find a potion. ";
			boots = boots + 1;
			potion = potion + 1;
		}
		if (boots == 1) {
			cout << "Ye have spent enough time inspecting the dead fellow. NOW what does ye do? (2: Bookshelf. 3: Stairs)"; 
			cin >> userInput;
		}
	}

	if (userInput == 2) {
		if (books == 0) {
			cout << "Ye find a book of the legend of the castle you are in. Ye learns there are important items amongst the castle. Most interesting findings include a Sword, a Soul Gem, a Breastplate and a Helmet. ";
			books = books + 1;
		}
		if (books == 1) {
			cout << "Ye find another book on mutton and cabbage. Ye only gets hungrier, and moves on. NOW what does ye do? (3: Stairs) ";
			cin >> userInput;
		}
	}
	if (userInput == 3) {
		if (boots == 0) {
			cout << "Ouch! The glass punctured your feet! ";
			randNum = randomGen();
			heroHealth = heroHealth - randNum;
			cout << "Your current health is: " << heroHealth << endl;
		}
		cout << " You make your way over the broken glass and up the stairs to the main floor of the dungeon. You have escaped the basement! " << endl; system("pause");
	}
	
	cout << "you have " << heroHealth << " health" << endl;
	cout << "you have " << potion << " potions." << endl;

	if (potion > 0) {
		cout << "would you like to use any potions?" << endl;
		cin >> usePotion;
		usePotion = tolower(usePotion);
		if (usePotion == 'y') {
			cout << "how many potions would you like to use?" << endl;
			cin >> numPotion;
			if (numPotion <= potion) {
				heroHealth = (numPotion * 15) + heroHealth;
				cout << "your new health is " << heroHealth << endl;
			}
			else {
				heroHealth = (potion * 15) + heroHealth;
				cout << "your new heroHealth is " << heroHealth << endl;
			}
		}
	}
	
	//Start of Boss Battle
	srand(time(0));
	bossHealth = rand() % (1000 - 100) + 100;
	cout << "The boss health is  " << bossHealth << endl;
	system("pause");
	
	cout << "your user health is " << heroHealth << endl;
	
	if (str < 1000) {
		while (bossHealth > 30 && heroHealth > 5) {
			cout << "where do you want to hit? " << endl;
			cin >> userAnswer;
			srand(time(0));
			damage = rand() % (bossHealth - 1) + 1;
			defend = rand() % (damage - 1) + 1;
			damage = damage - defend;
			cout << "The boss defended " << defend << " amount of damage" << endl;
			bossHealth = bossHealth - damage;
			cout << "You did " << damage << " to the " << userAnswer << " of the boss" << endl;
			cout << "The boss health is " << bossHealth << endl << endl;
			system("pause");

			cout << endl;
			srand(time(0));
			damage = rand() % (heroHealth - 1) + 1;
			low = damage - 5;

			if (low < 0) {
				low = 0;
			}

			defend = rand() % (damage - low) + low;
			damage = damage - defend;
			cout << "You defended " << defend << " amount of damage" << endl;
			cout << "boss hits back deals " << damage << endl;
			heroHealth = heroHealth - damage;
			cout << "your health is " << heroHealth << endl;

			if (potion > 0) {
				cout << "press y to use potion ";
				cin >> usePotion;
				usePotion = tolower(usePotion);

				if (usePotion == 'y'){
					cout << "you have " << potion << " How many would you like to use ? ";
					cin >> numPotion;
					cin >> numPotion;
					if (numPotion <= potion) {
						heroHealth = (numPotion * 15) + heroHealth;
						cout << "you now have " << heroHealth << " health " << endl;
						potion = potion - numPotion;
					}
					else {
						heroHealth = (potion * 15) + heroHealth;
						cout << "you now have " << heroHealth << " amount of health " << endl;
						potion = 0;
					}
				}
			}
		}

		if (heroHealth <= 5) {
			damage = heroHealth;
			cout << "boss hits back deals " << damage << endl << endl;
			cout << "you lose the game ";
		}
		if (bossHealth <= 30) {
			cout << "where do you want to hit? ";
			cin >> userAnswer;
			damage = bossHealth;
			cout << "You did " << damage << " to the " << userAnswer << " of the boss" << endl;
			cout << "you win the game " << endl;
			cout << "you are finally awake !" << endl;
		}
	}
	else {
		cout << "where do you want to hit? " << endl;
		cin >> userAnswer;
		cout << "you dealt " << bossHealth << " damage" << endl;
		cout << "you win the game " << endl;
		cout << "you are finally awake !" << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}

int randomGen() {
	int low = 10;
	int high = 20;
	int randNum;

	srand(0);
	randNum = rand() % (high - low + 1) + low;
	cout << "You took damage: " << randNum << endl;
	return randNum;
}