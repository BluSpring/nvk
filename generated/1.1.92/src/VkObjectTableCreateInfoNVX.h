/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKOBJECTTABLECREATEINFONVX_H__
#define __VK_VKOBJECTTABLECREATEINFONVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkObjectTableCreateInfoNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetobjectCount);
    static NAN_SETTER(SetobjectCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pObjectEntryTypes;
    static NAN_GETTER(GetpObjectEntryTypes);
    static NAN_SETTER(SetpObjectEntryTypes);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pObjectEntryCounts;
    static NAN_GETTER(GetpObjectEntryCounts);
    static NAN_SETTER(SetpObjectEntryCounts);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pObjectEntryUsageFlags;
    static NAN_GETTER(GetpObjectEntryUsageFlags);
    static NAN_SETTER(SetpObjectEntryUsageFlags);
    
    static NAN_GETTER(GetmaxUniformBuffersPerDescriptor);
    static NAN_SETTER(SetmaxUniformBuffersPerDescriptor);
    
    static NAN_GETTER(GetmaxStorageBuffersPerDescriptor);
    static NAN_SETTER(SetmaxStorageBuffersPerDescriptor);
    
    static NAN_GETTER(GetmaxStorageImagesPerDescriptor);
    static NAN_SETTER(SetmaxStorageImagesPerDescriptor);
    
    static NAN_GETTER(GetmaxSampledImagesPerDescriptor);
    static NAN_SETTER(SetmaxSampledImagesPerDescriptor);
    
    static NAN_GETTER(GetmaxPipelineLayouts);
    static NAN_SETTER(SetmaxPipelineLayouts);
    

    // real instance
    VkObjectTableCreateInfoNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkObjectTableCreateInfoNVX();
    ~_VkObjectTableCreateInfoNVX();

};

#endif