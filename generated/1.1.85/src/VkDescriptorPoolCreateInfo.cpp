/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorPoolCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorPoolCreateInfo::constructor;

_VkDescriptorPoolCreateInfo::_VkDescriptorPoolCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
  vpPoolSizes = new std::vector<VkDescriptorPoolSize>;
  
}

_VkDescriptorPoolCreateInfo::~_VkDescriptorPoolCreateInfo() {
  //printf("VkDescriptorPoolCreateInfo deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  
  
  vpPoolSizes->clear();
  delete vpPoolSizes;
  
  pPoolSizes.Reset();
  
}

void _VkDescriptorPoolCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorPoolCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorPoolCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxSets").ToLocalChecked(), GetmaxSets, SetmaxSets, ctor);
  SetPrototypeAccessor(proto, Nan::New("poolSizeCount").ToLocalChecked(), GetpoolSizeCount, SetpoolSizeCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pPoolSizes").ToLocalChecked(), GetpPoolSizes, SetpPoolSizes, ctor);
  Nan::Set(target, Nan::New("VkDescriptorPoolCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDescriptorPoolCreateInfo::flush() {
  _VkDescriptorPoolCreateInfo *self = this;
  if (!(self->pPoolSizes.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pPoolSizes);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.poolSizeCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'poolSizeCount' for 'VkDescriptorPoolCreateInfo.pPoolSizes'");
      return false;
    }
    std::vector<VkDescriptorPoolSize>* data = self->vpPoolSizes;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDescriptorPoolSize::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorPoolSize]' for 'VkDescriptorPoolCreateInfo.pPoolSizes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDescriptorPoolSize* result = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolSize>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pPoolSizes = data->data();
  }
  return true;
}

NAN_METHOD(_VkDescriptorPoolCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorPoolCreateInfo* self = new _VkDescriptorPoolCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("maxSets").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("poolSizeCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pPoolSizes").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorPoolCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDescriptorPoolCreateInfo::GetsType) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDescriptorPoolCreateInfo::SetsType) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorPoolCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkDescriptorPoolCreateInfo::GetpNext) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
}NAN_SETTER(_VkDescriptorPoolCreateInfo::SetpNext) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkDescriptorPoolCreateInfo::Getflags) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDescriptorPoolCreateInfo::Setflags) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDescriptorPoolCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorPoolCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxSets
NAN_GETTER(_VkDescriptorPoolCreateInfo::GetmaxSets) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxSets));
}NAN_SETTER(_VkDescriptorPoolCreateInfo::SetmaxSets) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.maxSets = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorPoolCreateInfo.maxSets' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// poolSizeCount
NAN_GETTER(_VkDescriptorPoolCreateInfo::GetpoolSizeCount) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.poolSizeCount));
}NAN_SETTER(_VkDescriptorPoolCreateInfo::SetpoolSizeCount) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.poolSizeCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorPoolCreateInfo.poolSizeCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pPoolSizes
NAN_GETTER(_VkDescriptorPoolCreateInfo::GetpPoolSizes) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  if (self->pPoolSizes.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pPoolSizes);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorPoolCreateInfo::SetpPoolSizes) {
  _VkDescriptorPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pPoolSizes.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pPoolSizes.Reset();
      self->instance.pPoolSizes = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorPoolSize]' for 'VkDescriptorPoolCreateInfo.pPoolSizes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pPoolSizes = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorPoolSize]' for 'VkDescriptorPoolCreateInfo.pPoolSizes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}