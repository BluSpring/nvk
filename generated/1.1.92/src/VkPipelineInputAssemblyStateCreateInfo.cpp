/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineInputAssemblyStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineInputAssemblyStateCreateInfo::constructor;

_VkPipelineInputAssemblyStateCreateInfo::_VkPipelineInputAssemblyStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
  
}

_VkPipelineInputAssemblyStateCreateInfo::~_VkPipelineInputAssemblyStateCreateInfo() {
  //printf("VkPipelineInputAssemblyStateCreateInfo deconstructed!!\n");
  
  
  
  
  
}

void _VkPipelineInputAssemblyStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineInputAssemblyStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineInputAssemblyStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("topology").ToLocalChecked(), Gettopology, Settopology, ctor);
  SetPrototypeAccessor(proto, Nan::New("primitiveRestartEnable").ToLocalChecked(), GetprimitiveRestartEnable, SetprimitiveRestartEnable, ctor);
  Nan::Set(target, Nan::New("VkPipelineInputAssemblyStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineInputAssemblyStateCreateInfo::flush() {
  _VkPipelineInputAssemblyStateCreateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkPipelineInputAssemblyStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineInputAssemblyStateCreateInfo* self = new _VkPipelineInputAssemblyStateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("topology").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("primitiveRestartEnable").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineInputAssemblyStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineInputAssemblyStateCreateInfo::GetsType) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineInputAssemblyStateCreateInfo::SetsType) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineInputAssemblyStateCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPipelineInputAssemblyStateCreateInfo::Getflags) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineInputAssemblyStateCreateInfo::Setflags) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineInputAssemblyStateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineInputAssemblyStateCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// topology
NAN_GETTER(_VkPipelineInputAssemblyStateCreateInfo::Gettopology) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.topology));
}NAN_SETTER(_VkPipelineInputAssemblyStateCreateInfo::Settopology) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.topology = static_cast<VkPrimitiveTopology>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineInputAssemblyStateCreateInfo.topology' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// primitiveRestartEnable
NAN_GETTER(_VkPipelineInputAssemblyStateCreateInfo::GetprimitiveRestartEnable) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.primitiveRestartEnable));
}NAN_SETTER(_VkPipelineInputAssemblyStateCreateInfo::SetprimitiveRestartEnable) {
  _VkPipelineInputAssemblyStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.primitiveRestartEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineInputAssemblyStateCreateInfo.primitiveRestartEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}