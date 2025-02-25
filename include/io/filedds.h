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
#ifndef RODEO_IO_FILEDDS_H_
#define RODEO_IO_FILEDDS_H_

#ifndef RODEO_RENDERER_GL_GLCOMMON_H_
#include "..\renderer\gl\glcommon.h"
#endif

#ifndef RODEO_CORE_CONSTANTS_H_
#include "core\constants.h"
#endif

#ifndef RODEO_CORE_ERROR_H_
#include "core\error.h"
#endif

#ifndef RODEO_CORE_COLORS_H_
#include "renderer\colors.h"
#endif

#ifndef RODEO_RENDERER_IMAGE_H_
#include "renderer\image.h"
#endif

#ifndef RODEO_IO_LOG_H_
#include "io\log.h"
#endif

namespace rodeo
{
namespace io
{
//--------------------------
//    DDS_PIXELFORMAT flags
//---------------------------

// texture contains alpha data;
// rgbAlphaBitMask contains valid data 
const int DDPF_ALPHAPIXELS = 0x1;

// used in older files for alpha channel only uncompressed data 
// (rgbBitCount contains the alpha channel bitcount, aBitMask contains valid data) 
#define DDPF_ALPHA    0x2

// texture contains compressed RGB data,
// fourcc contains valid data 
#define DDPF_FOURCC    0x4

// texture contains uncompressed RGB data, 
// rgbBitCount and the RGB masks (rBitMask, gBitMask, bBitMask)
// contain  valid data
#define DDPF_RGB    0x40

// used in older files for YUV uncompressed data 
// (rgbBitCount contains the YUV bit count,
// rBitMask contains the Y mask,
// gBitMask U mask,
// bBitMask V mask)
#define DDPF_YUV    0x200

// used in older files for single channel color uncompressed data 
// (rgbBitCount contains the luminance channel bit count,
// rBitMask contains the channel mask).
// Can be combined  with DDPD_ALPHAPIXELS for two channel file 
#define DDPF_LUMINANCE    0x20000

//------------------------
//    DDS_HEADER flags 
//------------------------

// required 
#define DDSH_CAPS    0x1

// required 
#define DDSH_HEIGHT    0x2

// required 
#define DDSH_WIDTH    0x4

// required when pitch is provided for an uncompressed texture 
#define DDSH_PITCH    0x8

// required
#define DDSH_PIXELFORMAT    0x1000

// required in a mipmapped texture 
#define DDSH_MIPMAPCOUNT	0x20000

// required when pitch is provided for compressed texture
#define DDSH_LINEARSIZE    0x80000

// required in depth texture
#define DDSH_DEPTH			0x800000

//--------------------------
//    DDS_HEADER caps 
//--------------------------

// Optional, must be used on any file that contains more than one surface
// (mipmap, cubic environment map, mipmapped volume texture)
#define DDSCAPS_COMPLEX    0x8

// Optional, should be used for mipmap
#define DDSCAPS_MIPMAP    0x400000

// Required
#define DDSCAPS_TEXTURE    0x1000

// DDS_HEADER caps2

// required for a cubemap
#define DDSCAPS2_CUBEMAP    0x200

// required when these surfaces are stored in a cube map
#define DDSCAPS2_CUBEMAP_POSITIVEX    0x400
#define DDSCAPS2_CUBEMAP_NEGATIVEX    0x800
#define DDSCAPS2_CUBEMAP_POSITIVEY    0x1000
#define DDSCAPS2_CUBEMAP_NEGATIVEY    0x2000
#define DDSCAPS2_CUBEMAP_POSITIVEZ    0x4000
#define DDSCAPS2_CUBEMAP_NEGATIVEZ    0x8000

// required for a volume texture
#define DDSCAPS2_VOLUME    0x200000
#define DDSD_CAPS    0x00000001l

#ifndef MAKEFOURCC
#define MAKEFOURCC(ch0, ch1, ch2, ch3)                              \
((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | \
((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24))
#endif //defined(MAKEFOURCC)


//----------------------------------------------------
// FOURCC codes for DX compressed-texture pixel formats
//----------------------------------------------------
#define FOURCC_DXT1  (MAKEFOURCC('D','X','T','1'))
#define FOURCC_DXT2  (MAKEFOURCC('D','X','T','2'))
#define FOURCC_DXT3  (MAKEFOURCC('D','X','T','3'))
#define FOURCC_DXT4  (MAKEFOURCC('D','X','T','4'))
#define FOURCC_DXT5  (MAKEFOURCC('D','X','T','5'))


struct DDS_PIXELFORMAT
{
    unsigned int size;
    unsigned int flags;
    unsigned int fourCC;
    unsigned int rgbBitCount;
    unsigned int rBitMask;
    unsigned int gBitMask;
    unsigned int bBitMask;
    unsigned int aBitMask;
};

struct DDS_HEADER
{
    unsigned int size;
    unsigned int flags;
    unsigned int height;
    unsigned int width;
    unsigned int pitchOrLinearSize;
    unsigned int depth;
    unsigned int mipMapCount;
    unsigned int reserved1[11];
    DDS_PIXELFORMAT ddspf;
    unsigned int caps;
    unsigned int caps2;
    unsigned int caps3;
    unsigned int caps4;
    unsigned int reserved2;
};

// This is helper structure for flipping the image
struct DXTColors
{
    unsigned short r, g, b, a;
};

class FileDDS : public renderer::Image
{
public:
    FileDDS(){}

    virtual ~FileDDS();

    virtual bool open(const char* fileName);

    virtual const char* getClassName()const { return "FileDDS"; }

    unsigned int getTexture() const
    {
        return _texture;
    }

    void setTexture(unsigned int new_texture)
    {
        _texture = new_texture;
    }

private:
	// unsigned int texture - variable to store texture object 
	unsigned int _texture;
	DDS_HEADER _dds;

    void flipColorBlock(GLubyte* data);
    virtual void draw(float x, float y);
    virtual void release();
    void read(const char* fileName);
    void flipDXT1(GLubyte* data);
};
}
}
#endif