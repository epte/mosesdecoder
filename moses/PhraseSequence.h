//Fabienne Braune
//Extension of Moses for handling sequences of discontiguous target phrases
//Sequence of phrases for decoding with l-MBOT rules

#include <vector>
#include "Phrase.h"

using namespace std;

namespace Moses
{

class PhraseSequence
{

	protected:
	vector<Phrase*> *m_phraseSequence;

	public:
	typedef vector<Phrase*>::const_iterator const_iterator;
	//TODO : Add constructor
	//TODO : Add comparator
	PhraseSequence(){};
	~PhraseSequence();

	//! iterators
	const_iterator begin() const {
	    return m_phraseSequence->begin();
	}
	const_iterator end() const {
	    return m_phraseSequence->end();
	}

	void Add(Phrase *phrase);
	vector<Phrase*> *GetSequence() const;
	Phrase *GetPhrase(size_t position) const;
	size_t GetSize() const;

};

}