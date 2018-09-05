#include "utils.h"
#include "index.h"
#include "VkDeviceCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceCreateInfo::constructor;

_VkDeviceCreateInfo::_VkDeviceCreateInfo() {
  instance = (VkDeviceCreateInfo*) malloc(sizeof(VkDeviceCreateInfo));
  instance->pQueueCreateInfos = nullptr;
  instance->ppEnabledLayerNames = nullptr;
  instance->ppEnabledExtensionNames = nullptr;
  instance->pEnabledFeatures = nullptr;
}

_VkDeviceCreateInfo::~_VkDeviceCreateInfo() { }

void _VkDeviceCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceCreateInfo").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueCreateInfoCount").ToLocalChecked(), GetqueueCreateInfoCount, SetqueueCreateInfoCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueCreateInfos").ToLocalChecked(), GetpQueueCreateInfos, SetpQueueCreateInfos, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledLayerCount").ToLocalChecked(), GetenabledLayerCount, SetenabledLayerCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledLayerNames").ToLocalChecked(), GetppEnabledLayerNames, SetppEnabledLayerNames, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledExtensionCount").ToLocalChecked(), GetenabledExtensionCount, SetenabledExtensionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledExtensionNames").ToLocalChecked(), GetppEnabledExtensionNames, SetppEnabledExtensionNames, ctor);
  SetPrototypeAccessor(proto, Nan::New("pEnabledFeatures").ToLocalChecked(), GetpEnabledFeatures, SetpEnabledFeatures, ctor);
  
  Nan::Set(target, Nan::New("VkDeviceCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDeviceCreateInfo::New) {
  _VkDeviceCreateInfo* self = new _VkDeviceCreateInfo();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkDeviceCreateInfo::GetsType) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->sType));
}
NAN_SETTER(_VkDeviceCreateInfo::SetsType) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  self->instance->sType = static_cast<VkStructureType>(value->Uint32Value());
}// queueCreateInfoCount
NAN_GETTER(_VkDeviceCreateInfo::GetqueueCreateInfoCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->queueCreateInfoCount));
}
NAN_SETTER(_VkDeviceCreateInfo::SetqueueCreateInfoCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  self->instance->queueCreateInfoCount = static_cast<uint32_t>(value->NumberValue());
}// pQueueCreateInfos
NAN_GETTER(_VkDeviceCreateInfo::GetpQueueCreateInfos) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  if (instance->pQueueCreateInfos != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->pQueueCreateInfos));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkDeviceCreateInfo::SetpQueueCreateInfos) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  
    // js
    {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pQueueCreateInfos = obj;
    }
  
  // vulkan
  {
    instance->pQueueCreateInfos = createArrayOfV8Objects<VkDeviceQueueCreateInfo, _VkDeviceQueueCreateInfo>(value);
  }
}// enabledLayerCount
NAN_GETTER(_VkDeviceCreateInfo::GetenabledLayerCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->enabledLayerCount));
}
NAN_SETTER(_VkDeviceCreateInfo::SetenabledLayerCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  self->instance->enabledLayerCount = static_cast<uint32_t>(value->NumberValue());
}// ppEnabledLayerNames
NAN_GETTER(_VkDeviceCreateInfo::GetppEnabledLayerNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  if (instance->ppEnabledLayerNames != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->ppEnabledLayerNames));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkDeviceCreateInfo::SetppEnabledLayerNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  
    // js
    {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->ppEnabledLayerNames = obj;
    }
  
  // vulkan
  {
    instance->ppEnabledLayerNames = createArrayOfV8Strings(value);
  }
}// enabledExtensionCount
NAN_GETTER(_VkDeviceCreateInfo::GetenabledExtensionCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->enabledExtensionCount));
}
NAN_SETTER(_VkDeviceCreateInfo::SetenabledExtensionCount) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  self->instance->enabledExtensionCount = static_cast<uint32_t>(value->NumberValue());
}// ppEnabledExtensionNames
NAN_GETTER(_VkDeviceCreateInfo::GetppEnabledExtensionNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  if (instance->ppEnabledExtensionNames != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->ppEnabledExtensionNames));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkDeviceCreateInfo::SetppEnabledExtensionNames) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  
    // js
    {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->ppEnabledExtensionNames = obj;
    }
  
  // vulkan
  {
    instance->ppEnabledExtensionNames = createArrayOfV8Strings(value);
  }
}// pEnabledFeatures
NAN_GETTER(_VkDeviceCreateInfo::GetpEnabledFeatures) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  if (instance->pEnabledFeatures != nullptr) {
    info.GetReturnValue().Set(self->pEnabledFeatures->handle());
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkDeviceCreateInfo::SetpEnabledFeatures) {
  _VkDeviceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceCreateInfo>(info.This());
  VkDeviceCreateInfo *instance = self->instance;
  _VkPhysicalDeviceFeatures* obj = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures>(value->ToObject());
  self->pEnabledFeatures = obj;
  instance->pEnabledFeatures = obj->instance;
}