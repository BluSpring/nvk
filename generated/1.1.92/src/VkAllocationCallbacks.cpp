/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkAllocationCallbacks.h"

Nan::Persistent<v8::FunctionTemplate> _VkAllocationCallbacks::constructor;

_VkAllocationCallbacks::_VkAllocationCallbacks() {
  
  
}

_VkAllocationCallbacks::~_VkAllocationCallbacks() {
  //printf("VkAllocationCallbacks deconstructed!!\n");
  
}

void _VkAllocationCallbacks::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAllocationCallbacks::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAllocationCallbacks").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkAllocationCallbacks").ToLocalChecked(), ctor->GetFunction());
}

bool _VkAllocationCallbacks::flush() {
  _VkAllocationCallbacks *self = this;
  
  return true;
}

NAN_METHOD(_VkAllocationCallbacks::New) {
  if (info.IsConstructCall()) {
    _VkAllocationCallbacks* self = new _VkAllocationCallbacks();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAllocationCallbacks constructor cannot be invoked without 'new'");
  }
};

