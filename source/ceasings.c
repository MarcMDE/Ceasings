/*
*  ceasings.c
*
*  Simple C ready to use library, a port of Robert Penner's easing equations to C (http://robertpenner.com/easing/) 
*  made by Marc Montagut - @MarcMDE  
*
*   Robert Penner License
*   ---------------------------------------------------------------------------------
*   Open source under the BSD License. 
*
*   Copyright (c) 2001 Robert Penner. All rights reserved.
*
*   Redistribution and use in source and binary forms, with or without modification, 
*   are permitted provided that the following conditions are met:
*
*       - Redistributions of source code must retain the above copyright notice, 
*         this list of conditions and the following disclaimer.
*       - Redistributions in binary form must reproduce the above copyright notice, 
*         this list of conditions and the following disclaimer in the documentation 
*         and/or other materials provided with the distribution.
*       - Neither the name of the author nor the names of contributors may be used 
*         to endorse or promote products derived from this software without specific 
*         prior written permission.
*
*   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
*   ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
*   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
*   IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
*   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
*   BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
*   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
*   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
*   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED 
*   OF THE POSSIBILITY OF SUCH DAMAGE.
*   ---------------------------------------------------------------------------------
*
*   Copyright (c) 2016 Marc Montagut
*
*   This software is provided "as-is", without any express or implied warranty. In no event
*   will the authors be held liable for any damages arising from the use of this software.
*
*   Permission is granted to anyone to use this software for any purpose, including commercial
*   applications, and to alter it and redistribute it freely, subject to the following restrictions:
*
*     1. The origin of this software must not be misrepresented; you must not claim that you
*     wrote the original software. If you use this software in a product, an acknowledgment
*     in the product documentation would be appreciated but is not required.
*
*     2. Altered source versions must be plainly marked as such, and must not be misrepresented
*     as being the original software.
*
*     3. This notice may not be removed or altered from any source distribution.
*
*/

#include <math.h>
#include "ceasings.h"

float Linear(float t, float b, float c, float d)
{
	return c*t/d + b;
}

float QuadEaseIn(float t, float b, float c, float d)
{
	t /= d;
	return c*t*t + b;
}

float QuadEaseOut(float t, float b, float c, float d)
{
	t /= d;
	return -c * t*(t-2) + b;
}

float QuadEaseInOut(float t, float b, float c, float d)
{
	t /= d/2;
	if (t < 1) return c/2*t*t + b;
	t--;
	return -c/2 * (t*(t-2) - 1) + b;
}

float CubicEaseIn(float t, float b, float c, float d)
{
	t /= d;
	return c*t*t*t + b;
}

float CubicEaseOut(float t, float b, float c, float d)
{
	t /= d;
	t--;
	return c*(t*t*t + 1) + b;
}

float CubicEaseInOut(float t, float b, float c, float d)
{
	t /= d/2;
	if (t < 1) return c/2*t*t*t + b;
	t -= 2;
	return c/2*(t*t*t + 2) + b;
}

float QuartEaseIn(float t, float b, float c, float d)
{
	t /= d;
	return c*t*t*t*t + b;
}

float QuartEaseOut(float t, float b, float c, float d)
{
	t /= d;
	t--;
	return -c * (t*t*t*t - 1) + b;
}

float QuartEaseInOut(float t, float b, float c, float d) 
{
	t /= d/2;
	if (t < 1) return c/2*t*t*t*t + b;
	t -= 2;
	return -c/2 * (t*t*t*t - 2) + b;
}

float QuintEaseIn(float t, float b, float c, float d) 
{
	t /= d;
	return c*t*t*t*t*t + b;
}

float QuintEaseOut(float t, float b, float c, float d) 
{
	t /= d;
	t--;
	return c*(t*t*t*t*t + 1) + b;
}

float QuintEaseInOut(float t, float b, float c, float d) 
{
	t /= d/2;
	if (t < 1) return c/2*t*t*t*t*t + b;
	t -= 2;
	return c/2*(t*t*t*t*t + 2) + b;
}

float SineEaseIn(float t, float b, float c, float d)
{
	return -c * cos(t/d * (M_PI/2)) + c + b;
}

float SineEaseOut(float t, float b, float c, float d)
{
	return c * sin(t/d * (M_PI/2)) + b;
}

float SineEaseInOut(float t, float b, float c, float d)
{
	return -c/2 * (cos(M_PI*t/d) - 1) + b;
}

