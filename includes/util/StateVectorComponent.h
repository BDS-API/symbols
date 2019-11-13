#ifndef BDSAPI_STATEVECTORCOMPONENT_H
#define BDSAPI_STATEVECTORCOMPONENT_H

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

#endif //BDSAPI_STATEVECTORCOMPONENT_H
