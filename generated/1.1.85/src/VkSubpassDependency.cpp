/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkSubpassDependency.h"

Nan::Persistent<v8::FunctionTemplate> _VkSubpassDependency::constructor;

_VkSubpassDependency::_VkSubpassDependency() {
  
}

_VkSubpassDependency::~_VkSubpassDependency() {
  //printf("VkSubpassDependency deconstructed!!\n");
}

void _VkSubpassDependency::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSubpassDependency::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSubpassDependency").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("srcSubpass").ToLocalChecked(), GetsrcSubpass, SetsrcSubpass, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstSubpass").ToLocalChecked(), GetdstSubpass, SetdstSubpass, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcStageMask").ToLocalChecked(), GetsrcStageMask, SetsrcStageMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstStageMask").ToLocalChecked(), GetdstStageMask, SetdstStageMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcAccessMask").ToLocalChecked(), GetsrcAccessMask, SetsrcAccessMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstAccessMask").ToLocalChecked(), GetdstAccessMask, SetdstAccessMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("dependencyFlags").ToLocalChecked(), GetdependencyFlags, SetdependencyFlags, ctor);
  Nan::Set(target, Nan::New("VkSubpassDependency").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSubpassDependency::New) {
  if (info.IsConstructCall()) {
    _VkSubpassDependency* self = new _VkSubpassDependency();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      if (obj->Has(self->sAccess3)) info.This()->Set(self->sAccess3, obj->Get(self->sAccess3));
      if (obj->Has(self->sAccess4)) info.This()->Set(self->sAccess4, obj->Get(self->sAccess4));
      if (obj->Has(self->sAccess5)) info.This()->Set(self->sAccess5, obj->Get(self->sAccess5));
      if (obj->Has(self->sAccess6)) info.This()->Set(self->sAccess6, obj->Get(self->sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSubpassDependency constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkSubpassDependency::flush) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  
}

// srcSubpass
NAN_GETTER(_VkSubpassDependency::GetsrcSubpass) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcSubpass));
}NAN_SETTER(_VkSubpassDependency::SetsrcSubpass) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  if (value->IsNumber()) {
    self->instance.srcSubpass = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSubpassDependency.srcSubpass'");
  }
}// dstSubpass
NAN_GETTER(_VkSubpassDependency::GetdstSubpass) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstSubpass));
}NAN_SETTER(_VkSubpassDependency::SetdstSubpass) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  if (value->IsNumber()) {
    self->instance.dstSubpass = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSubpassDependency.dstSubpass'");
  }
}// srcStageMask
NAN_GETTER(_VkSubpassDependency::GetsrcStageMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcStageMask));
}NAN_SETTER(_VkSubpassDependency::SetsrcStageMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  if (value->IsNumber()) {
    self->instance.srcStageMask = static_cast<VkPipelineStageFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSubpassDependency.srcStageMask'");
  }
}// dstStageMask
NAN_GETTER(_VkSubpassDependency::GetdstStageMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstStageMask));
}NAN_SETTER(_VkSubpassDependency::SetdstStageMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  if (value->IsNumber()) {
    self->instance.dstStageMask = static_cast<VkPipelineStageFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSubpassDependency.dstStageMask'");
  }
}// srcAccessMask
NAN_GETTER(_VkSubpassDependency::GetsrcAccessMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcAccessMask));
}NAN_SETTER(_VkSubpassDependency::SetsrcAccessMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  if (value->IsNumber()) {
    self->instance.srcAccessMask = static_cast<VkAccessFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSubpassDependency.srcAccessMask'");
  }
}// dstAccessMask
NAN_GETTER(_VkSubpassDependency::GetdstAccessMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstAccessMask));
}NAN_SETTER(_VkSubpassDependency::SetdstAccessMask) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  if (value->IsNumber()) {
    self->instance.dstAccessMask = static_cast<VkAccessFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSubpassDependency.dstAccessMask'");
  }
}// dependencyFlags
NAN_GETTER(_VkSubpassDependency::GetdependencyFlags) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dependencyFlags));
}NAN_SETTER(_VkSubpassDependency::SetdependencyFlags) {
  _VkSubpassDependency *self = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(info.This());
  if (value->IsNumber()) {
    self->instance.dependencyFlags = static_cast<VkDependencyFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSubpassDependency.dependencyFlags'");
  }
}