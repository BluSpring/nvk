/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
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
    bool flush(void);

  private:

    _VkVertexInputAttributeDescription();
    ~_VkVertexInputAttributeDescription();

};

#endif