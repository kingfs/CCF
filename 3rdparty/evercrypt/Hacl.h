/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: /mnt/e/everest/verify/kremlin/krml -skip-compilation -minimal -tmpdir dist/ccf/ .output/prims.krml .output/FStar_Pervasives_Native.krml .output/FStar_Pervasives.krml .output/FStar_Mul.krml .output/FStar_Squash.krml .output/FStar_Classical.krml .output/FStar_StrongExcludedMiddle.krml .output/FStar_FunctionalExtensionality.krml .output/FStar_List_Tot_Base.krml .output/FStar_List_Tot_Properties.krml .output/FStar_List_Tot.krml .output/FStar_Seq_Base.krml .output/FStar_Seq_Properties.krml .output/FStar_Seq.krml .output/FStar_Math_Lib.krml .output/FStar_Math_Lemmas.krml .output/FStar_BitVector.krml .output/FStar_UInt.krml .output/FStar_UInt32.krml .output/FStar_Int.krml .output/FStar_Int16.krml .output/Opaque_s.krml .output/Collections_Seqs_s.krml .output/FStar_UInt8.krml .output/Words_s.krml .output/Words_Four_s.krml .output/Words_Two_s.krml .output/Words_Seq_s.krml .output/Types_s.krml .output/TypesNative_s.krml .output/Arch_TypesNative.krml .output/Prop_s.krml .output/Util_Meta.krml .output/FStar_Set.krml .output/FStar_Map.krml .output/X64_Machine_s.krml .output/X64_CPU_Features_s.krml .output/Map16.krml .output/X64_Vale_Xmms.krml .output/X64_Vale_Regs.krml .output/FStar_Float.krml .output/FStar_UInt64.krml .output/FStar_Exn.krml .output/FStar_Preorder.krml .output/FStar_Monotonic_Witnessed.krml .output/FStar_Ghost.krml .output/FStar_ErasedLogic.krml .output/FStar_PropositionalExtensionality.krml .output/FStar_PredicateExtensionality.krml .output/FStar_TSet.krml .output/FStar_Monotonic_Heap.krml .output/FStar_Heap.krml .output/FStar_ST.krml .output/FStar_All.krml .output/FStar_IO.krml .output/Words_Two.krml .output/Collections_Seqs.krml .output/Words_Seq.krml .output/Arch_Types.krml .output/AES_s.krml .output/Math_Poly2_Defs_s.krml .output/Math_Poly2_s.krml .output/Math_Poly2_Bits_s.krml .output/FStar_Monotonic_HyperHeap.krml .output/FStar_Monotonic_HyperStack.krml .output/FStar_HyperStack.krml .output/FStar_HyperStack_ST.krml .output/FStar_HyperStack_All.krml .output/FStar_Kremlin_Endianness.krml .output/FStar_Int64.krml .output/FStar_Int63.krml .output/FStar_Int32.krml .output/FStar_Int8.krml .output/FStar_UInt63.krml .output/FStar_UInt16.krml .output/FStar_Int_Cast.krml .output/FStar_UInt128.krml .output/Spec_Hash_Definitions.krml .output/Spec_Hash_Lemmas0.krml .output/Spec_Hash_PadFinish.krml .output/Spec_Loops.krml .output/FStar_List.krml .output/Spec_SHA2_Constants.krml .output/Spec_SHA2.krml .output/X64_CryptoInstructions_s.krml .output/X64_Bytes_Semantics_s.krml .output/FStar_Char.krml .output/FStar_BaseTypes.krml .output/X64_Taint_Semantics_s.krml .output/X64_Bytes_Semantics.krml .output/FStar_Universe.krml .output/FStar_GSet.krml .output/FStar_ModifiesGen.krml .output/FStar_Range.krml .output/FStar_Reflection_Types.krml .output/FStar_Tactics_Types.krml .output/FStar_Tactics_Result.krml .output/FStar_Tactics_Effect.krml .output/FStar_Tactics_Util.krml .output/FStar_Reflection_Data.krml .output/FStar_Reflection_Const.krml .output/FStar_String.krml .output/FStar_Order.krml .output/FStar_Reflection_Basic.krml .output/FStar_Reflection_Derived.krml .output/FStar_Tactics_Builtins.krml .output/FStar_Reflection_Formula.krml .output/FStar_Reflection_Derived_Lemmas.krml .output/FStar_Reflection.krml .output/FStar_Tactics_Derived.krml .output/FStar_Tactics_Logic.krml .output/FStar_Tactics.krml .output/FStar_BigOps.krml .output/LowStar_Monotonic_Buffer.krml .output/LowStar_BufferView.krml .output/Views.krml .output/LowStar_Buffer.krml .output/LowStar_Modifies.krml .output/LowStar_ModifiesPat.krml .output/Interop.krml .output/X64_Memory.krml .output/BufferViewHelpers.krml .output/X64_BufferViewStore.krml .output/X64_Memory_Sems.krml .output/X64_Vale_State.krml .output/X64_Vale_StateLemmas.krml .output/X64_Vale_Lemmas.krml .output/X64_Print_s.krml .output/X64_Vale_Decls.krml .output/X64_Vale_QuickCode.krml .output/X64_Vale_QuickCodes.krml .output/X64_Taint_Semantics.krml .output/X64_Vale_InsLemmas.krml .output/X64_Vale_InsBasic.krml .output/X64_Cpuid.krml .output/X64_Cpuidstdcall.krml .output/Vale_check_aesni_stdcall.krml .output/Spec_SHA1.krml .output/Spec_MD5.krml .output/Spec_Hash.krml .output/Spec_Hash_Incremental.krml .output/Spec_Hash_Lemmas.krml .output/LowStar_BufferOps.krml .output/C_Loops.krml .output/C_Endianness.krml .output/Hacl_Hash_Lemmas.krml .output/Hacl_Hash_Definitions.krml .output/FStar_Int_Cast_Full.krml .output/Hacl_Hash_PadFinish.krml .output/Hacl_Hash_MD.krml .output/X64_Vale_InsMem.krml .output/X64_Vale_InsVector.krml .output/X64_Stack.krml .output/Workarounds.krml .output/SHA_helpers.krml .output/X64_Vale_InsSha.krml .output/X64_SHA.krml .output/Vale_sha_update_bytes_stdcall.krml .output/Interop_assumptions.krml .output/Sha_update_bytes_stdcall.krml .output/LowStar_ImmutableBuffer.krml .output/Hacl_Hash_Core_SHA2_Constants.krml .output/LowStar_Modifies_Linear.krml .output/Hacl_Hash_Core_SHA2.krml .output/Hacl_Hash_SHA2.krml .output/Hacl_Hash_Core_SHA1.krml .output/Hacl_Hash_SHA1.krml .output/Hacl_Hash_Core_MD5.krml .output/Hacl_Hash_MD5.krml .output/C.krml .output/C_String.krml .output/C_Failure.krml .output/FStar_Int128.krml .output/FStar_Int31.krml .output/FStar_UInt31.krml .output/FStar_Integers.krml .output/EverCrypt_StaticConfig.krml .output/Vale_check_sha_stdcall.krml .output/Check_sha_stdcall.krml .output/Check_aesni_stdcall.krml .output/EverCrypt_AutoConfig2.krml .output/EverCrypt_Helpers.krml .output/EverCrypt_Hash.krml .output/FStar_Dyn.krml .output/EverCrypt_Vale.krml .output/EverCrypt_Specs.krml .output/EverCrypt_OpenSSL.krml .output/EverCrypt_Hacl.krml .output/EverCrypt_BCrypt.krml .output/EverCrypt.krml .output/EverCrypt_HMAC.krml .output/EverCrypt_HKDF.krml .output/EverCrypt_Hash_Incremental.krml .output/FStar_Bytes.krml .output/EverCrypt_Bytes.krml -warn-error -6@9 -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" evercrypt_vale_stubs.c -bundle X64.*,Arch.*,Words.*,Vale.*,Collections.*,Collections,SHA_helpers -bundle Prop_s,Types_s,Words_s,Views,AES_s,Workarounds,Math.*,Interop,TypesNative_s -bundle EverCrypt.Spec.* -bundle LowStar.* -bundle Prims,FStar.*,C,C.*[rename=EverCrypt_Kremlib] -bundle Hacl.*,Spec.*[rename=Hacl] -library Hacl.* -bundle Check_aesni_stdcall,Check_sha_stdcall,Sha_update_bytes_stdcall[rename=Vale] -bundle EverCrypt.BCrypt -bundle EverCrypt.OpenSSL -library EverCrypt.Bytes,EverCrypt.AutoConfig,EverCrypt.OpenSSL,EverCrypt.BCrypt -no-prefix EverCrypt.Vale -no-prefix Sha_update_bytes_stdcall -no-prefix Check_sha_stdcall -no-prefix Check_aesni_stdcall -library Sha_update_bytes_stdcall -library Check_sha_stdcall -library Check_aesni_stdcall -fparentheses -fno-shadow -fcurly-braces -o libevercrypt.a -bundle EverCrypt.Hash= -bundle EverCrypt.AutoConfig2= -bundle EverCrypt= -bundle EverCrypt.Hacl -bundle EverCrypt.OpenSSL -bundle EverCrypt.BCrypt -bundle \*[rename=EverCrypt_Misc]
 * F* version: ebf0a2cc
 * KreMLin version: e9a42a80
 */


