/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkRenderPassMultiviewCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkRenderPassMultiviewCreateInfoKHR::constructor;

_VkRenderPassMultiviewCreateInfoKHR::_VkRenderPassMultiviewCreateInfoKHR() {
  
  
}

_VkRenderPassMultiviewCreateInfoKHR::~_VkRenderPassMultiviewCreateInfoKHR() {
  //printf("VkRenderPassMultiviewCreateInfoKHR deconstructed!!\n");
  
}

void _VkRenderPassMultiviewCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRenderPassMultiviewCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRenderPassMultiviewCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkRenderPassMultiviewCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkRenderPassMultiviewCreateInfoKHR::flush() {
  _VkRenderPassMultiviewCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkRenderPassMultiviewCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkRenderPassMultiviewCreateInfoKHR* self = new _VkRenderPassMultiviewCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRenderPassMultiviewCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

