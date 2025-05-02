#pragma once
#include <iostream>
#include <player.hpp>

// https://gamedev.stackexchange.com/questions/87652/box2d-pixel-to-meter-conversion
float scaling = 100.0f; // something like 100 will do for Box2D.

//b2Vec2 metersToPixels(float xMeters, float yMeters) {
//    return b2Vec2{ xMeters / scaling, yMeters / scaling };
//}
//
//b2Vec2 pixelsToMeters(float xPixels, float yPixels) {
//    return b2Vec2{ xPixels * scaling, yPixels * scaling };
//}
//
//std::ostream& operator<<(std::ostream& out, const b2Vec2& vec)
//{
//    return out << vec.x << '\t' << vec.y;
//}