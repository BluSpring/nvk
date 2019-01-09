/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKIMAGECOPY_H__
#define __VK_VKIMAGECOPY_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageCopy: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> srcSubresource;
      static NAN_GETTER(GetsrcSubresource);
    static NAN_SETTER(SetsrcSubresource);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> srcOffset;
      static NAN_GETTER(GetsrcOffset);
    static NAN_SETTER(SetsrcOffset);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> dstSubresource;
      static NAN_GETTER(GetdstSubresource);
    static NAN_SETTER(SetdstSubresource);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> dstOffset;
      static NAN_GETTER(GetdstOffset);
    static NAN_SETTER(SetdstOffset);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> extent;
      static NAN_GETTER(Getextent);
    static NAN_SETTER(Setextent);
    

    // real instance
    VkImageCopy instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkImageCopy();
    ~_VkImageCopy();

};

#endif