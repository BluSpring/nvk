/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKPHYSICALDEVICEMEMORYPROPERTIES2_H__
#define __VK_VKPHYSICALDEVICEMEMORYPROPERTIES2_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceMemoryProperties2: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> memoryProperties;
      static NAN_GETTER(GetmemoryProperties);

    // real instance
    VkPhysicalDeviceMemoryProperties2 instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceMemoryProperties2();
    ~_VkPhysicalDeviceMemoryProperties2();

};

#endif