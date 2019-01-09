/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKCLEARCOLORVALUE_H__
#define __VK_VKCLEARCOLORVALUE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkClearColorValue: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    std::vector<float>* vfloat32;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> float32;
    static NAN_GETTER(Getfloat32);
    static NAN_SETTER(Setfloat32);
    
    std::vector<int32_t>* vint32;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> int32;
    static NAN_GETTER(Getint32);
    static NAN_SETTER(Setint32);
    
    std::vector<uint32_t>* vuint32;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> uint32;
    static NAN_GETTER(Getuint32);
    static NAN_SETTER(Setuint32);
    

    // real instance
    VkClearColorValue instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkClearColorValue();
    ~_VkClearColorValue();

};

#endif