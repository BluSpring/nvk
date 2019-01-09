/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceComputeShaderDerivativesFeaturesNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::constructor;

_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
  
}

_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::~_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV() {
  //printf("VkPhysicalDeviceComputeShaderDerivativesFeaturesNV deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceComputeShaderDerivativesFeaturesNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("computeDerivativeGroupQuads").ToLocalChecked(), GetcomputeDerivativeGroupQuads, SetcomputeDerivativeGroupQuads, ctor);
  SetPrototypeAccessor(proto, Nan::New("computeDerivativeGroupLinear").ToLocalChecked(), GetcomputeDerivativeGroupLinear, SetcomputeDerivativeGroupLinear, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceComputeShaderDerivativesFeaturesNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::flush() {
  _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV* self = new _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("computeDerivativeGroupQuads").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("computeDerivativeGroupLinear").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceComputeShaderDerivativesFeaturesNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::GetsType) {
  _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::SetsType) {
  _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceComputeShaderDerivativesFeaturesNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// computeDerivativeGroupQuads
NAN_GETTER(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::GetcomputeDerivativeGroupQuads) {
  _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.computeDerivativeGroupQuads));
}NAN_SETTER(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::SetcomputeDerivativeGroupQuads) {
  _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.computeDerivativeGroupQuads = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceComputeShaderDerivativesFeaturesNV.computeDerivativeGroupQuads' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// computeDerivativeGroupLinear
NAN_GETTER(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::GetcomputeDerivativeGroupLinear) {
  _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.computeDerivativeGroupLinear));
}NAN_SETTER(_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::SetcomputeDerivativeGroupLinear) {
  _VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.computeDerivativeGroupLinear = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceComputeShaderDerivativesFeaturesNV.computeDerivativeGroupLinear' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}