//***************************************************************************
// File name:   TextBag.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************
#include "TextBag.h"

//***************************************************************************
// Constructor: TextBag
//
// Description: Initialized the object
//
// Parameters:  none
//
// Returned:    None
//***************************************************************************
TextBag::TextBag()
{

}

//***************************************************************************
// Constructor: TextBag
//
// Description: Destory the object
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
TextBag::~TextBag()
{

}

//***************************************************************************
// Function:    addWord
//
// Description: Add word to the bag
//
// Parameters:  rcData - the string to add
//
// Returned:    None
//***************************************************************************
void TextBag::addWord(const std::string &rcWord)
{
    mcWords.push_back(rcWord);
}

//***************************************************************************
// Function:    getWord
//
// Description: Get word from the bag
//
// Parameters:  pos - the position of the word to get
//
// Returned:    the word
//***************************************************************************
std::string TextBag::getWord(int pos) const
{
    return mcWords[pos];
}

//***************************************************************************
// Function:    getSize
//
// Description: Get number of words in the bag
//
// Parameters:  None
//
// Returned:    the size
//***************************************************************************
int TextBag::getSize() const
{
    return mcWords.size();
}