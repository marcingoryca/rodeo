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
#include "..\include\renderer\gl\glrenderer.h"

using namespace std;
using namespace rodeo::core;

namespace rodeo
{
	namespace renderer
	{
		GLRenderer::GLRenderer()
		{
			_shader = nullptr;
			_width = 0;
			_height = 0;
			//_query_renderer = new QueryRenderer;
		}

		//--------------------------------------------------------------------------------------------------
		GLRenderer::~GLRenderer()
		{
			_height = 0;
			_width = 0;

			if (_shader)
			{
				delete _shader;
				_shader = NULL;
			}
			//delete query_renderer_;
		}

		//--------------------------------------------------------------------------------------------------
		bool GLRenderer::run(int w, int h)
		{
			initGL(w, h, 0.0f, 0.0f, 0.0f, 1.0f);

			glewExperimental = GL_TRUE;
			glewInit();
			if (!GLEW_VERSION_3_0)
			{
				//MessageBox(NULL, OPENGL_VERSION_NOT_SUPPORTED.c_str(), RODEO_HEADER.c_str(), ERR_ICON_OK);
				return false;
			}
			//query_renderer_->run();
			return true;
		}

		//--------------------------------------------------------------------------------------------------
		void GLRenderer::render()
		{
		}

		//--------------------------------------------------------------------------------------------------
		void GLRenderer::update()
		{
		}

		//--------------------------------------------------------------------------------------------------
		void GLRenderer::enter2d()
		{
			double ortho_left = floor(sqrt(static_cast<double>(getWidth())) / 2);
			double ortho_bottom = floor(sqrt(static_cast<double>(getHeight())) / 2);
		}

		// -------------------------------------------------------------------------------------------------
		void GLRenderer::enter3d()
		{
			setWidth(getWidth());
			setHeight(getHeight());
			glViewport(0, 0, getWidth(), getHeight());
		}

		// -------------------------------------------------------------------------------------------------
		void GLRenderer::backColor(float r, float g, float b, float a)
		{
			//_gl_red = r;
			//_gl_green = g;
			//_gl_blue = b;
			//_gl_alpha = a;
		}

		// -------------------------------------------------------------------------------------------------
		void GLRenderer::onSize(int w, int h)
		{
			setGL(w, h);
		}

		// -------------------------------------------------------------------------------------------------
		bool GLRenderer::chooseViewportType(gl::GLViewportType type)
		{
			switch (type)
			{
			case gl::RODEO_ORTHOGONAL:
			{
				enter2d();
			}
			break;
			case gl::RODEO_PERSPECTIVE:
			{
				enter3d();
			}
			break;
			}
			return true;
		}

		// --------------------------------------------------------------------------------------------------
		void GLRenderer::enterFrame()
		{
			glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
			glClearDepth(1.0);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
			glViewport(0, 0, _width, _height);
		}

		// --------------------------------------------------------------------------------------------------
		void GLRenderer::endFrame()
		{
			glFlush();
		}

		// --------------------------------------------------------------------------------------------------
		void GLRenderer::setGL(int w, int h)
		{
			_width = w;
			_height = h;
			if (_height == 0)
			{
				_height = 1;
			}

			//chooseViewportType(RODEO_PERSPECTIVE);
		}

		// ---------------------------------------------------------------------------------------------------
		bool GLRenderer::initGL()
		{
			glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
			return true;
		}

		// ---------------------------------------------------------------------------------------------------
		bool GLRenderer::initGL(int w, int h, float r, float g, float b, float a)
		{
			backColor(r, g, b, a);
			setGL(w, h);
			return true;
		}

		/*void GLRenderer::flush()
		{
			glFlush();
		}*/

		//bool GLRenderer::enableLighting()
		//{
		//	//lightingOn();
		//	return true;
		//}

		//bool GLRenderer::disableLighting()
		//{
		//	//lightingOff();
		//	return true;
		//}

		//bool GLRenderer::enableDepthTest()
		//{
		//	//depthTestOn();
		//	return true;
		//}

		//bool GLRenderer::disableDepthTest()
		//{
		//	//depthTestOff();
		//	return true;
		//}

		//void GLRenderer::enableShaders()
		//{
		//	//shader_->loadShaderFromFile("", enginecore::RODEO_VS);
		//	/**
		//	shader_->bindCG(shader_->getCGVertexShaderProgram());
		//	shader_->enableCG(shader_->getCGVertexShaderProfile());

		//	shader_->bindCG(shader_->getCGFragmentShaderProgram());
		//	shader_->enableCG(shader_->getCGFragmentShaderProfile());

		//	shader_->enableTextureParameter(shader_->parameter_);
		//	*/
		//}

		//void GLRenderer::disableShaders()
		//{
		//	/**
		//	shader_->disableCG(shader_->getCGVertexShaderProfile());
		//	shader_->disableCG(shader_->getCGFragmentShaderProfile());
		//	shader_->disableTextureParameter(shader_->parameter_);
		//	*/
		//}

		//void GLRenderer::enableTexturing()
		//{
		//	glEnable(GL_TEXTURE_2D);
		//}

		//void GLRenderer::disableTexturing()
		//{
		//	glDisable(GL_TEXTURE_2D);
		//}

		//void GLRenderer::enableBlending()
		//{
		//	glEnable(GL_BLEND);
		//}

		//void GLRenderer::disableBlending()
		//{
		//	glDisable(GL_BLEND);
		//}

		//bool GLRenderer::checkEnabled(GLenum state)
		//{
		//	if (glIsEnabled(state))
		//	{
		//		return true;
		//	}
		//	else
		//	{
		//		return false;
		//	}
		//}

		//void GLRenderer::enableCulling()
		//{
		//	glEnable(GL_CULL_FACE);
		//}

		//void GLRenderer::disableCulling()
		//{
		//	glDisable(GL_CULL_FACE);
		//}

		//void GLRenderer::cullMode(GLenum mode)
		//{
		//	switch (mode)
		//	{
		//	case GL_FRONT:
		//		//cullFrontOn();
		//		break;

		//	case GL_BACK:
		//		//cullBackOn();
		//		break;

		//	case GL_FRONT_AND_BACK:
		//		//cullFrontBackOn();
		//		break;
		//	}
		//}
	}
}