float CircEaseIn(float t, float b, float c, float d)
{
	t /= d;
	return -c * (sqrt(1 - t*t) - 1) + b;
}

float CircEaseOut(float t, float b, float c, float d)
{
    t /= d;
	t--;
	return c * sqrt(1 - t*t) + b;
}

float CircEaseInOut(float t, float b, float c, float d)
{
	t /= d/2;
	if (t < 1) return -c/2 * (sqrt(1 - t*t) - 1) + b;
	t -= 2;
	return c/2 * (sqrt(1 - t*t) + 1) + b;
}

float ExpoEaseIn(float t, float b, float c, float d)
{
	return c * pow( 2, 10 * (t/d - 1) ) + b;
}

float ExpoEaseOut(float t, float b, float c, float d)
{
	return c * ( -pow( 2, -10 * t/d ) + 1 ) + b;
}

float ExpoEaseInOut(float t, float b, float c, float d)
{
	t /= d/2;
	if (t < 1) return c/2 * pow( 2, 10 * (t - 1) ) + b;
	t--;
	return c/2 * ( -pow( 2, -10 * t) + 2 ) + b;
}

float ElasticEaseIn(float t, float b, float c, float d)
{
	if ( ( t /= d ) == 1 )  return b + c;

    double p = d * .3;
    double s = p / 4;

    return -( c * pow( 2, 10 * ( t -= 1 ) ) * sin( ( t * d - s ) * ( 2 * M_PI ) / p ) ) + b;
}

float ElasticEaseOut(float t, float b, float c, float d)
{
    if ( ( t /= d ) == 1 )  return b + c;

    double p = d * .3;
    double s = p / 4;

    return ( c * pow( 2, -10 * t ) * sin( ( t * d - s ) * ( 2 * M_PI ) / p ) + c + b );
}

float ElasticEaseInOut(float t, float b, float c, float d)
{
    if ( ( t /= d / 2 ) == 2 )  return b + c;

    double p = d * ( .3 * 1.5 );
    double s = p / 4;

    if ( t < 1 )    return -.5 * ( c * pow( 2, 10 * ( t -= 1 ) ) * sin( ( t * d - s ) * ( 2 * M_PI ) / p ) ) + b;
    return c * pow( 2, -10 * ( t -= 1 ) ) * sin( ( t * d - s ) * ( 2 * M_PI ) / p ) * .5 + c + b;
}

float BackEaseIn(float t, float b, float c, float d)
{
	return c * ( t /= d ) * t * ( ( 1.70158 + 1 ) * t - 1.70158 ) + b;
}

float BackEaseOut(float t, float b, float c, float d)
{
    return c * ( ( t = t / d - 1 ) * t * ( ( 1.70158 + 1 ) * t + 1.70158 ) + 1 ) + b;
}

float BackEaseInOut(float t, float b, float c, float d)
{
    float s = 1.70158;
    if ( ( t /= d / 2 ) < 1 )   return c / 2 * ( t * t * ( ( ( s *= ( 1.525 ) ) + 1 ) * t - s ) ) + b;
    return c / 2 * ( ( t -= 2 ) * t * ( ( ( s *= ( 1.525 ) ) + 1 ) * t + s ) + 2 ) + b;
}

float BounceEaseIn(float t, float b, float c, float d)
{
	return c - BounceEaseOut( d - t, 0, c, d ) + b;
}

float BounceEaseOut(float t, float b, float c, float d)
{
    if ( ( t /= d ) < ( 1 / 2.75 ) )
        return c * ( 7.5625 * t * t ) + b;
    else if ( t < ( 2 / 2.75 ) )
        return c * ( 7.5625 * ( t -= ( 1.5 / 2.75 ) ) * t + .75 ) + b;
    else if ( t < ( 2.5 / 2.75 ) )
        return c * ( 7.5625 * ( t -= ( 2.25 / 2.75 ) ) * t + .9375 ) + b;
    else
        return c * ( 7.5625 * ( t -= ( 2.625 / 2.75 ) ) * t + .984375 ) + b;
}

float BounceEaseInOut(float t, float b, float c, float d)
{
    if ( t < d / 2 )
        return BounceEaseOut( t * 2, b, c / 2, d );
    return BounceEaseIn( ( t * 2 ) - d, b + c / 2, c / 2, d );
}
