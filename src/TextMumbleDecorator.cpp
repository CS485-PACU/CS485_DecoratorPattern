//***************************************************************************
// File name:   TextMumbleDecorator.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************

#include "TextMumbleDecorator.h"

//***************************************************************************
// Constructor: TextMumbleDecorator
//
// Description: Initialized the object
//
// Parameters:  pcTextHolder - the object being decorated
//
// Returned:    None
//***************************************************************************
TextMumbleDecorator::TextMumbleDecorator(ITextHolder *pcTextHolder) : ITextDecorator(pcTextHolder)
{ 
}

//***************************************************************************
// Constructor: TextMumbleDecorator
//
// Description: Destory the object
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
TextMumbleDecorator::~TextMumbleDecorator()
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
std::string TextMumbleDecorator::getWord(int pos) const
{
    std::string cWord = ITextDecorator::getWord(pos);
    std::string cNewWord;
    static const std::string cPunc = ".,:;?!";

    for(auto elem : cWord)
    {
        if ( std::string::npos == cPunc.find(elem))
        {
            cNewWord.push_back(std::tolower(elem));
        }
    }
    return cNewWord;
}