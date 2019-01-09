/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKIMAGEBLIT_H__
#define __VK_VKIMAGEBLIT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageBlit: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> srcSubresource;
      static NAN_GETTER(GetsrcSubresource);
    static NAN_SETTER(SetsrcSubresource);
    
    std::vector<VkOffset3D>* vsrcOffsets;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> srcOffsets;
    static NAN_GETTER(GetsrcOffsets);
    static NAN_SETTER(SetsrcOffsets);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> dstSubresource;
      static NAN_GETTER(GetdstSubresource);
    static NAN_SETTER(SetdstSubresource);
    
    std::vector<VkOffset3D>* vdstOffsets;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> dstOffsets;
    static NAN_GETTER(GetdstOffsets);
    static NAN_SETTER(SetdstOffsets);
    

    // real instance
    VkImageBlit instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkImageBlit();
    ~_VkImageBlit();

};

#endif