/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDevice16BitStorageFeaturesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDevice16BitStorageFeaturesKHR::constructor;

_VkPhysicalDevice16BitStorageFeaturesKHR::_VkPhysicalDevice16BitStorageFeaturesKHR() {
  
  
}

_VkPhysicalDevice16BitStorageFeaturesKHR::~_VkPhysicalDevice16BitStorageFeaturesKHR() {
  //printf("VkPhysicalDevice16BitStorageFeaturesKHR deconstructed!!\n");
  
}

void _VkPhysicalDevice16BitStorageFeaturesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDevice16BitStorageFeaturesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDevice16BitStorageFeaturesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPhysicalDevice16BitStorageFeaturesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDevice16BitStorageFeaturesKHR::flush() {
  _VkPhysicalDevice16BitStorageFeaturesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDevice16BitStorageFeaturesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDevice16BitStorageFeaturesKHR* self = new _VkPhysicalDevice16BitStorageFeaturesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDevice16BitStorageFeaturesKHR constructor cannot be invoked without 'new'");
  }
};

