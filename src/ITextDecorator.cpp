//***************************************************************************
// File name:   ITextDecorator.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************

#include "ITextDecorator.h"

//***************************************************************************
// Constructor: ITextDecorator
//
// Description: Initialized the object
//
// Parameters:  pcTextHolder - the object being decorated
//
// Returned:    None
//***************************************************************************
ITextDecorator::ITextDecorator(ITextHolder *pcTextHolder) : mpcComponent(pcTextHolder)
{}

//***************************************************************************
// Constructor: ITextDecorator
//
// Description: Destory the object, free the decorated object
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
ITextDecorator::~ITextDecorator()
{
    delete mpcComponent;
}

//***************************************************************************
// Function:    addWord
//
// Description: Add word to decorated component
//
// Parameters:  rcData - the string to add
//
// Returned:    None
//***************************************************************************
void ITextDecorator::addWord(const std::string& rcWord)
{
    mpcComponent->addWord(rcWord);
}


//***************************************************************************
// Function:    getWord
//
// Description: Get word from decorated component
//
// Parameters:  pos - the position of the word to get
//
// Returned:    the word
//***************************************************************************
std::string ITextDecorator::getWord(int pos) const
{
    return mpcComponent->getWord(pos);
}

//***************************************************************************
// Function:    getSize
//
// Description: Get size of the decorated component
//
// Parameters:  None
//
// Returned:    the size
//***************************************************************************
int ITextDecorator::getSize() const
{
    return mpcComponent->getSize();
}