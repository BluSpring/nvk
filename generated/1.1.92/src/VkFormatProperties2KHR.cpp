/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkFormatProperties2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkFormatProperties2KHR::constructor;

_VkFormatProperties2KHR::_VkFormatProperties2KHR() {
  
  
}

_VkFormatProperties2KHR::~_VkFormatProperties2KHR() {
  //printf("VkFormatProperties2KHR deconstructed!!\n");
  
}

void _VkFormatProperties2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkFormatProperties2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkFormatProperties2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkFormatProperties2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkFormatProperties2KHR::flush() {
  _VkFormatProperties2KHR *self = this;
  
  return true;
}

NAN_METHOD(_VkFormatProperties2KHR::New) {
  if (info.IsConstructCall()) {
    _VkFormatProperties2KHR* self = new _VkFormatProperties2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkFormatProperties2KHR constructor cannot be invoked without 'new'");
  }
};

