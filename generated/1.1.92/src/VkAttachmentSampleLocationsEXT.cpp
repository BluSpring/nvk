/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkAttachmentSampleLocationsEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkAttachmentSampleLocationsEXT::constructor;

_VkAttachmentSampleLocationsEXT::_VkAttachmentSampleLocationsEXT() {
  
  
}

_VkAttachmentSampleLocationsEXT::~_VkAttachmentSampleLocationsEXT() {
  //printf("VkAttachmentSampleLocationsEXT deconstructed!!\n");
  
  
  
}

void _VkAttachmentSampleLocationsEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAttachmentSampleLocationsEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAttachmentSampleLocationsEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("attachmentIndex").ToLocalChecked(), GetattachmentIndex, SetattachmentIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleLocationsInfo").ToLocalChecked(), GetsampleLocationsInfo, SetsampleLocationsInfo, ctor);
  Nan::Set(target, Nan::New("VkAttachmentSampleLocationsEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkAttachmentSampleLocationsEXT::flush() {
  _VkAttachmentSampleLocationsEXT *self = this;
  if (!(self->sampleLocationsInfo.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->sampleLocationsInfo);
    
    _VkSampleLocationsInfoEXT* result = Nan::ObjectWrap::Unwrap<_VkSampleLocationsInfoEXT>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.sampleLocationsInfo = result->instance;
  }
  return true;
}

NAN_METHOD(_VkAttachmentSampleLocationsEXT::New) {
  if (info.IsConstructCall()) {
    _VkAttachmentSampleLocationsEXT* self = new _VkAttachmentSampleLocationsEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("attachmentIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("sampleLocationsInfo").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAttachmentSampleLocationsEXT constructor cannot be invoked without 'new'");
  }
};

// attachmentIndex
NAN_GETTER(_VkAttachmentSampleLocationsEXT::GetattachmentIndex) {
  _VkAttachmentSampleLocationsEXT *self = Nan::ObjectWrap::Unwrap<_VkAttachmentSampleLocationsEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachmentIndex));
}NAN_SETTER(_VkAttachmentSampleLocationsEXT::SetattachmentIndex) {
  _VkAttachmentSampleLocationsEXT *self = Nan::ObjectWrap::Unwrap<_VkAttachmentSampleLocationsEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.attachmentIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentSampleLocationsEXT.attachmentIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sampleLocationsInfo
NAN_GETTER(_VkAttachmentSampleLocationsEXT::GetsampleLocationsInfo) {
  _VkAttachmentSampleLocationsEXT *self = Nan::ObjectWrap::Unwrap<_VkAttachmentSampleLocationsEXT>(info.This());
  if (self->sampleLocationsInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->sampleLocationsInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkAttachmentSampleLocationsEXT::SetsampleLocationsInfo) {
  _VkAttachmentSampleLocationsEXT *self = Nan::ObjectWrap::Unwrap<_VkAttachmentSampleLocationsEXT>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSampleLocationsInfoEXT::constructor)->HasInstance(obj)) {
      self->sampleLocationsInfo.Reset<v8::Object>(value.As<v8::Object>());
      _VkSampleLocationsInfoEXT* inst = Nan::ObjectWrap::Unwrap<_VkSampleLocationsInfoEXT>(obj);
      inst->flush();
      self->instance.sampleLocationsInfo = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSampleLocationsInfoEXT]' for 'VkAttachmentSampleLocationsEXT.sampleLocationsInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->sampleLocationsInfo.Reset();
    memset(&self->instance.sampleLocationsInfo, 0, sizeof(VkSampleLocationsInfoEXT));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSampleLocationsInfoEXT]' for 'VkAttachmentSampleLocationsEXT.sampleLocationsInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}