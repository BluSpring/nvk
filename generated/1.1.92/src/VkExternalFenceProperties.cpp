/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkExternalFenceProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkExternalFenceProperties::constructor;

_VkExternalFenceProperties::_VkExternalFenceProperties() {
  instance.sType = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;
  
}

_VkExternalFenceProperties::~_VkExternalFenceProperties() {
  //printf("VkExternalFenceProperties deconstructed!!\n");
  
  
  
  
  
}

void _VkExternalFenceProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExternalFenceProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExternalFenceProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("exportFromImportedHandleTypes").ToLocalChecked(), GetexportFromImportedHandleTypes, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("compatibleHandleTypes").ToLocalChecked(), GetcompatibleHandleTypes, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("externalFenceFeatures").ToLocalChecked(), GetexternalFenceFeatures, nullptr, ctor);
  Nan::Set(target, Nan::New("VkExternalFenceProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExternalFenceProperties::flush() {
  _VkExternalFenceProperties *self = this;
  
  return true;
}

NAN_METHOD(_VkExternalFenceProperties::New) {
  if (info.IsConstructCall()) {
    _VkExternalFenceProperties* self = new _VkExternalFenceProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExternalFenceProperties constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkExternalFenceProperties::GetsType) {
  _VkExternalFenceProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalFenceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// exportFromImportedHandleTypes
NAN_GETTER(_VkExternalFenceProperties::GetexportFromImportedHandleTypes) {
  _VkExternalFenceProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalFenceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.exportFromImportedHandleTypes));
}// compatibleHandleTypes
NAN_GETTER(_VkExternalFenceProperties::GetcompatibleHandleTypes) {
  _VkExternalFenceProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalFenceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compatibleHandleTypes));
}// externalFenceFeatures
NAN_GETTER(_VkExternalFenceProperties::GetexternalFenceFeatures) {
  _VkExternalFenceProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalFenceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.externalFenceFeatures));
}