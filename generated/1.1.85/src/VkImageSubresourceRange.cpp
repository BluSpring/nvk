/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkImageSubresourceRange.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageSubresourceRange::constructor;

_VkImageSubresourceRange::_VkImageSubresourceRange() {
  
}

_VkImageSubresourceRange::~_VkImageSubresourceRange() {
  //printf("VkImageSubresourceRange deconstructed!!\n");
}

void _VkImageSubresourceRange::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageSubresourceRange::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageSubresourceRange").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("aspectMask").ToLocalChecked(), GetaspectMask, SetaspectMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("baseMipLevel").ToLocalChecked(), GetbaseMipLevel, SetbaseMipLevel, ctor);
  SetPrototypeAccessor(proto, Nan::New("levelCount").ToLocalChecked(), GetlevelCount, SetlevelCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("baseArrayLayer").ToLocalChecked(), GetbaseArrayLayer, SetbaseArrayLayer, ctor);
  SetPrototypeAccessor(proto, Nan::New("layerCount").ToLocalChecked(), GetlayerCount, SetlayerCount, ctor);
  Nan::Set(target, Nan::New("VkImageSubresourceRange").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkImageSubresourceRange::New) {
  if (info.IsConstructCall()) {
    _VkImageSubresourceRange* self = new _VkImageSubresourceRange();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("aspectMask").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("baseMipLevel").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("levelCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("baseArrayLayer").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("layerCount").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageSubresourceRange constructor cannot be invoked without 'new'");
  }
};

// aspectMask
NAN_GETTER(_VkImageSubresourceRange::GetaspectMask) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.aspectMask));
}NAN_SETTER(_VkImageSubresourceRange::SetaspectMask) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  if (value->IsNumber()) {
    self->instance.aspectMask = static_cast<VkImageAspectFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'aspectMask' has invalid type");
  }
}// baseMipLevel
NAN_GETTER(_VkImageSubresourceRange::GetbaseMipLevel) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.baseMipLevel));
}NAN_SETTER(_VkImageSubresourceRange::SetbaseMipLevel) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  if (value->IsNumber()) {
    self->instance.baseMipLevel = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'baseMipLevel' has invalid type");
  }
}// levelCount
NAN_GETTER(_VkImageSubresourceRange::GetlevelCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.levelCount));
}NAN_SETTER(_VkImageSubresourceRange::SetlevelCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  if (value->IsNumber()) {
    self->instance.levelCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'levelCount' has invalid type");
  }
}// baseArrayLayer
NAN_GETTER(_VkImageSubresourceRange::GetbaseArrayLayer) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.baseArrayLayer));
}NAN_SETTER(_VkImageSubresourceRange::SetbaseArrayLayer) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  if (value->IsNumber()) {
    self->instance.baseArrayLayer = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'baseArrayLayer' has invalid type");
  }
}// layerCount
NAN_GETTER(_VkImageSubresourceRange::GetlayerCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.layerCount));
}NAN_SETTER(_VkImageSubresourceRange::SetlayerCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  if (value->IsNumber()) {
    self->instance.layerCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'layerCount' has invalid type");
  }
}