/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKCOMPONENTMAPPING_H__
#define __VK_VKCOMPONENTMAPPING_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkComponentMapping: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(Getr);
    static NAN_SETTER(Setr);
    
    static NAN_GETTER(Getg);
    static NAN_SETTER(Setg);
    
    static NAN_GETTER(Getb);
    static NAN_SETTER(Setb);
    
    static NAN_GETTER(Geta);
    static NAN_SETTER(Seta);
    

    // real instance
    VkComponentMapping instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("r").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("g").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("b").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("a").ToLocalChecked();

    _VkComponentMapping();
    ~_VkComponentMapping();

};

#endif