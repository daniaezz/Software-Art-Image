//
//  line.h
//  drwaingLines
//
//  Created by Dania on 09/04/2022.
//

#ifndef line_h
#define line_h
#include "ofMain.h"

class Lline{
public:
    void setup();
    void update();
    void draw();
    
    float startx;
    float starty;
    float endx;
    float endy;
    float speed;
    
    ofColor color;
    
    Lline();
    
}

#endif /* line_h */
