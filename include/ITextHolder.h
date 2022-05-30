//***************************************************************************
// File name:   ITextHolder.h
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************
#pragma once
#include <string>

class ITextHolder 
{

    public:
    
        virtual ~ITextHolder() {};
        virtual void addWord(const std::string&) = 0;
        virtual std::string getWord(int) const = 0;
        virtual int getSize() const = 0;
};