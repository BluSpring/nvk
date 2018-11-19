/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkApplicationInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkApplicationInfo::constructor;

_VkApplicationInfo::_VkApplicationInfo() {
  instance.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
}

_VkApplicationInfo::~_VkApplicationInfo() {
  //printf("VkApplicationInfo deconstructed!!\n");
}

void _VkApplicationInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkApplicationInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkApplicationInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("pApplicationName").ToLocalChecked(), GetpApplicationName, SetpApplicationName, ctor);
  SetPrototypeAccessor(proto, Nan::New("applicationVersion").ToLocalChecked(), GetapplicationVersion, SetapplicationVersion, ctor);
  SetPrototypeAccessor(proto, Nan::New("pEngineName").ToLocalChecked(), GetpEngineName, SetpEngineName, ctor);
  SetPrototypeAccessor(proto, Nan::New("engineVersion").ToLocalChecked(), GetengineVersion, SetengineVersion, ctor);
  SetPrototypeAccessor(proto, Nan::New("apiVersion").ToLocalChecked(), GetapiVersion, SetapiVersion, ctor);
  Nan::Set(target, Nan::New("VkApplicationInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkApplicationInfo::New) {
  if (info.IsConstructCall()) {
    _VkApplicationInfo* self = new _VkApplicationInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      if (obj->Has(self->sAccess3)) info.This()->Set(self->sAccess3, obj->Get(self->sAccess3));
      if (obj->Has(self->sAccess4)) info.This()->Set(self->sAccess4, obj->Get(self->sAccess4));
      if (obj->Has(self->sAccess5)) info.This()->Set(self->sAccess5, obj->Get(self->sAccess5));
      if (obj->Has(self->sAccess6)) info.This()->Set(self->sAccess6, obj->Get(self->sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkApplicationInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkApplicationInfo::flush) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  
  info.This()->Set(self->sAccess2, info.This()->Get(self->sAccess2));
  info.This()->Set(self->sAccess4, info.This()->Get(self->sAccess4));
}

// sType
NAN_GETTER(_VkApplicationInfo::GetsType) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkApplicationInfo::SetsType) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkApplicationInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkApplicationInfo::GetpNext) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
}NAN_SETTER(_VkApplicationInfo::SetpNext) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
}// pApplicationName
NAN_GETTER(_VkApplicationInfo::GetpApplicationName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (self->pApplicationName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pApplicationName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkApplicationInfo::SetpApplicationName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pApplicationName = str;
    self->instance.pApplicationName = copyV8String(value);
  } else if (value->IsNull()) {
    self->instance.pApplicationName = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'String' for 'VkApplicationInfo.pApplicationName'");
  }
}// applicationVersion
NAN_GETTER(_VkApplicationInfo::GetapplicationVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.applicationVersion));
}NAN_SETTER(_VkApplicationInfo::SetapplicationVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.applicationVersion = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkApplicationInfo.applicationVersion'");
  }
}// pEngineName
NAN_GETTER(_VkApplicationInfo::GetpEngineName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (self->pEngineName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pEngineName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkApplicationInfo::SetpEngineName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pEngineName = str;
    self->instance.pEngineName = copyV8String(value);
  } else if (value->IsNull()) {
    self->instance.pEngineName = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'String' for 'VkApplicationInfo.pEngineName'");
  }
}// engineVersion
NAN_GETTER(_VkApplicationInfo::GetengineVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.engineVersion));
}NAN_SETTER(_VkApplicationInfo::SetengineVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.engineVersion = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkApplicationInfo.engineVersion'");
  }
}// apiVersion
NAN_GETTER(_VkApplicationInfo::GetapiVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.apiVersion));
}NAN_SETTER(_VkApplicationInfo::SetapiVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.apiVersion = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkApplicationInfo.apiVersion'");
  }
}