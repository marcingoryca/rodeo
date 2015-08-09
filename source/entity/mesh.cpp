﻿/*
----------------------------------------------
    MG Game Engine
    Copyright(c) Marcin Goryca
    marcin.goryca@gmail.com
    http://marcingoryca.pl
----------------------------------------------
*/
#include "entity\mesh.h"

using namespace mg::math;
using namespace std;

namespace mg
{
namespace entity
{

void Mesh::reset()
{
    ZeroMemory(this, sizeof(this));
    init();
}
//.................................//
/**
    There are two types of normals, per-face and per-vertex. 
    Per-vertex normal is a product of sum of all normals for each face which is shared by the vertex
    steps:
    1. Get two coplanar vertices in a triangle
    2. Subtract second vertex by first which produces new vertex - edge1
    3. Repeat steps 1 && 2 - product edge 2
    4. compute cross product of edge 1 and edge 2 - product vector
    5. normalize the vector
*/
//void Mesh::computeNormals()
//{
//	for(ui i =0; i < face_count_; ++i)
//	{
//		Vector3& v1 = vp_[tp_[i].tri[0]].v;
//		Vector3& v2 = vp_[tp_[i].tri[1]].v;
//		Vector3& v3 = vp_[tp_[i].tri[2]].v;
//
//		Vector3 e1 = v3 - v2;
//		Vector3 e2 = v1 - v3;
//		Vector3 normal;
//		
//		normal = normal.cross(e1, e2);
//		normal.normalize();
//
//		ndata_.push_back(normal);
//		normal_count_++;
//	}
//}
//.................................//
void Mesh::generateNormals()
{
    //for(enginecore::ui i=0; i < face_count_; ++i)
    //{
    //    enginemath::Vector3 result = rodeogeometry::computeNormals(vertex_[triangle_[i].triangle_[0]].vertex_, 
    //                                                              vertex_[triangle_[i].triangle_[1]].vertex_,
    //                                                              vertex_[triangle_[i].triangle_[2]].vertex_,
    //                                                              result);
    //    //result.normalize();
    //    normals_.push_back(result);
    //    normal_count_++;
    //}
}

//.................................//
void Mesh::generateVertexNormals()
{
    //for(enginecore::ui i = 0; i < vertex_count_; ++i)
    //{
    //    enginemath::Vector3 result = rodeogeometry::vertexNormal(vertex_[i].vertex_);
    //    vertex_normals_.push_back(result);
    //    vertex_normal_count_++;
    //}
}

//.................................//
void Mesh::generateSurfaceNormals()
{
    //ZeroMemory(normal_, sizeof(normal_));
    //for(enginecore::ui i=0; i < face_count_; ++i)
    //{
    //    enginemath::Vector3 result = rodeogeometry::computeNormals(vertex_[triangle_[i].triangle_[0]].vertex_, 
    //                                                              vertex_[triangle_[i].triangle_[1]].vertex_,
    //                                                              vertex_[triangle_[i].triangle_[2]].vertex_,
    //                                                              result);
    //    normal_[triangle_[i].triangle_[0]].normal_ += result;
    //    normal_[triangle_[i].triangle_[1]].normal_ += result;
    //    normal_[triangle_[i].triangle_[2]].normal_ += result;


    //    /*for(int j=0; j < 3; ++j)
    //    {
    //        normals_.push_back(normal_[triangle_[i].triangle_[j]].normal_);
    //        normal_count_++;
    //    }*/
    //}
}

//.................................//
void Mesh::clear()
{
    if(vertex_)
    {
        delete [] vertex_;
        vertex_ = NULL;
    }
    if(triangle_)
    {
        delete [] triangle_;
        triangle_ = NULL;
    }
    if(coordinate_)
    {
        delete [] coordinate_;
        coordinate_ = NULL;
    }
    if(normal_)
    {
        delete [] normal_;
        normal_ = NULL;
    }
}
//.................................//
void Mesh::init()
{
    has_texture_ = false;
    index_ = 0;
    vertex_count_ = 0;
    face_count_ = 0;
    uv_count_ = 0;
    normal_count_ = 0;
    vertex_normal_count_ = 0;
    surface_normal_count_ = 0;
    mesh_name_ = "";
    ZeroMemory(meshname_, sizeof(meshname_)); 
}
}    // end of entity namespace
}    // end of mg namespace