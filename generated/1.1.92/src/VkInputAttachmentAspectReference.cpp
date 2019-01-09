/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkInputAttachmentAspectReference.h"

Nan::Persistent<v8::FunctionTemplate> _VkInputAttachmentAspectReference::constructor;

_VkInputAttachmentAspectReference::_VkInputAttachmentAspectReference() {
  
  
}

_VkInputAttachmentAspectReference::~_VkInputAttachmentAspectReference() {
  //printf("VkInputAttachmentAspectReference deconstructed!!\n");
  
  
  
  
}

void _VkInputAttachmentAspectReference::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkInputAttachmentAspectReference::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkInputAttachmentAspectReference").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("subpass").ToLocalChecked(), Getsubpass, Setsubpass, ctor);
  SetPrototypeAccessor(proto, Nan::New("inputAttachmentIndex").ToLocalChecked(), GetinputAttachmentIndex, SetinputAttachmentIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("aspectMask").ToLocalChecked(), GetaspectMask, SetaspectMask, ctor);
  Nan::Set(target, Nan::New("VkInputAttachmentAspectReference").ToLocalChecked(), ctor->GetFunction());
}

bool _VkInputAttachmentAspectReference::flush() {
  _VkInputAttachmentAspectReference *self = this;
  
  return true;
}

NAN_METHOD(_VkInputAttachmentAspectReference::New) {
  if (info.IsConstructCall()) {
    _VkInputAttachmentAspectReference* self = new _VkInputAttachmentAspectReference();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("subpass").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("inputAttachmentIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("aspectMask").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkInputAttachmentAspectReference constructor cannot be invoked without 'new'");
  }
};

// subpass
NAN_GETTER(_VkInputAttachmentAspectReference::Getsubpass) {
  _VkInputAttachmentAspectReference *self = Nan::ObjectWrap::Unwrap<_VkInputAttachmentAspectReference>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subpass));
}NAN_SETTER(_VkInputAttachmentAspectReference::Setsubpass) {
  _VkInputAttachmentAspectReference *self = Nan::ObjectWrap::Unwrap<_VkInputAttachmentAspectReference>(info.This());
  if (value->IsNumber()) {
    self->instance.subpass = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkInputAttachmentAspectReference.subpass' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// inputAttachmentIndex
NAN_GETTER(_VkInputAttachmentAspectReference::GetinputAttachmentIndex) {
  _VkInputAttachmentAspectReference *self = Nan::ObjectWrap::Unwrap<_VkInputAttachmentAspectReference>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.inputAttachmentIndex));
}NAN_SETTER(_VkInputAttachmentAspectReference::SetinputAttachmentIndex) {
  _VkInputAttachmentAspectReference *self = Nan::ObjectWrap::Unwrap<_VkInputAttachmentAspectReference>(info.This());
  if (value->IsNumber()) {
    self->instance.inputAttachmentIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkInputAttachmentAspectReference.inputAttachmentIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// aspectMask
NAN_GETTER(_VkInputAttachmentAspectReference::GetaspectMask) {
  _VkInputAttachmentAspectReference *self = Nan::ObjectWrap::Unwrap<_VkInputAttachmentAspectReference>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.aspectMask));
}NAN_SETTER(_VkInputAttachmentAspectReference::SetaspectMask) {
  _VkInputAttachmentAspectReference *self = Nan::ObjectWrap::Unwrap<_VkInputAttachmentAspectReference>(info.This());
  if (value->IsNumber()) {
    self->instance.aspectMask = static_cast<VkImageAspectFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkInputAttachmentAspectReference.aspectMask' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}