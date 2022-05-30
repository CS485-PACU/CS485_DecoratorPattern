//***************************************************************************
// File name:   TextRedactDecorator.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************

#include "TextRedactDecorator.h"

//***************************************************************************
// Constructor: TextRedactDecorator
//
// Description: Initialized the object
//
// Parameters:  pcTextHolder - the object being decorated
//              cList - the list of words to redact
//
// Returned:    None
//***************************************************************************
TextRedactDecorator::TextRedactDecorator(ITextHolder *pcTextHolder, 
std::initializer_list<std::string> cList) : ITextDecorator(pcTextHolder)
{
    mcRedactedWords.insert(mcRedactedWords.end(), cList.begin(), cList.end());
}

//***************************************************************************
// Constructor: TextRedactDecorator
//
// Description: Destory the object
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
TextRedactDecorator::~TextRedactDecorator()
{}

//***************************************************************************
// Function:    getWord
//
// Description: Get word from decorated component then decorate the word
//
// Parameters:  pos - the position of the word to get
//
// Returned:    the decorated word
//***************************************************************************
std::string TextRedactDecorator::getWord(int pos) const
{
    std::string cWord;

    cWord = ITextDecorator::getWord(pos);
    if (std::find(mcRedactedWords.begin(), mcRedactedWords.end(), cWord) != mcRedactedWords.end())
    {
        std::string cTmp(cWord.length(), 'X');
        cWord = cTmp;
    }
    return cWord;
}
