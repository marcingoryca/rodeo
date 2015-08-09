/*
-----------------------------------
    MG Game Engine
    Copyright(c) Marcin Goryca
    marcin.goryca@gmail.com
    http://marcingoryca.pl
-----------------------------------
*/
#ifndef MG_CORE_RENDEREREXCEPTION_H_
#define MG_CORE_RENDEREREXCEPTION_H_

#ifndef MG_CORE_EXCEPTION_H_
#include "core/exception.h"
#endif

namespace mg
{
namespace core
{
class RendererException : public Exception
{
public:
    RendererException(){}

    // Constructor
    // Parameter const char* You must specify what went wrong
    explicit RendererException(const char* reason_of_exception)
        :Exception(reason_of_exception)
    {}

    ~RendererException(){}
};
}    // end of core namespace
}    // end of mg namespace
#endif