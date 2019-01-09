/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKPHYSICALDEVICESHADINGRATEIMAGEFEATURESNV_H__
#define __VK_VKPHYSICALDEVICESHADINGRATEIMAGEFEATURESNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceShadingRateImageFeaturesNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetshadingRateImage);
    static NAN_SETTER(SetshadingRateImage);
    
    static NAN_GETTER(GetshadingRateCoarseSampleOrder);
    static NAN_SETTER(SetshadingRateCoarseSampleOrder);
    

    // real instance
    VkPhysicalDeviceShadingRateImageFeaturesNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceShadingRateImageFeaturesNV();
    ~_VkPhysicalDeviceShadingRateImageFeaturesNV();

};

#endif