/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "VkBufferView.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferView::constructor;

_VkBufferView::_VkBufferView() {}
_VkBufferView::~_VkBufferView() {}

void _VkBufferView::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferView::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferView").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkBufferView").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBufferView::New) {
  _VkBufferView* self = new _VkBufferView();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
