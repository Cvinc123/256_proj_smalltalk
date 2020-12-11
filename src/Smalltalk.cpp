#include <string>
#include <vector>
#include "../includes/Smalltalk.h"
#include "../includes/constants.h"

using namespace std;

Smalltalk::Smalltalk(string myNationality,int iPerson):nationality(myNationality),iPerson(iPerson),current_phrase() {

}
Smalltalk::~Smalltalk() {

}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
	//with the last and then it starts over
	//takes the form Nationality iPerson: phrase
	//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
	//AMERICAN 10:Why yes, I would like to supersize that
string Smalltalk::saySomething() {
	string phrase = " ";
	string numPerson = to_string(iPerson);

	current_phrase = current_phrase%mySmallTalk.size();
	phrase = nationality + " " + numPerson + ": " + mySmallTalk[current_phrase];
	current_phrase++;

	return phrase;
}

//Abstract Base Class (ABC), implement in derived classes
void populatePhrases() {

}
