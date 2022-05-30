//***************************************************************************
// File name:   TextRedactDecorator.h
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************

#pragma once
#include "ITextDecorator.h"
#include <vector>

class TextRedactDecorator : public ITextDecorator
{
    public:
        TextRedactDecorator(ITextHolder *pcTextHolder, std::initializer_list<std::string> cList);
        virtual ~TextRedactDecorator();

        virtual std::string getWord(int) const;

    private:
        std::vector<std::string> mcRedactedWords;

};