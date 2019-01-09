/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorPoolInlineUniformBlockCreateInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorPoolInlineUniformBlockCreateInfoEXT::constructor;

_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::_VkDescriptorPoolInlineUniformBlockCreateInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT;
  
}

_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::~_VkDescriptorPoolInlineUniformBlockCreateInfoEXT() {
  //printf("VkDescriptorPoolInlineUniformBlockCreateInfoEXT deconstructed!!\n");
  
  
  
}

void _VkDescriptorPoolInlineUniformBlockCreateInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorPoolInlineUniformBlockCreateInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxInlineUniformBlockBindings").ToLocalChecked(), GetmaxInlineUniformBlockBindings, SetmaxInlineUniformBlockBindings, ctor);
  Nan::Set(target, Nan::New("VkDescriptorPoolInlineUniformBlockCreateInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDescriptorPoolInlineUniformBlockCreateInfoEXT::flush() {
  _VkDescriptorPoolInlineUniformBlockCreateInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorPoolInlineUniformBlockCreateInfoEXT* self = new _VkDescriptorPoolInlineUniformBlockCreateInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("maxInlineUniformBlockBindings").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorPoolInlineUniformBlockCreateInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::GetsType) {
  _VkDescriptorPoolInlineUniformBlockCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::SetsType) {
  _VkDescriptorPoolInlineUniformBlockCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorPoolInlineUniformBlockCreateInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxInlineUniformBlockBindings
NAN_GETTER(_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::GetmaxInlineUniformBlockBindings) {
  _VkDescriptorPoolInlineUniformBlockCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxInlineUniformBlockBindings));
}NAN_SETTER(_VkDescriptorPoolInlineUniformBlockCreateInfoEXT::SetmaxInlineUniformBlockBindings) {
  _VkDescriptorPoolInlineUniformBlockCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.maxInlineUniformBlockBindings = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorPoolInlineUniformBlockCreateInfoEXT.maxInlineUniformBlockBindings' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}