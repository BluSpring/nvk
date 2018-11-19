/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.7
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineVertexInputStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineVertexInputStateCreateInfo::constructor;

_VkPipelineVertexInputStateCreateInfo::_VkPipelineVertexInputStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
}

_VkPipelineVertexInputStateCreateInfo::~_VkPipelineVertexInputStateCreateInfo() {
  //printf("VkPipelineVertexInputStateCreateInfo deconstructed!!\n");
}

void _VkPipelineVertexInputStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineVertexInputStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineVertexInputStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexBindingDescriptionCount").ToLocalChecked(), GetvertexBindingDescriptionCount, SetvertexBindingDescriptionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pVertexBindingDescriptions").ToLocalChecked(), GetpVertexBindingDescriptions, SetpVertexBindingDescriptions, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexAttributeDescriptionCount").ToLocalChecked(), GetvertexAttributeDescriptionCount, SetvertexAttributeDescriptionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pVertexAttributeDescriptions").ToLocalChecked(), GetpVertexAttributeDescriptions, SetpVertexAttributeDescriptions, ctor);
  Nan::Set(target, Nan::New("VkPipelineVertexInputStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineVertexInputStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineVertexInputStateCreateInfo* self = new _VkPipelineVertexInputStateCreateInfo();
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
    Nan::ThrowError("VkPipelineVertexInputStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkPipelineVertexInputStateCreateInfo::flush) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  
  info.This()->Set(self->sAccess4, info.This()->Get(self->sAccess4));
  info.This()->Set(self->sAccess6, info.This()->Get(self->sAccess6));
}

// sType
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetsType) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetsType) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineVertexInputStateCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetpNext) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetpNext) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::Getflags) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::Setflags) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineVertexInputStateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineVertexInputStateCreateInfo.flags'");
  }
}// vertexBindingDescriptionCount
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetvertexBindingDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexBindingDescriptionCount));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetvertexBindingDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.vertexBindingDescriptionCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineVertexInputStateCreateInfo.vertexBindingDescriptionCount'");
  }
}// pVertexBindingDescriptions
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetpVertexBindingDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (self->pVertexBindingDescriptions.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pVertexBindingDescriptions);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetpVertexBindingDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pVertexBindingDescriptions.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pVertexBindingDescriptions.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkVertexInputBindingDescription]' for 'VkPipelineVertexInputStateCreateInfo.pVertexBindingDescriptions'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pVertexBindingDescriptions = copyArrayOfV8Objects<VkVertexInputBindingDescription, _VkVertexInputBindingDescription>(value);
  } else if (value->IsNull()) {
    self->instance.pVertexBindingDescriptions = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkVertexInputBindingDescription]' for 'VkPipelineVertexInputStateCreateInfo.pVertexBindingDescriptions'");
  }
}// vertexAttributeDescriptionCount
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetvertexAttributeDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexAttributeDescriptionCount));
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetvertexAttributeDescriptionCount) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.vertexAttributeDescriptionCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineVertexInputStateCreateInfo.vertexAttributeDescriptionCount'");
  }
}// pVertexAttributeDescriptions
NAN_GETTER(_VkPipelineVertexInputStateCreateInfo::GetpVertexAttributeDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  if (self->pVertexAttributeDescriptions.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pVertexAttributeDescriptions);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineVertexInputStateCreateInfo::SetpVertexAttributeDescriptions) {
  _VkPipelineVertexInputStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pVertexAttributeDescriptions.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pVertexAttributeDescriptions.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkVertexInputAttributeDescription]' for 'VkPipelineVertexInputStateCreateInfo.pVertexAttributeDescriptions'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pVertexAttributeDescriptions = copyArrayOfV8Objects<VkVertexInputAttributeDescription, _VkVertexInputAttributeDescription>(value);
  } else if (value->IsNull()) {
    self->instance.pVertexAttributeDescriptions = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkVertexInputAttributeDescription]' for 'VkPipelineVertexInputStateCreateInfo.pVertexAttributeDescriptions'");
  }
}