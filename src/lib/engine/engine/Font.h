#pragma once

#include "gl_helpers.h"

#include <math/Vector.h>

#include <map>

struct Glyph {
    GLuint mTextureId; //ID handle of the glyph texture
    Size<2, GLsizei> mSize; //Width and height of glyph
    Size<2, GLsizei> mBearing; //Offset from baseline to left/top of glyph (left spacing for left to right text)
    GLuint mAdvance; //Size of glyph + left spacing + right spacing
}

struct Alphabet {
    std::map<char, Glyph> mGlyphs;
}
