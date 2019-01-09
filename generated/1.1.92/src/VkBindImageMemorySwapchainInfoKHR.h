/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKBINDIMAGEMEMORYSWAPCHAININFOKHR_H__
#define __VK_VKBINDIMAGEMEMORYSWAPCHAININFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBindImageMemorySwapchainInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> swapchain;
      static NAN_GETTER(Getswapchain);
    static NAN_SETTER(Setswapchain);
    
    static NAN_GETTER(GetimageIndex);
    static NAN_SETTER(SetimageIndex);
    

    // real instance
    VkBindImageMemorySwapchainInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkBindImageMemorySwapchainInfoKHR();
    ~_VkBindImageMemorySwapchainInfoKHR();

};

#endif