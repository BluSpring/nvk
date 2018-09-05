#ifndef __VK_VKDESCRIPTORSETLAYOUT_H__
#define __VK_VKDESCRIPTORSETLAYOUT_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorSetLayout: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkDescriptorSetLayout *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkDescriptorSetLayout();
    ~_VkDescriptorSetLayout();

};

#endif