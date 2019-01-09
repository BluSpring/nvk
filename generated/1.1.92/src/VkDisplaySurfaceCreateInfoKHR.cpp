/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkDisplaySurfaceCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplaySurfaceCreateInfoKHR::constructor;

_VkDisplaySurfaceCreateInfoKHR::_VkDisplaySurfaceCreateInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
  
}

_VkDisplaySurfaceCreateInfoKHR::~_VkDisplaySurfaceCreateInfoKHR() {
  //printf("VkDisplaySurfaceCreateInfoKHR deconstructed!!\n");
  
  
  
  
  
  
  
  
  
  
}

void _VkDisplaySurfaceCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplaySurfaceCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplaySurfaceCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("displayMode").ToLocalChecked(), GetdisplayMode, SetdisplayMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("planeIndex").ToLocalChecked(), GetplaneIndex, SetplaneIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("planeStackIndex").ToLocalChecked(), GetplaneStackIndex, SetplaneStackIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("transform").ToLocalChecked(), Gettransform, Settransform, ctor);
  SetPrototypeAccessor(proto, Nan::New("globalAlpha").ToLocalChecked(), GetglobalAlpha, SetglobalAlpha, ctor);
  SetPrototypeAccessor(proto, Nan::New("alphaMode").ToLocalChecked(), GetalphaMode, SetalphaMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageExtent").ToLocalChecked(), GetimageExtent, SetimageExtent, ctor);
  Nan::Set(target, Nan::New("VkDisplaySurfaceCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDisplaySurfaceCreateInfoKHR::flush() {
  _VkDisplaySurfaceCreateInfoKHR *self = this;
  if (!(self->imageExtent.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->imageExtent);
    
    _VkExtent2D* result = Nan::ObjectWrap::Unwrap<_VkExtent2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.imageExtent = result->instance;
  }
  return true;
}

NAN_METHOD(_VkDisplaySurfaceCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkDisplaySurfaceCreateInfoKHR* self = new _VkDisplaySurfaceCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("displayMode").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("planeIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("planeStackIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("transform").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("globalAlpha").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("alphaMode").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("imageExtent").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDisplaySurfaceCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::GetsType) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::SetsType) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplaySurfaceCreateInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::Getflags) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::Setflags) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDisplaySurfaceCreateFlagsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplaySurfaceCreateInfoKHR.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// displayMode
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::GetdisplayMode) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (self->displayMode.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->displayMode);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::SetdisplayMode) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDisplayModeKHR::constructor)->HasInstance(obj)) {
      self->displayMode.Reset<v8::Object>(value.As<v8::Object>());
      _VkDisplayModeKHR* inst = Nan::ObjectWrap::Unwrap<_VkDisplayModeKHR>(obj);
      ;
      self->instance.displayMode = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDisplayModeKHR]' for 'VkDisplaySurfaceCreateInfoKHR.displayMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->displayMode.Reset();
    self->instance.displayMode = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDisplayModeKHR]' for 'VkDisplaySurfaceCreateInfoKHR.displayMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// planeIndex
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::GetplaneIndex) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.planeIndex));
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::SetplaneIndex) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.planeIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplaySurfaceCreateInfoKHR.planeIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// planeStackIndex
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::GetplaneStackIndex) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.planeStackIndex));
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::SetplaneStackIndex) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.planeStackIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplaySurfaceCreateInfoKHR.planeStackIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// transform
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::Gettransform) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.transform));
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::Settransform) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.transform = static_cast<VkSurfaceTransformFlagBitsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplaySurfaceCreateInfoKHR.transform' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// globalAlpha
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::GetglobalAlpha) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.globalAlpha));
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::SetglobalAlpha) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.globalAlpha = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplaySurfaceCreateInfoKHR.globalAlpha' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// alphaMode
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::GetalphaMode) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.alphaMode));
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::SetalphaMode) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.alphaMode = static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplaySurfaceCreateInfoKHR.alphaMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// imageExtent
NAN_GETTER(_VkDisplaySurfaceCreateInfoKHR::GetimageExtent) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  if (self->imageExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageExtent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDisplaySurfaceCreateInfoKHR::SetimageExtent) {
  _VkDisplaySurfaceCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplaySurfaceCreateInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkExtent2D::constructor)->HasInstance(obj)) {
      self->imageExtent.Reset<v8::Object>(value.As<v8::Object>());
      _VkExtent2D* inst = Nan::ObjectWrap::Unwrap<_VkExtent2D>(obj);
      inst->flush();
      self->instance.imageExtent = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkExtent2D]' for 'VkDisplaySurfaceCreateInfoKHR.imageExtent' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->imageExtent.Reset();
    memset(&self->instance.imageExtent, 0, sizeof(VkExtent2D));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkExtent2D]' for 'VkDisplaySurfaceCreateInfoKHR.imageExtent' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}