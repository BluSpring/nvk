/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKEXPORTMEMORYALLOCATEINFOKHR_H__
#define __VK_VKEXPORTMEMORYALLOCATEINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkExportMemoryAllocateInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors

    // real instance
    VkExportMemoryAllocateInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkExportMemoryAllocateInfoKHR();
    ~_VkExportMemoryAllocateInfoKHR();

};

#endif