/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceExternalFenceInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceExternalFenceInfoKHR::constructor;

_VkPhysicalDeviceExternalFenceInfoKHR::_VkPhysicalDeviceExternalFenceInfoKHR() {
  
  
}

_VkPhysicalDeviceExternalFenceInfoKHR::~_VkPhysicalDeviceExternalFenceInfoKHR() {
  //printf("VkPhysicalDeviceExternalFenceInfoKHR deconstructed!!\n");
  
}

void _VkPhysicalDeviceExternalFenceInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceExternalFenceInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceExternalFenceInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPhysicalDeviceExternalFenceInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceExternalFenceInfoKHR::flush() {
  _VkPhysicalDeviceExternalFenceInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceExternalFenceInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceExternalFenceInfoKHR* self = new _VkPhysicalDeviceExternalFenceInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceExternalFenceInfoKHR constructor cannot be invoked without 'new'");
  }
};

