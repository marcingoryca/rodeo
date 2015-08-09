﻿/*
-----------------------------------
    MG Game Engine
    Copyright(c) Marcin Goryca
    marcin.goryca@gmail.com
    http://marcingoryca.pl
-----------------------------------
*/
#ifndef MG_CORE_RENDERMANAGER_H_
#define MG_CORE_RENDERMANAGER_H_

#ifndef MG_CORE_SINGLETON_H_
#include "core\singleton.h"
#endif

#ifndef MG_CORE_MASTERMANAGER_H_
#include "core\mastermanager.h"
#endif

#ifndef MG_RENDERER_GL_GLRENDERER_H_
#include "renderer\gl\glrenderer.h"
#endif

#ifndef MG_RENDERER_DX_DXRENDERER_H_
#include "renderer\dx\dxrenderer.h"
#endif

namespace mg
{
namespace core
{
class RenderManager : public Singleton<RenderManager>, public MasterManager
{
public:
    RenderManager(RendererType renderer);

    ~RenderManager();

    mg::renderer::IRenderer* getRenderer() const
    {
        return renderer_;
    }


private:
    RenderManager(){}

    // Copy constructor
    RenderManager(RenderManager& copy);

    // Copy operator
    RenderManager operator=(RenderManager& copy);

    mg::renderer::IRenderer* renderer_;
};
}    // end of core namespace
}    // end of mg namespace
#endif