/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKCLEARVALUE_H__
#define __VK_VKCLEARVALUE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkClearValue: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> color;
      static NAN_GETTER(Getcolor);
    static NAN_SETTER(Setcolor);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> depthStencil;
      static NAN_GETTER(GetdepthStencil);
    static NAN_SETTER(SetdepthStencil);
    

    // real instance
    VkClearValue instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkClearValue();
    ~_VkClearValue();

};

#endif