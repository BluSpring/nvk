/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceSparseProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceSparseProperties::constructor;

_VkPhysicalDeviceSparseProperties::_VkPhysicalDeviceSparseProperties() {
  
  
}

_VkPhysicalDeviceSparseProperties::~_VkPhysicalDeviceSparseProperties() {
  //printf("VkPhysicalDeviceSparseProperties deconstructed!!\n");
  
  
  
  
  
  
}

void _VkPhysicalDeviceSparseProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceSparseProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceSparseProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("residencyStandard2DBlockShape").ToLocalChecked(), GetresidencyStandard2DBlockShape, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("residencyStandard2DMultisampleBlockShape").ToLocalChecked(), GetresidencyStandard2DMultisampleBlockShape, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("residencyStandard3DBlockShape").ToLocalChecked(), GetresidencyStandard3DBlockShape, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("residencyAlignedMipSize").ToLocalChecked(), GetresidencyAlignedMipSize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("residencyNonResidentStrict").ToLocalChecked(), GetresidencyNonResidentStrict, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceSparseProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceSparseProperties::flush() {
  _VkPhysicalDeviceSparseProperties *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceSparseProperties::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceSparseProperties* self = new _VkPhysicalDeviceSparseProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceSparseProperties constructor cannot be invoked without 'new'");
  }
};

// residencyStandard2DBlockShape
NAN_GETTER(_VkPhysicalDeviceSparseProperties::GetresidencyStandard2DBlockShape) {
  _VkPhysicalDeviceSparseProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.residencyStandard2DBlockShape));
}// residencyStandard2DMultisampleBlockShape
NAN_GETTER(_VkPhysicalDeviceSparseProperties::GetresidencyStandard2DMultisampleBlockShape) {
  _VkPhysicalDeviceSparseProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.residencyStandard2DMultisampleBlockShape));
}// residencyStandard3DBlockShape
NAN_GETTER(_VkPhysicalDeviceSparseProperties::GetresidencyStandard3DBlockShape) {
  _VkPhysicalDeviceSparseProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.residencyStandard3DBlockShape));
}// residencyAlignedMipSize
NAN_GETTER(_VkPhysicalDeviceSparseProperties::GetresidencyAlignedMipSize) {
  _VkPhysicalDeviceSparseProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.residencyAlignedMipSize));
}// residencyNonResidentStrict
NAN_GETTER(_VkPhysicalDeviceSparseProperties::GetresidencyNonResidentStrict) {
  _VkPhysicalDeviceSparseProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.residencyNonResidentStrict));
}