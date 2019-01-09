/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkDisplayPowerInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplayPowerInfoEXT::constructor;

_VkDisplayPowerInfoEXT::_VkDisplayPowerInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
  
}

_VkDisplayPowerInfoEXT::~_VkDisplayPowerInfoEXT() {
  //printf("VkDisplayPowerInfoEXT deconstructed!!\n");
  
  
  
}

void _VkDisplayPowerInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplayPowerInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplayPowerInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("powerState").ToLocalChecked(), GetpowerState, SetpowerState, ctor);
  Nan::Set(target, Nan::New("VkDisplayPowerInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDisplayPowerInfoEXT::flush() {
  _VkDisplayPowerInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkDisplayPowerInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkDisplayPowerInfoEXT* self = new _VkDisplayPowerInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("powerState").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDisplayPowerInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDisplayPowerInfoEXT::GetsType) {
  _VkDisplayPowerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDisplayPowerInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDisplayPowerInfoEXT::SetsType) {
  _VkDisplayPowerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDisplayPowerInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplayPowerInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// powerState
NAN_GETTER(_VkDisplayPowerInfoEXT::GetpowerState) {
  _VkDisplayPowerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDisplayPowerInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.powerState));
}NAN_SETTER(_VkDisplayPowerInfoEXT::SetpowerState) {
  _VkDisplayPowerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDisplayPowerInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.powerState = static_cast<VkDisplayPowerStateEXT>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplayPowerInfoEXT.powerState' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}