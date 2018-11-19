/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkStencilOpState.h"

Nan::Persistent<v8::FunctionTemplate> _VkStencilOpState::constructor;

_VkStencilOpState::_VkStencilOpState() {
  
}

_VkStencilOpState::~_VkStencilOpState() {
  //printf("VkStencilOpState deconstructed!!\n");
}

void _VkStencilOpState::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkStencilOpState::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkStencilOpState").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("failOp").ToLocalChecked(), GetfailOp, SetfailOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("passOp").ToLocalChecked(), GetpassOp, SetpassOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthFailOp").ToLocalChecked(), GetdepthFailOp, SetdepthFailOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("compareOp").ToLocalChecked(), GetcompareOp, SetcompareOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("compareMask").ToLocalChecked(), GetcompareMask, SetcompareMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("writeMask").ToLocalChecked(), GetwriteMask, SetwriteMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("reference").ToLocalChecked(), Getreference, Setreference, ctor);
  Nan::Set(target, Nan::New("VkStencilOpState").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkStencilOpState::New) {
  if (info.IsConstructCall()) {
    _VkStencilOpState* self = new _VkStencilOpState();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("failOp").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("passOp").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("depthFailOp").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("compareOp").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("compareMask").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("writeMask").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("reference").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkStencilOpState constructor cannot be invoked without 'new'");
  }
};

// failOp
NAN_GETTER(_VkStencilOpState::GetfailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.failOp));
}NAN_SETTER(_VkStencilOpState::SetfailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  if (value->IsNumber()) {
    self->instance.failOp = static_cast<VkStencilOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'failOp' has invalid type");
  }
}// passOp
NAN_GETTER(_VkStencilOpState::GetpassOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.passOp));
}NAN_SETTER(_VkStencilOpState::SetpassOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  if (value->IsNumber()) {
    self->instance.passOp = static_cast<VkStencilOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'passOp' has invalid type");
  }
}// depthFailOp
NAN_GETTER(_VkStencilOpState::GetdepthFailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthFailOp));
}NAN_SETTER(_VkStencilOpState::SetdepthFailOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  if (value->IsNumber()) {
    self->instance.depthFailOp = static_cast<VkStencilOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'depthFailOp' has invalid type");
  }
}// compareOp
NAN_GETTER(_VkStencilOpState::GetcompareOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compareOp));
}NAN_SETTER(_VkStencilOpState::SetcompareOp) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  if (value->IsNumber()) {
    self->instance.compareOp = static_cast<VkCompareOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'compareOp' has invalid type");
  }
}// compareMask
NAN_GETTER(_VkStencilOpState::GetcompareMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compareMask));
}NAN_SETTER(_VkStencilOpState::SetcompareMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  if (value->IsNumber()) {
    self->instance.compareMask = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'compareMask' has invalid type");
  }
}// writeMask
NAN_GETTER(_VkStencilOpState::GetwriteMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.writeMask));
}NAN_SETTER(_VkStencilOpState::SetwriteMask) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  if (value->IsNumber()) {
    self->instance.writeMask = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'writeMask' has invalid type");
  }
}// reference
NAN_GETTER(_VkStencilOpState::Getreference) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.reference));
}NAN_SETTER(_VkStencilOpState::Setreference) {
  _VkStencilOpState *self = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(info.This());
  if (value->IsNumber()) {
    self->instance.reference = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'reference' has invalid type");
  }
}