/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKDEVICEGROUPRENDERPASSBEGININFOKHR_H__
#define __VK_VKDEVICEGROUPRENDERPASSBEGININFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceGroupRenderPassBeginInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors

    // real instance
    VkDeviceGroupRenderPassBeginInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDeviceGroupRenderPassBeginInfoKHR();
    ~_VkDeviceGroupRenderPassBeginInfoKHR();

};

#endif