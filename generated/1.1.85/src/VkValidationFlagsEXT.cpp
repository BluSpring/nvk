/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkValidationFlagsEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkValidationFlagsEXT::constructor;

_VkValidationFlagsEXT::_VkValidationFlagsEXT() {
  instance.sType = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
  
}

_VkValidationFlagsEXT::~_VkValidationFlagsEXT() {
  //printf("VkValidationFlagsEXT deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  pDisabledValidationChecks.Reset();
  
}

void _VkValidationFlagsEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkValidationFlagsEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkValidationFlagsEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("disabledValidationCheckCount").ToLocalChecked(), GetdisabledValidationCheckCount, SetdisabledValidationCheckCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDisabledValidationChecks").ToLocalChecked(), GetpDisabledValidationChecks, SetpDisabledValidationChecks, ctor);
  Nan::Set(target, Nan::New("VkValidationFlagsEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkValidationFlagsEXT::flush() {
  _VkValidationFlagsEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkValidationFlagsEXT::New) {
  if (info.IsConstructCall()) {
    _VkValidationFlagsEXT* self = new _VkValidationFlagsEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("disabledValidationCheckCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pDisabledValidationChecks").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkValidationFlagsEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkValidationFlagsEXT::GetsType) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkValidationFlagsEXT::SetsType) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkValidationFlagsEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkValidationFlagsEXT::GetpNext) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
}NAN_SETTER(_VkValidationFlagsEXT::SetpNext) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
}// disabledValidationCheckCount
NAN_GETTER(_VkValidationFlagsEXT::GetdisabledValidationCheckCount) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.disabledValidationCheckCount));
}NAN_SETTER(_VkValidationFlagsEXT::SetdisabledValidationCheckCount) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.disabledValidationCheckCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkValidationFlagsEXT.disabledValidationCheckCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDisabledValidationChecks
NAN_GETTER(_VkValidationFlagsEXT::GetpDisabledValidationChecks) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
  if (self->pDisabledValidationChecks.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDisabledValidationChecks);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkValidationFlagsEXT::SetpDisabledValidationChecks) {
  _VkValidationFlagsEXT *self = Nan::ObjectWrap::Unwrap<_VkValidationFlagsEXT>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsInt32Array()) {
        self->pDisabledValidationChecks.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkValidationFlagsEXT.pDisabledValidationChecks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pDisabledValidationChecks.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkValidationFlagsEXT.pDisabledValidationChecks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pDisabledValidationChecks = reinterpret_cast<const VkValidationCheckEXT *>(getTypedArrayData<int32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr));
  } else {
    self->instance.pDisabledValidationChecks = nullptr;
  }
}