/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.7
 */
#include "utils.h"
#include "index.h"
#include "VkFramebufferCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkFramebufferCreateInfo::constructor;

_VkFramebufferCreateInfo::_VkFramebufferCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
}

_VkFramebufferCreateInfo::~_VkFramebufferCreateInfo() {
  //printf("VkFramebufferCreateInfo deconstructed!!\n");
}

void _VkFramebufferCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkFramebufferCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkFramebufferCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderPass").ToLocalChecked(), GetrenderPass, SetrenderPass, ctor);
  SetPrototypeAccessor(proto, Nan::New("attachmentCount").ToLocalChecked(), GetattachmentCount, SetattachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAttachments").ToLocalChecked(), GetpAttachments, SetpAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("width").ToLocalChecked(), Getwidth, Setwidth, ctor);
  SetPrototypeAccessor(proto, Nan::New("height").ToLocalChecked(), Getheight, Setheight, ctor);
  SetPrototypeAccessor(proto, Nan::New("layers").ToLocalChecked(), Getlayers, Setlayers, ctor);
  Nan::Set(target, Nan::New("VkFramebufferCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkFramebufferCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkFramebufferCreateInfo* self = new _VkFramebufferCreateInfo();
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
      if (obj->Has(self->sAccess8)) info.This()->Set(self->sAccess8, obj->Get(self->sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkFramebufferCreateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkFramebufferCreateInfo::flush) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  
  info.This()->Set(self->sAccess3, info.This()->Get(self->sAccess3));
  info.This()->Set(self->sAccess5, info.This()->Get(self->sAccess5));
}

// sType
NAN_GETTER(_VkFramebufferCreateInfo::GetsType) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkFramebufferCreateInfo::SetsType) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkFramebufferCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkFramebufferCreateInfo::GetpNext) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
}NAN_SETTER(_VkFramebufferCreateInfo::SetpNext) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkFramebufferCreateInfo::Getflags) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkFramebufferCreateInfo::Setflags) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkFramebufferCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkFramebufferCreateInfo.flags'");
  }
}// renderPass
NAN_GETTER(_VkFramebufferCreateInfo::GetrenderPass) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (self->renderPass.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderPass);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkFramebufferCreateInfo::SetrenderPass) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkRenderPass::constructor)->HasInstance(obj)) {
      self->renderPass.Reset<v8::Object>(value.As<v8::Object>());
      _VkRenderPass* inst = Nan::ObjectWrap::Unwrap<_VkRenderPass>(obj);
      self->instance.renderPass = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkRenderPass]' for 'VkFramebufferCreateInfo.renderPass'");
    }
  } else if (value->IsNull()) {
    self->renderPass.Reset();
    self->instance.renderPass = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkRenderPass]' for 'VkFramebufferCreateInfo.renderPass'");
  }
}// attachmentCount
NAN_GETTER(_VkFramebufferCreateInfo::GetattachmentCount) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachmentCount));
}NAN_SETTER(_VkFramebufferCreateInfo::SetattachmentCount) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.attachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkFramebufferCreateInfo.attachmentCount'");
  }
}// pAttachments
NAN_GETTER(_VkFramebufferCreateInfo::GetpAttachments) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (self->pAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkFramebufferCreateInfo::SetpAttachments) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pAttachments.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkImageView]' for 'VkFramebufferCreateInfo.pAttachments'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pAttachments = copyArrayOfV8Objects<VkImageView, _VkImageView>(value);
  } else if (value->IsNull()) {
    self->instance.pAttachments = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkImageView]' for 'VkFramebufferCreateInfo.pAttachments'");
  }
}// width
NAN_GETTER(_VkFramebufferCreateInfo::Getwidth) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.width));
}NAN_SETTER(_VkFramebufferCreateInfo::Setwidth) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.width = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkFramebufferCreateInfo.width'");
  }
}// height
NAN_GETTER(_VkFramebufferCreateInfo::Getheight) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.height));
}NAN_SETTER(_VkFramebufferCreateInfo::Setheight) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.height = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkFramebufferCreateInfo.height'");
  }
}// layers
NAN_GETTER(_VkFramebufferCreateInfo::Getlayers) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.layers));
}NAN_SETTER(_VkFramebufferCreateInfo::Setlayers) {
  _VkFramebufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkFramebufferCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.layers = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkFramebufferCreateInfo.layers'");
  }
}