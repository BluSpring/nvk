/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKAPPLICATIONINFO_H__
#define __VK_VKAPPLICATIONINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkApplicationInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> pApplicationName;
    static NAN_GETTER(GetpApplicationName);
    static NAN_SETTER(SetpApplicationName);
    
    static NAN_GETTER(GetapplicationVersion);
    static NAN_SETTER(SetapplicationVersion);
    
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> pEngineName;
    static NAN_GETTER(GetpEngineName);
    static NAN_SETTER(SetpEngineName);
    
    static NAN_GETTER(GetengineVersion);
    static NAN_SETTER(SetengineVersion);
    
    static NAN_GETTER(GetapiVersion);
    static NAN_SETTER(SetapiVersion);
    

    // real instance
    VkApplicationInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkApplicationInfo();
    ~_VkApplicationInfo();

};

#endif