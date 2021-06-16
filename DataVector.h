
#include <string>
#include <vector>
#include "PokemonData.h"
using namespace std;

#ifndef FINALPROJECT_DATAVECTOR_H
#define FINALPROJECT_DATAVECTOR_H


class DataVector {
public:
    void SetData(const string& filename);
    void PrintDataAtIndex(int index);
    void PrintName(int index);
    void SetNames(const string& filename);
    void SetAnimID(const string& filename);
    void PrintLargest();
    vector<bool> GetPokemonWithAbility1(unsigned int AbilityID, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithAbility2(unsigned int AbilityID, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithTyping(unsigned int type1, unsigned int type2, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithTyping1(unsigned int type1, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithTyping2(unsigned int type2, unsigned int minID, unsigned int maxID);
    vector<bool> GetPokemonWithBST(unsigned int bst, unsigned int minID, unsigned int maxID);
    vector<bool> GetStablePokemon(unsigned int minID, unsigned int maxID);
    vector<PokemonData> dataVector;
    vector<string> names;
private:

    vector<unsigned int> NameCharacterVec;
    vector<unsigned int> AnimIDs;
    char32_t CharacterEncoder(int index);

};


#endif //FINALPROJECT_DATAVECTOR_H
