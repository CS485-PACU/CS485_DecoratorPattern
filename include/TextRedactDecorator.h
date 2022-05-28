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