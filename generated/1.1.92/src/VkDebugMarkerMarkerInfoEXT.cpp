/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkDebugMarkerMarkerInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDebugMarkerMarkerInfoEXT::constructor;

_VkDebugMarkerMarkerInfoEXT::_VkDebugMarkerMarkerInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
  vcolor = new std::vector<float>;
  
}

_VkDebugMarkerMarkerInfoEXT::~_VkDebugMarkerMarkerInfoEXT() {
  //printf("VkDebugMarkerMarkerInfoEXT deconstructed!!\n");
  
  
  pMarkerName.Reset();
  
  vcolor->clear();
  delete vcolor;
  
  
}

void _VkDebugMarkerMarkerInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDebugMarkerMarkerInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDebugMarkerMarkerInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pMarkerName").ToLocalChecked(), GetpMarkerName, SetpMarkerName, ctor);
  SetPrototypeAccessor(proto, Nan::New("color").ToLocalChecked(), Getcolor, Setcolor, ctor);
  Nan::Set(target, Nan::New("VkDebugMarkerMarkerInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDebugMarkerMarkerInfoEXT::flush() {
  _VkDebugMarkerMarkerInfoEXT *self = this;
  if (!(self->color.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->color);
    
    if (value->IsArray()) {
      // validate length
      if (v8::Local<v8::Array>::Cast(value)->Length() != 4) {
        Nan::ThrowRangeError("Invalid array length, expected array length of '4' for 'VkDebugMarkerMarkerInfoEXT.color'");
        return false;
      }
      std::vector<float> array = createArrayOfV8Numbers<float>(value);
      memcpy(self->instance.color, array.data(), sizeof(float) * 4);
    } else if (value->IsNull()) {
      memset(&self->instance.color, 0, sizeof(float));
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkDebugMarkerMarkerInfoEXT.color' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return false;
    }
  }
  return true;
}

NAN_METHOD(_VkDebugMarkerMarkerInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkDebugMarkerMarkerInfoEXT* self = new _VkDebugMarkerMarkerInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("pMarkerName").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("color").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDebugMarkerMarkerInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDebugMarkerMarkerInfoEXT::GetsType) {
  _VkDebugMarkerMarkerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugMarkerMarkerInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDebugMarkerMarkerInfoEXT::SetsType) {
  _VkDebugMarkerMarkerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugMarkerMarkerInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugMarkerMarkerInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pMarkerName
NAN_GETTER(_VkDebugMarkerMarkerInfoEXT::GetpMarkerName) {
  _VkDebugMarkerMarkerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugMarkerMarkerInfoEXT>(info.This());
  if (self->pMarkerName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pMarkerName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkDebugMarkerMarkerInfoEXT::SetpMarkerName) {
  _VkDebugMarkerMarkerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugMarkerMarkerInfoEXT>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pMarkerName = str;
    // free previous
    if (self->instance.pMarkerName) {
      delete[] self->instance.pMarkerName;
    }
    self->instance.pMarkerName = copyV8String(value);
  } else if (value->IsNull()) {
    self->instance.pMarkerName = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'String' for 'VkDebugMarkerMarkerInfoEXT.pMarkerName' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// color
NAN_GETTER(_VkDebugMarkerMarkerInfoEXT::Getcolor) {
  _VkDebugMarkerMarkerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugMarkerMarkerInfoEXT>(info.This());
  if (self->color.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->color));
  }
}NAN_SETTER(_VkDebugMarkerMarkerInfoEXT::Setcolor) {
  _VkDebugMarkerMarkerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugMarkerMarkerInfoEXT>(info.This());
  // js
  if (value->IsArray()) {
    self->color.Reset<v8::Array>(value.As<v8::Array>());
  } else if (value->IsNull()) {
    self->color.Reset();
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkDebugMarkerMarkerInfoEXT.color' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}