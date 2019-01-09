/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkRenderPassBeginInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkRenderPassBeginInfo::constructor;

_VkRenderPassBeginInfo::_VkRenderPassBeginInfo() {
  instance.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
  vpClearValues = new std::vector<VkClearValue>;
  
}

_VkRenderPassBeginInfo::~_VkRenderPassBeginInfo() {
  //printf("VkRenderPassBeginInfo deconstructed!!\n");
  
  
  
  
  
  
  vpClearValues->clear();
  delete vpClearValues;
  
  pClearValues.Reset();
  
}

void _VkRenderPassBeginInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRenderPassBeginInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRenderPassBeginInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderPass").ToLocalChecked(), GetrenderPass, SetrenderPass, ctor);
  SetPrototypeAccessor(proto, Nan::New("framebuffer").ToLocalChecked(), Getframebuffer, Setframebuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderArea").ToLocalChecked(), GetrenderArea, SetrenderArea, ctor);
  SetPrototypeAccessor(proto, Nan::New("clearValueCount").ToLocalChecked(), GetclearValueCount, SetclearValueCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pClearValues").ToLocalChecked(), GetpClearValues, SetpClearValues, ctor);
  Nan::Set(target, Nan::New("VkRenderPassBeginInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkRenderPassBeginInfo::flush() {
  _VkRenderPassBeginInfo *self = this;
  if (!(self->renderArea.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->renderArea);
    
    _VkRect2D* result = Nan::ObjectWrap::Unwrap<_VkRect2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.renderArea = result->instance;
  }if (!(self->pClearValues.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pClearValues);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.clearValueCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'clearValueCount' for 'VkRenderPassBeginInfo.pClearValues'");
      return false;
    }
    std::vector<VkClearValue>* data = self->vpClearValues;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkClearValue::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkClearValue]' for 'VkRenderPassBeginInfo.pClearValues' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkClearValue* result = Nan::ObjectWrap::Unwrap<_VkClearValue>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pClearValues = data->data();
  }
  return true;
}

NAN_METHOD(_VkRenderPassBeginInfo::New) {
  if (info.IsConstructCall()) {
    _VkRenderPassBeginInfo* self = new _VkRenderPassBeginInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("renderPass").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("framebuffer").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("renderArea").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("clearValueCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pClearValues").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRenderPassBeginInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkRenderPassBeginInfo::GetsType) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkRenderPassBeginInfo::SetsType) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassBeginInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// renderPass
NAN_GETTER(_VkRenderPassBeginInfo::GetrenderPass) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->renderPass.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderPass);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::SetrenderPass) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkRenderPass::constructor)->HasInstance(obj)) {
      self->renderPass.Reset<v8::Object>(value.As<v8::Object>());
      _VkRenderPass* inst = Nan::ObjectWrap::Unwrap<_VkRenderPass>(obj);
      ;
      self->instance.renderPass = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRenderPass]' for 'VkRenderPassBeginInfo.renderPass' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->renderPass.Reset();
    self->instance.renderPass = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRenderPass]' for 'VkRenderPassBeginInfo.renderPass' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// framebuffer
NAN_GETTER(_VkRenderPassBeginInfo::Getframebuffer) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->framebuffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->framebuffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::Setframebuffer) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkFramebuffer::constructor)->HasInstance(obj)) {
      self->framebuffer.Reset<v8::Object>(value.As<v8::Object>());
      _VkFramebuffer* inst = Nan::ObjectWrap::Unwrap<_VkFramebuffer>(obj);
      ;
      self->instance.framebuffer = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkFramebuffer]' for 'VkRenderPassBeginInfo.framebuffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->framebuffer.Reset();
    self->instance.framebuffer = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkFramebuffer]' for 'VkRenderPassBeginInfo.framebuffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// renderArea
NAN_GETTER(_VkRenderPassBeginInfo::GetrenderArea) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->renderArea.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderArea);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::SetrenderArea) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkRect2D::constructor)->HasInstance(obj)) {
      self->renderArea.Reset<v8::Object>(value.As<v8::Object>());
      _VkRect2D* inst = Nan::ObjectWrap::Unwrap<_VkRect2D>(obj);
      inst->flush();
      self->instance.renderArea = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkRenderPassBeginInfo.renderArea' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->renderArea.Reset();
    memset(&self->instance.renderArea, 0, sizeof(VkRect2D));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkRenderPassBeginInfo.renderArea' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// clearValueCount
NAN_GETTER(_VkRenderPassBeginInfo::GetclearValueCount) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.clearValueCount));
}NAN_SETTER(_VkRenderPassBeginInfo::SetclearValueCount) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.clearValueCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassBeginInfo.clearValueCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pClearValues
NAN_GETTER(_VkRenderPassBeginInfo::GetpClearValues) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->pClearValues.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pClearValues);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::SetpClearValues) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pClearValues.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pClearValues.Reset();
      self->instance.pClearValues = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkClearValue]' for 'VkRenderPassBeginInfo.pClearValues' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pClearValues = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkClearValue]' for 'VkRenderPassBeginInfo.pClearValues' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}