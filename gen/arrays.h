#ifndef LLVMC_GEN_ARRAYS_H
#define LLVMC_GEN_ARRAYS_H

const llvm::StructType* LLVM_DtoArrayType(Type* t);

const llvm::ArrayType* LLVM_DtoStaticArrayType(Type* t);

llvm::Value* LLVM_DtoNullArray(llvm::Value* v);

llvm::Value* LLVM_DtoArrayAssign(llvm::Value* l, llvm::Value* r);

void LLVM_DtoSetArray(llvm::Value* arr, llvm::Value* dim, llvm::Value* ptr);

llvm::Constant* LLVM_DtoArrayInitializer(ArrayInitializer* si);

void LLVM_DtoArrayCopy(elem* dst, elem* src);

void LLVM_DtoArrayInit(llvm::Value* l, llvm::Value* r);

llvm::Constant* LLVM_DtoConstantSlice(llvm::Constant* dim, llvm::Constant* ptr);

#endif // LLVMC_GEN_ARRAYS_H