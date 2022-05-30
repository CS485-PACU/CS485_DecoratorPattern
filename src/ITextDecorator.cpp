//***************************************************************************
// File name:   ITextDecorator.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************

#include "ITextDecorator.h"

ITextDecorator::ITextDecorator(ITextHolder *pcTextHolder) : mpcComponent(pcTextHolder)
{}

ITextDecorator::~ITextDecorator()
{
    delete mpcComponent;
}


void ITextDecorator::addWord(const std::string& rcWord)
{
    mpcComponent->addWord(rcWord);
}
std::string ITextDecorator::getWord(int pos) const
{
    return mpcComponent->getWord(pos);
}

int ITextDecorator::getSize() const
{
    return mpcComponent->getSize();
}