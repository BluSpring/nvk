/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkRect2D.h"

Nan::Persistent<v8::FunctionTemplate> _VkRect2D::constructor;

_VkRect2D::_VkRect2D() {
  
}

_VkRect2D::~_VkRect2D() {
  //printf("VkRect2D deconstructed!!\n");
}

void _VkRect2D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRect2D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRect2D").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("extent").ToLocalChecked(), Getextent, Setextent, ctor);
  Nan::Set(target, Nan::New("VkRect2D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkRect2D::New) {
  if (info.IsConstructCall()) {
    _VkRect2D* self = new _VkRect2D();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRect2D constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkRect2D::flush) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  
  info.This()->Set(self->sAccess0, info.This()->Get(self->sAccess0));
  info.This()->Set(self->sAccess1, info.This()->Get(self->sAccess1));
}

// offset
NAN_GETTER(_VkRect2D::Getoffset) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  if (self->offset.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->offset);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRect2D::Setoffset) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkOffset2D::constructor)->HasInstance(obj)) {
      self->offset.Reset<v8::Object>(value.As<v8::Object>());
      _VkOffset2D* inst = Nan::ObjectWrap::Unwrap<_VkOffset2D>(obj);
      self->instance.offset = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkOffset2D]' for 'VkRect2D.offset'");
    }
  } else if (value->IsNull()) {
    self->offset.Reset();
    memset(&self->instance.offset, 0, sizeof(VkOffset2D));
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkOffset2D]' for 'VkRect2D.offset'");
  }
}// extent
NAN_GETTER(_VkRect2D::Getextent) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  if (self->extent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->extent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRect2D::Setextent) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkExtent2D::constructor)->HasInstance(obj)) {
      self->extent.Reset<v8::Object>(value.As<v8::Object>());
      _VkExtent2D* inst = Nan::ObjectWrap::Unwrap<_VkExtent2D>(obj);
      self->instance.extent = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkExtent2D]' for 'VkRect2D.extent'");
    }
  } else if (value->IsNull()) {
    self->extent.Reset();
    memset(&self->instance.extent, 0, sizeof(VkExtent2D));
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkExtent2D]' for 'VkRect2D.extent'");
  }
}