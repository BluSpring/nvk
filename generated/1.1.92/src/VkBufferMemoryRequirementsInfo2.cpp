/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkBufferMemoryRequirementsInfo2.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferMemoryRequirementsInfo2::constructor;

_VkBufferMemoryRequirementsInfo2::_VkBufferMemoryRequirementsInfo2() {
  instance.sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
  
}

_VkBufferMemoryRequirementsInfo2::~_VkBufferMemoryRequirementsInfo2() {
  //printf("VkBufferMemoryRequirementsInfo2 deconstructed!!\n");
  
  
  
}

void _VkBufferMemoryRequirementsInfo2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferMemoryRequirementsInfo2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferMemoryRequirementsInfo2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("buffer").ToLocalChecked(), Getbuffer, Setbuffer, ctor);
  Nan::Set(target, Nan::New("VkBufferMemoryRequirementsInfo2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBufferMemoryRequirementsInfo2::flush() {
  _VkBufferMemoryRequirementsInfo2 *self = this;
  
  return true;
}

NAN_METHOD(_VkBufferMemoryRequirementsInfo2::New) {
  if (info.IsConstructCall()) {
    _VkBufferMemoryRequirementsInfo2* self = new _VkBufferMemoryRequirementsInfo2();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("buffer").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBufferMemoryRequirementsInfo2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBufferMemoryRequirementsInfo2::GetsType) {
  _VkBufferMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryRequirementsInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBufferMemoryRequirementsInfo2::SetsType) {
  _VkBufferMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryRequirementsInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBufferMemoryRequirementsInfo2.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// buffer
NAN_GETTER(_VkBufferMemoryRequirementsInfo2::Getbuffer) {
  _VkBufferMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryRequirementsInfo2>(info.This());
  if (self->buffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->buffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBufferMemoryRequirementsInfo2::Setbuffer) {
  _VkBufferMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryRequirementsInfo2>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkBuffer::constructor)->HasInstance(obj)) {
      self->buffer.Reset<v8::Object>(value.As<v8::Object>());
      _VkBuffer* inst = Nan::ObjectWrap::Unwrap<_VkBuffer>(obj);
      ;
      self->instance.buffer = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkBufferMemoryRequirementsInfo2.buffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->buffer.Reset();
    self->instance.buffer = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkBufferMemoryRequirementsInfo2.buffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}