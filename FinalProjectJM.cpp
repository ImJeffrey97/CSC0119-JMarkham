/*
Name: Jeffrey Markham, Michael Smith
Title: D & D 
description: Final Project D & D card
Due Date: 11 Dec. 2020
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ABILITY = 6; // Each array is assigned to an ability score
void titleScreen();//prints out the title screen
int charRace(int abilityArray[ABILITY]);//character creation function
int charClass();//player chooses class
void abilityScores(int abilityArray[ABILITY], int diceArray[4]);//shows the users their characters abilities
int diceThrow(int diceArray[4]);//function for getting the players ability scores
void fillAbilityArray(int abilityArray[ABILITY]);//filling the ability array
int totalHp(int abilityArray[ABILITY]);//getting the total HP of a character

int main()
{  
	srand (time (0));
    int score;
	int race;
	int zClass;
	int abilityArray[ABILITY];
	int diceArray[4];
	int hitPoints;

	titleScreen();
	fillAbilityArray(abilityArray);
	cout << endl;
	charRace(abilityArray);
	cout << endl;
	//charClass();
	//cout << endl;
	abilityScores(abilityArray, diceArray);
	cout << endl;
	hitPoints = totalHp(abilityArray);
	cout << endl;

	cout << endl;
	system ("pause");
    return 0;
}

/***************************
created by Jeffrey Markham
 function: titleScreen (bonus function)
 description: prints out the title screen
 @param1: none
 @return: none
***************************/

void titleScreen()
{
    cout << "  ______ .______    _______     ___   .___________. _______ " << endl; 
    cout << " /      ||   _  \\  |   ____|   /   \\  |           ||   ____| " << endl;
    cout << "|  ,----'|  |_)  | |  |__     /  ^  \\ `---|  |----`|  |__   " << endl;
    cout << "|  |     |      /  |   __|   /  /_\\  \\    |  |     |   __|  " << endl;
    cout << "|  `----.|  |\\  \\  |  |____ /  _____  \\   |  |     |  |____ " << endl;
    cout << " \\______|| _| `._| |_______/__/     \\__\\  |__|     |_______|" << endl;
    cout << "                                                               " << endl;
    cout << "____    ____  ______    __    __  .______ " << endl;                      
    cout << "\\   \\  /   / /  __  \\  |  |  |  | |   _  \\" << endl;                     
    cout << " \\   \\/   / |  |  |  | |  |  |  | |  |_)  |" << endl;                    
    cout << "  \\_    _/  |  |  |  | |  |  |  | |      /" << endl;                     
    cout << "    |  |    |  `--'  | |  `--'  | |  |\\  \\" << endl;               
    cout << "    |__|     \\______/   \\______/  | _| `.__|" << endl;                
    cout << "                                            " << endl;
    cout << " _______  .__   __.  _______ " << endl;                                   
    cout << "|       \\ |  \\ |  | |       \\" << endl;                                  
    cout << "|  .--.  ||   \\|  | |  .--.  |" << endl;                                 
    cout << "|  |  |  ||  . `  | |  |  |  |" << endl;                                 
    cout << "|  '--'  ||  |\\   | |  '--'  |" << endl;                                 
    cout << "|_______/ |__| \\__| |_______/" << endl;                                  
    cout << "                             " << endl;
    cout << "  ______     ___      .______     _______" << endl;                    
    cout << " /      |   /   \\     |   _  \\   |       \\" << endl;                   
    cout << "|  ,----'  /  ^  \\    |  |_)  |  |  .--.  |" << endl;                  
    cout << "|  |      /  /_\\  \\   |      /   |  |  |  |" << endl;                  
    cout << "|  `----./  _____  \\  |  |\\  \\   |  '--'  |" << endl;                  
    cout << " \\______/__/     \\__\\ | _| `._|  |_______/" << endl;  
}//end of titleScreen

/***************************
 Created by Michael Smith
 function: charRace
 description: Choose char race and adds multplier based off race
 @param1: abilityArray - Assigns an index to abilities 
 @return: race
***************************/

