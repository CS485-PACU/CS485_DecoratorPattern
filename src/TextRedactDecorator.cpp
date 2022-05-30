//***************************************************************************
// File name:   TextRedactDecorator.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************

#include "TextRedactDecorator.h"

TextRedactDecorator::TextRedactDecorator(ITextHolder *pcTextHolder, 
std::initializer_list<std::string> cList) : ITextDecorator(pcTextHolder)
{
    mcRedactedWords.insert(mcRedactedWords.end(), cList.begin(), cList.end());
}

TextRedactDecorator::~TextRedactDecorator()
{}

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
