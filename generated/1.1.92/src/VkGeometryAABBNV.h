/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKGEOMETRYAABBNV_H__
#define __VK_VKGEOMETRYAABBNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkGeometryAABBNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> aabbData;
      static NAN_GETTER(GetaabbData);
    static NAN_SETTER(SetaabbData);
    
    static NAN_GETTER(GetnumAABBs);
    static NAN_SETTER(SetnumAABBs);
    
    static NAN_GETTER(Getstride);
    static NAN_SETTER(Setstride);
    
    static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    

    // real instance
    VkGeometryAABBNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkGeometryAABBNV();
    ~_VkGeometryAABBNV();

};

#endif