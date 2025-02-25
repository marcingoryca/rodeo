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
#ifndef RODEO_ENTITY_OBJECT_H_
#define RODEO_ENTITY_OBJECT_H_

#ifndef RODEO_CORE_CONSTANTS_H_
#include "core\constants.h"
#endif

#ifndef RODEO_MATH_MATRIX4_H_
#include "math\matrix4.h"
#endif

namespace rodeo
{
    namespace entity
    {
        class Event;

		class Object
		{
		public:
			Object()
				:_name(""),
				_type("")
			{
				init();
			}

			// ---- //
			virtual ~Object()
			{
				clear();
			}

			/*
			 | ---------------------------------------
			 |    Constructor with name of the object
			 |    Explicit keyword prevents the compiler
			 |    from using the constructor for
			 |    implicit conversion
			 | ---------------------------------------
			 */
			explicit Object(std::string name)
				:_name(name)
			{
				init();
			}

			/*
			 | ----------------------------------------
			 |    Constructor with name and
			 |    the type
			 | ----------------------------------------
			 */
			Object(std::string name, std::string type)
				:_name(name),
				_type(type)
			{
				init();
			}

			/*
			 | --------------------------------------
			 |      Copy Constructor
			 | --------------------------------------
			 */
			Object(Object& copy);

			/*
			 | ----------------------------------------
			 |     Copy operator
			 | ----------------------------------------
			 */
			Object& operator=(const Object& copy);

			/*
			 | ---------------------------------------------
			 |     Gets Id of the Object
			 |     Returns unsigned int value of the id
			 | ---------------------------------------------
			 */
			unsigned int getObjectId() const
			{
				return _id;
			}

			/*
			 | ----------------------------------------
			 |     Gets Name of the Object
			 |     Returns string value of the name
			 | ----------------------------------------
			 */
			std::string getObjectName() const
			{
				return _name;
			}

			/*
			 | -------------------------------------------
			 |    Gets Type of the Object
			 |    Returns string value of the type
			 | -------------------------------------------
			 */
			std::string getObjectType() const
			{
				return _type;
			}

			/*
			 | --------------------------------------------
			 |     Gets number of the Objects
			 |     Returns unsigned int value of the number
			 | --------------------------------------------
			 */
			unsigned int getObjectsCounter() const
			{
				return _s_object_counter;
			}

			/*
			 | ------------------------------------------------
			 |     Gets the width of the object
			 |     Returns float width value
			 | ------------------------------------------------
			 */
			float getObjectWidth() const
			{
				return _width;
			}

			/*
			 | ------------------------------------------------
			 |     Gets height of the object
			 |     returns float height value
			 | ------------------------------------------------
			 */
			float getObjectHeight() const
			{
				return _height;
			}

			/*
			 | ------------------------------------------------
			 |     Gets depth of the object
			 |     Returns float depth value
			 | ------------------------------------------------
			 */
			float getObjectDepth() const
			{
				return _depth;
			}

			/*
			 | --------------------------------------------
			 |     Sets type of the Object
			 |     Parameter string value of the type
			 | --------------------------------------------
			 */
			void setObjectType(std::string new_type)
			{
				_type = new_type;
			}

			/*
			 | ---------------------------------------------
			 |     Sets name of the Object
			 |     Parameter string value of the name
			 | ---------------------------------------------
			 */
			void setObjectName(std::string new_name)
			{
				_name = new_name;
			}

			/*
			 | ---------------------------------------------
			 |     Sets the width of the object
			 |     Parameter float new width value
			 | ---------------------------------------------
			 */
			void setObjectWidth(float width)
			{
				_width = width;
			}

			/*
			 | ----------------------------------------------
			 |     Sets the height of the object
			 |     Parameter float new height value
			 | ----------------------------------------------
			 */
			void setObjectHeight(float height)
			{
				_height = height;
			}

			/*
			 | ----------------------------------------------
			 |     Sets the depth of the obejct
			 |     Parameter float new depth value
			 | ----------------------------------------------
			 */
			void setObjectDepth(float depth)
			{
				_depth = depth;
			}

        protected:
            // Counter for every object on the scene
            static unsigned int _s_object_counter;

            // Identifier for every object on the scene
            unsigned int _id;

            std::string _name;
            std::string _type;

			float _width;
			float _height;
			float _depth;

			void init();
			//virtual void setId(ui id);
			void clear();

        };
    }    // end of entity namespace
}    // end of rodeo namespace
#endif