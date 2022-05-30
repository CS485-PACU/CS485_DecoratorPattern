//***************************************************************************
// File name:   main.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Decorator Pattern
//***************************************************************************
#include <iostream>
#include <vector> 
#include <string>
#include "TextBag.h"
#include "TextRedactDecorator.h"
#include "TextMumbleDecorator.h"

int main()
{
    ITextHolder *pcBag = new TextRedactDecorator(
        new TextMumbleDecorator(new TextBag),  {"hello", "bye"});

    pcBag->addWord("hello");
    pcBag->addWord("friend");
    pcBag->addWord("hello!");
    pcBag->addWord("friend?");
    pcBag->addWord("HELLO!");

    for(int i = 0; i< pcBag->getSize() ; i++)
    {    
        std::cout<<pcBag->getWord(i) << std::endl;
    }
    delete pcBag;
    return EXIT_SUCCESS;
}
