/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKPHYSICALDEVICEASTCDECODEFEATURESEXT_H__
#define __VK_VKPHYSICALDEVICEASTCDECODEFEATURESEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceASTCDecodeFeaturesEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetdecodeModeSharedExponent);
    static NAN_SETTER(SetdecodeModeSharedExponent);
    

    // real instance
    VkPhysicalDeviceASTCDecodeFeaturesEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceASTCDecodeFeaturesEXT();
    ~_VkPhysicalDeviceASTCDecodeFeaturesEXT();

};

#endif