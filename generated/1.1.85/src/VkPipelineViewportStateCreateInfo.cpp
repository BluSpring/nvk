/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineViewportStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineViewportStateCreateInfo::constructor;

_VkPipelineViewportStateCreateInfo::_VkPipelineViewportStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
}

_VkPipelineViewportStateCreateInfo::~_VkPipelineViewportStateCreateInfo() {
  //printf("VkPipelineViewportStateCreateInfo deconstructed!!\n");
}

void _VkPipelineViewportStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineViewportStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineViewportStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("viewportCount").ToLocalChecked(), GetviewportCount, SetviewportCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pViewports").ToLocalChecked(), GetpViewports, SetpViewports, ctor);
  SetPrototypeAccessor(proto, Nan::New("scissorCount").ToLocalChecked(), GetscissorCount, SetscissorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pScissors").ToLocalChecked(), GetpScissors, SetpScissors, ctor);
  Nan::Set(target, Nan::New("VkPipelineViewportStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineViewportStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineViewportStateCreateInfo* self = new _VkPipelineViewportStateCreateInfo();
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
    Nan::ThrowError("VkPipelineViewportStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkPipelineViewportStateCreateInfo::flush) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  
  info.This()->Set(self->sAccess4, info.This()->Get(self->sAccess4));
  info.This()->Set(self->sAccess6, info.This()->Get(self->sAccess6));
}

// sType
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetsType) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetsType) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineViewportStateCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetpNext) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetpNext) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkPipelineViewportStateCreateInfo::Getflags) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::Setflags) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineViewportStateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineViewportStateCreateInfo.flags'");
  }
}// viewportCount
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetviewportCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.viewportCount));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetviewportCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.viewportCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineViewportStateCreateInfo.viewportCount'");
  }
}// pViewports
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetpViewports) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (self->pViewports.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pViewports);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetpViewports) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pViewports.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pViewports.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkViewport]' for 'VkPipelineViewportStateCreateInfo.pViewports'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pViewports = copyArrayOfV8Objects<VkViewport, _VkViewport>(value);
  } else if (value->IsNull()) {
    self->instance.pViewports = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkViewport]' for 'VkPipelineViewportStateCreateInfo.pViewports'");
  }
}// scissorCount
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetscissorCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.scissorCount));
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetscissorCount) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.scissorCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineViewportStateCreateInfo.scissorCount'");
  }
}// pScissors
NAN_GETTER(_VkPipelineViewportStateCreateInfo::GetpScissors) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  if (self->pScissors.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pScissors);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineViewportStateCreateInfo::SetpScissors) {
  _VkPipelineViewportStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pScissors.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pScissors.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkRect2D]' for 'VkPipelineViewportStateCreateInfo.pScissors'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pScissors = copyArrayOfV8Objects<VkRect2D, _VkRect2D>(value);
  } else if (value->IsNull()) {
    self->instance.pScissors = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkRect2D]' for 'VkPipelineViewportStateCreateInfo.pScissors'");
  }
}