#include "Counter.h"

Counter::Counter() : value(1) {}
Counter::Counter(int initial_value) : value(initial_value) {}
void Counter::increment() {
    ++value;
}
void Counter::decrement() {
    --value;
}
int Counter::getValue() const {
    return value;
}