int charRace(int abilityArray[ABILITY])
{
	int race = 0;
	do
	{
		cout << "To choose a race enter a number between 1 - 4. Dwarf = 1, Elf = 2, Halfling = 3, Human = 4" << endl;
		cin >> race;
		cout << endl;
	} while (race > 4 || race < 1);

	if (race == 1)
	{
		cout << "You have chosen Dwarf" << endl;
		cout << "Bold and hardy, dwarves are known as skilled warriors, miners, and workers of stone and metal. Though they stand well under 5 feet tall, dwarves are so broad and" << endl;
		cout << "compact that they can weigh as much as a human standing nearly two feet taller. Their courage and endurance are also easily a match for any of the larger folk." << endl;
		cout << endl;
		cout << "Dwarf Traits: " << endl;
		cout << "Ability Score Increase. Your constitution skill increases by 2." << endl; //Constitution +2
		cout << "Alignment: Most dwarves are lawful, believing firmly in the benefits of a well - ordered society." << endl;
		cout << "They tend toward good as well, with a strong sense of fair playand a belief that everyone deserves to share in the benefits of a just order." << endl;
		cout << endl;
		cout << "Languages." << endl;
		cout << "You can speak, read, and write Common and Dwarvish. Dwarvish is full of hard consonants and guttural sounds, " << endl;
		cout << "and those characteristics spill over into whatever other language a dwarf might speak." << endl;
		abilityArray[2] = 2;
	}

	else if (race == 2)
	{
		cout << "You have chosen Elf" << endl;
		cout << "Like the branches of a young tree, elves are flexible in the face of danger. They trust in diplomacy and compromise to resolve differences before they escalate to violence." << endl;
		cout << "They have been known to retreat from intrusions into their woodland homes, confident that they can simply wait the invaders out." << endl;
		cout << "But when the need arises, elves reveal a stern martial side, demonstrating skill with sword, bow, and strategy." << endl;
		cout << endl;
		cout << "Elf Traits:" << endl;
		cout << "Ability Score Increase. Your Dexterity score increases by 2." << endl; // Dexterity +2
		cout << "Alignment: Elves love freedom, variety, and self-expression, so they lean strongly toward the gentler aspects of chaos." << endl;
		cout << "They value and protect others’ freedom as well as their own, and they are more often good than not." << endl;
		cout << endl;
		cout << "Languages." << endl;
		cout << "You can speak, read, and write Common and Elvish. Elvish is fluid, with subtle intonations and intricate grammar. " << endl;
		cout << "Elven literature is rich and varied, and their songs and poems are famous among other races." << endl;
		cout << " Many bards learn their language so they can add Elvish ballads to their repertoires." << endl;
		abilityArray[1] = 2;
	}
	else if (race == 3)
	{
		cout << "You have chosen Halfling" << endl;
		cout << "Halflings are adept at fitting into a community of humans, dwarves, or elves, making themselves valuableand welcome. " << endl;
		cout << "The combination of their inherent stealthand their unassuming nature helps halflings to avoid unwanted attention." << endl;
		cout << endl;
		cout << "Halfling Traits:" << endl;
		cout << "Ability Score Increase. Your Dexterity score increases by 2." << endl; //Dexterity +2
		cout << "Alignment: Most halflings are lawful good. As a rule, they are good - hearted and kind, hate to see others in pain, and have no tolerance for oppression." << endl;
		cout << "They are also very orderlyand traditional, leaning heavily on the support of their community and the comfort of their old ways." << endl;
		cout << endl;
		cout << "Languages." << endl;
		cout << "You can speak, read, and write Common and Halfling.The Halfling language isn’t secret, but halflings are loath to share it with others.They write very little, so they don’t have a rich body of literature. Their oral tradition, however, is very strong. Almost all halflings speak Common to converse with the people in whose lands they dwell or through which they are traveling" << endl;
	}
	else if (race == 4)
	{
		cout << "You have chosen Human" << endl;
		cout << "Humans who seek adventure are the most daring and ambitious members of a daring and ambitious race." << endl;
		cout << "They seek to earn glory in the eyes of their fellows by amassing power, wealth, and fame.More than other people, humans champion causes rather than territories or groups." << endl;
		cout << endl;
		cout << "Human Traits:" << endl;
		cout << "Ability Score Increase. Your ability scores each increase by 1." << endl; //All abilities +1
		cout << "Alignment: Humans tend toward no particular alignment. The best and the worst are found among them." << endl;
		cout << endl;
		cout << "Languages." << endl;
		cout << "You can speak, read, and write Common and one extra language of your choice. Humans typically learn the languages of other peoples they deal with, including obscure dialects. " << endl;
		cout << "They are fond of sprinkling their speech with words borrowed from other tongues : Orc curses, Elvish musical expressions, Dwarvish military phrases, and so on." << endl;
		for (int i = 0; i < ABILITY; i++)
		{
			abilityArray[i] = 1;
		}
	}
	else
	{
		cout << "Error in race" << endl;
	}
	for (int i = 0; i < ABILITY; i++)
	{
		//cout << "Ability: " << i << " is " << abilityArray[i];
	}
	cout << endl;
	return race;
}//end charRace

