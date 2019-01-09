/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKDESCRIPTORSETLAYOUTBINDING_H__
#define __VK_VKDESCRIPTORSETLAYOUTBINDING_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorSetLayoutBinding: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getbinding);
    static NAN_SETTER(Setbinding);
    
    static NAN_GETTER(GetdescriptorType);
    static NAN_SETTER(SetdescriptorType);
    
    static NAN_GETTER(GetdescriptorCount);
    static NAN_SETTER(SetdescriptorCount);
    
    static NAN_GETTER(GetstageFlags);
    static NAN_SETTER(SetstageFlags);
    
    std::vector<VkSampler>* vpImmutableSamplers;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pImmutableSamplers;
    static NAN_GETTER(GetpImmutableSamplers);
    static NAN_SETTER(SetpImmutableSamplers);
    

    // real instance
    VkDescriptorSetLayoutBinding instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDescriptorSetLayoutBinding();
    ~_VkDescriptorSetLayoutBinding();

};

#endif