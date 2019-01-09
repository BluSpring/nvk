/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceCreateInfo::constructor;

_VkDeviceCreateInfo::_VkDeviceCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
  vpQueueCreateInfos = new std::vector<VkDeviceQueueCreateInfo>;
  vppEnabledLayerNames = new std::vector<char*>;
  vppEnabledExtensionNames = new std::vector<char*>;
  
}

_VkDeviceCreateInfo::~_VkDeviceCreateInfo() {
  //printf("VkDeviceCreateInfo deconstructed!!\n");
  
  
  
  
  vpQueueCreateInfos->clear();
  delete vpQueueCreateInfos;
  
  pQueueCreateInfos.Reset();
  
  
  for (int ii = 0; ii < vppEnabledLayerNames->size(); ++ii) {
    delete ((char*) vppEnabledLayerNames->at(ii));
  };
  vppEnabledLayerNames->clear();
  delete vppEnabledLayerNames;
  
  ppEnabledLayerNames.Reset();
  
  
  for (int ii = 0; ii < vppEnabledExtensionNames->size(); ++ii) {
    delete ((char*) vppEnabledExtensionNames->at(ii));
  };
  vppEnabledExtensionNames->clear();
  delete vppEnabledExtensionNames;
  
  ppEnabledExtensionNames.Reset();
  
  pEnabledFeatures.Reset();
  
}

void _VkDeviceCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueCreateInfoCount").ToLocalChecked(), GetqueueCreateInfoCount, SetqueueCreateInfoCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueCreateInfos").ToLocalChecked(), GetpQueueCreateInfos, SetpQueueCreateInfos, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledLayerCount").ToLocalChecked(), GetenabledLayerCount, SetenabledLayerCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledLayerNames").ToLocalChecked(), GetppEnabledLayerNames, SetppEnabledLayerNames, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledExtensionCount").ToLocalChecked(), GetenabledExtensionCount, SetenabledExtensionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledExtensionNames").ToLocalChecked(), GetppEnabledExtensionNames, SetppEnabledExtensionNames, ctor);
  SetPrototypeAccessor(proto, Nan::New("pEnabledFeatures").ToLocalChecked(), GetpEnabledFeatures, SetpEnabledFeatures, ctor);
  Nan::Set(target, Nan::New("VkDeviceCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceCreateInfo::flush() {
  _VkDeviceCreateInfo *self = this;
  if (!(self->pQueueCreateInfos.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pQueueCreateInfos);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.queueCreateInfoCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'queueCreateInfoCount' for 'VkDeviceCreateInfo.pQueueCreateInfos'");
      return false;
    }
    std::vector<VkDeviceQueueCreateInfo>* data = self->vpQueueCreateInfos;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDeviceQueueCreateInfo::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceQueueCreateInfo]' for 'VkDeviceCreateInfo.pQueueCreateInfos' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDeviceQueueCreateInfo* result = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pQueueCreateInfos = data->data();
  }if (!(self->ppEnabledLayerNames.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->ppEnabledLayerNames);
    
    std::vector<char*>* data = self->vppEnabledLayerNames;
    data->clear();
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
      if (!item->IsString()) return false;
      char *copy = copyV8String(item);
      data->push_back(copy);
    };
    self->instance.ppEnabledLayerNames = data->data();
  }if (!(self->ppEnabledExtensionNames.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->ppEnabledExtensionNames);
    
    std::vector<char*>* data = self->vppEnabledExtensionNames;
    data->clear();
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
      if (!item->IsString()) return false;
      char *copy = copyV8String(item);
      data->push_back(copy);
    };
    self->instance.ppEnabledExtensionNames = data->data();
  }
  return true;
}

NAN_METHOD(_VkDeviceCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkDeviceCreateInfo* self = new _VkDeviceCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("queueCreateInfoCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pQueueCreateInfos").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("enabledLayerCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("ppEnabledLayerNames").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("enabledExtensionCount").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("ppEnabledExtensionNames").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pEnabledFeatures").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceCreateInfo::GetsType) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceCreateInfo::SetsType) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkDeviceCreateInfo::Getflags) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDeviceCreateInfo::Setflags) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDeviceCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// queueCreateInfoCount
NAN_GETTER(_VkDeviceCreateInfo::GetqueueCreateInfoCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueCreateInfoCount));
}NAN_SETTER(_VkDeviceCreateInfo::SetqueueCreateInfoCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.queueCreateInfoCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceCreateInfo.queueCreateInfoCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pQueueCreateInfos
NAN_GETTER(_VkDeviceCreateInfo::GetpQueueCreateInfos) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (self->pQueueCreateInfos.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueueCreateInfos);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceCreateInfo::SetpQueueCreateInfos) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pQueueCreateInfos.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pQueueCreateInfos.Reset();
      self->instance.pQueueCreateInfos = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceQueueCreateInfo]' for 'VkDeviceCreateInfo.pQueueCreateInfos' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pQueueCreateInfos = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceQueueCreateInfo]' for 'VkDeviceCreateInfo.pQueueCreateInfos' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// enabledLayerCount
NAN_GETTER(_VkDeviceCreateInfo::GetenabledLayerCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.enabledLayerCount));
}NAN_SETTER(_VkDeviceCreateInfo::SetenabledLayerCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.enabledLayerCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceCreateInfo.enabledLayerCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// ppEnabledLayerNames
NAN_GETTER(_VkDeviceCreateInfo::GetppEnabledLayerNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (self->ppEnabledLayerNames.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->ppEnabledLayerNames);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceCreateInfo::SetppEnabledLayerNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->ppEnabledLayerNames.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->ppEnabledLayerNames.Reset();
      self->instance.ppEnabledLayerNames = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkDeviceCreateInfo.ppEnabledLayerNames' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
}// enabledExtensionCount
NAN_GETTER(_VkDeviceCreateInfo::GetenabledExtensionCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.enabledExtensionCount));
}NAN_SETTER(_VkDeviceCreateInfo::SetenabledExtensionCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.enabledExtensionCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceCreateInfo.enabledExtensionCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// ppEnabledExtensionNames
NAN_GETTER(_VkDeviceCreateInfo::GetppEnabledExtensionNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (self->ppEnabledExtensionNames.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->ppEnabledExtensionNames);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceCreateInfo::SetppEnabledExtensionNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->ppEnabledExtensionNames.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->ppEnabledExtensionNames.Reset();
      self->instance.ppEnabledExtensionNames = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkDeviceCreateInfo.ppEnabledExtensionNames' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
}// pEnabledFeatures
NAN_GETTER(_VkDeviceCreateInfo::GetpEnabledFeatures) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  if (self->pEnabledFeatures.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pEnabledFeatures);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceCreateInfo::SetpEnabledFeatures) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPhysicalDeviceFeatures::constructor)->HasInstance(obj)) {
      self->pEnabledFeatures.Reset<v8::Object>(value.As<v8::Object>());
      _VkPhysicalDeviceFeatures* inst = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures>(obj);
      inst->flush();
      self->instance.pEnabledFeatures = &inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPhysicalDeviceFeatures]' for 'VkDeviceCreateInfo.pEnabledFeatures' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pEnabledFeatures.Reset();
    self->instance.pEnabledFeatures = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPhysicalDeviceFeatures]' for 'VkDeviceCreateInfo.pEnabledFeatures' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}