/***************************
 created by Jeffrey Markham and Michael Smith
 function: charClass
 description: Choose character race
 @param1: 
 @return: zClass
***************************/

int charClass()
{
	int zClass;
	do
	{
		cout << "To choose a race enter a number between 1 - 4. Cleric = 1, Fighter = 2, Rogue = 3, Wizard = 4" << endl;
		cin >> zClass;
		cout << endl;
	} while (zClass > 4 || zClass < 0);

	if (zClass == 1)
	{
		cout << "You have chosen the Cleric." << endl;
		cout << "Clerics are intermediaries between the mortal world and the distant planes of the gods. As varied as the gods they serve, clerics strive to embody the handiwork of their deities." << endl;
		cout << "No ordinary priest, a cleric is imbued with divine magic" << endl;
		cout << endl;
		cout << "Profiiciencies" << endl;
		cout << "Armor: Light armor, medium armor, shields." << endl;
		cout << "Weapons: Simple weapons" << endl;
		cout << "Tools: None" << endl;
		cout << "Skills: Insight, Religion" << endl;
		cout << endl;
		cout << "Cleric Starting Spells:" << endl;
		cout << "Healing Word, Sacred Flame, Detect Magic." << endl;
		cout << endl;
		cout << "          ,-----. " << endl;
        cout << "         #,-. ,-.# " << endl;
        cout << "        () a   e () " << endl;
        cout << "        (   (_)   ) " << endl;
        cout << "        #\\_  -  _/# " << endl;
        cout << "      ,'   `''''    ' "  << endl;
        cout << "     ,'      \\X/      `. " << endl;
        cout << "    /         X     ____\\ " << endl;
        cout << "   /          v   ,`  v  `, " << endl;
        cout << "  /    /         ( <==+==> ) " << endl;
        cout << " `-._/|__________ \\   ^   / " << endl;
        cout << "(\\)   |______@____ \\  ^  / " << endl;
        cout << "  \\   |     ( )     \\ ^ / " << endl;
        cout << "   )  |              \\^/ " << endl;
        cout << "  (   |             | v " << endl;
        cout << " <(^)>|             | " << endl;
        cout << "   v  |             | " << endl;
        cout << "      |             | " << endl;
        cout << "      |_.--.__ .--._| " << endl;
        cout << "       `==='  `===' " << endl;
	}
	else if (zClass == 2)
	{
		cout << "You have chosen the Fighter." << endl;
		cout << "Fighters learn the basics of all combat styles. Every fighter can swing an axe, fence with a rapier, wield a longsword or a greatsword, use a bow, and even trap foes in a net with some degree of skill." << endl;
		cout << "Likewise, a fighter is adept with shieldsand every form of armor.Beyond that basic degree of familiarity, each fighter specializes in a certain style of combat." << endl;
		cout << endl;
		cout << "Profiiciencies" << endl;
		cout << "Armor: All armor, shields" << endl;
		cout << "Weapons: Simple weapons, martial weapons" << endl;
		cout << "Tools: None" << endl;
		cout << "Skills: Acrobatics, Intimidation, Survival" << endl;
		cout << endl;
		cout << "Fighting Style choose one:" << endl; //Not letting user select since this is only a char sheet only for information
		cout << "Archery, Defense, Dueling, Great Weapons Fighting, Protection." << endl;
		cout << endl;
		cout << "       ||||||||| " << endl;
        cout << "       | _   _ | " << endl;      
        cout << "      (  ' _ '  ) " << endl;
        cout << "        | ___ | " << endl;
        cout << "        |_____| " << endl;                
        cout << " _______/     \\_______ " << endl;         
        cout << "/                      \\ " << endl;          
		cout << "|   |\\             /|   | " << endl;
		cout << "|   ||             ||   | " << endl;     
		cout << "|   / \\           / \\   | " << endl;
		cout << "\\  |   | |_ | _| |   |  / " << endl;     
		cout << "|==|   | |_ | _| |   |==| " << endl;
		cout << "/  /_ _|_|__|__|_|_ _\\  \\ " << endl;
		cout << "|___| /            \\|___| " << endl;
      	cout << "      |     |      | " << endl;
        cout << "      |     |      | " << endl;
      	cout << "      |     |      | " << endl;         
      	cout << "      |     |      | " << endl;           
        cout << "      '|''|'''|''|'' " << endl;           
       	cout << "       |  |   |  | " << endl;  
       	cout << "       |  |   |  | " << endl;
        cout << "      /   )   (   \\ " << endl;
     	cout << "      Ooooo    ooooO " << endl;
	}
	else if (zClass == 3)
	{
		cout << "You have chosen the Rogue." << endl;
		cout << "When it comes to combat, rogues prioritize cunning over brute strength. A rogue would rather make one precise strike, placing it exactly where the attack will hurt the target most, than wear an opponent down with a barrage of attacks." << endl;
		cout << "Rogues have an almost supernatural knack for avoiding danger, and a few learn magical tricks to supplement their other abilities." << endl;
		cout << endl;
		cout << "Profiiciencies" << endl;
		cout << "Light Armor" << endl;
		cout << "Weapons: Simple weapons, hand crossbows, longswords, rapiers, shortswords" << endl;
		cout << "Tools: Thieves' tools" << endl;
		cout << "Skills: Acrobatics, Deception, Stealth, Sleight of Hand." << endl;
		cout << endl;
		cout << "Rogue Perk: Thieves' Cant" << endl;
		cout << "During your rogue training you learned thieves’ cant, a secret mix of dialect, jargon, and code that allows you to hide messages in seemingly normal conversation." << endl;
		cout << "Only another creature that knows thieves’ cant understands such messages. " << endl;
		cout << endl;
		cout << "                   ▒▒██▒▒▒▒▒▒▒▒▒▒░░ " << endl;                                                                  
        cout << "                 ▒▒████████████████ " << endl;                                                                 
        cout << "                 ████████████████████ " << endl;                                                                
        cout << "               ░░████████████████████ " << endl;                                                                
        cout << "               ░░████░░░░░░██░░░░▒▒██ " << endl;                                                                
        cout << "               ░░██░░░░░░░░▓▓░░░░▒▒██ " << endl;                                                               
        cout << "                 ████░░░░░░░░░░░░▒▒ " << endl;                                                                  
        cout << "                 ▒▒██████▓▓▓▓▓▓▓▓██ " << endl;                                                                  
        cout << "                  ████████▓▓▓▓▓▓▓▓██ " << endl;                                                                
        cout << "                  ▓▓██████████████▓▓ " << endl;                                                                
        cout << "                    ▓▓██████████▓▓ " << endl;                                                                  
        cout << "                 ▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒ " << endl;                                                                    
        cout << "           ▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░              ████ " << endl;                                                
        cout << "       ░░░░▒▒▒▒  ▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒              ████ " << endl;                                                
        cout << "     ░░░░          ▓▓▒▒▒▒▒▒▒▒▒▒▒▒  ░░░░      ░░░░ " << endl;                                                    
        cout << "     ░░░░          ▓▓▒▒▒▒▒▒▒▒▒▒▒▒    ░░░░    ░░ " << endl;                                                      
        cout << "     ░░░░          ▓▓▒▒▒▒▒▒▒▒▒▒▒▒      ░░░░░░ " << endl;                                                        
        cout << "     ░░░░          ▓▓▒▒▒▒▒▒▒▒▒▒▒▒        ░░░░ " << endl;                                                        
        cout << "     ▒▒▒▒          ▓▓▒▒▓▓▒▒▒▒▒▒▒▒ " << endl;                                                                    
        cout << "     ████          ▓▓▓▓▓▓▒▒▒▒▒▒░░ " << endl;                                                                    
        cout << "     ████          ▓▓▓▓▓▓▓▓░░▓▓▒▒ " << endl;                                                                   
        cout << "     ▒▒▒▒          ▓▓▓▓▓▓▓▓▒▒▓▓▒▒ " << endl;                                                                    
        cout << "                   ████████████▓▓ " << endl;                                                                    
        cout << "                   ██▓▓      ██▓▓ " << endl;                                                                    
        cout << "                   ████      ▒▒██ " << endl;                                                                    
        cout << "   ▒▒██            ████        ██▒▒ " << endl;                                                                  
        cout << " ▓▓████████        ██▒▒        ░░██ " << endl;                                                                  
        cout << " ▓▓    ▓▓▓▓████  ▒▒▓▓          ░░██ " << endl;                                                                  
        cout << "           ▒▒▒▒██▓▓              ▒▒██ " << endl;                                                                
        cout << "                ░░░░              ░░██▒▒ " << endl;                                                              
        cout << "                                  ▓▓██░░  ░░ " << endl;                                                        
        cout << "                                   ████▒▒▓▓ " << endl;                                                        
        cout << "                                      ████ " << endl;                                                          
        cout << "                                         ██ " << endl; 
	}
	else if (zClass == 4)
	{
		cout << "You have chosen the Wizard." << endl;
		cout << "Wizards are supreme magic-users, defined and united as a class by the spells they cast." << endl;
		cout << "Drawing on the subtle weave of magic that permeates the cosmos, wizards cast spells of explosive fire, arcing lightning, subtle deception, and brute - force mind control. " << endl;
		cout << "Their magic conjures monsters from other planes of existence, glimpses the future, or turns slain foes into zombies. Their mightiest spells change one substance into another, call meteors down fromthe sky, or open portals to other worlds." << endl;
		cout << endl;
		cout << "Profiiciencies" << endl;
		cout << "None" << endl;
		cout << "Weapons: Daggers, darts, slings, quarterstaffs, light crossbows." << endl;
		cout << "Tools: None" << endl;
		cout << "Skills: Arcana, Insight." << endl;
		cout << endl;
		cout << "Wizard starting spells:" << endl;
		cout << "Fire Bolt, Ray of Frost, Mage Armor, Comprehend Languages." << endl;
		cout << endl;
		cout << "            _,._ " << endl;      
    	cout << "  .||,       /_ _\\ " << endl;     
    	cout << " \\.`',/      |'L'| | " << endl;   
    	cout << " = ,. =      | -,| L " << endl;    
    	cout << " / || \\    ,-'\"/,'`. " << endl;   
    	cout << "   ||     ,'   `,,. `. " << endl; 
    	cout << "   ,|____,' , ,;' \\| | " << endl;  
    	cout << "  (3|\\    _/|/'   _| | " << endl; 
   		cout << "   ||/,-''  | >-'' _,\\ " << endl; 
    	cout << "   ||'      ==\\ ,-'  ,' " << endl; 
    	cout << "   ||       |  V \\ ,| " << endl;   
    	cout << "   ||       |    |` | " << endl;   
    	cout << "   ||       |    |   \\ " << endl;  
    	cout << "   ||       |    \\    \\ " << endl; 
    	cout << "   ||       |     |    \\ " << endl;
    	cout << "   ||       |      \\_,-' " << endl;
    	cout << "   ||       |___,,--')_\\ " << endl;
    	cout << "   ||         |_|   ccc/ " << endl;
    	cout << "   ||        ccc/ " << endl;
	}
	else
	{
		cout << "Error in Class" << endl;
	}
	cout << endl;
	return zClass;
}// end zClass

