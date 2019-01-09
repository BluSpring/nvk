/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __VK_VKGRAPHICSPIPELINECREATEINFO_H__
#define __VK_VKGRAPHICSPIPELINECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkGraphicsPipelineCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetstageCount);
    static NAN_SETTER(SetstageCount);
    
    std::vector<VkPipelineShaderStageCreateInfo>* vpStages;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pStages;
    static NAN_GETTER(GetpStages);
    static NAN_SETTER(SetpStages);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pVertexInputState;
      static NAN_GETTER(GetpVertexInputState);
    static NAN_SETTER(SetpVertexInputState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pInputAssemblyState;
      static NAN_GETTER(GetpInputAssemblyState);
    static NAN_SETTER(SetpInputAssemblyState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pTessellationState;
      static NAN_GETTER(GetpTessellationState);
    static NAN_SETTER(SetpTessellationState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pViewportState;
      static NAN_GETTER(GetpViewportState);
    static NAN_SETTER(SetpViewportState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pRasterizationState;
      static NAN_GETTER(GetpRasterizationState);
    static NAN_SETTER(SetpRasterizationState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pMultisampleState;
      static NAN_GETTER(GetpMultisampleState);
    static NAN_SETTER(SetpMultisampleState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pDepthStencilState;
      static NAN_GETTER(GetpDepthStencilState);
    static NAN_SETTER(SetpDepthStencilState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pColorBlendState;
      static NAN_GETTER(GetpColorBlendState);
    static NAN_SETTER(SetpColorBlendState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pDynamicState;
      static NAN_GETTER(GetpDynamicState);
    static NAN_SETTER(SetpDynamicState);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> layout;
      static NAN_GETTER(Getlayout);
    static NAN_SETTER(Setlayout);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> renderPass;
      static NAN_GETTER(GetrenderPass);
    static NAN_SETTER(SetrenderPass);
    
    static NAN_GETTER(Getsubpass);
    static NAN_SETTER(Setsubpass);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> basePipelineHandle;
      static NAN_GETTER(GetbasePipelineHandle);
    static NAN_SETTER(SetbasePipelineHandle);
    
    static NAN_GETTER(GetbasePipelineIndex);
    static NAN_SETTER(SetbasePipelineIndex);
    

    // real instance
    VkGraphicsPipelineCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkGraphicsPipelineCreateInfo();
    ~_VkGraphicsPipelineCreateInfo();

};

#endif