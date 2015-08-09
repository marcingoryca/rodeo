/*
----------------------------------------------
    MG Game Engine
    Copyright(c) Marcin Goryca
    marcin.goryca@gmail.com
    http://marcingoryca.pl
----------------------------------------------
*/
#ifndef MG_RENDERER_HEIGHTMAP_H_
#define MG_RENDERER_HEIGHTMAP_H_

#include "core\constants.h"
#include "core\error.h"
#include "..\common\glheader.h"

namespace mg
{
namespace renderer
{
struct Heightmap
{
    ucp data_;
    ui size_;
};

//class Heightmap
//{
//public:
//	Heightmap()
//		:height(0), width(0), heightRatio(0.0f)
//	{
//		//mapSize = width * height;
//	}
//	~Heightmap(){}
//	const char* filename;
//
//	ucp hmapData;
//
//	void Load(const char* filename, int size, ucp heightmap);
//
//	int GetWidth()const { return width; }
//	int GetHeight()const { return height; } 
//	int GetQuadSize()const { return quadSize; }
//	float GetHeightRatio()const{ return heightRatio; }
//	
//	void SetMap(int w, int h);
//
//	int width;
//	int height;
//
//	int Height(ucp heightmap, int x, int y);
//	void SetColor(ucp heightmap, int x, int y);
//
//	void Render(uc heightmap[]);
//
//	//static const unsigned char MAP_SIZE;
//
//private:
//	FILE* file;
//	
//	static const int quadSize = 16;
//	static const int mapsize1024 = 1024;
//	float heightRatio;
//};
}    // end of renderer namespace
}    // end of mg namespace
#endif