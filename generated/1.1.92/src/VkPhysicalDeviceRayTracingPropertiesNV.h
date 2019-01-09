/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKPHYSICALDEVICERAYTRACINGPROPERTIESNV_H__
#define __VK_VKPHYSICALDEVICERAYTRACINGPROPERTIESNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceRayTracingPropertiesNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetshaderGroupHandleSize);
    static NAN_SETTER(SetshaderGroupHandleSize);
    
    static NAN_GETTER(GetmaxRecursionDepth);
    static NAN_SETTER(SetmaxRecursionDepth);
    
    static NAN_GETTER(GetmaxShaderGroupStride);
    static NAN_SETTER(SetmaxShaderGroupStride);
    
    static NAN_GETTER(GetshaderGroupBaseAlignment);
    static NAN_SETTER(SetshaderGroupBaseAlignment);
    
    static NAN_GETTER(GetmaxGeometryCount);
    static NAN_SETTER(SetmaxGeometryCount);
    
    static NAN_GETTER(GetmaxInstanceCount);
    static NAN_SETTER(SetmaxInstanceCount);
    
    static NAN_GETTER(GetmaxTriangleCount);
    static NAN_SETTER(SetmaxTriangleCount);
    
    static NAN_GETTER(GetmaxDescriptorSetAccelerationStructures);
    static NAN_SETTER(SetmaxDescriptorSetAccelerationStructures);
    

    // real instance
    VkPhysicalDeviceRayTracingPropertiesNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceRayTracingPropertiesNV();
    ~_VkPhysicalDeviceRayTracingPropertiesNV();

};

#endif