/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.7
 */
#ifndef __VK_VKVIEWPORT_H__
#define __VK_VKVIEWPORT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkViewport: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(Getx);
    static NAN_SETTER(Setx);
    
    static NAN_GETTER(Gety);
    static NAN_SETTER(Sety);
    
    static NAN_GETTER(Getwidth);
    static NAN_SETTER(Setwidth);
    
    static NAN_GETTER(Getheight);
    static NAN_SETTER(Setheight);
    
    static NAN_GETTER(GetminDepth);
    static NAN_SETTER(SetminDepth);
    
    static NAN_GETTER(GetmaxDepth);
    static NAN_SETTER(SetmaxDepth);
    

    // real instance
    VkViewport instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("x").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("y").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("width").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("height").ToLocalChecked();
    v8::Local<v8::String> sAccess4 = Nan::New("minDepth").ToLocalChecked();
    v8::Local<v8::String> sAccess5 = Nan::New("maxDepth").ToLocalChecked();

    _VkViewport();
    ~_VkViewport();

};

#endif