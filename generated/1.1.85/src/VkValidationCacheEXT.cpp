/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "VkValidationCacheEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkValidationCacheEXT::constructor;

_VkValidationCacheEXT::_VkValidationCacheEXT() {}
_VkValidationCacheEXT::~_VkValidationCacheEXT() {}

void _VkValidationCacheEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkValidationCacheEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkValidationCacheEXT").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkValidationCacheEXT").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkValidationCacheEXT::New) {
  _VkValidationCacheEXT* self = new _VkValidationCacheEXT();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
