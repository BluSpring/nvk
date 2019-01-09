/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceShaderAtomicInt64FeaturesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::constructor;

_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR;
  
}

_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::~_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR() {
  //printf("VkPhysicalDeviceShaderAtomicInt64FeaturesKHR deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceShaderAtomicInt64FeaturesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("shaderBufferInt64Atomics").ToLocalChecked(), GetshaderBufferInt64Atomics, SetshaderBufferInt64Atomics, ctor);
  SetPrototypeAccessor(proto, Nan::New("shaderSharedInt64Atomics").ToLocalChecked(), GetshaderSharedInt64Atomics, SetshaderSharedInt64Atomics, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceShaderAtomicInt64FeaturesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::flush() {
  _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR* self = new _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("shaderBufferInt64Atomics").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("shaderSharedInt64Atomics").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceShaderAtomicInt64FeaturesKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::GetsType) {
  _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::SetsType) {
  _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceShaderAtomicInt64FeaturesKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// shaderBufferInt64Atomics
NAN_GETTER(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::GetshaderBufferInt64Atomics) {
  _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shaderBufferInt64Atomics));
}NAN_SETTER(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::SetshaderBufferInt64Atomics) {
  _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.shaderBufferInt64Atomics = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceShaderAtomicInt64FeaturesKHR.shaderBufferInt64Atomics' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// shaderSharedInt64Atomics
NAN_GETTER(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::GetshaderSharedInt64Atomics) {
  _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shaderSharedInt64Atomics));
}NAN_SETTER(_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::SetshaderSharedInt64Atomics) {
  _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.shaderSharedInt64Atomics = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceShaderAtomicInt64FeaturesKHR.shaderSharedInt64Atomics' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}