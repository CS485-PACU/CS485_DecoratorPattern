//***************************************************************************
// File name:   TextBag.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************
#pragma once
#include "ITextHolder.h"
#include <vector>

class TextBag : public ITextHolder 
{
    public:
        TextBag();
        virtual ~TextBag();

        virtual void addWord(const std::string &rcWord);
        virtual std::string getWord(int pos) const;  
        virtual int getSize() const;

    private:
        std::vector<std::string> mcWords;
};