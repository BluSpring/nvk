#include "utils.h"
#include "index.h"
#include "VkRect2D.h"

Nan::Persistent<v8::FunctionTemplate> _VkRect2D::constructor;

_VkRect2D::_VkRect2D() {
  instance = (VkRect2D*) malloc(sizeof(VkRect2D));
}

_VkRect2D::~_VkRect2D() { }

void _VkRect2D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRect2D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRect2D").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("extent").ToLocalChecked(), Getextent, Setextent, ctor);
  
  Nan::Set(target, Nan::New("VkRect2D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkRect2D::New) {
  _VkRect2D* self = new _VkRect2D();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// offset
NAN_GETTER(_VkRect2D::Getoffset) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  VkRect2D *instance = self->instance;
  if (self->offset != nullptr) {
    info.GetReturnValue().Set(self->offset->handle());
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkRect2D::Setoffset) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  VkRect2D *instance = self->instance;
  _VkOffset2D* obj = Nan::ObjectWrap::Unwrap<_VkOffset2D>(value->ToObject());
  self->offset = obj;
  instance->offset = *obj->instance;
}// extent
NAN_GETTER(_VkRect2D::Getextent) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  VkRect2D *instance = self->instance;
  if (self->extent != nullptr) {
    info.GetReturnValue().Set(self->extent->handle());
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkRect2D::Setextent) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  VkRect2D *instance = self->instance;
  _VkExtent2D* obj = Nan::ObjectWrap::Unwrap<_VkExtent2D>(value->ToObject());
  self->extent = obj;
  instance->extent = *obj->instance;
}