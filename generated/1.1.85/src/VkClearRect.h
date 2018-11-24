/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKCLEARRECT_H__
#define __VK_VKCLEARRECT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkClearRect: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> rect;
      static NAN_GETTER(Getrect);
    static NAN_SETTER(Setrect);
    
    static NAN_GETTER(GetbaseArrayLayer);
    static NAN_SETTER(SetbaseArrayLayer);
    
    static NAN_GETTER(GetlayerCount);
    static NAN_SETTER(SetlayerCount);
    

    // real instance
    VkClearRect instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkClearRect();
    ~_VkClearRect();

};

#endif