/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkQueueFamilyProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkQueueFamilyProperties::constructor;

_VkQueueFamilyProperties::_VkQueueFamilyProperties() {
  
  
}

_VkQueueFamilyProperties::~_VkQueueFamilyProperties() {
  //printf("VkQueueFamilyProperties deconstructed!!\n");
  
  
  
  
  
}

void _VkQueueFamilyProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkQueueFamilyProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkQueueFamilyProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("queueFlags").ToLocalChecked(), GetqueueFlags, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueCount").ToLocalChecked(), GetqueueCount, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("timestampValidBits").ToLocalChecked(), GettimestampValidBits, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("minImageTransferGranularity").ToLocalChecked(), GetminImageTransferGranularity, nullptr, ctor);
  Nan::Set(target, Nan::New("VkQueueFamilyProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkQueueFamilyProperties::flush() {
  _VkQueueFamilyProperties *self = this;
  if (!(self->minImageTransferGranularity.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->minImageTransferGranularity);
    
  }
  return true;
}

NAN_METHOD(_VkQueueFamilyProperties::New) {
  if (info.IsConstructCall()) {
    _VkQueueFamilyProperties* self = new _VkQueueFamilyProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkQueueFamilyProperties constructor cannot be invoked without 'new'");
  }
};

// queueFlags
NAN_GETTER(_VkQueueFamilyProperties::GetqueueFlags) {
  _VkQueueFamilyProperties *self = Nan::ObjectWrap::Unwrap<_VkQueueFamilyProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFlags));
}// queueCount
NAN_GETTER(_VkQueueFamilyProperties::GetqueueCount) {
  _VkQueueFamilyProperties *self = Nan::ObjectWrap::Unwrap<_VkQueueFamilyProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueCount));
}// timestampValidBits
NAN_GETTER(_VkQueueFamilyProperties::GettimestampValidBits) {
  _VkQueueFamilyProperties *self = Nan::ObjectWrap::Unwrap<_VkQueueFamilyProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.timestampValidBits));
}// minImageTransferGranularity
NAN_GETTER(_VkQueueFamilyProperties::GetminImageTransferGranularity) {
  _VkQueueFamilyProperties *self = Nan::ObjectWrap::Unwrap<_VkQueueFamilyProperties>(info.This());
  if (self->minImageTransferGranularity.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->minImageTransferGranularity);
    info.GetReturnValue().Set(obj);
  }
}