/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkSparseMemoryBind.h"

Nan::Persistent<v8::FunctionTemplate> _VkSparseMemoryBind::constructor;

_VkSparseMemoryBind::_VkSparseMemoryBind() {
  
  
}

_VkSparseMemoryBind::~_VkSparseMemoryBind() {
  //printf("VkSparseMemoryBind deconstructed!!\n");
  
  
  
  
  
  
}

void _VkSparseMemoryBind::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSparseMemoryBind::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSparseMemoryBind").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("resourceOffset").ToLocalChecked(), GetresourceOffset, SetresourceOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, Setsize, ctor);
  SetPrototypeAccessor(proto, Nan::New("memory").ToLocalChecked(), Getmemory, Setmemory, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryOffset").ToLocalChecked(), GetmemoryOffset, SetmemoryOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  Nan::Set(target, Nan::New("VkSparseMemoryBind").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSparseMemoryBind::flush() {
  _VkSparseMemoryBind *self = this;
  
  return true;
}

NAN_METHOD(_VkSparseMemoryBind::New) {
  if (info.IsConstructCall()) {
    _VkSparseMemoryBind* self = new _VkSparseMemoryBind();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("resourceOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("size").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("memory").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("memoryOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("flags").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSparseMemoryBind constructor cannot be invoked without 'new'");
  }
};

// resourceOffset
NAN_GETTER(_VkSparseMemoryBind::GetresourceOffset) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.resourceOffset));
}NAN_SETTER(_VkSparseMemoryBind::SetresourceOffset) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  if (value->IsNumber()) {
    self->instance.resourceOffset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSparseMemoryBind.resourceOffset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// size
NAN_GETTER(_VkSparseMemoryBind::Getsize) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}NAN_SETTER(_VkSparseMemoryBind::Setsize) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  if (value->IsNumber()) {
    self->instance.size = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSparseMemoryBind.size' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// memory
NAN_GETTER(_VkSparseMemoryBind::Getmemory) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  if (self->memory.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->memory);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSparseMemoryBind::Setmemory) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDeviceMemory::constructor)->HasInstance(obj)) {
      self->memory.Reset<v8::Object>(value.As<v8::Object>());
      _VkDeviceMemory* inst = Nan::ObjectWrap::Unwrap<_VkDeviceMemory>(obj);
      ;
      self->instance.memory = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkSparseMemoryBind.memory' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->memory.Reset();
    self->instance.memory = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkSparseMemoryBind.memory' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// memoryOffset
NAN_GETTER(_VkSparseMemoryBind::GetmemoryOffset) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryOffset));
}NAN_SETTER(_VkSparseMemoryBind::SetmemoryOffset) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  if (value->IsNumber()) {
    self->instance.memoryOffset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSparseMemoryBind.memoryOffset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkSparseMemoryBind::Getflags) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSparseMemoryBind::Setflags) {
  _VkSparseMemoryBind *self = Nan::ObjectWrap::Unwrap<_VkSparseMemoryBind>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkSparseMemoryBindFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSparseMemoryBind.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}