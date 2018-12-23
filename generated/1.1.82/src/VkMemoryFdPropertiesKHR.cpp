/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryFdPropertiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryFdPropertiesKHR::constructor;

_VkMemoryFdPropertiesKHR::_VkMemoryFdPropertiesKHR() {
  instance.sType = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;
  
}

_VkMemoryFdPropertiesKHR::~_VkMemoryFdPropertiesKHR() {
  //printf("VkMemoryFdPropertiesKHR deconstructed!!\n");
  
  
  
}

void _VkMemoryFdPropertiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryFdPropertiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryFdPropertiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryTypeBits").ToLocalChecked(), GetmemoryTypeBits, nullptr, ctor);
  Nan::Set(target, Nan::New("VkMemoryFdPropertiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryFdPropertiesKHR::flush() {
  _VkMemoryFdPropertiesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkMemoryFdPropertiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkMemoryFdPropertiesKHR* self = new _VkMemoryFdPropertiesKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryFdPropertiesKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkMemoryFdPropertiesKHR::GetsType) {
  _VkMemoryFdPropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkMemoryFdPropertiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// memoryTypeBits
NAN_GETTER(_VkMemoryFdPropertiesKHR::GetmemoryTypeBits) {
  _VkMemoryFdPropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkMemoryFdPropertiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryTypeBits));
}