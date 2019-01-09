/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryDedicatedRequirements.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryDedicatedRequirements::constructor;

_VkMemoryDedicatedRequirements::_VkMemoryDedicatedRequirements() {
  instance.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
  
}

_VkMemoryDedicatedRequirements::~_VkMemoryDedicatedRequirements() {
  //printf("VkMemoryDedicatedRequirements deconstructed!!\n");
  
  
  
  
}

void _VkMemoryDedicatedRequirements::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryDedicatedRequirements::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryDedicatedRequirements").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("prefersDedicatedAllocation").ToLocalChecked(), GetprefersDedicatedAllocation, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("requiresDedicatedAllocation").ToLocalChecked(), GetrequiresDedicatedAllocation, nullptr, ctor);
  Nan::Set(target, Nan::New("VkMemoryDedicatedRequirements").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryDedicatedRequirements::flush() {
  _VkMemoryDedicatedRequirements *self = this;
  
  return true;
}

NAN_METHOD(_VkMemoryDedicatedRequirements::New) {
  if (info.IsConstructCall()) {
    _VkMemoryDedicatedRequirements* self = new _VkMemoryDedicatedRequirements();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryDedicatedRequirements constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkMemoryDedicatedRequirements::GetsType) {
  _VkMemoryDedicatedRequirements *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedRequirements>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// prefersDedicatedAllocation
NAN_GETTER(_VkMemoryDedicatedRequirements::GetprefersDedicatedAllocation) {
  _VkMemoryDedicatedRequirements *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedRequirements>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.prefersDedicatedAllocation));
}// requiresDedicatedAllocation
NAN_GETTER(_VkMemoryDedicatedRequirements::GetrequiresDedicatedAllocation) {
  _VkMemoryDedicatedRequirements *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedRequirements>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.requiresDedicatedAllocation));
}