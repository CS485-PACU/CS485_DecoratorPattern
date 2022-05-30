//***************************************************************************
// File name:   TextBag.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************
#include "TextBag.h"

TextBag::TextBag()
{

}

TextBag::~TextBag()
{

}

void TextBag::addWord(const std::string &rcWord)
{
    mcWords.push_back(rcWord);
}

std::string TextBag::getWord(int pos) const
{
    return mcWords[pos];
}

int TextBag::getSize() const
{
    return mcWords.size();
}