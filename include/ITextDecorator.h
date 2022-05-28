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