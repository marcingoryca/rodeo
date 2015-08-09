﻿/*
-----------------------------------
    MG Game Engine
    Copyright(c) Marcin Goryca
    marcin.goryca@gmail.com
    http://marcingoryca.pl
-----------------------------------
*/
#ifndef MG_CORE_OBJECTMANAGER_H_
#define MG_CORE_OBJECTMANAGER_H_

#ifndef VECTOR_H_
#include <vector>
#endif

#ifndef MG_CORE_SINGLETON_H_
#include "core\singleton.h"
#endif

#ifndef MG_ENTITY_MODEL3D_H_
#include "entity\model3d.h"
#endif

#ifndef MG_PRIMITVE_BOUNDINGVOLUME_H_
#include "primitive\boundingvolume.h"
#endif

namespace mg
{
namespace core
{
class ObjectManager : public Singleton<ObjectManager>
{
public:
    ObjectManager();

    virtual ~ObjectManager(){}

    //scene::Model3D* object3d_;
    //scene::Model3D* objects_container_[MAX_OBJECTS_];
    //geometry::BoundingVolume* bounding_volume_[MAX_OBJECTS_];

    void create(mg::entity::Model3D* object3d);

    void add(mg::entity::Model3D* object3d);

    void remove(mg::entity::Model3D* object3d);

    void remove();

    entity::Model3D* getObject(ui id)const;

private:
    // Copy constructor
    ObjectManager(const ObjectManager& copy);

    // Copy operator
    ObjectManager operator=(const ObjectManager& copy);

    // Used to counting objects
    static ui s_objects_counter_;

    // Container for Model3D objects
    std::vector<mg::entity::Model3D*> objects_;
};
}    // end of core namespace
}    // end of mg namespace
#endif