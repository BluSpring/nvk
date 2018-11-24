/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPIPELINEDEPTHSTENCILSTATECREATEINFO_H__
#define __VK_VKPIPELINEDEPTHSTENCILSTATECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineDepthStencilStateCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetdepthTestEnable);
    static NAN_SETTER(SetdepthTestEnable);
    
    static NAN_GETTER(GetdepthWriteEnable);
    static NAN_SETTER(SetdepthWriteEnable);
    
    static NAN_GETTER(GetdepthCompareOp);
    static NAN_SETTER(SetdepthCompareOp);
    
    static NAN_GETTER(GetdepthBoundsTestEnable);
    static NAN_SETTER(SetdepthBoundsTestEnable);
    
    static NAN_GETTER(GetstencilTestEnable);
    static NAN_SETTER(SetstencilTestEnable);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> front;
      static NAN_GETTER(Getfront);
    static NAN_SETTER(Setfront);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> back;
      static NAN_GETTER(Getback);
    static NAN_SETTER(Setback);
    
    static NAN_GETTER(GetminDepthBounds);
    static NAN_SETTER(SetminDepthBounds);
    
    static NAN_GETTER(GetmaxDepthBounds);
    static NAN_SETTER(SetmaxDepthBounds);
    

    // real instance
    VkPipelineDepthStencilStateCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineDepthStencilStateCreateInfo();
    ~_VkPipelineDepthStencilStateCreateInfo();

};

#endif