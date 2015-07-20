#include <nan.h>

using namespace v8;

NAN_METHOD(GetNewSpace) {
    int len = strlen(*String::Utf8Value(args[0].As<String>()));
    NanReturnValue(NanNew<Number>(len));
}

void Init(Handle<Object> exports) {
    exports->Set(NanNew("getNewSpace"),
                 NanNew<FunctionTemplate>(GetNewSpace)->GetFunction());
}

NODE_MODULE(memoryallocation, Init)
