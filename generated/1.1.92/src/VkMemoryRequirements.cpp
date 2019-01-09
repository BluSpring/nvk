/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryRequirements.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryRequirements::constructor;

_VkMemoryRequirements::_VkMemoryRequirements() {
  
  
}

_VkMemoryRequirements::~_VkMemoryRequirements() {
  //printf("VkMemoryRequirements deconstructed!!\n");
  
  
  
  
}

void _VkMemoryRequirements::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryRequirements::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryRequirements").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("alignment").ToLocalChecked(), Getalignment, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryTypeBits").ToLocalChecked(), GetmemoryTypeBits, nullptr, ctor);
  Nan::Set(target, Nan::New("VkMemoryRequirements").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryRequirements::flush() {
  _VkMemoryRequirements *self = this;
  
  return true;
}

NAN_METHOD(_VkMemoryRequirements::New) {
  if (info.IsConstructCall()) {
    _VkMemoryRequirements* self = new _VkMemoryRequirements();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryRequirements constructor cannot be invoked without 'new'");
  }
};

// size
NAN_GETTER(_VkMemoryRequirements::Getsize) {
  _VkMemoryRequirements *self = Nan::ObjectWrap::Unwrap<_VkMemoryRequirements>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}// alignment
NAN_GETTER(_VkMemoryRequirements::Getalignment) {
  _VkMemoryRequirements *self = Nan::ObjectWrap::Unwrap<_VkMemoryRequirements>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.alignment));
}// memoryTypeBits
NAN_GETTER(_VkMemoryRequirements::GetmemoryTypeBits) {
  _VkMemoryRequirements *self = Nan::ObjectWrap::Unwrap<_VkMemoryRequirements>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryTypeBits));
}