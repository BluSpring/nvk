/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkD3D12FenceSubmitInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkD3D12FenceSubmitInfoKHR::constructor;

_VkD3D12FenceSubmitInfoKHR::_VkD3D12FenceSubmitInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;
  
}

_VkD3D12FenceSubmitInfoKHR::~_VkD3D12FenceSubmitInfoKHR() {
  //printf("VkD3D12FenceSubmitInfoKHR deconstructed!!\n");
  
  
  
  pWaitSemaphoreValues.Reset();
  
  
  pSignalSemaphoreValues.Reset();
  
}

void _VkD3D12FenceSubmitInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkD3D12FenceSubmitInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkD3D12FenceSubmitInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("waitSemaphoreValuesCount").ToLocalChecked(), GetwaitSemaphoreValuesCount, SetwaitSemaphoreValuesCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pWaitSemaphoreValues").ToLocalChecked(), GetpWaitSemaphoreValues, SetpWaitSemaphoreValues, ctor);
  SetPrototypeAccessor(proto, Nan::New("signalSemaphoreValuesCount").ToLocalChecked(), GetsignalSemaphoreValuesCount, SetsignalSemaphoreValuesCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSignalSemaphoreValues").ToLocalChecked(), GetpSignalSemaphoreValues, SetpSignalSemaphoreValues, ctor);
  Nan::Set(target, Nan::New("VkD3D12FenceSubmitInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkD3D12FenceSubmitInfoKHR::flush() {
  _VkD3D12FenceSubmitInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkD3D12FenceSubmitInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkD3D12FenceSubmitInfoKHR* self = new _VkD3D12FenceSubmitInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("waitSemaphoreValuesCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pWaitSemaphoreValues").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("signalSemaphoreValuesCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pSignalSemaphoreValues").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkD3D12FenceSubmitInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkD3D12FenceSubmitInfoKHR::GetsType) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkD3D12FenceSubmitInfoKHR::SetsType) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkD3D12FenceSubmitInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// waitSemaphoreValuesCount
NAN_GETTER(_VkD3D12FenceSubmitInfoKHR::GetwaitSemaphoreValuesCount) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.waitSemaphoreValuesCount));
}NAN_SETTER(_VkD3D12FenceSubmitInfoKHR::SetwaitSemaphoreValuesCount) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.waitSemaphoreValuesCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkD3D12FenceSubmitInfoKHR.waitSemaphoreValuesCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pWaitSemaphoreValues
NAN_GETTER(_VkD3D12FenceSubmitInfoKHR::GetpWaitSemaphoreValues) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  if (self->pWaitSemaphoreValues.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pWaitSemaphoreValues);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkD3D12FenceSubmitInfoKHR::SetpWaitSemaphoreValues) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsBigUint64Array()) {
        self->pWaitSemaphoreValues.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkD3D12FenceSubmitInfoKHR.pWaitSemaphoreValues' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pWaitSemaphoreValues.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkD3D12FenceSubmitInfoKHR.pWaitSemaphoreValues' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pWaitSemaphoreValues = getTypedArrayData<uint64_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pWaitSemaphoreValues = nullptr;
  }
}// signalSemaphoreValuesCount
NAN_GETTER(_VkD3D12FenceSubmitInfoKHR::GetsignalSemaphoreValuesCount) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.signalSemaphoreValuesCount));
}NAN_SETTER(_VkD3D12FenceSubmitInfoKHR::SetsignalSemaphoreValuesCount) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.signalSemaphoreValuesCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkD3D12FenceSubmitInfoKHR.signalSemaphoreValuesCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSignalSemaphoreValues
NAN_GETTER(_VkD3D12FenceSubmitInfoKHR::GetpSignalSemaphoreValues) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  if (self->pSignalSemaphoreValues.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSignalSemaphoreValues);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkD3D12FenceSubmitInfoKHR::SetpSignalSemaphoreValues) {
  _VkD3D12FenceSubmitInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkD3D12FenceSubmitInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsBigUint64Array()) {
        self->pSignalSemaphoreValues.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkD3D12FenceSubmitInfoKHR.pSignalSemaphoreValues' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pSignalSemaphoreValues.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkD3D12FenceSubmitInfoKHR.pSignalSemaphoreValues' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pSignalSemaphoreValues = getTypedArrayData<uint64_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pSignalSemaphoreValues = nullptr;
  }
}