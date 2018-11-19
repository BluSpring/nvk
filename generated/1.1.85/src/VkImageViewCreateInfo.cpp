/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkImageViewCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageViewCreateInfo::constructor;

_VkImageViewCreateInfo::_VkImageViewCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
}

_VkImageViewCreateInfo::~_VkImageViewCreateInfo() {
  //printf("VkImageViewCreateInfo deconstructed!!\n");
}

void _VkImageViewCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageViewCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageViewCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("image").ToLocalChecked(), Getimage, Setimage, ctor);
  SetPrototypeAccessor(proto, Nan::New("viewType").ToLocalChecked(), GetviewType, SetviewType, ctor);
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, Setformat, ctor);
  SetPrototypeAccessor(proto, Nan::New("components").ToLocalChecked(), Getcomponents, Setcomponents, ctor);
  SetPrototypeAccessor(proto, Nan::New("subresourceRange").ToLocalChecked(), GetsubresourceRange, SetsubresourceRange, ctor);
  Nan::Set(target, Nan::New("VkImageViewCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkImageViewCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkImageViewCreateInfo* self = new _VkImageViewCreateInfo();
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
      if (obj->Has(self->sAccess7)) info.This()->Set(self->sAccess7, obj->Get(self->sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageViewCreateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkImageViewCreateInfo::flush) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  
  info.This()->Set(self->sAccess3, info.This()->Get(self->sAccess3));
  info.This()->Set(self->sAccess6, info.This()->Get(self->sAccess6));
  info.This()->Set(self->sAccess7, info.This()->Get(self->sAccess7));
}

// sType
NAN_GETTER(_VkImageViewCreateInfo::GetsType) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImageViewCreateInfo::SetsType) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkImageViewCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkImageViewCreateInfo::GetpNext) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
}NAN_SETTER(_VkImageViewCreateInfo::SetpNext) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkImageViewCreateInfo::Getflags) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkImageViewCreateInfo::Setflags) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkImageViewCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkImageViewCreateInfo.flags'");
  }
}// image
NAN_GETTER(_VkImageViewCreateInfo::Getimage) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  if (self->image.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->image);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkImageViewCreateInfo::Setimage) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkImage::constructor)->HasInstance(obj)) {
      self->image.Reset<v8::Object>(value.As<v8::Object>());
      _VkImage* inst = Nan::ObjectWrap::Unwrap<_VkImage>(obj);
      self->instance.image = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkImage]' for 'VkImageViewCreateInfo.image'");
    }
  } else if (value->IsNull()) {
    self->image.Reset();
    self->instance.image = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkImage]' for 'VkImageViewCreateInfo.image'");
  }
}// viewType
NAN_GETTER(_VkImageViewCreateInfo::GetviewType) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.viewType));
}NAN_SETTER(_VkImageViewCreateInfo::SetviewType) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.viewType = static_cast<VkImageViewType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkImageViewCreateInfo.viewType'");
  }
}// format
NAN_GETTER(_VkImageViewCreateInfo::Getformat) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}NAN_SETTER(_VkImageViewCreateInfo::Setformat) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.format = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkImageViewCreateInfo.format'");
  }
}// components
NAN_GETTER(_VkImageViewCreateInfo::Getcomponents) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  if (self->components.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->components);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkImageViewCreateInfo::Setcomponents) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkComponentMapping::constructor)->HasInstance(obj)) {
      self->components.Reset<v8::Object>(value.As<v8::Object>());
      _VkComponentMapping* inst = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(obj);
      self->instance.components = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkComponentMapping]' for 'VkImageViewCreateInfo.components'");
    }
  } else if (value->IsNull()) {
    self->components.Reset();
    memset(&self->instance.components, 0, sizeof(VkComponentMapping));
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkComponentMapping]' for 'VkImageViewCreateInfo.components'");
  }
}// subresourceRange
NAN_GETTER(_VkImageViewCreateInfo::GetsubresourceRange) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  if (self->subresourceRange.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->subresourceRange);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkImageViewCreateInfo::SetsubresourceRange) {
  _VkImageViewCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageViewCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkImageSubresourceRange::constructor)->HasInstance(obj)) {
      self->subresourceRange.Reset<v8::Object>(value.As<v8::Object>());
      _VkImageSubresourceRange* inst = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(obj);
      self->instance.subresourceRange = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkImageSubresourceRange]' for 'VkImageViewCreateInfo.subresourceRange'");
    }
  } else if (value->IsNull()) {
    self->subresourceRange.Reset();
    memset(&self->instance.subresourceRange, 0, sizeof(VkImageSubresourceRange));
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkImageSubresourceRange]' for 'VkImageViewCreateInfo.subresourceRange'");
  }
}