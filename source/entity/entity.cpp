﻿/*
 | --------------------------------------------------------------------------------------------------
 |     Rodeo Project
 |
 |     marcin.goryca@gmail.com
 |     http://marcingoryca.pl
 |
 |     License Information
 |
 |     The MIT License (MIT)
 |     Copyright (c) 2010 - ... Marcin Goryca
 |
 |     Permission is hereby granted, free of charge,
 |     to any person obtaining a copy of this software
 |     and associated documentation files (the "Software"),
 |     to deal in the Software without restriction,
 |     including without limitation the rights to use,
 |     copy, modify, merge, publish, distribute, sublicense,
 |     and/or sell copies of the Software,
 |     and to permit persons to whom the Software is furnished to do so,
 |     subject to the following conditions:
 |
 |     The above copyright notice and this permission notice
 |     shall be included in all copies or substantial portions of the Software.
 |
 |     THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 |     EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 |     FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 |     IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 |     DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 |     ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 |     IN THE SOFTWARE.
 |---------------------------------------------------------------------------------------------------
 */
#include "entity\entity.h"

using namespace rodeo::renderer;
//using namespace enginemath;
//using namespace enginescene;

namespace rodeo
{
namespace entity
{
void Entity::init()
{
    //last_position_ = last_position_.S_VECTOR3_ZERO_;
    //actual_position_ = actual_position_.S_VECTOR3_ZERO_;
    //setPosition(actual_position_.x_, actual_position_.y_, actual_position_.z_);
}

//--------------------------------------------------------------------------------------------------
void Entity::clear()
{
}

//--------------------------------------------------------------------------------------------------
void Entity::draw()
{
    //glLoadIdentity();
    //glTranslatef(world_.m4_[12], world_.m4_[13], world_.m4_[14]);
}

// ---- //
void Entity::update(float dt){}

// ---- //
//void Entity::setPosition(float px, float py, float pz)
//{
//    //setLocal(px, py, pz);
//}

// ---- //
//void Entity::rotate(float angle, float rx, float ry, float rz)
//{
//    glRotatef(angle, rx, ry, rz);
//}

// ---- //
//void Entity::scale(float sx, float sy, float sz)
//{
//   /* world_.m4_[0] = sx;
//    world_.m4_[5] = sy;
//    world_.m4_[10] = sz;
//
//    glScalef(world_.m4_[0], world_.m4_[5], world_.m4_[10]);*/
//}

// ---- //
//void Entity::translate(float tx, float ty, float tz)
//{
//    /*world_.m4_[12] *= tx;
//    world_.m4_[13] *= ty;
//    world_.m4_[14] *= tz;
//
//    last_position_.x_ = actual_position_.x_;
//    last_position_.y_ = actual_position_.y_;
//    last_position_.z_ = actual_position_.z_;
//
//    actual_position_.x_ = world_.m4_[12];
//    actual_position_.y_ = world_.m4_[13];
//    actual_position_.z_ = world_.m4_[14];
//    */
//    //glTranslatef(tx, ty, tz);
//}

// ---- //
//void Entity::setColor(Colors& rgb)
//{
//    /*material_.setAmbient(rgb.r_, rgb.g_, rgb.b_, 1.0f);
//    material_.setSpecular(rgb.r_, rgb.g_, rgb.b_, 1.0f);
//    material_.setDiffuse(rgb.r_, rgb.g_, rgb.b_, 1.0f);
//
//    material_.setShininess(50.0f);
//
//    glMaterialfv(GL_FRONT, GL_SPECULAR, material_.getSpecular());
//    glMaterialfv(GL_FRONT, GL_AMBIENT, material_.getAmbient());
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, material_.getDiffuse());
//    glMaterialfv(GL_FRONT, GL_SHININESS, material_.getShininess());*/
//}

// ---- //
void Entity::release()
{
}
}    // end of entity namespace
}    // end of rodeo namespace
