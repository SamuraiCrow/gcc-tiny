
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_DynamicAny_DynValueHelper__
#define __org_omg_DynamicAny_DynValueHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Object;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace DynamicAny
      {
          class DynValue;
          class DynValueHelper;
      }
    }
  }
}

class org::omg::DynamicAny::DynValueHelper : public ::java::lang::Object
{

public:
  DynValueHelper();
  static ::org::omg::DynamicAny::DynValue * narrow(::org::omg::CORBA::Object *);
  static ::org::omg::DynamicAny::DynValue * unchecked_narrow(::org::omg::CORBA::Object *);
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::DynamicAny::DynValue *);
  static ::org::omg::DynamicAny::DynValue * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::DynamicAny::DynValue * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::DynamicAny::DynValue *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_DynamicAny_DynValueHelper__