/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKPHYSICALDEVICESAMPLELOCATIONSPROPERTIESEXT_H__
#define __VK_VKPHYSICALDEVICESAMPLELOCATIONSPROPERTIESEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceSampleLocationsPropertiesEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_GETTER(GetsampleLocationSampleCounts);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> maxSampleLocationGridSize;
      static NAN_GETTER(GetmaxSampleLocationGridSize);
    std::vector<float>* vsampleLocationCoordinateRange;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> sampleLocationCoordinateRange;
    static NAN_GETTER(GetsampleLocationCoordinateRange);
    static NAN_GETTER(GetsampleLocationSubPixelBits);
    static NAN_GETTER(GetvariableSampleLocations);

    // real instance
    VkPhysicalDeviceSampleLocationsPropertiesEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceSampleLocationsPropertiesEXT();
    ~_VkPhysicalDeviceSampleLocationsPropertiesEXT();

};

#endif