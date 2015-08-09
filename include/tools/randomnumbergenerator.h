﻿/*
-----------------------------------
    MG Game Engine
    Copyright(c) Marcin Goryca
    marcin.goryca@gmail.com
    http://marcingoryca.pl
-----------------------------------
*/
/*
--------------------------------------------------------------------------
    RandomNumberGenerator.h
 
    !IMPORTANT NOTES!
    Code comes from "Game Coding Complete" by Mike McShaffry
    RNG Core name: Mersenne Twister by Takuji Nishimura and Makoto Matsumoto
    Usage:
    CRandom r; 
    r.Randomize();
    unsigned int a = r.Random(1000) //returns a number from 0 - 999
--------------------------------------------------------------------------
*/
#ifndef MG_TOOLS_RANDOMNUMBERGENERATOR_H_
#define MG_TOOLS_RANDOMNUMBERGENERATOR_H_

#define CMATH_N 624
#define CMATH_M 397
#define CMATH_MATRIX_A 0x9908b0df /* constant vector a */
#define CMATH_UPPER_MASK 0x80000000 /* most significant w-r bits */
#define CMATH_LOWER_MASK 0x7fffffff /* least significant r bits */

#define CMATH_TEMPERING_MASK_B 0x9d2c5680
#define CMATH_TEMPERING_MASK_C 0xefc60000
#define CMATH_TEMPERING_SHIFT_U(y) (y >> 11)
#define CMATH_TEMPERING_SHIFT_S(y) (y << 7)
#define CMATH_TEMPERING_SHIFT_T(y) (y << 15)
#define CMATH_TEMPERING_SHIFT_L(y) (y >> 18)

namespace mg
{
namespace tools
{
class CRandom
{
public:
    CRandom()
        :seed_(1), mti_(CMATH_N+1){}

    // Returns number from 0 to n (excluding n)	
    unsigned int random(unsigned int n);
    void setRandomSeed(unsigned int n);
    unsigned int getRandomSeed(){ return seed_; }
    void randomize();

private:
    unsigned int seed_;
    unsigned long mt_[CMATH_N];

    // mti == N+1 (mt[N] is not initialized)
    int mti_;
};
}    // end of tools namespace
}    // end of mg namespace
#endif