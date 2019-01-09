/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKCOMMANDBUFFERALLOCATEINFO_H__
#define __VK_VKCOMMANDBUFFERALLOCATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCommandBufferAllocateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> commandPool;
      static NAN_GETTER(GetcommandPool);
    static NAN_SETTER(SetcommandPool);
    
    static NAN_GETTER(Getlevel);
    static NAN_SETTER(Setlevel);
    
    static NAN_GETTER(GetcommandBufferCount);
    static NAN_SETTER(SetcommandBufferCount);
    

    // real instance
    VkCommandBufferAllocateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkCommandBufferAllocateInfo();
    ~_VkCommandBufferAllocateInfo();

};

#endif