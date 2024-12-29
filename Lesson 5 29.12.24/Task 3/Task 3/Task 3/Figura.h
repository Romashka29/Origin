#ifndef FIGURA_H
#define FIGURA_H

class Figura {
protected:
    int sides[4];
    int angles[4];
    int sidesCount;

public:
    Figura();
    virtual bool isCorrect() const;
    virtual void printInfo() const;
    virtual ~Figura();
};

#endif