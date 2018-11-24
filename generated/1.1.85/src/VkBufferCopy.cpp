/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkBufferCopy.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferCopy::constructor;

_VkBufferCopy::_VkBufferCopy() {
  
  
}

_VkBufferCopy::~_VkBufferCopy() {
  //printf("VkBufferCopy deconstructed!!\n");
  
  
  
  
}

void _VkBufferCopy::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferCopy::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferCopy").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("srcOffset").ToLocalChecked(), GetsrcOffset, SetsrcOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstOffset").ToLocalChecked(), GetdstOffset, SetdstOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, Setsize, ctor);
  Nan::Set(target, Nan::New("VkBufferCopy").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBufferCopy::flush() {
  _VkBufferCopy *self = this;
  
  return true;
}

NAN_METHOD(_VkBufferCopy::New) {
  if (info.IsConstructCall()) {
    _VkBufferCopy* self = new _VkBufferCopy();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("srcOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("dstOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("size").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBufferCopy constructor cannot be invoked without 'new'");
  }
};

// srcOffset
NAN_GETTER(_VkBufferCopy::GetsrcOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcOffset));
}NAN_SETTER(_VkBufferCopy::SetsrcOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  if (value->IsNumber()) {
    self->instance.srcOffset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBufferCopy.srcOffset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dstOffset
NAN_GETTER(_VkBufferCopy::GetdstOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstOffset));
}NAN_SETTER(_VkBufferCopy::SetdstOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  if (value->IsNumber()) {
    self->instance.dstOffset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBufferCopy.dstOffset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// size
NAN_GETTER(_VkBufferCopy::Getsize) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}NAN_SETTER(_VkBufferCopy::Setsize) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  if (value->IsNumber()) {
    self->instance.size = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBufferCopy.size' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}