/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkWin32SurfaceCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkWin32SurfaceCreateInfoKHR::constructor;

_VkWin32SurfaceCreateInfoKHR::_VkWin32SurfaceCreateInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
  
}

_VkWin32SurfaceCreateInfoKHR::~_VkWin32SurfaceCreateInfoKHR() {
  //printf("VkWin32SurfaceCreateInfoKHR deconstructed!!\n");
  
  
  
}

void _VkWin32SurfaceCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkWin32SurfaceCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkWin32SurfaceCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  Nan::Set(target, Nan::New("VkWin32SurfaceCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkWin32SurfaceCreateInfoKHR::flush() {
  _VkWin32SurfaceCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkWin32SurfaceCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkWin32SurfaceCreateInfoKHR* self = new _VkWin32SurfaceCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkWin32SurfaceCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkWin32SurfaceCreateInfoKHR::GetsType) {
  _VkWin32SurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32SurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkWin32SurfaceCreateInfoKHR::SetsType) {
  _VkWin32SurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32SurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32SurfaceCreateInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkWin32SurfaceCreateInfoKHR::Getflags) {
  _VkWin32SurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32SurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkWin32SurfaceCreateInfoKHR::Setflags) {
  _VkWin32SurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32SurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkWin32SurfaceCreateFlagsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32SurfaceCreateInfoKHR.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}