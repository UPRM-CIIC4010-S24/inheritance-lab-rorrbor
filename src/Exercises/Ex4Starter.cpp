#include "StarterCode.hpp"

/* Exercise 4
 * Given a vector of Art pieces, return a vector containing only the
 * pieces that are of the given Style.
 */
vector<Art *> Art::filterCollectionByStyle(const vector<Art *> &personalCollection, Style selected) {
    vector<Art *> result;
    for(Art* art: personalCollection){
        if(art->getStyle().equals(selected)) result.push_back(art);
    }
    return result;
}
