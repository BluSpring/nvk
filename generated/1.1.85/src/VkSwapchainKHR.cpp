/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "VkSwapchainKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSwapchainKHR::constructor;

_VkSwapchainKHR::_VkSwapchainKHR() {}
_VkSwapchainKHR::~_VkSwapchainKHR() {}

void _VkSwapchainKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSwapchainKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSwapchainKHR").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkSwapchainKHR").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSwapchainKHR::New) {
  _VkSwapchainKHR* self = new _VkSwapchainKHR();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
