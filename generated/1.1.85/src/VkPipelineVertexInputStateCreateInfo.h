/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKPIPELINEVERTEXINPUTSTATECREATEINFO_H__
#define __VK_VKPIPELINEVERTEXINPUTSTATECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineVertexInputStateCreateInfo: public Nan::ObjectWrap {

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
    
    static NAN_GETTER(GetvertexBindingDescriptionCount);
    static NAN_SETTER(SetvertexBindingDescriptionCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pVertexBindingDescriptions;
    static NAN_GETTER(GetpVertexBindingDescriptions);
    static NAN_SETTER(SetpVertexBindingDescriptions);
    
    static NAN_GETTER(GetvertexAttributeDescriptionCount);
    static NAN_SETTER(SetvertexAttributeDescriptionCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pVertexAttributeDescriptions;
    static NAN_GETTER(GetpVertexAttributeDescriptions);
    static NAN_SETTER(SetpVertexAttributeDescriptions);
    

    // real instance
    VkPipelineVertexInputStateCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("vertexBindingDescriptionCount").ToLocalChecked();
    v8::Local<v8::String> sAccess4 = Nan::New("pVertexBindingDescriptions").ToLocalChecked();
    v8::Local<v8::String> sAccess5 = Nan::New("vertexAttributeDescriptionCount").ToLocalChecked();
    v8::Local<v8::String> sAccess6 = Nan::New("pVertexAttributeDescriptions").ToLocalChecked();

    _VkPipelineVertexInputStateCreateInfo();
    ~_VkPipelineVertexInputStateCreateInfo();

};

#endif