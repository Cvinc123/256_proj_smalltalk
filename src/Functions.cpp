#include "../includes/Functions.h"
#include "../includes/Smalltalk_American.h"
#include "../includes/Smalltalk_Brit.h"
#include "../includes/ST_American_DonutEnthusiest.h"
#include "../includes/Smalltalk.h"
#include <vector>

using namespace std;

/**
 * create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
 * objects using pointers.
 *
 * \param mv	the vector
 * \param numBrit  number of british smalltalkers
 * \param numAmerican " AMerican "
 * \param numbAmericanDonutEnthusiest " American Donut Enthusiest "
 */
void getPeople(std::vector<Smalltalk*> &mv, int numBrit,
		int numAmerican,int numbAmericanDonutEnthusiest) {

	for(int i = 0; i < numBrit; i++) {
		mv.push_back(new Smalltalk_Brit);
	}

	for(int i = 0; i < numAmerican; i++) {
		mv.push_back(new Smalltalk_American);
	}

	for(int i = 0; i < numbAmericanDonutEnthusiest; i++) {
		mv.push_back(new ST_American_DonutEnthusiest);
	}
}

/**
 * Iterate over the vector full of Smalltalk pointers, If a Smalltalk pointer is not null then
 * delete what it points to.  Once all Smalltalk pointers deleted then use std::vector::clear()
 * to clear the vector of the pointers.
 *
 * \param mv
 */
void clearVector(std::vector<Smalltalk*> &mv) {

	for(vector<Smalltalk*>:: iterator it = mv.begin(); it != mv.end(); ++it) {
		delete (*it);
	}
	mv.clear();
}
