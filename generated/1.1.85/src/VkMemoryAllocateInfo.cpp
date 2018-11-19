/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryAllocateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryAllocateInfo::constructor;

_VkMemoryAllocateInfo::_VkMemoryAllocateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
}

_VkMemoryAllocateInfo::~_VkMemoryAllocateInfo() {
  //printf("VkMemoryAllocateInfo deconstructed!!\n");
}

void _VkMemoryAllocateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryAllocateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryAllocateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("allocationSize").ToLocalChecked(), GetallocationSize, SetallocationSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryTypeIndex").ToLocalChecked(), GetmemoryTypeIndex, SetmemoryTypeIndex, ctor);
  Nan::Set(target, Nan::New("VkMemoryAllocateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkMemoryAllocateInfo::New) {
  if (info.IsConstructCall()) {
    _VkMemoryAllocateInfo* self = new _VkMemoryAllocateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      if (obj->Has(self->sAccess3)) info.This()->Set(self->sAccess3, obj->Get(self->sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryAllocateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkMemoryAllocateInfo::flush) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
  
}

// sType
NAN_GETTER(_VkMemoryAllocateInfo::GetsType) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkMemoryAllocateInfo::SetsType) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkMemoryAllocateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkMemoryAllocateInfo::GetpNext) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
}NAN_SETTER(_VkMemoryAllocateInfo::SetpNext) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
}// allocationSize
NAN_GETTER(_VkMemoryAllocateInfo::GetallocationSize) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.allocationSize));
}NAN_SETTER(_VkMemoryAllocateInfo::SetallocationSize) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.allocationSize = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkMemoryAllocateInfo.allocationSize'");
  }
}// memoryTypeIndex
NAN_GETTER(_VkMemoryAllocateInfo::GetmemoryTypeIndex) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryTypeIndex));
}NAN_SETTER(_VkMemoryAllocateInfo::SetmemoryTypeIndex) {
  _VkMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryAllocateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.memoryTypeIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkMemoryAllocateInfo.memoryTypeIndex'");
  }
}