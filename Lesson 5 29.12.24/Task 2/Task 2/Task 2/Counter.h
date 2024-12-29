#ifndef COUNTER_H
#define COUNTER_H
class Counter {
private:
    int value;

public:
    Counter();
    explicit Counter(int initial_value);
    void increment();
    void decrement();
    int getValue() const;
};
#endif COUNTER_H