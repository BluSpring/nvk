/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkObjectTableCreateInfoNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkObjectTableCreateInfoNVX::constructor;

_VkObjectTableCreateInfoNVX::_VkObjectTableCreateInfoNVX() {
  instance.sType = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;
  
}

_VkObjectTableCreateInfoNVX::~_VkObjectTableCreateInfoNVX() {
  //printf("VkObjectTableCreateInfoNVX deconstructed!!\n");
  
  
  
  pObjectEntryTypes.Reset();
  
  pObjectEntryCounts.Reset();
  
  pObjectEntryUsageFlags.Reset();
  
  
  
  
  
  
}

void _VkObjectTableCreateInfoNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkObjectTableCreateInfoNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkObjectTableCreateInfoNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("objectCount").ToLocalChecked(), GetobjectCount, SetobjectCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pObjectEntryTypes").ToLocalChecked(), GetpObjectEntryTypes, SetpObjectEntryTypes, ctor);
  SetPrototypeAccessor(proto, Nan::New("pObjectEntryCounts").ToLocalChecked(), GetpObjectEntryCounts, SetpObjectEntryCounts, ctor);
  SetPrototypeAccessor(proto, Nan::New("pObjectEntryUsageFlags").ToLocalChecked(), GetpObjectEntryUsageFlags, SetpObjectEntryUsageFlags, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxUniformBuffersPerDescriptor").ToLocalChecked(), GetmaxUniformBuffersPerDescriptor, SetmaxUniformBuffersPerDescriptor, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxStorageBuffersPerDescriptor").ToLocalChecked(), GetmaxStorageBuffersPerDescriptor, SetmaxStorageBuffersPerDescriptor, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxStorageImagesPerDescriptor").ToLocalChecked(), GetmaxStorageImagesPerDescriptor, SetmaxStorageImagesPerDescriptor, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxSampledImagesPerDescriptor").ToLocalChecked(), GetmaxSampledImagesPerDescriptor, SetmaxSampledImagesPerDescriptor, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxPipelineLayouts").ToLocalChecked(), GetmaxPipelineLayouts, SetmaxPipelineLayouts, ctor);
  Nan::Set(target, Nan::New("VkObjectTableCreateInfoNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkObjectTableCreateInfoNVX::flush() {
  _VkObjectTableCreateInfoNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkObjectTableCreateInfoNVX::New) {
  if (info.IsConstructCall()) {
    _VkObjectTableCreateInfoNVX* self = new _VkObjectTableCreateInfoNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("objectCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pObjectEntryTypes").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pObjectEntryCounts").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pObjectEntryUsageFlags").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("maxUniformBuffersPerDescriptor").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("maxStorageBuffersPerDescriptor").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("maxStorageImagesPerDescriptor").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("maxSampledImagesPerDescriptor").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("maxPipelineLayouts").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkObjectTableCreateInfoNVX constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetsType) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetsType) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableCreateInfoNVX.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// objectCount
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetobjectCount) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.objectCount));
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetobjectCount) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.objectCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableCreateInfoNVX.objectCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pObjectEntryTypes
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetpObjectEntryTypes) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (self->pObjectEntryTypes.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pObjectEntryTypes);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetpObjectEntryTypes) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsInt32Array()) {
        self->pObjectEntryTypes.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkObjectTableCreateInfoNVX.pObjectEntryTypes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pObjectEntryTypes.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkObjectTableCreateInfoNVX.pObjectEntryTypes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pObjectEntryTypes = reinterpret_cast<const VkObjectEntryTypeNVX *>(getTypedArrayData<int32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr));
  } else {
    self->instance.pObjectEntryTypes = nullptr;
  }
}// pObjectEntryCounts
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetpObjectEntryCounts) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (self->pObjectEntryCounts.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pObjectEntryCounts);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetpObjectEntryCounts) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pObjectEntryCounts.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkObjectTableCreateInfoNVX.pObjectEntryCounts' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pObjectEntryCounts.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkObjectTableCreateInfoNVX.pObjectEntryCounts' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pObjectEntryCounts = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pObjectEntryCounts = nullptr;
  }
}// pObjectEntryUsageFlags
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetpObjectEntryUsageFlags) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (self->pObjectEntryUsageFlags.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pObjectEntryUsageFlags);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetpObjectEntryUsageFlags) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsInt32Array()) {
        self->pObjectEntryUsageFlags.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkObjectTableCreateInfoNVX.pObjectEntryUsageFlags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pObjectEntryUsageFlags.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Int32Array' for 'VkObjectTableCreateInfoNVX.pObjectEntryUsageFlags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pObjectEntryUsageFlags = reinterpret_cast<const VkObjectEntryUsageFlagsNVX *>(getTypedArrayData<int32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr));
  } else {
    self->instance.pObjectEntryUsageFlags = nullptr;
  }
}// maxUniformBuffersPerDescriptor
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetmaxUniformBuffersPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxUniformBuffersPerDescriptor));
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetmaxUniformBuffersPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxUniformBuffersPerDescriptor = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableCreateInfoNVX.maxUniformBuffersPerDescriptor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxStorageBuffersPerDescriptor
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetmaxStorageBuffersPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxStorageBuffersPerDescriptor));
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetmaxStorageBuffersPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxStorageBuffersPerDescriptor = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableCreateInfoNVX.maxStorageBuffersPerDescriptor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxStorageImagesPerDescriptor
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetmaxStorageImagesPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxStorageImagesPerDescriptor));
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetmaxStorageImagesPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxStorageImagesPerDescriptor = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableCreateInfoNVX.maxStorageImagesPerDescriptor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxSampledImagesPerDescriptor
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetmaxSampledImagesPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxSampledImagesPerDescriptor));
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetmaxSampledImagesPerDescriptor) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxSampledImagesPerDescriptor = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableCreateInfoNVX.maxSampledImagesPerDescriptor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxPipelineLayouts
NAN_GETTER(_VkObjectTableCreateInfoNVX::GetmaxPipelineLayouts) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxPipelineLayouts));
}NAN_SETTER(_VkObjectTableCreateInfoNVX::SetmaxPipelineLayouts) {
  _VkObjectTableCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxPipelineLayouts = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableCreateInfoNVX.maxPipelineLayouts' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}