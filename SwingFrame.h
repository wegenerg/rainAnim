#ifndef SWING_FRAME_H
#define SWING_FRAME_H
#include "Shapes/Cylinder.h"
#include "Shapes/Torus.h"
class SwingFrame {
private:
    Cylinder pipe;
    Torus elbow;

public:
    void build();
    void render() const;
};
#endif