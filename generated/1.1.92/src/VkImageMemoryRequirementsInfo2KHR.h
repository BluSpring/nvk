/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKIMAGEMEMORYREQUIREMENTSINFO2KHR_H__
#define __VK_VKIMAGEMEMORYREQUIREMENTSINFO2KHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageMemoryRequirementsInfo2KHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors

    // real instance
    VkImageMemoryRequirementsInfo2KHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkImageMemoryRequirementsInfo2KHR();
    ~_VkImageMemoryRequirementsInfo2KHR();

};

#endif