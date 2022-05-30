//***************************************************************************
// File name:   TextMumbleDecorator.h
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************
#pragma once
#include "ITextDecorator.h"
#include <vector>

class TextMumbleDecorator : public ITextDecorator
{
    public:
        TextMumbleDecorator(ITextHolder *pcTextHolder);
        virtual ~TextMumbleDecorator();

        virtual std::string getWord(int) const;
};