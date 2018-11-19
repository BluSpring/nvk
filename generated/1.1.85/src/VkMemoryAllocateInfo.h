/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.7
 */
#ifndef __VK_VKMEMORYALLOCATEINFO_H__
#define __VK_VKMEMORYALLOCATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMemoryAllocateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(GetallocationSize);
    static NAN_SETTER(SetallocationSize);
    
    static NAN_GETTER(GetmemoryTypeIndex);
    static NAN_SETTER(SetmemoryTypeIndex);
    

    // real instance
    VkMemoryAllocateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("allocationSize").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("memoryTypeIndex").ToLocalChecked();

    _VkMemoryAllocateInfo();
    ~_VkMemoryAllocateInfo();

};

#endif