/***************************
 created by Jeffrey Markham
 function : abilityScores
 description: creating your characters abilities
 @param1: abilityArray - Assigns an index to abilities
 @param2: diceArray - rolls 4 dice and keeps 3 highest
 @return: none
***************************/

void abilityScores(int abilityArray[ABILITY], int diceArray[4])
{
	cout << "Here you will determine what your charatcer does in the game." << endl;
    cout << "The way you determine your abilities is by rolling four dice and keeping the three highest." << endl;
    cout << endl;
    abilityArray[0] = abilityArray[0] + diceThrow(diceArray);
	cout << endl;
	cout << "Your STRENGTH is: " << abilityArray[0] << endl;
	cout << endl;
    abilityArray[1] = abilityArray[1] + diceThrow(diceArray);
	cout << endl;
    cout << "Your DEXTERITY is:" << abilityArray[1] << endl;
	cout << endl;
    abilityArray[2] = abilityArray[2] + diceThrow(diceArray);
	cout << endl;
    cout << "Your CONSTITUTION is:" << abilityArray[2] << endl;
	cout << endl;
    abilityArray[3] = abilityArray[3] + diceThrow(diceArray);
	cout << endl;
    cout << "Your INTELLIGENCE is:" << abilityArray[3] << endl;
	cout << endl;
    abilityArray[4] = abilityArray[4] + diceThrow(diceArray);
	cout << endl;
    cout << "Your WISDOM is: " << abilityArray[4] << endl;
	cout << endl;
    abilityArray[5] = abilityArray[5] + diceThrow(diceArray);
	cout << endl;
    cout << "Your CHARISMA is: "<< abilityArray[5] << endl;
	cout << endl;
}// end abilityScores

