/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkExportMemoryAllocateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkExportMemoryAllocateInfo::constructor;

_VkExportMemoryAllocateInfo::_VkExportMemoryAllocateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
  
}

_VkExportMemoryAllocateInfo::~_VkExportMemoryAllocateInfo() {
  //printf("VkExportMemoryAllocateInfo deconstructed!!\n");
  
  
  
}

void _VkExportMemoryAllocateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExportMemoryAllocateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExportMemoryAllocateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("handleTypes").ToLocalChecked(), GethandleTypes, SethandleTypes, ctor);
  Nan::Set(target, Nan::New("VkExportMemoryAllocateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExportMemoryAllocateInfo::flush() {
  _VkExportMemoryAllocateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkExportMemoryAllocateInfo::New) {
  if (info.IsConstructCall()) {
    _VkExportMemoryAllocateInfo* self = new _VkExportMemoryAllocateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("handleTypes").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExportMemoryAllocateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkExportMemoryAllocateInfo::GetsType) {
  _VkExportMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkExportMemoryAllocateInfo::SetsType) {
  _VkExportMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryAllocateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkExportMemoryAllocateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// handleTypes
NAN_GETTER(_VkExportMemoryAllocateInfo::GethandleTypes) {
  _VkExportMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.handleTypes));
}NAN_SETTER(_VkExportMemoryAllocateInfo::SethandleTypes) {
  _VkExportMemoryAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryAllocateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.handleTypes = static_cast<VkExternalMemoryHandleTypeFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkExportMemoryAllocateInfo.handleTypes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}