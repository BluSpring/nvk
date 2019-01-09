/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKSUBPASSDESCRIPTION2KHR_H__
#define __VK_VKSUBPASSDESCRIPTION2KHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSubpassDescription2KHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetpipelineBindPoint);
    static NAN_SETTER(SetpipelineBindPoint);
    
    static NAN_GETTER(GetviewMask);
    static NAN_SETTER(SetviewMask);
    
    static NAN_GETTER(GetinputAttachmentCount);
    static NAN_SETTER(SetinputAttachmentCount);
    
    std::vector<VkAttachmentReference2KHR>* vpInputAttachments;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pInputAttachments;
    static NAN_GETTER(GetpInputAttachments);
    static NAN_SETTER(SetpInputAttachments);
    
    static NAN_GETTER(GetcolorAttachmentCount);
    static NAN_SETTER(SetcolorAttachmentCount);
    
    std::vector<VkAttachmentReference2KHR>* vpColorAttachments;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pColorAttachments;
    static NAN_GETTER(GetpColorAttachments);
    static NAN_SETTER(SetpColorAttachments);
    
    std::vector<VkAttachmentReference2KHR>* vpResolveAttachments;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pResolveAttachments;
    static NAN_GETTER(GetpResolveAttachments);
    static NAN_SETTER(SetpResolveAttachments);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pDepthStencilAttachment;
      static NAN_GETTER(GetpDepthStencilAttachment);
    static NAN_SETTER(SetpDepthStencilAttachment);
    
    static NAN_GETTER(GetpreserveAttachmentCount);
    static NAN_SETTER(SetpreserveAttachmentCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pPreserveAttachments;
    static NAN_GETTER(GetpPreserveAttachments);
    static NAN_SETTER(SetpPreserveAttachments);
    

    // real instance
    VkSubpassDescription2KHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSubpassDescription2KHR();
    ~_VkSubpassDescription2KHR();

};

#endif