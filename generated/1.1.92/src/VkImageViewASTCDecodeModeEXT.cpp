/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkImageViewASTCDecodeModeEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageViewASTCDecodeModeEXT::constructor;

_VkImageViewASTCDecodeModeEXT::_VkImageViewASTCDecodeModeEXT() {
  instance.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;
  
}

_VkImageViewASTCDecodeModeEXT::~_VkImageViewASTCDecodeModeEXT() {
  //printf("VkImageViewASTCDecodeModeEXT deconstructed!!\n");
  
  
  
}

void _VkImageViewASTCDecodeModeEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageViewASTCDecodeModeEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageViewASTCDecodeModeEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("decodeMode").ToLocalChecked(), GetdecodeMode, SetdecodeMode, ctor);
  Nan::Set(target, Nan::New("VkImageViewASTCDecodeModeEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkImageViewASTCDecodeModeEXT::flush() {
  _VkImageViewASTCDecodeModeEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkImageViewASTCDecodeModeEXT::New) {
  if (info.IsConstructCall()) {
    _VkImageViewASTCDecodeModeEXT* self = new _VkImageViewASTCDecodeModeEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("decodeMode").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageViewASTCDecodeModeEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkImageViewASTCDecodeModeEXT::GetsType) {
  _VkImageViewASTCDecodeModeEXT *self = Nan::ObjectWrap::Unwrap<_VkImageViewASTCDecodeModeEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImageViewASTCDecodeModeEXT::SetsType) {
  _VkImageViewASTCDecodeModeEXT *self = Nan::ObjectWrap::Unwrap<_VkImageViewASTCDecodeModeEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImageViewASTCDecodeModeEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// decodeMode
NAN_GETTER(_VkImageViewASTCDecodeModeEXT::GetdecodeMode) {
  _VkImageViewASTCDecodeModeEXT *self = Nan::ObjectWrap::Unwrap<_VkImageViewASTCDecodeModeEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.decodeMode));
}NAN_SETTER(_VkImageViewASTCDecodeModeEXT::SetdecodeMode) {
  _VkImageViewASTCDecodeModeEXT *self = Nan::ObjectWrap::Unwrap<_VkImageViewASTCDecodeModeEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.decodeMode = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImageViewASTCDecodeModeEXT.decodeMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}