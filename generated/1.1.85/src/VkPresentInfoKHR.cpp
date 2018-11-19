/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkPresentInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPresentInfoKHR::constructor;

_VkPresentInfoKHR::_VkPresentInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
}

_VkPresentInfoKHR::~_VkPresentInfoKHR() {
  //printf("VkPresentInfoKHR deconstructed!!\n");
}

void _VkPresentInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPresentInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPresentInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("waitSemaphoreCount").ToLocalChecked(), GetwaitSemaphoreCount, SetwaitSemaphoreCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pWaitSemaphores").ToLocalChecked(), GetpWaitSemaphores, SetpWaitSemaphores, ctor);
  SetPrototypeAccessor(proto, Nan::New("swapchainCount").ToLocalChecked(), GetswapchainCount, SetswapchainCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSwapchains").ToLocalChecked(), GetpSwapchains, SetpSwapchains, ctor);
  SetPrototypeAccessor(proto, Nan::New("pImageIndices").ToLocalChecked(), GetpImageIndices, SetpImageIndices, ctor);
  SetPrototypeAccessor(proto, Nan::New("pResults").ToLocalChecked(), GetpResults, SetpResults, ctor);
  Nan::Set(target, Nan::New("VkPresentInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPresentInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkPresentInfoKHR* self = new _VkPresentInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      if (obj->Has(self->sAccess3)) info.This()->Set(self->sAccess3, obj->Get(self->sAccess3));
      if (obj->Has(self->sAccess4)) info.This()->Set(self->sAccess4, obj->Get(self->sAccess4));
      if (obj->Has(self->sAccess5)) info.This()->Set(self->sAccess5, obj->Get(self->sAccess5));
      if (obj->Has(self->sAccess6)) info.This()->Set(self->sAccess6, obj->Get(self->sAccess6));
      if (obj->Has(self->sAccess7)) info.This()->Set(self->sAccess7, obj->Get(self->sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPresentInfoKHR constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkPresentInfoKHR::flush) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
  info.This()->Set(self->sAccess3, info.This()->Get(self->sAccess3));
  info.This()->Set(self->sAccess5, info.This()->Get(self->sAccess5));
}

// sType
NAN_GETTER(_VkPresentInfoKHR::GetsType) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPresentInfoKHR::SetsType) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPresentInfoKHR.sType'");
  }
}// pNext
NAN_GETTER(_VkPresentInfoKHR::GetpNext) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
}NAN_SETTER(_VkPresentInfoKHR::SetpNext) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
}// waitSemaphoreCount
NAN_GETTER(_VkPresentInfoKHR::GetwaitSemaphoreCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.waitSemaphoreCount));
}NAN_SETTER(_VkPresentInfoKHR::SetwaitSemaphoreCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.waitSemaphoreCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPresentInfoKHR.waitSemaphoreCount'");
  }
}// pWaitSemaphores
NAN_GETTER(_VkPresentInfoKHR::GetpWaitSemaphores) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pWaitSemaphores.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pWaitSemaphores);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpWaitSemaphores) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pWaitSemaphores.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pWaitSemaphores.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkSemaphore]' for 'VkPresentInfoKHR.pWaitSemaphores'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pWaitSemaphores = copyArrayOfV8Objects<VkSemaphore, _VkSemaphore>(value);
  } else if (value->IsNull()) {
    self->instance.pWaitSemaphores = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkSemaphore]' for 'VkPresentInfoKHR.pWaitSemaphores'");
  }
}// swapchainCount
NAN_GETTER(_VkPresentInfoKHR::GetswapchainCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.swapchainCount));
}NAN_SETTER(_VkPresentInfoKHR::SetswapchainCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.swapchainCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPresentInfoKHR.swapchainCount'");
  }
}// pSwapchains
NAN_GETTER(_VkPresentInfoKHR::GetpSwapchains) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pSwapchains.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSwapchains);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpSwapchains) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSwapchains.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSwapchains.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkSwapchainKHR]' for 'VkPresentInfoKHR.pSwapchains'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pSwapchains = copyArrayOfV8Objects<VkSwapchainKHR, _VkSwapchainKHR>(value);
  } else if (value->IsNull()) {
    self->instance.pSwapchains = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkSwapchainKHR]' for 'VkPresentInfoKHR.pSwapchains'");
  }
}// pImageIndices
NAN_GETTER(_VkPresentInfoKHR::GetpImageIndices) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pImageIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pImageIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpImageIndices) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pImageIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        return Nan::ThrowTypeError("Expected 'Uint32Array' for 'VkPresentInfoKHR.pImageIndices'");
      }
    } else if (value->IsNull()) {
      self->pImageIndices.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Uint32Array' for 'VkPresentInfoKHR.pImageIndices'");
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pImageIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pImageIndices = nullptr;
  }
}// pResults
NAN_GETTER(_VkPresentInfoKHR::GetpResults) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pResults.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pResults);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpResults) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsInt32Array()) {
        self->pResults.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        return Nan::ThrowTypeError("Expected 'Int32Array' for 'VkPresentInfoKHR.pResults'");
      }
    } else if (value->IsNull()) {
      self->pResults.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Int32Array' for 'VkPresentInfoKHR.pResults'");
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pResults = reinterpret_cast<VkResult *>(getTypedArrayData<int32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr));
  } else {
    self->instance.pResults = nullptr;
  }
}