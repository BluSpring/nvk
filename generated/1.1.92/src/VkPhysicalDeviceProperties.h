/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKPHYSICALDEVICEPROPERTIES_H__
#define __VK_VKPHYSICALDEVICEPROPERTIES_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceProperties: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetapiVersion);
    static NAN_GETTER(GetdriverVersion);
    static NAN_GETTER(GetvendorID);
    static NAN_GETTER(GetdeviceID);
    static NAN_GETTER(GetdeviceType);
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> deviceName;
    static NAN_GETTER(GetdeviceName);
    std::vector<uint8_t>* vpipelineCacheUUID;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pipelineCacheUUID;
    static NAN_GETTER(GetpipelineCacheUUID);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> limits;
      static NAN_GETTER(Getlimits);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> sparseProperties;
      static NAN_GETTER(GetsparseProperties);

    // real instance
    VkPhysicalDeviceProperties instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceProperties();
    ~_VkPhysicalDeviceProperties();

};

#endif