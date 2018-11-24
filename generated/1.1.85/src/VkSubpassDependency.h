/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKSUBPASSDEPENDENCY_H__
#define __VK_VKSUBPASSDEPENDENCY_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSubpassDependency: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsrcSubpass);
    static NAN_SETTER(SetsrcSubpass);
    
    static NAN_GETTER(GetdstSubpass);
    static NAN_SETTER(SetdstSubpass);
    
    static NAN_GETTER(GetsrcStageMask);
    static NAN_SETTER(SetsrcStageMask);
    
    static NAN_GETTER(GetdstStageMask);
    static NAN_SETTER(SetdstStageMask);
    
    static NAN_GETTER(GetsrcAccessMask);
    static NAN_SETTER(SetsrcAccessMask);
    
    static NAN_GETTER(GetdstAccessMask);
    static NAN_SETTER(SetdstAccessMask);
    
    static NAN_GETTER(GetdependencyFlags);
    static NAN_SETTER(SetdependencyFlags);
    

    // real instance
    VkSubpassDependency instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSubpassDependency();
    ~_VkSubpassDependency();

};

#endif