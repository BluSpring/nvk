/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceInlineUniformBlockFeaturesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceInlineUniformBlockFeaturesEXT::constructor;

_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::_VkPhysicalDeviceInlineUniformBlockFeaturesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;
  
}

_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::~_VkPhysicalDeviceInlineUniformBlockFeaturesEXT() {
  //printf("VkPhysicalDeviceInlineUniformBlockFeaturesEXT deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceInlineUniformBlockFeaturesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceInlineUniformBlockFeaturesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("inlineUniformBlock").ToLocalChecked(), GetinlineUniformBlock, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorBindingInlineUniformBlockUpdateAfterBind").ToLocalChecked(), GetdescriptorBindingInlineUniformBlockUpdateAfterBind, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceInlineUniformBlockFeaturesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceInlineUniformBlockFeaturesEXT::flush() {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceInlineUniformBlockFeaturesEXT* self = new _VkPhysicalDeviceInlineUniformBlockFeaturesEXT();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceInlineUniformBlockFeaturesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::GetsType) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// inlineUniformBlock
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::GetinlineUniformBlock) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.inlineUniformBlock));
}// descriptorBindingInlineUniformBlockUpdateAfterBind
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::GetdescriptorBindingInlineUniformBlockUpdateAfterBind) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorBindingInlineUniformBlockUpdateAfterBind));
}