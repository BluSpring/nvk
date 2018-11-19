/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorBufferInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorBufferInfo::constructor;

_VkDescriptorBufferInfo::_VkDescriptorBufferInfo() {
  
}

_VkDescriptorBufferInfo::~_VkDescriptorBufferInfo() {
  //printf("VkDescriptorBufferInfo deconstructed!!\n");
}

void _VkDescriptorBufferInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorBufferInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorBufferInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("buffer").ToLocalChecked(), Getbuffer, Setbuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("range").ToLocalChecked(), Getrange, Setrange, ctor);
  Nan::Set(target, Nan::New("VkDescriptorBufferInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorBufferInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorBufferInfo* self = new _VkDescriptorBufferInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorBufferInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkDescriptorBufferInfo::flush) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  
  info.This()->Set(self->sAccess0, info.This()->Get(self->sAccess0));
}

// buffer
NAN_GETTER(_VkDescriptorBufferInfo::Getbuffer) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  if (self->buffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->buffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorBufferInfo::Setbuffer) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkBuffer::constructor)->HasInstance(obj)) {
      self->buffer.Reset<v8::Object>(value.As<v8::Object>());
      _VkBuffer* inst = Nan::ObjectWrap::Unwrap<_VkBuffer>(obj);
      self->instance.buffer = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkBuffer]' for 'VkDescriptorBufferInfo.buffer'");
    }
  } else if (value->IsNull()) {
    self->buffer.Reset();
    self->instance.buffer = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkBuffer]' for 'VkDescriptorBufferInfo.buffer'");
  }
}// offset
NAN_GETTER(_VkDescriptorBufferInfo::Getoffset) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.offset));
}NAN_SETTER(_VkDescriptorBufferInfo::Setoffset) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.offset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorBufferInfo.offset'");
  }
}// range
NAN_GETTER(_VkDescriptorBufferInfo::Getrange) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.range));
}NAN_SETTER(_VkDescriptorBufferInfo::Setrange) {
  _VkDescriptorBufferInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.range = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorBufferInfo.range'");
  }
}