/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorSetLayoutCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorSetLayoutCreateInfo::constructor;

_VkDescriptorSetLayoutCreateInfo::_VkDescriptorSetLayoutCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
}

_VkDescriptorSetLayoutCreateInfo::~_VkDescriptorSetLayoutCreateInfo() {
  //printf("VkDescriptorSetLayoutCreateInfo deconstructed!!\n");
}

void _VkDescriptorSetLayoutCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorSetLayoutCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorSetLayoutCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("bindingCount").ToLocalChecked(), GetbindingCount, SetbindingCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pBindings").ToLocalChecked(), GetpBindings, SetpBindings, ctor);
  Nan::Set(target, Nan::New("VkDescriptorSetLayoutCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorSetLayoutCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorSetLayoutCreateInfo* self = new _VkDescriptorSetLayoutCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      if (obj->Has(self->sAccess3)) info.This()->Set(self->sAccess3, obj->Get(self->sAccess3));
      if (obj->Has(self->sAccess4)) info.This()->Set(self->sAccess4, obj->Get(self->sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorSetLayoutCreateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkDescriptorSetLayoutCreateInfo::flush) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  
  info.This()->Set(self->sAccess4, info.This()->Get(self->sAccess4));
}

// sType
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetsType) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetsType) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorSetLayoutCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetpNext) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetpNext) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::Getflags) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::Setflags) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDescriptorSetLayoutCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorSetLayoutCreateInfo.flags'");
  }
}// bindingCount
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetbindingCount) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.bindingCount));
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetbindingCount) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.bindingCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorSetLayoutCreateInfo.bindingCount'");
  }
}// pBindings
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetpBindings) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (self->pBindings.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pBindings);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetpBindings) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pBindings.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pBindings.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayoutBinding]' for 'VkDescriptorSetLayoutCreateInfo.pBindings'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pBindings = copyArrayOfV8Objects<VkDescriptorSetLayoutBinding, _VkDescriptorSetLayoutBinding>(value);
  } else if (value->IsNull()) {
    self->instance.pBindings = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayoutBinding]' for 'VkDescriptorSetLayoutCreateInfo.pBindings'");
  }
}