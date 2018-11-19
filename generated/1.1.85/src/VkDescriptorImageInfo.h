/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKDESCRIPTORIMAGEINFO_H__
#define __VK_VKDESCRIPTORIMAGEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorImageInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> sampler;
      static NAN_GETTER(Getsampler);
    static NAN_SETTER(Setsampler);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> imageView;
      static NAN_GETTER(GetimageView);
    static NAN_SETTER(SetimageView);
    
    static NAN_GETTER(GetimageLayout);
    static NAN_SETTER(SetimageLayout);
    

    // real instance
    VkDescriptorImageInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("sampler").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("imageView").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("imageLayout").ToLocalChecked();

    _VkDescriptorImageInfo();
    ~_VkDescriptorImageInfo();

};

#endif