#ifndef __Hacl_H
#define __Hacl_H


#include "kremlib.h"
#include "kremlin/internal/compat.h"

#define Spec_Hash_Definitions_SHA2_224 0
#define Spec_Hash_Definitions_SHA2_256 1
#define Spec_Hash_Definitions_SHA2_384 2
#define Spec_Hash_Definitions_SHA2_512 3
#define Spec_Hash_Definitions_SHA1 4
#define Spec_Hash_Definitions_MD5 5

typedef uint8_t Spec_Hash_Definitions_hash_alg;

extern uint32_t *Hacl_Hash_Core_SHA2_Constants_k224_256;

extern void Hacl_Hash_Core_SHA2_init_224(uint32_t *x0);

extern void Hacl_Hash_Core_SHA2_init_256(uint32_t *x0);

extern void Hacl_Hash_Core_SHA2_init_384(uint64_t *x0);

extern void Hacl_Hash_Core_SHA2_init_512(uint64_t *x0);

extern void Hacl_Hash_Core_SHA2_update_224(uint32_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA2_update_384(uint64_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA2_update_512(uint64_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA2_pad_256(uint64_t x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA2_finish_224(uint32_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA2_finish_256(uint32_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA2_finish_384(uint64_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA2_finish_512(uint64_t *x0, uint8_t *x1);

extern void Hacl_Hash_SHA2_update_multi_224(uint32_t *x0, uint8_t *x1, uint32_t x2);

extern void Hacl_Hash_SHA2_update_multi_256(uint32_t *x0, uint8_t *x1, uint32_t x2);

extern void Hacl_Hash_SHA2_update_multi_384(uint64_t *x0, uint8_t *x1, uint32_t x2);

extern void Hacl_Hash_SHA2_update_multi_512(uint64_t *x0, uint8_t *x1, uint32_t x2);

extern void
Hacl_Hash_SHA2_update_last_224(uint32_t *x0, uint64_t x1, uint8_t *x2, uint32_t x3);

extern void
Hacl_Hash_SHA2_update_last_256(uint32_t *x0, uint64_t x1, uint8_t *x2, uint32_t x3);

extern void
Hacl_Hash_SHA2_update_last_384(
  uint64_t *x0,
  FStar_UInt128_uint128 x1,
  uint8_t *x2,
  uint32_t x3
);

extern void
Hacl_Hash_SHA2_update_last_512(
  uint64_t *x0,
  FStar_UInt128_uint128 x1,
  uint8_t *x2,
  uint32_t x3
);

extern void Hacl_Hash_SHA2_hash_224(uint8_t *x0, uint32_t x1, uint8_t *x2);

extern void Hacl_Hash_SHA2_hash_384(uint8_t *x0, uint32_t x1, uint8_t *x2);

extern void Hacl_Hash_SHA2_hash_512(uint8_t *x0, uint32_t x1, uint8_t *x2);

extern void Hacl_Hash_Core_SHA1_init(uint32_t *x0);

extern void Hacl_Hash_Core_SHA1_update(uint32_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_SHA1_finish(uint32_t *x0, uint8_t *x1);

extern void Hacl_Hash_SHA1_update_multi(uint32_t *x0, uint8_t *x1, uint32_t x2);

extern void Hacl_Hash_SHA1_update_last(uint32_t *x0, uint64_t x1, uint8_t *x2, uint32_t x3);

extern void Hacl_Hash_SHA1_hash(uint8_t *x0, uint32_t x1, uint8_t *x2);

extern void Hacl_Hash_Core_MD5_init(uint32_t *x0);

extern void Hacl_Hash_Core_MD5_update(uint32_t *x0, uint8_t *x1);

extern void Hacl_Hash_Core_MD5_finish(uint32_t *x0, uint8_t *x1);

extern void Hacl_Hash_MD5_update_multi(uint32_t *x0, uint8_t *x1, uint32_t x2);

extern void Hacl_Hash_MD5_update_last(uint32_t *x0, uint64_t x1, uint8_t *x2, uint32_t x3);

extern void Hacl_Hash_MD5_hash(uint8_t *x0, uint32_t x1, uint8_t *x2);

#define __Hacl_H_DEFINED
#endif
