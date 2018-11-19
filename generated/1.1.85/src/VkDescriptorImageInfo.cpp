/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorImageInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorImageInfo::constructor;

_VkDescriptorImageInfo::_VkDescriptorImageInfo() {
  
}

_VkDescriptorImageInfo::~_VkDescriptorImageInfo() {
  //printf("VkDescriptorImageInfo deconstructed!!\n");
}

void _VkDescriptorImageInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorImageInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorImageInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sampler").ToLocalChecked(), Getsampler, Setsampler, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageView").ToLocalChecked(), GetimageView, SetimageView, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageLayout").ToLocalChecked(), GetimageLayout, SetimageLayout, ctor);
  Nan::Set(target, Nan::New("VkDescriptorImageInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorImageInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorImageInfo* self = new _VkDescriptorImageInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorImageInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkDescriptorImageInfo::flush) {
  _VkDescriptorImageInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(info.This());
  
  info.This()->Set(self->sAccess0, info.This()->Get(self->sAccess0));
  info.This()->Set(self->sAccess1, info.This()->Get(self->sAccess1));
}

// sampler
NAN_GETTER(_VkDescriptorImageInfo::Getsampler) {
  _VkDescriptorImageInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(info.This());
  if (self->sampler.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->sampler);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorImageInfo::Setsampler) {
  _VkDescriptorImageInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSampler::constructor)->HasInstance(obj)) {
      self->sampler.Reset<v8::Object>(value.As<v8::Object>());
      _VkSampler* inst = Nan::ObjectWrap::Unwrap<_VkSampler>(obj);
      self->instance.sampler = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkSampler]' for 'VkDescriptorImageInfo.sampler'");
    }
  } else if (value->IsNull()) {
    self->sampler.Reset();
    self->instance.sampler = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkSampler]' for 'VkDescriptorImageInfo.sampler'");
  }
}// imageView
NAN_GETTER(_VkDescriptorImageInfo::GetimageView) {
  _VkDescriptorImageInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(info.This());
  if (self->imageView.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageView);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorImageInfo::SetimageView) {
  _VkDescriptorImageInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkImageView::constructor)->HasInstance(obj)) {
      self->imageView.Reset<v8::Object>(value.As<v8::Object>());
      _VkImageView* inst = Nan::ObjectWrap::Unwrap<_VkImageView>(obj);
      self->instance.imageView = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkImageView]' for 'VkDescriptorImageInfo.imageView'");
    }
  } else if (value->IsNull()) {
    self->imageView.Reset();
    self->instance.imageView = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkImageView]' for 'VkDescriptorImageInfo.imageView'");
  }
}// imageLayout
NAN_GETTER(_VkDescriptorImageInfo::GetimageLayout) {
  _VkDescriptorImageInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageLayout));
}NAN_SETTER(_VkDescriptorImageInfo::SetimageLayout) {
  _VkDescriptorImageInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.imageLayout = static_cast<VkImageLayout>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorImageInfo.imageLayout'");
  }
}