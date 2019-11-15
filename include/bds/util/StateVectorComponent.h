#ifndef BDS_SYMBOLS_STATEVECTORCOMPONENT_H
#define BDS_SYMBOLS_STATEVECTORCOMPONENT_H

class StateVectorComponent {

public:
    float x;
    float y;
    float z;

    float prevX;
    float prevY;
    float prevZ;

    StateVectorComponent();
};

#endif //BDS_SYMBOLS_STATEVECTORCOMPONENT_H
