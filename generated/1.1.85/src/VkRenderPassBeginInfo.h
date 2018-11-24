/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKRENDERPASSBEGININFO_H__
#define __VK_VKRENDERPASSBEGININFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkRenderPassBeginInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> renderPass;
      static NAN_GETTER(GetrenderPass);
    static NAN_SETTER(SetrenderPass);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> framebuffer;
      static NAN_GETTER(Getframebuffer);
    static NAN_SETTER(Setframebuffer);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> renderArea;
      static NAN_GETTER(GetrenderArea);
    static NAN_SETTER(SetrenderArea);
    
    static NAN_GETTER(GetclearValueCount);
    static NAN_SETTER(SetclearValueCount);
    
    std::vector<VkClearValue>* vpClearValues;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pClearValues;
    static NAN_GETTER(GetpClearValues);
    static NAN_SETTER(SetpClearValues);
    

    // real instance
    VkRenderPassBeginInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkRenderPassBeginInfo();
    ~_VkRenderPassBeginInfo();

};

#endif