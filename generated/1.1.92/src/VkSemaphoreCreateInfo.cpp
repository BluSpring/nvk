/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkSemaphoreCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkSemaphoreCreateInfo::constructor;

_VkSemaphoreCreateInfo::_VkSemaphoreCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
  
}

_VkSemaphoreCreateInfo::~_VkSemaphoreCreateInfo() {
  //printf("VkSemaphoreCreateInfo deconstructed!!\n");
  
  
  
}

void _VkSemaphoreCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSemaphoreCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSemaphoreCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  Nan::Set(target, Nan::New("VkSemaphoreCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSemaphoreCreateInfo::flush() {
  _VkSemaphoreCreateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkSemaphoreCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkSemaphoreCreateInfo* self = new _VkSemaphoreCreateInfo();
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
    Nan::ThrowError("VkSemaphoreCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSemaphoreCreateInfo::GetsType) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSemaphoreCreateInfo::SetsType) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSemaphoreCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkSemaphoreCreateInfo::Getflags) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSemaphoreCreateInfo::Setflags) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkSemaphoreCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSemaphoreCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}