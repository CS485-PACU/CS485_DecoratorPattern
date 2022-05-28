#pragma once
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