//***************************************************************************
// File name:   ITextDecorator.h
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************
#pragma once
#include "ITextHolder.h"

class ITextDecorator : public ITextHolder
{
    public:

        ITextDecorator(ITextHolder *pcTextHolder);
        virtual ~ITextDecorator();

        virtual void addWord(const std::string&);
        virtual std::string getWord(int) const;
        virtual int getSize() const;

    private:
        ITextHolder *mpcComponent;

};