/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.7
 */
#ifndef __VK_VKSAMPLERCREATEINFO_H__
#define __VK_VKSAMPLERCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSamplerCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetmagFilter);
    static NAN_SETTER(SetmagFilter);
    
    static NAN_GETTER(GetminFilter);
    static NAN_SETTER(SetminFilter);
    
    static NAN_GETTER(GetmipmapMode);
    static NAN_SETTER(SetmipmapMode);
    
    static NAN_GETTER(GetaddressModeU);
    static NAN_SETTER(SetaddressModeU);
    
    static NAN_GETTER(GetaddressModeV);
    static NAN_SETTER(SetaddressModeV);
    
    static NAN_GETTER(GetaddressModeW);
    static NAN_SETTER(SetaddressModeW);
    
    static NAN_GETTER(GetmipLodBias);
    static NAN_SETTER(SetmipLodBias);
    
    static NAN_GETTER(GetanisotropyEnable);
    static NAN_SETTER(SetanisotropyEnable);
    
    static NAN_GETTER(GetmaxAnisotropy);
    static NAN_SETTER(SetmaxAnisotropy);
    
    static NAN_GETTER(GetcompareEnable);
    static NAN_SETTER(SetcompareEnable);
    
    static NAN_GETTER(GetcompareOp);
    static NAN_SETTER(SetcompareOp);
    
    static NAN_GETTER(GetminLod);
    static NAN_SETTER(SetminLod);
    
    static NAN_GETTER(GetmaxLod);
    static NAN_SETTER(SetmaxLod);
    
    static NAN_GETTER(GetborderColor);
    static NAN_SETTER(SetborderColor);
    
    static NAN_GETTER(GetunnormalizedCoordinates);
    static NAN_SETTER(SetunnormalizedCoordinates);
    

    // real instance
    VkSamplerCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("magFilter").ToLocalChecked();
    v8::Local<v8::String> sAccess4 = Nan::New("minFilter").ToLocalChecked();
    v8::Local<v8::String> sAccess5 = Nan::New("mipmapMode").ToLocalChecked();
    v8::Local<v8::String> sAccess6 = Nan::New("addressModeU").ToLocalChecked();
    v8::Local<v8::String> sAccess7 = Nan::New("addressModeV").ToLocalChecked();
    v8::Local<v8::String> sAccess8 = Nan::New("addressModeW").ToLocalChecked();
    v8::Local<v8::String> sAccess9 = Nan::New("mipLodBias").ToLocalChecked();
    v8::Local<v8::String> sAccess10 = Nan::New("anisotropyEnable").ToLocalChecked();
    v8::Local<v8::String> sAccess11 = Nan::New("maxAnisotropy").ToLocalChecked();
    v8::Local<v8::String> sAccess12 = Nan::New("compareEnable").ToLocalChecked();
    v8::Local<v8::String> sAccess13 = Nan::New("compareOp").ToLocalChecked();
    v8::Local<v8::String> sAccess14 = Nan::New("minLod").ToLocalChecked();
    v8::Local<v8::String> sAccess15 = Nan::New("maxLod").ToLocalChecked();
    v8::Local<v8::String> sAccess16 = Nan::New("borderColor").ToLocalChecked();
    v8::Local<v8::String> sAccess17 = Nan::New("unnormalizedCoordinates").ToLocalChecked();

    _VkSamplerCreateInfo();
    ~_VkSamplerCreateInfo();

};

#endif