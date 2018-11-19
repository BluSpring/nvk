/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKVERTEXINPUTATTRIBUTEDESCRIPTION_H__
#define __VK_VKVERTEXINPUTATTRIBUTEDESCRIPTION_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkVertexInputAttributeDescription: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(Getlocation);
    static NAN_SETTER(Setlocation);
    
    static NAN_GETTER(Getbinding);
    static NAN_SETTER(Setbinding);
    
    static NAN_GETTER(Getformat);
    static NAN_SETTER(Setformat);
    
    static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    

    // real instance
    VkVertexInputAttributeDescription instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("location").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("binding").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("format").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("offset").ToLocalChecked();

    _VkVertexInputAttributeDescription();
    ~_VkVertexInputAttributeDescription();

};

#endif