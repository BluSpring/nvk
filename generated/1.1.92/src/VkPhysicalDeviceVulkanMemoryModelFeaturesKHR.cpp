/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceVulkanMemoryModelFeaturesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::constructor;

_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR;
  
}

_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::~_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR() {
  //printf("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("vulkanMemoryModel").ToLocalChecked(), GetvulkanMemoryModel, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("vulkanMemoryModelDeviceScope").ToLocalChecked(), GetvulkanMemoryModelDeviceScope, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::flush() {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR* self = new _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::GetsType) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// vulkanMemoryModel
NAN_GETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::GetvulkanMemoryModel) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vulkanMemoryModel));
}// vulkanMemoryModelDeviceScope
NAN_GETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::GetvulkanMemoryModelDeviceScope) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vulkanMemoryModelDeviceScope));
}