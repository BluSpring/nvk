/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.7
 */
#include "utils.h"
#include "index.h"
#include "VkExtent2D.h"

Nan::Persistent<v8::FunctionTemplate> _VkExtent2D::constructor;

_VkExtent2D::_VkExtent2D() {
  
}

_VkExtent2D::~_VkExtent2D() {
  //printf("VkExtent2D deconstructed!!\n");
}

void _VkExtent2D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExtent2D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExtent2D").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("width").ToLocalChecked(), Getwidth, Setwidth, ctor);
  SetPrototypeAccessor(proto, Nan::New("height").ToLocalChecked(), Getheight, Setheight, ctor);
  Nan::Set(target, Nan::New("VkExtent2D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkExtent2D::New) {
  if (info.IsConstructCall()) {
    _VkExtent2D* self = new _VkExtent2D();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExtent2D constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkExtent2D::flush) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  
}

// width
NAN_GETTER(_VkExtent2D::Getwidth) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.width));
}NAN_SETTER(_VkExtent2D::Setwidth) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  if (value->IsNumber()) {
    self->instance.width = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkExtent2D.width'");
  }
}// height
NAN_GETTER(_VkExtent2D::Getheight) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.height));
}NAN_SETTER(_VkExtent2D::Setheight) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  if (value->IsNumber()) {
    self->instance.height = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkExtent2D.height'");
  }
}