/***************************
 created by Michael Smith (bonus item)
 function: fillAbilityArray
 description: Assigns an index to abilities
 @param1: abilityArray - Assigns an index to abilities
 @return: none
***************************/

void fillAbilityArray(int abilityArray[ABILITY])
{
	for (int i = 0; i < ABILITY; i++)
	{
		abilityArray[i] = 0;
	}
}//end of fillAbilityArray
//array0 = strength, array1 = dexterity, array2 = constitution, array3 = intelligence, array4 = wisdom, array5 = charisma

/*************************
 Created by Jeffrey Markham
 function: diceThrow
 description: throws dice to determine abilities
 @param1: diceArray - rolls 4 dice and keeps 3 highest
 @return: sum
*************************/

int diceThrow(int diceArray[4]) 
{
    int sum = 0;
	int small;
	for (int i = 0; i < 4; i++)
	{
		diceArray[i] = rand()% (6 - 1 + 1) + 1;
		sum = sum + diceArray[i];
		//cout << "Dice: " << diceArray[i] << endl;
	}
	small = diceArray[0];
	for (int i = 0; i < 4; i++)
	{
		if (small > diceArray[i])
		{
			small = diceArray[i];
		}
		else
		{
			;
		}
	}
//cout << "Small number is: " << smalle << endl;
//cout << "Sum is: " << sum << endl;
sum = sum - small;
cout << "Three Highest Dice Roll: " << sum << endl;
return sum;
}// end of diceThrow 

