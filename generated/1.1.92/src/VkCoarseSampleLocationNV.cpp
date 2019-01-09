/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkCoarseSampleLocationNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkCoarseSampleLocationNV::constructor;

_VkCoarseSampleLocationNV::_VkCoarseSampleLocationNV() {
  
  
}

_VkCoarseSampleLocationNV::~_VkCoarseSampleLocationNV() {
  //printf("VkCoarseSampleLocationNV deconstructed!!\n");
  
  
  
  
}

void _VkCoarseSampleLocationNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCoarseSampleLocationNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCoarseSampleLocationNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("pixelX").ToLocalChecked(), GetpixelX, SetpixelX, ctor);
  SetPrototypeAccessor(proto, Nan::New("pixelY").ToLocalChecked(), GetpixelY, SetpixelY, ctor);
  SetPrototypeAccessor(proto, Nan::New("sample").ToLocalChecked(), Getsample, Setsample, ctor);
  Nan::Set(target, Nan::New("VkCoarseSampleLocationNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkCoarseSampleLocationNV::flush() {
  _VkCoarseSampleLocationNV *self = this;
  
  return true;
}

NAN_METHOD(_VkCoarseSampleLocationNV::New) {
  if (info.IsConstructCall()) {
    _VkCoarseSampleLocationNV* self = new _VkCoarseSampleLocationNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("pixelX").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pixelY").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("sample").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCoarseSampleLocationNV constructor cannot be invoked without 'new'");
  }
};

// pixelX
NAN_GETTER(_VkCoarseSampleLocationNV::GetpixelX) {
  _VkCoarseSampleLocationNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleLocationNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pixelX));
}NAN_SETTER(_VkCoarseSampleLocationNV::SetpixelX) {
  _VkCoarseSampleLocationNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleLocationNV>(info.This());
  if (value->IsNumber()) {
    self->instance.pixelX = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCoarseSampleLocationNV.pixelX' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pixelY
NAN_GETTER(_VkCoarseSampleLocationNV::GetpixelY) {
  _VkCoarseSampleLocationNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleLocationNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pixelY));
}NAN_SETTER(_VkCoarseSampleLocationNV::SetpixelY) {
  _VkCoarseSampleLocationNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleLocationNV>(info.This());
  if (value->IsNumber()) {
    self->instance.pixelY = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCoarseSampleLocationNV.pixelY' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sample
NAN_GETTER(_VkCoarseSampleLocationNV::Getsample) {
  _VkCoarseSampleLocationNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleLocationNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sample));
}NAN_SETTER(_VkCoarseSampleLocationNV::Setsample) {
  _VkCoarseSampleLocationNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleLocationNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sample = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCoarseSampleLocationNV.sample' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}