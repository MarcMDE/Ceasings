/*
*  ceasings.h
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

#ifndef C_EASINGS_H
#define C_EASINGS_H

#if defined __cplusplus
extern "C" {
#endif

//  Linear Inerpolation
float Linear(float t, float b, float c, float d);

//  Quadratic
float QuadEaseIn(float t, float b, float c, float d);
float QuadEaseOut(float t, float b, float c, float d);
float QuadEaseInOut(float t, float b, float c, float d);

//  Cubic
float CubicEaseIn(float t, float b, float c, float d);
float CubicEaseOut(float t, float b, float c, float d);
float CubicEaseInOut(float t, float b, float c, float d);

//  Quartic
float QuartEaseIn(float t, float b, float c, float d);
float QuartEaseOut(float t, float b, float c, float d);
float QuartEaseInOut(float t, float b, float c, float d);

//  Quintic
float QuintEaseIn(float t, float b, float c, float d);
float QuintEaseOut(float t, float b, float c, float d);
float QuintEaseInOut(float t, float b, float c, float d);

//  Sinusoidal
float SineEaseIn(float t, float b, float c, float d);
float SineEaseOut(float t, float b, float c, float d);
float SineEaseInOut(float t, float b, float c, float d);

//  Circular
float CircEaseIn(float t, float b, float c, float d);
float CircEaseOut(float t, float b, float c, float d);
float CircEaseInOut(float t, float b, float c, float d);

//  Exponential
float ExpoEaseIn(float t, float b, float c, float d);
float ExpoEaseOut(float t, float b, float c, float d);
float ExpoEaseInOut(float t, float b, float c, float d);

//  Elastic
float ElasticEaseIn(float t, float b, float c, float d);
float ElasticEaseOut(float t, float b, float c, float d);
float ElasticEaseInOut(float t, float b, float c, float d);

//  Back
float BackEaseIn(float t, float b, float c, float d);
float BackEaseOut(float t, float b, float c, float d);
float BackEaseInOut(float t, float b, float c, float d);

//  Bounce
float BounceEaseIn(float t, float b, float c, float d);
float BounceEaseOut(float t, float b, float c, float d);
float BounceEaseInOut(float t, float b, float c, float d);

#ifdef __cplusplus
}
#endif

#endif
