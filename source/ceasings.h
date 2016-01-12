//
//  ceasings.h 
//
//  Simple C ready to use library, written by Marc Montagut - @MarcMDE  
//  (01/2016)

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