/***************************
 Created by: Michael (Bonus)
 function: totalHp 
 description: gives players total Hp based off const/race
 @param1: abilityArray - Assigns an index to abilities
 @return: hitPoints
***************************/

int totalHp (int abilityArray[ABILITY])
{
	int hitPoints;
	int zClass = charClass();
	if (zClass == 1)//Cleric
	{
		hitPoints = 8 + abilityArray[2];//constitution
		cout << "Cleric Health Total: " << hitPoints << endl;
	}
	else if (zClass == 2)//Fighter
	{
		hitPoints = 10 + abilityArray[2];//constitution
		cout << "Fighter Health Total: " << hitPoints << endl;
	}
	else if (zClass == 3)//Rogue
	{
		hitPoints = 8 + abilityArray[2];//constitution
		cout << "Rogue Health Total: " << hitPoints << endl;
	}
	else if (zClass == 4)//Wizard
	{
		hitPoints = 6 + abilityArray[2];//constitution
		cout << "Wizard Health Total: " << hitPoints << endl;
	}
	else
	{
		cout << "ERROR total HP" << endl;
	}
	return hitPoints;
}//end totalHP
//array0 = strength, array1 = dexterity, array2 = constitution, array3 = intelligence, array4 = wisdom, array5 = charisma

//problems: none