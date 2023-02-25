/* Generated code for Python module 'sqlalchemy.engine.interfaces'
 * created by Nuitka version 0.9.6
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_sqlalchemy$engine$interfaces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$engine$interfaces;
PyDictObject *moduledict_sqlalchemy$engine$interfaces;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[300];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[300];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("sqlalchemy.engine.interfaces"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 300; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_sqlalchemy$engine$interfaces(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 300; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7349435483dd5edb11380aa9c9cd973b;
static PyCodeObject *codeobj_cf0780091c8a6e2f0dcc71c49786a46d;
static PyCodeObject *codeobj_766e3a015dc2e13c41baf55510ded71c;
static PyCodeObject *codeobj_db384106ebc3dbd66293799519afe997;
static PyCodeObject *codeobj_bbdf31b6f0fabe3cd22402a9ef41c11c;
static PyCodeObject *codeobj_e93c13f045868eb7055ae21cd49d4b80;
static PyCodeObject *codeobj_1a68cbb23dcbadbf451dcb8d182f991c;
static PyCodeObject *codeobj_9b28cda6254fceff946f5707c7bd06f3;
static PyCodeObject *codeobj_defbafd60ccf706b20e612f467b024c0;
static PyCodeObject *codeobj_f4ab7e7c3bab0047e7a9732229101df1;
static PyCodeObject *codeobj_1f30e0b7ad0ec12f6d0b464e60417b2c;
static PyCodeObject *codeobj_d7803626e1f58558fd39e05433ccc77c;
static PyCodeObject *codeobj_d9dd83326ed49cc9ee24fd3edb27a527;
static PyCodeObject *codeobj_dfebded8798b18a8af672e6372711114;
static PyCodeObject *codeobj_cf8081e52b03ca53dad94ec2a47197b7;
static PyCodeObject *codeobj_2c9ff65b8bff5e00392e51a6e949ec0d;
static PyCodeObject *codeobj_6920a23eac3dad1c477eeb1c83e200f2;
static PyCodeObject *codeobj_1cee1e984b50d7e95a617045484c677c;
static PyCodeObject *codeobj_7c904160abdf265854cb86f90374fd41;
static PyCodeObject *codeobj_14e3da2da9fb88b59a5ce0e38d5fe97e;
static PyCodeObject *codeobj_e02c7e61f14d91e75489da5b273e875d;
static PyCodeObject *codeobj_453f43e91d1427113cc66b12a7c37d32;
static PyCodeObject *codeobj_ee2c0ba538729a7673c18390609e871a;
static PyCodeObject *codeobj_05f9d8e20785be9b62ee176bc8591bef;
static PyCodeObject *codeobj_4cb346fa6c2b283ba4e5787ea6fc3ca1;
static PyCodeObject *codeobj_f7496f0af96ce76debd7e754845ed556;
static PyCodeObject *codeobj_2d6c1957fa438e86787ba57425f1e3d0;
static PyCodeObject *codeobj_12beec795cbd9f71eb50b77e5d1e6aa9;
static PyCodeObject *codeobj_1aad30d44084880c09b6d74312d9d6fa;
static PyCodeObject *codeobj_6f53d5215b4a47d5b3e6c4366efe9ed1;
static PyCodeObject *codeobj_b6545915db371b714dbd89effedf56ee;
static PyCodeObject *codeobj_60d4ebfa9b9098d8607cb9c49217f6b3;
static PyCodeObject *codeobj_2d18040194767d7fde1cbee95372a647;
static PyCodeObject *codeobj_b95a58995ca53225440ca88c51d03d17;
static PyCodeObject *codeobj_44590c6b842866984075ac848b9da078;
static PyCodeObject *codeobj_ae3a07fb3e6f1c756dbec939e57d074b;
static PyCodeObject *codeobj_76fc42388e4945248e4c8327f6f80f5e;
static PyCodeObject *codeobj_8d799d6fcdc87ef14ef1d7d413bbb7a8;
static PyCodeObject *codeobj_f237ee870068eadc1393131f71b2d083;
static PyCodeObject *codeobj_5277d5225f70262fb2913837d166e2c1;
static PyCodeObject *codeobj_02576aef3bc92055e1dfbaba74fb903a;
static PyCodeObject *codeobj_bb591771b90f7e0071ea4d4aa02a49f9;
static PyCodeObject *codeobj_75de8ce34b0c3ed0a8ae1362022d1bed;
static PyCodeObject *codeobj_10b68fe12fcba381b2f2acbb72ceaf41;
static PyCodeObject *codeobj_d3fe94e3cdb6df3fab9e6547495fd36d;
static PyCodeObject *codeobj_ad151dcac90b060ea83dc990fe17dc8e;
static PyCodeObject *codeobj_76b2936a6607921e086ca175a0f72828;
static PyCodeObject *codeobj_d8e99e0fc951bc08023ef5d124e3776c;
static PyCodeObject *codeobj_ed647f442edad22c7e8cfa17b5705156;
static PyCodeObject *codeobj_63877fe67cc8873b04f8d8ddd06b5c01;
static PyCodeObject *codeobj_0e2a25df6b56e43df433b7cf3c824767;
static PyCodeObject *codeobj_70095111510e1376981ed8b6b8f09499;
static PyCodeObject *codeobj_c80d2a02ea5d198ed941cb406470c7b4;
static PyCodeObject *codeobj_11de30a99489c6a55ef2a92fc7089c5b;
static PyCodeObject *codeobj_fc2d74422e72e3320829896b2d02605c;
static PyCodeObject *codeobj_899fa5f25b1b26d1fe7366c76949c4c5;
static PyCodeObject *codeobj_08d53bc1a73f9bc34bbd5383e297076a;
static PyCodeObject *codeobj_c8598e07d183a2a4e174c3ba7acb22ef;
static PyCodeObject *codeobj_1e858af01461f13ff0f8de725c8412c0;
static PyCodeObject *codeobj_0b337e6ff21a96b079a0f4a0d3d19609;
static PyCodeObject *codeobj_7360b01e5178c4ea5d35f977cc80a6ca;
static PyCodeObject *codeobj_7f8ba8e3a6af9b4cf13178b0cefd3202;
static PyCodeObject *codeobj_b0f152e7ca65196f03a5500762eec401;
static PyCodeObject *codeobj_273b8baa34d34fb37604e32b8d45ea4c;
static PyCodeObject *codeobj_967f6aead762243c7708a3c3e27aa0b8;
static PyCodeObject *codeobj_5c7a4bf07ebc0951ddeb8d53b5e3b4a4;
static PyCodeObject *codeobj_d5e859ed4b5ff52a1b10150bff61b53a;
static PyCodeObject *codeobj_1ff1f9fac06e3dbcb9af98c5540bbb34;
static PyCodeObject *codeobj_a4275d0de05945d509dabca581c43302;
static PyCodeObject *codeobj_de9c60f9369435211c7d1d7f4a2857da;
static PyCodeObject *codeobj_4eb034e42bd33f5eb3d51ffe7be0b865;
static PyCodeObject *codeobj_5c42394baf703f2b190c2840cf4ecc70;
static PyCodeObject *codeobj_4de7bf87ed0b7382c632353a4d296b61;
static PyCodeObject *codeobj_51042616f5e1d12e09b55837ba91df06;
static PyCodeObject *codeobj_eeb41606c5eec5a333f1878afb7ae30f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[262]); CHECK_OBJECT(module_filename_obj);
    codeobj_7349435483dd5edb11380aa9c9cd973b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[263], NULL, NULL, 0, 0, 0);
    codeobj_cf0780091c8a6e2f0dcc71c49786a46d = MAKE_CODEOBJECT(module_filename_obj, 1232, CO_NOFREE, mod_consts[227], mod_consts[264], NULL, 0, 0, 0);
    codeobj_766e3a015dc2e13c41baf55510ded71c = MAKE_CODEOBJECT(module_filename_obj, 941, CO_NOFREE, mod_consts[196], mod_consts[264], NULL, 0, 0, 0);
    codeobj_db384106ebc3dbd66293799519afe997 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[79], mod_consts[264], NULL, 0, 0, 0);
    codeobj_bbdf31b6f0fabe3cd22402a9ef41c11c = MAKE_CODEOBJECT(module_filename_obj, 1333, CO_NOFREE, mod_consts[251], mod_consts[264], NULL, 0, 0, 0);
    codeobj_e93c13f045868eb7055ae21cd49d4b80 = MAKE_CODEOBJECT(module_filename_obj, 1065, CO_NOFREE, mod_consts[208], mod_consts[264], NULL, 0, 0, 0);
    codeobj_1a68cbb23dcbadbf451dcb8d182f991c = MAKE_CODEOBJECT(module_filename_obj, 1028, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[265], NULL, 3, 0, 0);
    codeobj_9b28cda6254fceff946f5707c7bd06f3 = MAKE_CODEOBJECT(module_filename_obj, 1285, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[266], NULL, 1, 0, 0);
    codeobj_defbafd60ccf706b20e612f467b024c0 = MAKE_CODEOBJECT(module_filename_obj, 1329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[249], mod_consts[267], NULL, 4, 0, 0);
    codeobj_f4ab7e7c3bab0047e7a9732229101df1 = MAKE_CODEOBJECT(module_filename_obj, 503, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[268], NULL, 2, 0, 0);
    codeobj_1f30e0b7ad0ec12f6d0b464e60417b2c = MAKE_CODEOBJECT(module_filename_obj, 492, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[268], NULL, 2, 0, 0);
    codeobj_d7803626e1f58558fd39e05433ccc77c = MAKE_CODEOBJECT(module_filename_obj, 1326, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[246], mod_consts[269], NULL, 3, 0, 0);
    codeobj_d9dd83326ed49cc9ee24fd3edb27a527 = MAKE_CODEOBJECT(module_filename_obj, 709, CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[176], mod_consts[270], NULL, 1, 0, 0);
    codeobj_dfebded8798b18a8af672e6372711114 = MAKE_CODEOBJECT(module_filename_obj, 1243, CO_VARKEYWORDS | CO_NOFREE, mod_consts[176], mod_consts[271], NULL, 1, 0, 0);
    codeobj_cf8081e52b03ca53dad94ec2a47197b7 = MAKE_CODEOBJECT(module_filename_obj, 1271, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[233], mod_consts[272], NULL, 1, 0, 0);
    codeobj_2c9ff65b8bff5e00392e51a6e949ec0d = MAKE_CODEOBJECT(module_filename_obj, 1296, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[237], mod_consts[273], NULL, 2, 0, 0);
    codeobj_6920a23eac3dad1c477eeb1c83e200f2 = MAKE_CODEOBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[274], NULL, 2, 0, 0);
    codeobj_1cee1e984b50d7e95a617045484c677c = MAKE_CODEOBJECT(module_filename_obj, 1157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[211], mod_consts[266], NULL, 1, 0, 0);
    codeobj_7c904160abdf265854cb86f90374fd41 = MAKE_CODEOBJECT(module_filename_obj, 574, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[266], NULL, 1, 0, 0);
    codeobj_14e3da2da9fb88b59a5ce0e38d5fe97e = MAKE_CODEOBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[275], NULL, 2, 0, 0);
    codeobj_e02c7e61f14d91e75489da5b273e875d = MAKE_CODEOBJECT(module_filename_obj, 515, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[276], NULL, 2, 0, 0);
    codeobj_453f43e91d1427113cc66b12a7c37d32 = MAKE_CODEOBJECT(module_filename_obj, 613, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[277], NULL, 3, 0, 0);
    codeobj_ee2c0ba538729a7673c18390609e871a = MAKE_CODEOBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[276], NULL, 2, 0, 0);
    codeobj_05f9d8e20785be9b62ee176bc8591bef = MAKE_CODEOBJECT(module_filename_obj, 550, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[276], NULL, 2, 0, 0);
    codeobj_4cb346fa6c2b283ba4e5787ea6fc3ca1 = MAKE_CODEOBJECT(module_filename_obj, 648, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[278], NULL, 5, 0, 0);
    codeobj_f7496f0af96ce76debd7e754845ed556 = MAKE_CODEOBJECT(module_filename_obj, 682, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], mod_consts[279], NULL, 5, 0, 0);
    codeobj_2d6c1957fa438e86787ba57425f1e3d0 = MAKE_CODEOBJECT(module_filename_obj, 690, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[171], mod_consts[279], NULL, 5, 0, 0);
    codeobj_12beec795cbd9f71eb50b77e5d1e6aa9 = MAKE_CODEOBJECT(module_filename_obj, 674, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[279], NULL, 5, 0, 0);
    codeobj_1aad30d44084880c09b6d74312d9d6fa = MAKE_CODEOBJECT(module_filename_obj, 623, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[277], NULL, 3, 0, 0);
    codeobj_6f53d5215b4a47d5b3e6c4366efe9ed1 = MAKE_CODEOBJECT(module_filename_obj, 664, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[268], NULL, 2, 0, 0);
    codeobj_b6545915db371b714dbd89effedf56ee = MAKE_CODEOBJECT(module_filename_obj, 604, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], mod_consts[280], NULL, 3, 0, 0);
    codeobj_60d4ebfa9b9098d8607cb9c49217f6b3 = MAKE_CODEOBJECT(module_filename_obj, 539, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[276], NULL, 2, 0, 0);
    codeobj_2d18040194767d7fde1cbee95372a647 = MAKE_CODEOBJECT(module_filename_obj, 594, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[280], NULL, 3, 0, 0);
    codeobj_b95a58995ca53225440ca88c51d03d17 = MAKE_CODEOBJECT(module_filename_obj, 633, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[278], NULL, 5, 0, 0);
    codeobj_44590c6b842866984075ac848b9da078 = MAKE_CODEOBJECT(module_filename_obj, 584, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[280], NULL, 3, 0, 0);
    codeobj_ae3a07fb3e6f1c756dbec939e57d074b = MAKE_CODEOBJECT(module_filename_obj, 1309, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[240], mod_consts[273], NULL, 2, 0, 0);
    codeobj_76fc42388e4945248e4c8327f6f80f5e = MAKE_CODEOBJECT(module_filename_obj, 921, CO_NOFREE, mod_consts[193], mod_consts[281], NULL, 2, 0, 0);
    codeobj_8d799d6fcdc87ef14ef1d7d413bbb7a8 = MAKE_CODEOBJECT(module_filename_obj, 1055, CO_NOFREE, mod_consts[193], mod_consts[282], NULL, 2, 0, 0);
    codeobj_f237ee870068eadc1393131f71b2d083 = MAKE_CODEOBJECT(module_filename_obj, 1314, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[242], mod_consts[283], NULL, 2, 0, 0);
    codeobj_5277d5225f70262fb2913837d166e2c1 = MAKE_CODEOBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[124], mod_consts[284], NULL, 4, 0, 0);
    codeobj_02576aef3bc92055e1dfbaba74fb903a = MAKE_CODEOBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[100], mod_consts[284], NULL, 4, 0, 0);
    codeobj_bb591771b90f7e0071ea4d4aa02a49f9 = MAKE_CODEOBJECT(module_filename_obj, 876, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[187], mod_consts[285], NULL, 2, 0, 0);
    codeobj_75de8ce34b0c3ed0a8ae1362022d1bed = MAKE_CODEOBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[108], mod_consts[284], NULL, 4, 0, 0);
    codeobj_10b68fe12fcba381b2f2acbb72ceaf41 = MAKE_CODEOBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[120], mod_consts[284], NULL, 4, 0, 0);
    codeobj_d3fe94e3cdb6df3fab9e6547495fd36d = MAKE_CODEOBJECT(module_filename_obj, 842, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[185], mod_consts[286], NULL, 2, 0, 0);
    codeobj_ad151dcac90b060ea83dc990fe17dc8e = MAKE_CODEOBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[106], mod_consts[284], NULL, 4, 0, 0);
    codeobj_76b2936a6607921e086ca175a0f72828 = MAKE_CODEOBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[104], mod_consts[284], NULL, 4, 0, 0);
    codeobj_d8e99e0fc951bc08023ef5d124e3776c = MAKE_CODEOBJECT(module_filename_obj, 1221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[225], mod_consts[266], NULL, 1, 0, 0);
    codeobj_ed647f442edad22c7e8cfa17b5705156 = MAKE_CODEOBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[126], mod_consts[284], NULL, 4, 0, 0);
    codeobj_63877fe67cc8873b04f8d8ddd06b5c01 = MAKE_CODEOBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[110], mod_consts[287], NULL, 3, 0, 0);
    codeobj_0e2a25df6b56e43df433b7cf3c824767 = MAKE_CODEOBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[112], mod_consts[287], NULL, 3, 0, 0);
    codeobj_70095111510e1376981ed8b6b8f09499 = MAKE_CODEOBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[116], mod_consts[287], NULL, 3, 0, 0);
    codeobj_c80d2a02ea5d198ed941cb406470c7b4 = MAKE_CODEOBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[122], mod_consts[284], NULL, 4, 0, 0);
    codeobj_11de30a99489c6a55ef2a92fc7089c5b = MAKE_CODEOBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[118], mod_consts[288], NULL, 4, 0, 0);
    codeobj_fc2d74422e72e3320829896b2d02605c = MAKE_CODEOBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[114], mod_consts[287], NULL, 3, 0, 0);
    codeobj_899fa5f25b1b26d1fe7366c76949c4c5 = MAKE_CODEOBJECT(module_filename_obj, 1197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[219], mod_consts[289], NULL, 2, 0, 0);
    codeobj_08d53bc1a73f9bc34bbd5383e297076a = MAKE_CODEOBJECT(module_filename_obj, 1049, CO_NOFREE, mod_consts[201], mod_consts[290], NULL, 3, 0, 0);
    codeobj_c8598e07d183a2a4e174c3ba7acb22ef = MAKE_CODEOBJECT(module_filename_obj, 1052, CO_NOFREE, mod_consts[204], mod_consts[291], NULL, 3, 0, 0);
    codeobj_1e858af01461f13ff0f8de725c8412c0 = MAKE_CODEOBJECT(module_filename_obj, 481, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[292], NULL, 4, 0, 0);
    codeobj_0b337e6ff21a96b079a0f4a0d3d19609 = MAKE_CODEOBJECT(module_filename_obj, 469, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[293], NULL, 4, 0, 0);
    codeobj_7360b01e5178c4ea5d35f977cc80a6ca = MAKE_CODEOBJECT(module_filename_obj, 198, CO_NOFREE, mod_consts[95], mod_consts[268], NULL, 2, 0, 0);
    codeobj_7f8ba8e3a6af9b4cf13178b0cefd3202 = MAKE_CODEOBJECT(module_filename_obj, 701, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[173], mod_consts[294], NULL, 4, 0, 0);
    codeobj_b0f152e7ca65196f03a5500762eec401 = MAKE_CODEOBJECT(module_filename_obj, 1213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[223], mod_consts[266], NULL, 1, 0, 0);
    codeobj_273b8baa34d34fb37604e32b8d45ea4c = MAKE_CODEOBJECT(module_filename_obj, 892, CO_NOFREE, mod_consts[190], mod_consts[295], NULL, 1, 0, 0);
    codeobj_967f6aead762243c7708a3c3e27aa0b8 = MAKE_CODEOBJECT(module_filename_obj, 449, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[275], NULL, 2, 0, 0);
    codeobj_5c7a4bf07ebc0951ddeb8d53b5e3b4a4 = MAKE_CODEOBJECT(module_filename_obj, 742, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[179], mod_consts[266], NULL, 1, 0, 0);
    codeobj_d5e859ed4b5ff52a1b10150bff61b53a = MAKE_CODEOBJECT(module_filename_obj, 1178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[266], NULL, 1, 0, 0);
    codeobj_1ff1f9fac06e3dbcb9af98c5540bbb34 = MAKE_CODEOBJECT(module_filename_obj, 1168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[266], NULL, 1, 0, 0);
    codeobj_a4275d0de05945d509dabca581c43302 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[296], NULL, 6, 0, 0);
    codeobj_de9c60f9369435211c7d1d7f4a2857da = MAKE_CODEOBJECT(module_filename_obj, 788, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[286], NULL, 2, 0, 0);
    codeobj_4eb034e42bd33f5eb3d51ffe7be0b865 = MAKE_CODEOBJECT(module_filename_obj, 1188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[217], mod_consts[266], NULL, 1, 0, 0);
    codeobj_5c42394baf703f2b190c2840cf4ecc70 = MAKE_CODEOBJECT(module_filename_obj, 1319, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[244], mod_consts[283], NULL, 2, 0, 0);
    codeobj_4de7bf87ed0b7382c632353a4d296b61 = MAKE_CODEOBJECT(module_filename_obj, 815, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[297], NULL, 3, 0, 0);
    codeobj_51042616f5e1d12e09b55837ba91df06 = MAKE_CODEOBJECT(module_filename_obj, 1205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[221], mod_consts[298], NULL, 2, 0, 0);
    codeobj_eeb41606c5eec5a333f1878afb7ae30f = MAKE_CODEOBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[299], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__10_get_temp_table_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__11_get_view_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__12_get_temp_view_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__13_get_view_definition(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__14_get_indexes(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__15_get_unique_constraints(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__16_get_check_constraints(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__17_get_table_comment(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__18_normalize_name();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__19_denormalize_name();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__1_create_connect_args();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__20_has_table(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__21_has_sequence(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__24_do_begin();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__25_do_rollback();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__26_do_commit();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__27_do_close();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__28_create_xid();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__29_do_savepoint();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__30_do_rollback_to_savepoint();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__31_do_release_savepoint();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__32_do_begin_twophase();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__33_do_prepare_twophase();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__34_do_rollback_twophase(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__35_do_commit_twophase(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__36_do_recover_twophase();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__37_do_executemany(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__38_do_execute(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__39_do_execute_no_params(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__3_initialize();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__40_is_disconnect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__41_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__42_on_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__43_reset_isolation_level();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__44_set_isolation_level();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__45_get_isolation_level();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__46_get_dialect_cls();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__47_load_provisioning();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__48_engine_created();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__49___init__();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__4_reflecttable();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__50_handle_dialect_kwargs();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__51_handle_pool_kwargs();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__52_engine_created();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__53_create_cursor();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__54_pre_exec();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__55_post_exec();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__56_result();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__57_handle_dbapi_exception();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__58_should_autocommit_text();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__59_lastrow_has_defaults();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__5_get_columns(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__60_get_rowcount();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__61_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__62_contextual_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__63__contextual_connect();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__64_create();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__65_drop();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__66_execute();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__67_scalar();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__68__run_visitor();


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__69__execute_clauseelement(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__6_get_primary_keys(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__7_get_pk_constraint(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__8_get_foreign_keys(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__9_get_table_names(PyObject *defaults);


// The module function definitions.
static PyObject *impl_sqlalchemy$engine$interfaces$$$function__1_create_connect_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    struct Nuitka_FrameObject *frame_6920a23eac3dad1c477eeb1c83e200f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6920a23eac3dad1c477eeb1c83e200f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6920a23eac3dad1c477eeb1c83e200f2)) {
        Py_XDECREF(cache_frame_6920a23eac3dad1c477eeb1c83e200f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6920a23eac3dad1c477eeb1c83e200f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6920a23eac3dad1c477eeb1c83e200f2 = MAKE_FUNCTION_FRAME(codeobj_6920a23eac3dad1c477eeb1c83e200f2, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6920a23eac3dad1c477eeb1c83e200f2->m_type_description == NULL);
    frame_6920a23eac3dad1c477eeb1c83e200f2 = cache_frame_6920a23eac3dad1c477eeb1c83e200f2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6920a23eac3dad1c477eeb1c83e200f2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6920a23eac3dad1c477eeb1c83e200f2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_6920a23eac3dad1c477eeb1c83e200f2->m_frame.f_lineno = 181;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 181;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6920a23eac3dad1c477eeb1c83e200f2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6920a23eac3dad1c477eeb1c83e200f2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6920a23eac3dad1c477eeb1c83e200f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6920a23eac3dad1c477eeb1c83e200f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6920a23eac3dad1c477eeb1c83e200f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6920a23eac3dad1c477eeb1c83e200f2,
        type_description_1,
        par_self,
        par_url
    );


    // Release cached frame if used for exception.
    if (frame_6920a23eac3dad1c477eeb1c83e200f2 == cache_frame_6920a23eac3dad1c477eeb1c83e200f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6920a23eac3dad1c477eeb1c83e200f2);
        cache_frame_6920a23eac3dad1c477eeb1c83e200f2 = NULL;
    }

    assertFrameObject(frame_6920a23eac3dad1c477eeb1c83e200f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__2_type_descriptor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_typeobj = python_pars[1];
    struct Nuitka_FrameObject *frame_eeb41606c5eec5a333f1878afb7ae30f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eeb41606c5eec5a333f1878afb7ae30f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eeb41606c5eec5a333f1878afb7ae30f)) {
        Py_XDECREF(cache_frame_eeb41606c5eec5a333f1878afb7ae30f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eeb41606c5eec5a333f1878afb7ae30f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eeb41606c5eec5a333f1878afb7ae30f = MAKE_FUNCTION_FRAME(codeobj_eeb41606c5eec5a333f1878afb7ae30f, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_eeb41606c5eec5a333f1878afb7ae30f->m_type_description == NULL);
    frame_eeb41606c5eec5a333f1878afb7ae30f = cache_frame_eeb41606c5eec5a333f1878afb7ae30f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eeb41606c5eec5a333f1878afb7ae30f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eeb41606c5eec5a333f1878afb7ae30f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_eeb41606c5eec5a333f1878afb7ae30f->m_frame.f_lineno = 196;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 196;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeb41606c5eec5a333f1878afb7ae30f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeb41606c5eec5a333f1878afb7ae30f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eeb41606c5eec5a333f1878afb7ae30f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eeb41606c5eec5a333f1878afb7ae30f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eeb41606c5eec5a333f1878afb7ae30f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eeb41606c5eec5a333f1878afb7ae30f,
        type_description_1,
        par_cls,
        par_typeobj
    );


    // Release cached frame if used for exception.
    if (frame_eeb41606c5eec5a333f1878afb7ae30f == cache_frame_eeb41606c5eec5a333f1878afb7ae30f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_eeb41606c5eec5a333f1878afb7ae30f);
        cache_frame_eeb41606c5eec5a333f1878afb7ae30f = NULL;
    }

    assertFrameObject(frame_eeb41606c5eec5a333f1878afb7ae30f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_typeobj);
    Py_DECREF(par_typeobj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__4_reflecttable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table = python_pars[2];
    PyObject *par_include_columns = python_pars[3];
    PyObject *par_exclude_columns = python_pars[4];
    PyObject *par_resolve_fks = python_pars[5];
    struct Nuitka_FrameObject *frame_a4275d0de05945d509dabca581c43302;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a4275d0de05945d509dabca581c43302 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4275d0de05945d509dabca581c43302)) {
        Py_XDECREF(cache_frame_a4275d0de05945d509dabca581c43302);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4275d0de05945d509dabca581c43302 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4275d0de05945d509dabca581c43302 = MAKE_FUNCTION_FRAME(codeobj_a4275d0de05945d509dabca581c43302, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a4275d0de05945d509dabca581c43302->m_type_description == NULL);
    frame_a4275d0de05945d509dabca581c43302 = cache_frame_a4275d0de05945d509dabca581c43302;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a4275d0de05945d509dabca581c43302);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a4275d0de05945d509dabca581c43302) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_a4275d0de05945d509dabca581c43302->m_frame.f_lineno = 235;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 235;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a4275d0de05945d509dabca581c43302);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a4275d0de05945d509dabca581c43302);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a4275d0de05945d509dabca581c43302, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4275d0de05945d509dabca581c43302->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4275d0de05945d509dabca581c43302, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4275d0de05945d509dabca581c43302,
        type_description_1,
        par_self,
        par_connection,
        par_table,
        par_include_columns,
        par_exclude_columns,
        par_resolve_fks
    );


    // Release cached frame if used for exception.
    if (frame_a4275d0de05945d509dabca581c43302 == cache_frame_a4275d0de05945d509dabca581c43302) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a4275d0de05945d509dabca581c43302);
        cache_frame_a4275d0de05945d509dabca581c43302 = NULL;
    }

    assertFrameObject(frame_a4275d0de05945d509dabca581c43302);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table);
    Py_DECREF(par_table);
    CHECK_OBJECT(par_include_columns);
    Py_DECREF(par_include_columns);
    CHECK_OBJECT(par_exclude_columns);
    Py_DECREF(par_exclude_columns);
    CHECK_OBJECT(par_resolve_fks);
    Py_DECREF(par_resolve_fks);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__5_get_columns(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_02576aef3bc92055e1dfbaba74fb903a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_02576aef3bc92055e1dfbaba74fb903a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02576aef3bc92055e1dfbaba74fb903a)) {
        Py_XDECREF(cache_frame_02576aef3bc92055e1dfbaba74fb903a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02576aef3bc92055e1dfbaba74fb903a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02576aef3bc92055e1dfbaba74fb903a = MAKE_FUNCTION_FRAME(codeobj_02576aef3bc92055e1dfbaba74fb903a, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_02576aef3bc92055e1dfbaba74fb903a->m_type_description == NULL);
    frame_02576aef3bc92055e1dfbaba74fb903a = cache_frame_02576aef3bc92055e1dfbaba74fb903a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_02576aef3bc92055e1dfbaba74fb903a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_02576aef3bc92055e1dfbaba74fb903a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_02576aef3bc92055e1dfbaba74fb903a->m_frame.f_lineno = 269;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 269;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_02576aef3bc92055e1dfbaba74fb903a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_02576aef3bc92055e1dfbaba74fb903a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02576aef3bc92055e1dfbaba74fb903a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02576aef3bc92055e1dfbaba74fb903a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02576aef3bc92055e1dfbaba74fb903a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02576aef3bc92055e1dfbaba74fb903a,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_02576aef3bc92055e1dfbaba74fb903a == cache_frame_02576aef3bc92055e1dfbaba74fb903a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_02576aef3bc92055e1dfbaba74fb903a);
        cache_frame_02576aef3bc92055e1dfbaba74fb903a = NULL;
    }

    assertFrameObject(frame_02576aef3bc92055e1dfbaba74fb903a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__6_get_primary_keys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_76b2936a6607921e086ca175a0f72828;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76b2936a6607921e086ca175a0f72828 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76b2936a6607921e086ca175a0f72828)) {
        Py_XDECREF(cache_frame_76b2936a6607921e086ca175a0f72828);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76b2936a6607921e086ca175a0f72828 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76b2936a6607921e086ca175a0f72828 = MAKE_FUNCTION_FRAME(codeobj_76b2936a6607921e086ca175a0f72828, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_76b2936a6607921e086ca175a0f72828->m_type_description == NULL);
    frame_76b2936a6607921e086ca175a0f72828 = cache_frame_76b2936a6607921e086ca175a0f72828;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_76b2936a6607921e086ca175a0f72828);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_76b2936a6607921e086ca175a0f72828) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_76b2936a6607921e086ca175a0f72828->m_frame.f_lineno = 280;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 280;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76b2936a6607921e086ca175a0f72828);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76b2936a6607921e086ca175a0f72828);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76b2936a6607921e086ca175a0f72828, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76b2936a6607921e086ca175a0f72828->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76b2936a6607921e086ca175a0f72828, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76b2936a6607921e086ca175a0f72828,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_76b2936a6607921e086ca175a0f72828 == cache_frame_76b2936a6607921e086ca175a0f72828) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_76b2936a6607921e086ca175a0f72828);
        cache_frame_76b2936a6607921e086ca175a0f72828 = NULL;
    }

    assertFrameObject(frame_76b2936a6607921e086ca175a0f72828);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__7_get_pk_constraint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_ad151dcac90b060ea83dc990fe17dc8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad151dcac90b060ea83dc990fe17dc8e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad151dcac90b060ea83dc990fe17dc8e)) {
        Py_XDECREF(cache_frame_ad151dcac90b060ea83dc990fe17dc8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad151dcac90b060ea83dc990fe17dc8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad151dcac90b060ea83dc990fe17dc8e = MAKE_FUNCTION_FRAME(codeobj_ad151dcac90b060ea83dc990fe17dc8e, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ad151dcac90b060ea83dc990fe17dc8e->m_type_description == NULL);
    frame_ad151dcac90b060ea83dc990fe17dc8e = cache_frame_ad151dcac90b060ea83dc990fe17dc8e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ad151dcac90b060ea83dc990fe17dc8e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ad151dcac90b060ea83dc990fe17dc8e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_ad151dcac90b060ea83dc990fe17dc8e->m_frame.f_lineno = 297;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 297;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad151dcac90b060ea83dc990fe17dc8e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad151dcac90b060ea83dc990fe17dc8e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad151dcac90b060ea83dc990fe17dc8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad151dcac90b060ea83dc990fe17dc8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad151dcac90b060ea83dc990fe17dc8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad151dcac90b060ea83dc990fe17dc8e,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_ad151dcac90b060ea83dc990fe17dc8e == cache_frame_ad151dcac90b060ea83dc990fe17dc8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ad151dcac90b060ea83dc990fe17dc8e);
        cache_frame_ad151dcac90b060ea83dc990fe17dc8e = NULL;
    }

    assertFrameObject(frame_ad151dcac90b060ea83dc990fe17dc8e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__8_get_foreign_keys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_75de8ce34b0c3ed0a8ae1362022d1bed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed)) {
        Py_XDECREF(cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed = MAKE_FUNCTION_FRAME(codeobj_75de8ce34b0c3ed0a8ae1362022d1bed, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed->m_type_description == NULL);
    frame_75de8ce34b0c3ed0a8ae1362022d1bed = cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_75de8ce34b0c3ed0a8ae1362022d1bed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_75de8ce34b0c3ed0a8ae1362022d1bed) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_75de8ce34b0c3ed0a8ae1362022d1bed->m_frame.f_lineno = 323;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 323;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75de8ce34b0c3ed0a8ae1362022d1bed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75de8ce34b0c3ed0a8ae1362022d1bed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75de8ce34b0c3ed0a8ae1362022d1bed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75de8ce34b0c3ed0a8ae1362022d1bed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75de8ce34b0c3ed0a8ae1362022d1bed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75de8ce34b0c3ed0a8ae1362022d1bed,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_75de8ce34b0c3ed0a8ae1362022d1bed == cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed);
        cache_frame_75de8ce34b0c3ed0a8ae1362022d1bed = NULL;
    }

    assertFrameObject(frame_75de8ce34b0c3ed0a8ae1362022d1bed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__9_get_table_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_63877fe67cc8873b04f8d8ddd06b5c01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63877fe67cc8873b04f8d8ddd06b5c01 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_63877fe67cc8873b04f8d8ddd06b5c01)) {
        Py_XDECREF(cache_frame_63877fe67cc8873b04f8d8ddd06b5c01);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63877fe67cc8873b04f8d8ddd06b5c01 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63877fe67cc8873b04f8d8ddd06b5c01 = MAKE_FUNCTION_FRAME(codeobj_63877fe67cc8873b04f8d8ddd06b5c01, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_63877fe67cc8873b04f8d8ddd06b5c01->m_type_description == NULL);
    frame_63877fe67cc8873b04f8d8ddd06b5c01 = cache_frame_63877fe67cc8873b04f8d8ddd06b5c01;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_63877fe67cc8873b04f8d8ddd06b5c01);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_63877fe67cc8873b04f8d8ddd06b5c01) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_63877fe67cc8873b04f8d8ddd06b5c01->m_frame.f_lineno = 328;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 328;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_63877fe67cc8873b04f8d8ddd06b5c01);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_63877fe67cc8873b04f8d8ddd06b5c01);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63877fe67cc8873b04f8d8ddd06b5c01, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63877fe67cc8873b04f8d8ddd06b5c01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63877fe67cc8873b04f8d8ddd06b5c01, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63877fe67cc8873b04f8d8ddd06b5c01,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_63877fe67cc8873b04f8d8ddd06b5c01 == cache_frame_63877fe67cc8873b04f8d8ddd06b5c01) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_63877fe67cc8873b04f8d8ddd06b5c01);
        cache_frame_63877fe67cc8873b04f8d8ddd06b5c01 = NULL;
    }

    assertFrameObject(frame_63877fe67cc8873b04f8d8ddd06b5c01);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__10_get_temp_table_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_0e2a25df6b56e43df433b7cf3c824767;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0e2a25df6b56e43df433b7cf3c824767 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e2a25df6b56e43df433b7cf3c824767)) {
        Py_XDECREF(cache_frame_0e2a25df6b56e43df433b7cf3c824767);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e2a25df6b56e43df433b7cf3c824767 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e2a25df6b56e43df433b7cf3c824767 = MAKE_FUNCTION_FRAME(codeobj_0e2a25df6b56e43df433b7cf3c824767, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0e2a25df6b56e43df433b7cf3c824767->m_type_description == NULL);
    frame_0e2a25df6b56e43df433b7cf3c824767 = cache_frame_0e2a25df6b56e43df433b7cf3c824767;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0e2a25df6b56e43df433b7cf3c824767);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0e2a25df6b56e43df433b7cf3c824767) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_0e2a25df6b56e43df433b7cf3c824767->m_frame.f_lineno = 336;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 336;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e2a25df6b56e43df433b7cf3c824767);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e2a25df6b56e43df433b7cf3c824767);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e2a25df6b56e43df433b7cf3c824767, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e2a25df6b56e43df433b7cf3c824767->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e2a25df6b56e43df433b7cf3c824767, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e2a25df6b56e43df433b7cf3c824767,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_0e2a25df6b56e43df433b7cf3c824767 == cache_frame_0e2a25df6b56e43df433b7cf3c824767) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0e2a25df6b56e43df433b7cf3c824767);
        cache_frame_0e2a25df6b56e43df433b7cf3c824767 = NULL;
    }

    assertFrameObject(frame_0e2a25df6b56e43df433b7cf3c824767);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__11_get_view_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_fc2d74422e72e3320829896b2d02605c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc2d74422e72e3320829896b2d02605c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc2d74422e72e3320829896b2d02605c)) {
        Py_XDECREF(cache_frame_fc2d74422e72e3320829896b2d02605c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc2d74422e72e3320829896b2d02605c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc2d74422e72e3320829896b2d02605c = MAKE_FUNCTION_FRAME(codeobj_fc2d74422e72e3320829896b2d02605c, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fc2d74422e72e3320829896b2d02605c->m_type_description == NULL);
    frame_fc2d74422e72e3320829896b2d02605c = cache_frame_fc2d74422e72e3320829896b2d02605c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fc2d74422e72e3320829896b2d02605c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fc2d74422e72e3320829896b2d02605c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_fc2d74422e72e3320829896b2d02605c->m_frame.f_lineno = 345;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 345;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc2d74422e72e3320829896b2d02605c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc2d74422e72e3320829896b2d02605c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc2d74422e72e3320829896b2d02605c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc2d74422e72e3320829896b2d02605c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc2d74422e72e3320829896b2d02605c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc2d74422e72e3320829896b2d02605c,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_fc2d74422e72e3320829896b2d02605c == cache_frame_fc2d74422e72e3320829896b2d02605c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fc2d74422e72e3320829896b2d02605c);
        cache_frame_fc2d74422e72e3320829896b2d02605c = NULL;
    }

    assertFrameObject(frame_fc2d74422e72e3320829896b2d02605c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__12_get_temp_view_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *par_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_70095111510e1376981ed8b6b8f09499;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70095111510e1376981ed8b6b8f09499 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70095111510e1376981ed8b6b8f09499)) {
        Py_XDECREF(cache_frame_70095111510e1376981ed8b6b8f09499);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70095111510e1376981ed8b6b8f09499 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70095111510e1376981ed8b6b8f09499 = MAKE_FUNCTION_FRAME(codeobj_70095111510e1376981ed8b6b8f09499, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_70095111510e1376981ed8b6b8f09499->m_type_description == NULL);
    frame_70095111510e1376981ed8b6b8f09499 = cache_frame_70095111510e1376981ed8b6b8f09499;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_70095111510e1376981ed8b6b8f09499);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_70095111510e1376981ed8b6b8f09499) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_70095111510e1376981ed8b6b8f09499->m_frame.f_lineno = 353;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 353;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70095111510e1376981ed8b6b8f09499);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70095111510e1376981ed8b6b8f09499);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70095111510e1376981ed8b6b8f09499, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70095111510e1376981ed8b6b8f09499->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70095111510e1376981ed8b6b8f09499, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70095111510e1376981ed8b6b8f09499,
        type_description_1,
        par_self,
        par_connection,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_70095111510e1376981ed8b6b8f09499 == cache_frame_70095111510e1376981ed8b6b8f09499) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_70095111510e1376981ed8b6b8f09499);
        cache_frame_70095111510e1376981ed8b6b8f09499 = NULL;
    }

    assertFrameObject(frame_70095111510e1376981ed8b6b8f09499);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__13_get_view_definition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_view_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_11de30a99489c6a55ef2a92fc7089c5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11de30a99489c6a55ef2a92fc7089c5b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_11de30a99489c6a55ef2a92fc7089c5b)) {
        Py_XDECREF(cache_frame_11de30a99489c6a55ef2a92fc7089c5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11de30a99489c6a55ef2a92fc7089c5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11de30a99489c6a55ef2a92fc7089c5b = MAKE_FUNCTION_FRAME(codeobj_11de30a99489c6a55ef2a92fc7089c5b, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_11de30a99489c6a55ef2a92fc7089c5b->m_type_description == NULL);
    frame_11de30a99489c6a55ef2a92fc7089c5b = cache_frame_11de30a99489c6a55ef2a92fc7089c5b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_11de30a99489c6a55ef2a92fc7089c5b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_11de30a99489c6a55ef2a92fc7089c5b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_11de30a99489c6a55ef2a92fc7089c5b->m_frame.f_lineno = 363;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 363;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11de30a99489c6a55ef2a92fc7089c5b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11de30a99489c6a55ef2a92fc7089c5b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11de30a99489c6a55ef2a92fc7089c5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11de30a99489c6a55ef2a92fc7089c5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11de30a99489c6a55ef2a92fc7089c5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11de30a99489c6a55ef2a92fc7089c5b,
        type_description_1,
        par_self,
        par_connection,
        par_view_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_11de30a99489c6a55ef2a92fc7089c5b == cache_frame_11de30a99489c6a55ef2a92fc7089c5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_11de30a99489c6a55ef2a92fc7089c5b);
        cache_frame_11de30a99489c6a55ef2a92fc7089c5b = NULL;
    }

    assertFrameObject(frame_11de30a99489c6a55ef2a92fc7089c5b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_view_name);
    Py_DECREF(par_view_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__14_get_indexes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_10b68fe12fcba381b2f2acbb72ceaf41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10b68fe12fcba381b2f2acbb72ceaf41 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10b68fe12fcba381b2f2acbb72ceaf41)) {
        Py_XDECREF(cache_frame_10b68fe12fcba381b2f2acbb72ceaf41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10b68fe12fcba381b2f2acbb72ceaf41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10b68fe12fcba381b2f2acbb72ceaf41 = MAKE_FUNCTION_FRAME(codeobj_10b68fe12fcba381b2f2acbb72ceaf41, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_10b68fe12fcba381b2f2acbb72ceaf41->m_type_description == NULL);
    frame_10b68fe12fcba381b2f2acbb72ceaf41 = cache_frame_10b68fe12fcba381b2f2acbb72ceaf41;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10b68fe12fcba381b2f2acbb72ceaf41);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10b68fe12fcba381b2f2acbb72ceaf41) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_10b68fe12fcba381b2f2acbb72ceaf41->m_frame.f_lineno = 383;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 383;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10b68fe12fcba381b2f2acbb72ceaf41);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10b68fe12fcba381b2f2acbb72ceaf41);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10b68fe12fcba381b2f2acbb72ceaf41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10b68fe12fcba381b2f2acbb72ceaf41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10b68fe12fcba381b2f2acbb72ceaf41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10b68fe12fcba381b2f2acbb72ceaf41,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_10b68fe12fcba381b2f2acbb72ceaf41 == cache_frame_10b68fe12fcba381b2f2acbb72ceaf41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_10b68fe12fcba381b2f2acbb72ceaf41);
        cache_frame_10b68fe12fcba381b2f2acbb72ceaf41 = NULL;
    }

    assertFrameObject(frame_10b68fe12fcba381b2f2acbb72ceaf41);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__15_get_unique_constraints(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_c80d2a02ea5d198ed941cb406470c7b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c80d2a02ea5d198ed941cb406470c7b4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c80d2a02ea5d198ed941cb406470c7b4)) {
        Py_XDECREF(cache_frame_c80d2a02ea5d198ed941cb406470c7b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c80d2a02ea5d198ed941cb406470c7b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c80d2a02ea5d198ed941cb406470c7b4 = MAKE_FUNCTION_FRAME(codeobj_c80d2a02ea5d198ed941cb406470c7b4, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c80d2a02ea5d198ed941cb406470c7b4->m_type_description == NULL);
    frame_c80d2a02ea5d198ed941cb406470c7b4 = cache_frame_c80d2a02ea5d198ed941cb406470c7b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c80d2a02ea5d198ed941cb406470c7b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c80d2a02ea5d198ed941cb406470c7b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_c80d2a02ea5d198ed941cb406470c7b4->m_frame.f_lineno = 407;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 407;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c80d2a02ea5d198ed941cb406470c7b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c80d2a02ea5d198ed941cb406470c7b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c80d2a02ea5d198ed941cb406470c7b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c80d2a02ea5d198ed941cb406470c7b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c80d2a02ea5d198ed941cb406470c7b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c80d2a02ea5d198ed941cb406470c7b4,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_c80d2a02ea5d198ed941cb406470c7b4 == cache_frame_c80d2a02ea5d198ed941cb406470c7b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c80d2a02ea5d198ed941cb406470c7b4);
        cache_frame_c80d2a02ea5d198ed941cb406470c7b4 = NULL;
    }

    assertFrameObject(frame_c80d2a02ea5d198ed941cb406470c7b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__16_get_check_constraints(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_5277d5225f70262fb2913837d166e2c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5277d5225f70262fb2913837d166e2c1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5277d5225f70262fb2913837d166e2c1)) {
        Py_XDECREF(cache_frame_5277d5225f70262fb2913837d166e2c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5277d5225f70262fb2913837d166e2c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5277d5225f70262fb2913837d166e2c1 = MAKE_FUNCTION_FRAME(codeobj_5277d5225f70262fb2913837d166e2c1, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5277d5225f70262fb2913837d166e2c1->m_type_description == NULL);
    frame_5277d5225f70262fb2913837d166e2c1 = cache_frame_5277d5225f70262fb2913837d166e2c1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5277d5225f70262fb2913837d166e2c1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5277d5225f70262fb2913837d166e2c1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_5277d5225f70262fb2913837d166e2c1->m_frame.f_lineno = 429;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 429;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5277d5225f70262fb2913837d166e2c1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5277d5225f70262fb2913837d166e2c1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5277d5225f70262fb2913837d166e2c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5277d5225f70262fb2913837d166e2c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5277d5225f70262fb2913837d166e2c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5277d5225f70262fb2913837d166e2c1,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_5277d5225f70262fb2913837d166e2c1 == cache_frame_5277d5225f70262fb2913837d166e2c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5277d5225f70262fb2913837d166e2c1);
        cache_frame_5277d5225f70262fb2913837d166e2c1 = NULL;
    }

    assertFrameObject(frame_5277d5225f70262fb2913837d166e2c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__17_get_table_comment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    PyObject *par_kw = python_pars[4];
    struct Nuitka_FrameObject *frame_ed647f442edad22c7e8cfa17b5705156;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed647f442edad22c7e8cfa17b5705156 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed647f442edad22c7e8cfa17b5705156)) {
        Py_XDECREF(cache_frame_ed647f442edad22c7e8cfa17b5705156);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed647f442edad22c7e8cfa17b5705156 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed647f442edad22c7e8cfa17b5705156 = MAKE_FUNCTION_FRAME(codeobj_ed647f442edad22c7e8cfa17b5705156, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ed647f442edad22c7e8cfa17b5705156->m_type_description == NULL);
    frame_ed647f442edad22c7e8cfa17b5705156 = cache_frame_ed647f442edad22c7e8cfa17b5705156;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed647f442edad22c7e8cfa17b5705156);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed647f442edad22c7e8cfa17b5705156) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_ed647f442edad22c7e8cfa17b5705156->m_frame.f_lineno = 447;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 447;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed647f442edad22c7e8cfa17b5705156);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed647f442edad22c7e8cfa17b5705156);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed647f442edad22c7e8cfa17b5705156, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed647f442edad22c7e8cfa17b5705156->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed647f442edad22c7e8cfa17b5705156, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed647f442edad22c7e8cfa17b5705156,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_ed647f442edad22c7e8cfa17b5705156 == cache_frame_ed647f442edad22c7e8cfa17b5705156) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ed647f442edad22c7e8cfa17b5705156);
        cache_frame_ed647f442edad22c7e8cfa17b5705156 = NULL;
    }

    assertFrameObject(frame_ed647f442edad22c7e8cfa17b5705156);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__18_normalize_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_967f6aead762243c7708a3c3e27aa0b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_967f6aead762243c7708a3c3e27aa0b8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_967f6aead762243c7708a3c3e27aa0b8)) {
        Py_XDECREF(cache_frame_967f6aead762243c7708a3c3e27aa0b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_967f6aead762243c7708a3c3e27aa0b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_967f6aead762243c7708a3c3e27aa0b8 = MAKE_FUNCTION_FRAME(codeobj_967f6aead762243c7708a3c3e27aa0b8, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_967f6aead762243c7708a3c3e27aa0b8->m_type_description == NULL);
    frame_967f6aead762243c7708a3c3e27aa0b8 = cache_frame_967f6aead762243c7708a3c3e27aa0b8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_967f6aead762243c7708a3c3e27aa0b8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_967f6aead762243c7708a3c3e27aa0b8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_967f6aead762243c7708a3c3e27aa0b8->m_frame.f_lineno = 457;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 457;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_967f6aead762243c7708a3c3e27aa0b8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_967f6aead762243c7708a3c3e27aa0b8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_967f6aead762243c7708a3c3e27aa0b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967f6aead762243c7708a3c3e27aa0b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967f6aead762243c7708a3c3e27aa0b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_967f6aead762243c7708a3c3e27aa0b8,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_967f6aead762243c7708a3c3e27aa0b8 == cache_frame_967f6aead762243c7708a3c3e27aa0b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_967f6aead762243c7708a3c3e27aa0b8);
        cache_frame_967f6aead762243c7708a3c3e27aa0b8 = NULL;
    }

    assertFrameObject(frame_967f6aead762243c7708a3c3e27aa0b8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__19_denormalize_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_14e3da2da9fb88b59a5ce0e38d5fe97e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e)) {
        Py_XDECREF(cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e = MAKE_FUNCTION_FRAME(codeobj_14e3da2da9fb88b59a5ce0e38d5fe97e, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e->m_type_description == NULL);
    frame_14e3da2da9fb88b59a5ce0e38d5fe97e = cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_14e3da2da9fb88b59a5ce0e38d5fe97e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_14e3da2da9fb88b59a5ce0e38d5fe97e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_14e3da2da9fb88b59a5ce0e38d5fe97e->m_frame.f_lineno = 467;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 467;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14e3da2da9fb88b59a5ce0e38d5fe97e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14e3da2da9fb88b59a5ce0e38d5fe97e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14e3da2da9fb88b59a5ce0e38d5fe97e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14e3da2da9fb88b59a5ce0e38d5fe97e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14e3da2da9fb88b59a5ce0e38d5fe97e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14e3da2da9fb88b59a5ce0e38d5fe97e,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_14e3da2da9fb88b59a5ce0e38d5fe97e == cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e);
        cache_frame_14e3da2da9fb88b59a5ce0e38d5fe97e = NULL;
    }

    assertFrameObject(frame_14e3da2da9fb88b59a5ce0e38d5fe97e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__20_has_table(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_table_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    struct Nuitka_FrameObject *frame_0b337e6ff21a96b079a0f4a0d3d19609;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b337e6ff21a96b079a0f4a0d3d19609 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b337e6ff21a96b079a0f4a0d3d19609)) {
        Py_XDECREF(cache_frame_0b337e6ff21a96b079a0f4a0d3d19609);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b337e6ff21a96b079a0f4a0d3d19609 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b337e6ff21a96b079a0f4a0d3d19609 = MAKE_FUNCTION_FRAME(codeobj_0b337e6ff21a96b079a0f4a0d3d19609, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0b337e6ff21a96b079a0f4a0d3d19609->m_type_description == NULL);
    frame_0b337e6ff21a96b079a0f4a0d3d19609 = cache_frame_0b337e6ff21a96b079a0f4a0d3d19609;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0b337e6ff21a96b079a0f4a0d3d19609);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0b337e6ff21a96b079a0f4a0d3d19609) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_0b337e6ff21a96b079a0f4a0d3d19609->m_frame.f_lineno = 479;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 479;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b337e6ff21a96b079a0f4a0d3d19609);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b337e6ff21a96b079a0f4a0d3d19609);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b337e6ff21a96b079a0f4a0d3d19609, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b337e6ff21a96b079a0f4a0d3d19609->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b337e6ff21a96b079a0f4a0d3d19609, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b337e6ff21a96b079a0f4a0d3d19609,
        type_description_1,
        par_self,
        par_connection,
        par_table_name,
        par_schema
    );


    // Release cached frame if used for exception.
    if (frame_0b337e6ff21a96b079a0f4a0d3d19609 == cache_frame_0b337e6ff21a96b079a0f4a0d3d19609) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0b337e6ff21a96b079a0f4a0d3d19609);
        cache_frame_0b337e6ff21a96b079a0f4a0d3d19609 = NULL;
    }

    assertFrameObject(frame_0b337e6ff21a96b079a0f4a0d3d19609);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_table_name);
    Py_DECREF(par_table_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__21_has_sequence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_sequence_name = python_pars[2];
    PyObject *par_schema = python_pars[3];
    struct Nuitka_FrameObject *frame_1e858af01461f13ff0f8de725c8412c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e858af01461f13ff0f8de725c8412c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e858af01461f13ff0f8de725c8412c0)) {
        Py_XDECREF(cache_frame_1e858af01461f13ff0f8de725c8412c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e858af01461f13ff0f8de725c8412c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e858af01461f13ff0f8de725c8412c0 = MAKE_FUNCTION_FRAME(codeobj_1e858af01461f13ff0f8de725c8412c0, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1e858af01461f13ff0f8de725c8412c0->m_type_description == NULL);
    frame_1e858af01461f13ff0f8de725c8412c0 = cache_frame_1e858af01461f13ff0f8de725c8412c0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1e858af01461f13ff0f8de725c8412c0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1e858af01461f13ff0f8de725c8412c0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_1e858af01461f13ff0f8de725c8412c0->m_frame.f_lineno = 490;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 490;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e858af01461f13ff0f8de725c8412c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e858af01461f13ff0f8de725c8412c0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e858af01461f13ff0f8de725c8412c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e858af01461f13ff0f8de725c8412c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e858af01461f13ff0f8de725c8412c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e858af01461f13ff0f8de725c8412c0,
        type_description_1,
        par_self,
        par_connection,
        par_sequence_name,
        par_schema
    );


    // Release cached frame if used for exception.
    if (frame_1e858af01461f13ff0f8de725c8412c0 == cache_frame_1e858af01461f13ff0f8de725c8412c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1e858af01461f13ff0f8de725c8412c0);
        cache_frame_1e858af01461f13ff0f8de725c8412c0 = NULL;
    }

    assertFrameObject(frame_1e858af01461f13ff0f8de725c8412c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_sequence_name);
    Py_DECREF(par_sequence_name);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_1f30e0b7ad0ec12f6d0b464e60417b2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c)) {
        Py_XDECREF(cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c = MAKE_FUNCTION_FRAME(codeobj_1f30e0b7ad0ec12f6d0b464e60417b2c, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c->m_type_description == NULL);
    frame_1f30e0b7ad0ec12f6d0b464e60417b2c = cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1f30e0b7ad0ec12f6d0b464e60417b2c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1f30e0b7ad0ec12f6d0b464e60417b2c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_1f30e0b7ad0ec12f6d0b464e60417b2c->m_frame.f_lineno = 501;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 501;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f30e0b7ad0ec12f6d0b464e60417b2c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f30e0b7ad0ec12f6d0b464e60417b2c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f30e0b7ad0ec12f6d0b464e60417b2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f30e0b7ad0ec12f6d0b464e60417b2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f30e0b7ad0ec12f6d0b464e60417b2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1f30e0b7ad0ec12f6d0b464e60417b2c,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame if used for exception.
    if (frame_1f30e0b7ad0ec12f6d0b464e60417b2c == cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c);
        cache_frame_1f30e0b7ad0ec12f6d0b464e60417b2c = NULL;
    }

    assertFrameObject(frame_1f30e0b7ad0ec12f6d0b464e60417b2c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_f4ab7e7c3bab0047e7a9732229101df1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4ab7e7c3bab0047e7a9732229101df1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4ab7e7c3bab0047e7a9732229101df1)) {
        Py_XDECREF(cache_frame_f4ab7e7c3bab0047e7a9732229101df1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4ab7e7c3bab0047e7a9732229101df1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4ab7e7c3bab0047e7a9732229101df1 = MAKE_FUNCTION_FRAME(codeobj_f4ab7e7c3bab0047e7a9732229101df1, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f4ab7e7c3bab0047e7a9732229101df1->m_type_description == NULL);
    frame_f4ab7e7c3bab0047e7a9732229101df1 = cache_frame_f4ab7e7c3bab0047e7a9732229101df1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f4ab7e7c3bab0047e7a9732229101df1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f4ab7e7c3bab0047e7a9732229101df1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_f4ab7e7c3bab0047e7a9732229101df1->m_frame.f_lineno = 513;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 513;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4ab7e7c3bab0047e7a9732229101df1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4ab7e7c3bab0047e7a9732229101df1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4ab7e7c3bab0047e7a9732229101df1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4ab7e7c3bab0047e7a9732229101df1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4ab7e7c3bab0047e7a9732229101df1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4ab7e7c3bab0047e7a9732229101df1,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame if used for exception.
    if (frame_f4ab7e7c3bab0047e7a9732229101df1 == cache_frame_f4ab7e7c3bab0047e7a9732229101df1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f4ab7e7c3bab0047e7a9732229101df1);
        cache_frame_f4ab7e7c3bab0047e7a9732229101df1 = NULL;
    }

    assertFrameObject(frame_f4ab7e7c3bab0047e7a9732229101df1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__24_do_begin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_e02c7e61f14d91e75489da5b273e875d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e02c7e61f14d91e75489da5b273e875d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e02c7e61f14d91e75489da5b273e875d)) {
        Py_XDECREF(cache_frame_e02c7e61f14d91e75489da5b273e875d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e02c7e61f14d91e75489da5b273e875d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e02c7e61f14d91e75489da5b273e875d = MAKE_FUNCTION_FRAME(codeobj_e02c7e61f14d91e75489da5b273e875d, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e02c7e61f14d91e75489da5b273e875d->m_type_description == NULL);
    frame_e02c7e61f14d91e75489da5b273e875d = cache_frame_e02c7e61f14d91e75489da5b273e875d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e02c7e61f14d91e75489da5b273e875d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e02c7e61f14d91e75489da5b273e875d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_e02c7e61f14d91e75489da5b273e875d->m_frame.f_lineno = 537;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 537;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e02c7e61f14d91e75489da5b273e875d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e02c7e61f14d91e75489da5b273e875d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e02c7e61f14d91e75489da5b273e875d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e02c7e61f14d91e75489da5b273e875d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e02c7e61f14d91e75489da5b273e875d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e02c7e61f14d91e75489da5b273e875d,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_e02c7e61f14d91e75489da5b273e875d == cache_frame_e02c7e61f14d91e75489da5b273e875d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e02c7e61f14d91e75489da5b273e875d);
        cache_frame_e02c7e61f14d91e75489da5b273e875d = NULL;
    }

    assertFrameObject(frame_e02c7e61f14d91e75489da5b273e875d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__25_do_rollback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_60d4ebfa9b9098d8607cb9c49217f6b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3)) {
        Py_XDECREF(cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3 = MAKE_FUNCTION_FRAME(codeobj_60d4ebfa9b9098d8607cb9c49217f6b3, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3->m_type_description == NULL);
    frame_60d4ebfa9b9098d8607cb9c49217f6b3 = cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_60d4ebfa9b9098d8607cb9c49217f6b3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_60d4ebfa9b9098d8607cb9c49217f6b3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_60d4ebfa9b9098d8607cb9c49217f6b3->m_frame.f_lineno = 548;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 548;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60d4ebfa9b9098d8607cb9c49217f6b3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60d4ebfa9b9098d8607cb9c49217f6b3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60d4ebfa9b9098d8607cb9c49217f6b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60d4ebfa9b9098d8607cb9c49217f6b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60d4ebfa9b9098d8607cb9c49217f6b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60d4ebfa9b9098d8607cb9c49217f6b3,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_60d4ebfa9b9098d8607cb9c49217f6b3 == cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3);
        cache_frame_60d4ebfa9b9098d8607cb9c49217f6b3 = NULL;
    }

    assertFrameObject(frame_60d4ebfa9b9098d8607cb9c49217f6b3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__26_do_commit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_05f9d8e20785be9b62ee176bc8591bef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05f9d8e20785be9b62ee176bc8591bef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05f9d8e20785be9b62ee176bc8591bef)) {
        Py_XDECREF(cache_frame_05f9d8e20785be9b62ee176bc8591bef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05f9d8e20785be9b62ee176bc8591bef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05f9d8e20785be9b62ee176bc8591bef = MAKE_FUNCTION_FRAME(codeobj_05f9d8e20785be9b62ee176bc8591bef, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_05f9d8e20785be9b62ee176bc8591bef->m_type_description == NULL);
    frame_05f9d8e20785be9b62ee176bc8591bef = cache_frame_05f9d8e20785be9b62ee176bc8591bef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_05f9d8e20785be9b62ee176bc8591bef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_05f9d8e20785be9b62ee176bc8591bef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_05f9d8e20785be9b62ee176bc8591bef->m_frame.f_lineno = 559;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 559;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05f9d8e20785be9b62ee176bc8591bef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05f9d8e20785be9b62ee176bc8591bef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05f9d8e20785be9b62ee176bc8591bef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05f9d8e20785be9b62ee176bc8591bef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05f9d8e20785be9b62ee176bc8591bef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05f9d8e20785be9b62ee176bc8591bef,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_05f9d8e20785be9b62ee176bc8591bef == cache_frame_05f9d8e20785be9b62ee176bc8591bef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_05f9d8e20785be9b62ee176bc8591bef);
        cache_frame_05f9d8e20785be9b62ee176bc8591bef = NULL;
    }

    assertFrameObject(frame_05f9d8e20785be9b62ee176bc8591bef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__27_do_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_ee2c0ba538729a7673c18390609e871a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee2c0ba538729a7673c18390609e871a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee2c0ba538729a7673c18390609e871a)) {
        Py_XDECREF(cache_frame_ee2c0ba538729a7673c18390609e871a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee2c0ba538729a7673c18390609e871a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee2c0ba538729a7673c18390609e871a = MAKE_FUNCTION_FRAME(codeobj_ee2c0ba538729a7673c18390609e871a, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee2c0ba538729a7673c18390609e871a->m_type_description == NULL);
    frame_ee2c0ba538729a7673c18390609e871a = cache_frame_ee2c0ba538729a7673c18390609e871a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee2c0ba538729a7673c18390609e871a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee2c0ba538729a7673c18390609e871a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_ee2c0ba538729a7673c18390609e871a->m_frame.f_lineno = 572;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 572;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2c0ba538729a7673c18390609e871a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2c0ba538729a7673c18390609e871a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee2c0ba538729a7673c18390609e871a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee2c0ba538729a7673c18390609e871a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee2c0ba538729a7673c18390609e871a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee2c0ba538729a7673c18390609e871a,
        type_description_1,
        par_self,
        par_dbapi_connection
    );


    // Release cached frame if used for exception.
    if (frame_ee2c0ba538729a7673c18390609e871a == cache_frame_ee2c0ba538729a7673c18390609e871a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ee2c0ba538729a7673c18390609e871a);
        cache_frame_ee2c0ba538729a7673c18390609e871a = NULL;
    }

    assertFrameObject(frame_ee2c0ba538729a7673c18390609e871a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_connection);
    Py_DECREF(par_dbapi_connection);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__28_create_xid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7c904160abdf265854cb86f90374fd41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c904160abdf265854cb86f90374fd41 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c904160abdf265854cb86f90374fd41)) {
        Py_XDECREF(cache_frame_7c904160abdf265854cb86f90374fd41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c904160abdf265854cb86f90374fd41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c904160abdf265854cb86f90374fd41 = MAKE_FUNCTION_FRAME(codeobj_7c904160abdf265854cb86f90374fd41, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7c904160abdf265854cb86f90374fd41->m_type_description == NULL);
    frame_7c904160abdf265854cb86f90374fd41 = cache_frame_7c904160abdf265854cb86f90374fd41;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7c904160abdf265854cb86f90374fd41);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7c904160abdf265854cb86f90374fd41) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_7c904160abdf265854cb86f90374fd41->m_frame.f_lineno = 582;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 582;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7c904160abdf265854cb86f90374fd41);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7c904160abdf265854cb86f90374fd41);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c904160abdf265854cb86f90374fd41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c904160abdf265854cb86f90374fd41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c904160abdf265854cb86f90374fd41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c904160abdf265854cb86f90374fd41,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7c904160abdf265854cb86f90374fd41 == cache_frame_7c904160abdf265854cb86f90374fd41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7c904160abdf265854cb86f90374fd41);
        cache_frame_7c904160abdf265854cb86f90374fd41 = NULL;
    }

    assertFrameObject(frame_7c904160abdf265854cb86f90374fd41);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__29_do_savepoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_44590c6b842866984075ac848b9da078;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_44590c6b842866984075ac848b9da078 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_44590c6b842866984075ac848b9da078)) {
        Py_XDECREF(cache_frame_44590c6b842866984075ac848b9da078);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44590c6b842866984075ac848b9da078 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44590c6b842866984075ac848b9da078 = MAKE_FUNCTION_FRAME(codeobj_44590c6b842866984075ac848b9da078, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_44590c6b842866984075ac848b9da078->m_type_description == NULL);
    frame_44590c6b842866984075ac848b9da078 = cache_frame_44590c6b842866984075ac848b9da078;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_44590c6b842866984075ac848b9da078);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_44590c6b842866984075ac848b9da078) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_44590c6b842866984075ac848b9da078->m_frame.f_lineno = 592;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 592;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44590c6b842866984075ac848b9da078);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44590c6b842866984075ac848b9da078);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44590c6b842866984075ac848b9da078, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44590c6b842866984075ac848b9da078->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44590c6b842866984075ac848b9da078, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44590c6b842866984075ac848b9da078,
        type_description_1,
        par_self,
        par_connection,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_44590c6b842866984075ac848b9da078 == cache_frame_44590c6b842866984075ac848b9da078) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_44590c6b842866984075ac848b9da078);
        cache_frame_44590c6b842866984075ac848b9da078 = NULL;
    }

    assertFrameObject(frame_44590c6b842866984075ac848b9da078);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__30_do_rollback_to_savepoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_2d18040194767d7fde1cbee95372a647;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d18040194767d7fde1cbee95372a647 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d18040194767d7fde1cbee95372a647)) {
        Py_XDECREF(cache_frame_2d18040194767d7fde1cbee95372a647);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d18040194767d7fde1cbee95372a647 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d18040194767d7fde1cbee95372a647 = MAKE_FUNCTION_FRAME(codeobj_2d18040194767d7fde1cbee95372a647, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2d18040194767d7fde1cbee95372a647->m_type_description == NULL);
    frame_2d18040194767d7fde1cbee95372a647 = cache_frame_2d18040194767d7fde1cbee95372a647;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2d18040194767d7fde1cbee95372a647);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2d18040194767d7fde1cbee95372a647) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_2d18040194767d7fde1cbee95372a647->m_frame.f_lineno = 602;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 602;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d18040194767d7fde1cbee95372a647);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d18040194767d7fde1cbee95372a647);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d18040194767d7fde1cbee95372a647, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d18040194767d7fde1cbee95372a647->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d18040194767d7fde1cbee95372a647, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d18040194767d7fde1cbee95372a647,
        type_description_1,
        par_self,
        par_connection,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_2d18040194767d7fde1cbee95372a647 == cache_frame_2d18040194767d7fde1cbee95372a647) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2d18040194767d7fde1cbee95372a647);
        cache_frame_2d18040194767d7fde1cbee95372a647 = NULL;
    }

    assertFrameObject(frame_2d18040194767d7fde1cbee95372a647);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__31_do_release_savepoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_b6545915db371b714dbd89effedf56ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6545915db371b714dbd89effedf56ee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6545915db371b714dbd89effedf56ee)) {
        Py_XDECREF(cache_frame_b6545915db371b714dbd89effedf56ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6545915db371b714dbd89effedf56ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6545915db371b714dbd89effedf56ee = MAKE_FUNCTION_FRAME(codeobj_b6545915db371b714dbd89effedf56ee, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6545915db371b714dbd89effedf56ee->m_type_description == NULL);
    frame_b6545915db371b714dbd89effedf56ee = cache_frame_b6545915db371b714dbd89effedf56ee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b6545915db371b714dbd89effedf56ee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b6545915db371b714dbd89effedf56ee) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_b6545915db371b714dbd89effedf56ee->m_frame.f_lineno = 611;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 611;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6545915db371b714dbd89effedf56ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6545915db371b714dbd89effedf56ee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6545915db371b714dbd89effedf56ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6545915db371b714dbd89effedf56ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6545915db371b714dbd89effedf56ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6545915db371b714dbd89effedf56ee,
        type_description_1,
        par_self,
        par_connection,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_b6545915db371b714dbd89effedf56ee == cache_frame_b6545915db371b714dbd89effedf56ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b6545915db371b714dbd89effedf56ee);
        cache_frame_b6545915db371b714dbd89effedf56ee = NULL;
    }

    assertFrameObject(frame_b6545915db371b714dbd89effedf56ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__32_do_begin_twophase(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    struct Nuitka_FrameObject *frame_453f43e91d1427113cc66b12a7c37d32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_453f43e91d1427113cc66b12a7c37d32 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_453f43e91d1427113cc66b12a7c37d32)) {
        Py_XDECREF(cache_frame_453f43e91d1427113cc66b12a7c37d32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_453f43e91d1427113cc66b12a7c37d32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_453f43e91d1427113cc66b12a7c37d32 = MAKE_FUNCTION_FRAME(codeobj_453f43e91d1427113cc66b12a7c37d32, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_453f43e91d1427113cc66b12a7c37d32->m_type_description == NULL);
    frame_453f43e91d1427113cc66b12a7c37d32 = cache_frame_453f43e91d1427113cc66b12a7c37d32;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_453f43e91d1427113cc66b12a7c37d32);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_453f43e91d1427113cc66b12a7c37d32) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_453f43e91d1427113cc66b12a7c37d32->m_frame.f_lineno = 621;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 621;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_453f43e91d1427113cc66b12a7c37d32);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_453f43e91d1427113cc66b12a7c37d32);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_453f43e91d1427113cc66b12a7c37d32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_453f43e91d1427113cc66b12a7c37d32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_453f43e91d1427113cc66b12a7c37d32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_453f43e91d1427113cc66b12a7c37d32,
        type_description_1,
        par_self,
        par_connection,
        par_xid
    );


    // Release cached frame if used for exception.
    if (frame_453f43e91d1427113cc66b12a7c37d32 == cache_frame_453f43e91d1427113cc66b12a7c37d32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_453f43e91d1427113cc66b12a7c37d32);
        cache_frame_453f43e91d1427113cc66b12a7c37d32 = NULL;
    }

    assertFrameObject(frame_453f43e91d1427113cc66b12a7c37d32);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__33_do_prepare_twophase(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    struct Nuitka_FrameObject *frame_1aad30d44084880c09b6d74312d9d6fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1aad30d44084880c09b6d74312d9d6fa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1aad30d44084880c09b6d74312d9d6fa)) {
        Py_XDECREF(cache_frame_1aad30d44084880c09b6d74312d9d6fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1aad30d44084880c09b6d74312d9d6fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1aad30d44084880c09b6d74312d9d6fa = MAKE_FUNCTION_FRAME(codeobj_1aad30d44084880c09b6d74312d9d6fa, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1aad30d44084880c09b6d74312d9d6fa->m_type_description == NULL);
    frame_1aad30d44084880c09b6d74312d9d6fa = cache_frame_1aad30d44084880c09b6d74312d9d6fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1aad30d44084880c09b6d74312d9d6fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1aad30d44084880c09b6d74312d9d6fa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_1aad30d44084880c09b6d74312d9d6fa->m_frame.f_lineno = 631;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 631;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1aad30d44084880c09b6d74312d9d6fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1aad30d44084880c09b6d74312d9d6fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1aad30d44084880c09b6d74312d9d6fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1aad30d44084880c09b6d74312d9d6fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1aad30d44084880c09b6d74312d9d6fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1aad30d44084880c09b6d74312d9d6fa,
        type_description_1,
        par_self,
        par_connection,
        par_xid
    );


    // Release cached frame if used for exception.
    if (frame_1aad30d44084880c09b6d74312d9d6fa == cache_frame_1aad30d44084880c09b6d74312d9d6fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1aad30d44084880c09b6d74312d9d6fa);
        cache_frame_1aad30d44084880c09b6d74312d9d6fa = NULL;
    }

    assertFrameObject(frame_1aad30d44084880c09b6d74312d9d6fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__34_do_rollback_twophase(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    PyObject *par_is_prepared = python_pars[3];
    PyObject *par_recover = python_pars[4];
    struct Nuitka_FrameObject *frame_b95a58995ca53225440ca88c51d03d17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b95a58995ca53225440ca88c51d03d17 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b95a58995ca53225440ca88c51d03d17)) {
        Py_XDECREF(cache_frame_b95a58995ca53225440ca88c51d03d17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b95a58995ca53225440ca88c51d03d17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b95a58995ca53225440ca88c51d03d17 = MAKE_FUNCTION_FRAME(codeobj_b95a58995ca53225440ca88c51d03d17, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b95a58995ca53225440ca88c51d03d17->m_type_description == NULL);
    frame_b95a58995ca53225440ca88c51d03d17 = cache_frame_b95a58995ca53225440ca88c51d03d17;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b95a58995ca53225440ca88c51d03d17);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b95a58995ca53225440ca88c51d03d17) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_b95a58995ca53225440ca88c51d03d17->m_frame.f_lineno = 646;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 646;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b95a58995ca53225440ca88c51d03d17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b95a58995ca53225440ca88c51d03d17);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b95a58995ca53225440ca88c51d03d17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b95a58995ca53225440ca88c51d03d17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b95a58995ca53225440ca88c51d03d17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b95a58995ca53225440ca88c51d03d17,
        type_description_1,
        par_self,
        par_connection,
        par_xid,
        par_is_prepared,
        par_recover
    );


    // Release cached frame if used for exception.
    if (frame_b95a58995ca53225440ca88c51d03d17 == cache_frame_b95a58995ca53225440ca88c51d03d17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b95a58995ca53225440ca88c51d03d17);
        cache_frame_b95a58995ca53225440ca88c51d03d17 = NULL;
    }

    assertFrameObject(frame_b95a58995ca53225440ca88c51d03d17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);
    CHECK_OBJECT(par_is_prepared);
    Py_DECREF(par_is_prepared);
    CHECK_OBJECT(par_recover);
    Py_DECREF(par_recover);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__35_do_commit_twophase(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_xid = python_pars[2];
    PyObject *par_is_prepared = python_pars[3];
    PyObject *par_recover = python_pars[4];
    struct Nuitka_FrameObject *frame_4cb346fa6c2b283ba4e5787ea6fc3ca1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1)) {
        Py_XDECREF(cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1 = MAKE_FUNCTION_FRAME(codeobj_4cb346fa6c2b283ba4e5787ea6fc3ca1, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1->m_type_description == NULL);
    frame_4cb346fa6c2b283ba4e5787ea6fc3ca1 = cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4cb346fa6c2b283ba4e5787ea6fc3ca1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4cb346fa6c2b283ba4e5787ea6fc3ca1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_4cb346fa6c2b283ba4e5787ea6fc3ca1->m_frame.f_lineno = 662;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 662;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4cb346fa6c2b283ba4e5787ea6fc3ca1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4cb346fa6c2b283ba4e5787ea6fc3ca1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cb346fa6c2b283ba4e5787ea6fc3ca1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cb346fa6c2b283ba4e5787ea6fc3ca1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cb346fa6c2b283ba4e5787ea6fc3ca1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cb346fa6c2b283ba4e5787ea6fc3ca1,
        type_description_1,
        par_self,
        par_connection,
        par_xid,
        par_is_prepared,
        par_recover
    );


    // Release cached frame if used for exception.
    if (frame_4cb346fa6c2b283ba4e5787ea6fc3ca1 == cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1);
        cache_frame_4cb346fa6c2b283ba4e5787ea6fc3ca1 = NULL;
    }

    assertFrameObject(frame_4cb346fa6c2b283ba4e5787ea6fc3ca1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_xid);
    Py_DECREF(par_xid);
    CHECK_OBJECT(par_is_prepared);
    Py_DECREF(par_is_prepared);
    CHECK_OBJECT(par_recover);
    Py_DECREF(par_recover);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__36_do_recover_twophase(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    struct Nuitka_FrameObject *frame_6f53d5215b4a47d5b3e6c4366efe9ed1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1)) {
        Py_XDECREF(cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1 = MAKE_FUNCTION_FRAME(codeobj_6f53d5215b4a47d5b3e6c4366efe9ed1, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1->m_type_description == NULL);
    frame_6f53d5215b4a47d5b3e6c4366efe9ed1 = cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6f53d5215b4a47d5b3e6c4366efe9ed1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6f53d5215b4a47d5b3e6c4366efe9ed1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_6f53d5215b4a47d5b3e6c4366efe9ed1->m_frame.f_lineno = 672;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 672;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f53d5215b4a47d5b3e6c4366efe9ed1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f53d5215b4a47d5b3e6c4366efe9ed1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f53d5215b4a47d5b3e6c4366efe9ed1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f53d5215b4a47d5b3e6c4366efe9ed1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f53d5215b4a47d5b3e6c4366efe9ed1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f53d5215b4a47d5b3e6c4366efe9ed1,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame if used for exception.
    if (frame_6f53d5215b4a47d5b3e6c4366efe9ed1 == cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1);
        cache_frame_6f53d5215b4a47d5b3e6c4366efe9ed1 = NULL;
    }

    assertFrameObject(frame_6f53d5215b4a47d5b3e6c4366efe9ed1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__37_do_executemany(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_statement = python_pars[2];
    PyObject *par_parameters = python_pars[3];
    PyObject *par_context = python_pars[4];
    struct Nuitka_FrameObject *frame_12beec795cbd9f71eb50b77e5d1e6aa9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9)) {
        Py_XDECREF(cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9 = MAKE_FUNCTION_FRAME(codeobj_12beec795cbd9f71eb50b77e5d1e6aa9, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9->m_type_description == NULL);
    frame_12beec795cbd9f71eb50b77e5d1e6aa9 = cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_12beec795cbd9f71eb50b77e5d1e6aa9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_12beec795cbd9f71eb50b77e5d1e6aa9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_12beec795cbd9f71eb50b77e5d1e6aa9->m_frame.f_lineno = 680;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 680;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12beec795cbd9f71eb50b77e5d1e6aa9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12beec795cbd9f71eb50b77e5d1e6aa9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12beec795cbd9f71eb50b77e5d1e6aa9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12beec795cbd9f71eb50b77e5d1e6aa9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12beec795cbd9f71eb50b77e5d1e6aa9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12beec795cbd9f71eb50b77e5d1e6aa9,
        type_description_1,
        par_self,
        par_cursor,
        par_statement,
        par_parameters,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_12beec795cbd9f71eb50b77e5d1e6aa9 == cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9);
        cache_frame_12beec795cbd9f71eb50b77e5d1e6aa9 = NULL;
    }

    assertFrameObject(frame_12beec795cbd9f71eb50b77e5d1e6aa9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__38_do_execute(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_statement = python_pars[2];
    PyObject *par_parameters = python_pars[3];
    PyObject *par_context = python_pars[4];
    struct Nuitka_FrameObject *frame_f7496f0af96ce76debd7e754845ed556;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f7496f0af96ce76debd7e754845ed556 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f7496f0af96ce76debd7e754845ed556)) {
        Py_XDECREF(cache_frame_f7496f0af96ce76debd7e754845ed556);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7496f0af96ce76debd7e754845ed556 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7496f0af96ce76debd7e754845ed556 = MAKE_FUNCTION_FRAME(codeobj_f7496f0af96ce76debd7e754845ed556, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f7496f0af96ce76debd7e754845ed556->m_type_description == NULL);
    frame_f7496f0af96ce76debd7e754845ed556 = cache_frame_f7496f0af96ce76debd7e754845ed556;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f7496f0af96ce76debd7e754845ed556);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f7496f0af96ce76debd7e754845ed556) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_f7496f0af96ce76debd7e754845ed556->m_frame.f_lineno = 688;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 688;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f7496f0af96ce76debd7e754845ed556);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f7496f0af96ce76debd7e754845ed556);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7496f0af96ce76debd7e754845ed556, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7496f0af96ce76debd7e754845ed556->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7496f0af96ce76debd7e754845ed556, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7496f0af96ce76debd7e754845ed556,
        type_description_1,
        par_self,
        par_cursor,
        par_statement,
        par_parameters,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_f7496f0af96ce76debd7e754845ed556 == cache_frame_f7496f0af96ce76debd7e754845ed556) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f7496f0af96ce76debd7e754845ed556);
        cache_frame_f7496f0af96ce76debd7e754845ed556 = NULL;
    }

    assertFrameObject(frame_f7496f0af96ce76debd7e754845ed556);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__39_do_execute_no_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cursor = python_pars[1];
    PyObject *par_statement = python_pars[2];
    PyObject *par_parameters = python_pars[3];
    PyObject *par_context = python_pars[4];
    struct Nuitka_FrameObject *frame_2d6c1957fa438e86787ba57425f1e3d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d6c1957fa438e86787ba57425f1e3d0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d6c1957fa438e86787ba57425f1e3d0)) {
        Py_XDECREF(cache_frame_2d6c1957fa438e86787ba57425f1e3d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d6c1957fa438e86787ba57425f1e3d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d6c1957fa438e86787ba57425f1e3d0 = MAKE_FUNCTION_FRAME(codeobj_2d6c1957fa438e86787ba57425f1e3d0, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2d6c1957fa438e86787ba57425f1e3d0->m_type_description == NULL);
    frame_2d6c1957fa438e86787ba57425f1e3d0 = cache_frame_2d6c1957fa438e86787ba57425f1e3d0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2d6c1957fa438e86787ba57425f1e3d0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2d6c1957fa438e86787ba57425f1e3d0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_2d6c1957fa438e86787ba57425f1e3d0->m_frame.f_lineno = 699;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 699;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d6c1957fa438e86787ba57425f1e3d0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d6c1957fa438e86787ba57425f1e3d0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d6c1957fa438e86787ba57425f1e3d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d6c1957fa438e86787ba57425f1e3d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d6c1957fa438e86787ba57425f1e3d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d6c1957fa438e86787ba57425f1e3d0,
        type_description_1,
        par_self,
        par_cursor,
        par_statement,
        par_parameters,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_2d6c1957fa438e86787ba57425f1e3d0 == cache_frame_2d6c1957fa438e86787ba57425f1e3d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2d6c1957fa438e86787ba57425f1e3d0);
        cache_frame_2d6c1957fa438e86787ba57425f1e3d0 = NULL;
    }

    assertFrameObject(frame_2d6c1957fa438e86787ba57425f1e3d0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__40_is_disconnect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *par_connection = python_pars[2];
    PyObject *par_cursor = python_pars[3];
    struct Nuitka_FrameObject *frame_7f8ba8e3a6af9b4cf13178b0cefd3202;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202)) {
        Py_XDECREF(cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202 = MAKE_FUNCTION_FRAME(codeobj_7f8ba8e3a6af9b4cf13178b0cefd3202, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202->m_type_description == NULL);
    frame_7f8ba8e3a6af9b4cf13178b0cefd3202 = cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f8ba8e3a6af9b4cf13178b0cefd3202);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f8ba8e3a6af9b4cf13178b0cefd3202) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_7f8ba8e3a6af9b4cf13178b0cefd3202->m_frame.f_lineno = 707;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 707;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f8ba8e3a6af9b4cf13178b0cefd3202);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f8ba8e3a6af9b4cf13178b0cefd3202);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f8ba8e3a6af9b4cf13178b0cefd3202, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f8ba8e3a6af9b4cf13178b0cefd3202->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f8ba8e3a6af9b4cf13178b0cefd3202, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f8ba8e3a6af9b4cf13178b0cefd3202,
        type_description_1,
        par_self,
        par_e,
        par_connection,
        par_cursor
    );


    // Release cached frame if used for exception.
    if (frame_7f8ba8e3a6af9b4cf13178b0cefd3202 == cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202);
        cache_frame_7f8ba8e3a6af9b4cf13178b0cefd3202 = NULL;
    }

    assertFrameObject(frame_7f8ba8e3a6af9b4cf13178b0cefd3202);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_cursor);
    Py_DECREF(par_cursor);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__43_reset_isolation_level(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_de9c60f9369435211c7d1d7f4a2857da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_de9c60f9369435211c7d1d7f4a2857da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de9c60f9369435211c7d1d7f4a2857da)) {
        Py_XDECREF(cache_frame_de9c60f9369435211c7d1d7f4a2857da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de9c60f9369435211c7d1d7f4a2857da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de9c60f9369435211c7d1d7f4a2857da = MAKE_FUNCTION_FRAME(codeobj_de9c60f9369435211c7d1d7f4a2857da, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_de9c60f9369435211c7d1d7f4a2857da->m_type_description == NULL);
    frame_de9c60f9369435211c7d1d7f4a2857da = cache_frame_de9c60f9369435211c7d1d7f4a2857da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_de9c60f9369435211c7d1d7f4a2857da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_de9c60f9369435211c7d1d7f4a2857da) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_de9c60f9369435211c7d1d7f4a2857da->m_frame.f_lineno = 813;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 813;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de9c60f9369435211c7d1d7f4a2857da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de9c60f9369435211c7d1d7f4a2857da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de9c60f9369435211c7d1d7f4a2857da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de9c60f9369435211c7d1d7f4a2857da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de9c60f9369435211c7d1d7f4a2857da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de9c60f9369435211c7d1d7f4a2857da,
        type_description_1,
        par_self,
        par_dbapi_conn
    );


    // Release cached frame if used for exception.
    if (frame_de9c60f9369435211c7d1d7f4a2857da == cache_frame_de9c60f9369435211c7d1d7f4a2857da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_de9c60f9369435211c7d1d7f4a2857da);
        cache_frame_de9c60f9369435211c7d1d7f4a2857da = NULL;
    }

    assertFrameObject(frame_de9c60f9369435211c7d1d7f4a2857da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_conn);
    Py_DECREF(par_dbapi_conn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__44_set_isolation_level(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_conn = python_pars[1];
    PyObject *par_level = python_pars[2];
    struct Nuitka_FrameObject *frame_4de7bf87ed0b7382c632353a4d296b61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4de7bf87ed0b7382c632353a4d296b61 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4de7bf87ed0b7382c632353a4d296b61)) {
        Py_XDECREF(cache_frame_4de7bf87ed0b7382c632353a4d296b61);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4de7bf87ed0b7382c632353a4d296b61 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4de7bf87ed0b7382c632353a4d296b61 = MAKE_FUNCTION_FRAME(codeobj_4de7bf87ed0b7382c632353a4d296b61, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4de7bf87ed0b7382c632353a4d296b61->m_type_description == NULL);
    frame_4de7bf87ed0b7382c632353a4d296b61 = cache_frame_4de7bf87ed0b7382c632353a4d296b61;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4de7bf87ed0b7382c632353a4d296b61);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4de7bf87ed0b7382c632353a4d296b61) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_4de7bf87ed0b7382c632353a4d296b61->m_frame.f_lineno = 840;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 840;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4de7bf87ed0b7382c632353a4d296b61);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4de7bf87ed0b7382c632353a4d296b61);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4de7bf87ed0b7382c632353a4d296b61, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4de7bf87ed0b7382c632353a4d296b61->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4de7bf87ed0b7382c632353a4d296b61, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4de7bf87ed0b7382c632353a4d296b61,
        type_description_1,
        par_self,
        par_dbapi_conn,
        par_level
    );


    // Release cached frame if used for exception.
    if (frame_4de7bf87ed0b7382c632353a4d296b61 == cache_frame_4de7bf87ed0b7382c632353a4d296b61) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4de7bf87ed0b7382c632353a4d296b61);
        cache_frame_4de7bf87ed0b7382c632353a4d296b61 = NULL;
    }

    assertFrameObject(frame_4de7bf87ed0b7382c632353a4d296b61);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_conn);
    Py_DECREF(par_dbapi_conn);
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__45_get_isolation_level(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbapi_conn = python_pars[1];
    struct Nuitka_FrameObject *frame_d3fe94e3cdb6df3fab9e6547495fd36d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d)) {
        Py_XDECREF(cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d = MAKE_FUNCTION_FRAME(codeobj_d3fe94e3cdb6df3fab9e6547495fd36d, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d->m_type_description == NULL);
    frame_d3fe94e3cdb6df3fab9e6547495fd36d = cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d3fe94e3cdb6df3fab9e6547495fd36d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d3fe94e3cdb6df3fab9e6547495fd36d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d3fe94e3cdb6df3fab9e6547495fd36d->m_frame.f_lineno = 873;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 873;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3fe94e3cdb6df3fab9e6547495fd36d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3fe94e3cdb6df3fab9e6547495fd36d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3fe94e3cdb6df3fab9e6547495fd36d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3fe94e3cdb6df3fab9e6547495fd36d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3fe94e3cdb6df3fab9e6547495fd36d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3fe94e3cdb6df3fab9e6547495fd36d,
        type_description_1,
        par_self,
        par_dbapi_conn
    );


    // Release cached frame if used for exception.
    if (frame_d3fe94e3cdb6df3fab9e6547495fd36d == cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d);
        cache_frame_d3fe94e3cdb6df3fab9e6547495fd36d = NULL;
    }

    assertFrameObject(frame_d3fe94e3cdb6df3fab9e6547495fd36d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbapi_conn);
    Py_DECREF(par_dbapi_conn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__46_get_dialect_cls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_cls);
    tmp_return_value = par_cls;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__49___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_1a68cbb23dcbadbf451dcb8d182f991c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a68cbb23dcbadbf451dcb8d182f991c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a68cbb23dcbadbf451dcb8d182f991c)) {
        Py_XDECREF(cache_frame_1a68cbb23dcbadbf451dcb8d182f991c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a68cbb23dcbadbf451dcb8d182f991c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a68cbb23dcbadbf451dcb8d182f991c = MAKE_FUNCTION_FRAME(codeobj_1a68cbb23dcbadbf451dcb8d182f991c, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1a68cbb23dcbadbf451dcb8d182f991c->m_type_description == NULL);
    frame_1a68cbb23dcbadbf451dcb8d182f991c = cache_frame_1a68cbb23dcbadbf451dcb8d182f991c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1a68cbb23dcbadbf451dcb8d182f991c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1a68cbb23dcbadbf451dcb8d182f991c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_url);
        tmp_assattr_value_1 = par_url;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1047;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a68cbb23dcbadbf451dcb8d182f991c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a68cbb23dcbadbf451dcb8d182f991c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a68cbb23dcbadbf451dcb8d182f991c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a68cbb23dcbadbf451dcb8d182f991c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a68cbb23dcbadbf451dcb8d182f991c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a68cbb23dcbadbf451dcb8d182f991c,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_1a68cbb23dcbadbf451dcb8d182f991c == cache_frame_1a68cbb23dcbadbf451dcb8d182f991c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1a68cbb23dcbadbf451dcb8d182f991c);
        cache_frame_1a68cbb23dcbadbf451dcb8d182f991c = NULL;
    }

    assertFrameObject(frame_1a68cbb23dcbadbf451dcb8d182f991c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__53_create_cursor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1cee1e984b50d7e95a617045484c677c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1cee1e984b50d7e95a617045484c677c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1cee1e984b50d7e95a617045484c677c)) {
        Py_XDECREF(cache_frame_1cee1e984b50d7e95a617045484c677c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cee1e984b50d7e95a617045484c677c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cee1e984b50d7e95a617045484c677c = MAKE_FUNCTION_FRAME(codeobj_1cee1e984b50d7e95a617045484c677c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1cee1e984b50d7e95a617045484c677c->m_type_description == NULL);
    frame_1cee1e984b50d7e95a617045484c677c = cache_frame_1cee1e984b50d7e95a617045484c677c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1cee1e984b50d7e95a617045484c677c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1cee1e984b50d7e95a617045484c677c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_1cee1e984b50d7e95a617045484c677c->m_frame.f_lineno = 1166;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1166;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1cee1e984b50d7e95a617045484c677c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1cee1e984b50d7e95a617045484c677c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1cee1e984b50d7e95a617045484c677c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cee1e984b50d7e95a617045484c677c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cee1e984b50d7e95a617045484c677c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cee1e984b50d7e95a617045484c677c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1cee1e984b50d7e95a617045484c677c == cache_frame_1cee1e984b50d7e95a617045484c677c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1cee1e984b50d7e95a617045484c677c);
        cache_frame_1cee1e984b50d7e95a617045484c677c = NULL;
    }

    assertFrameObject(frame_1cee1e984b50d7e95a617045484c677c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__54_pre_exec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1ff1f9fac06e3dbcb9af98c5540bbb34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34)) {
        Py_XDECREF(cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34 = MAKE_FUNCTION_FRAME(codeobj_1ff1f9fac06e3dbcb9af98c5540bbb34, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34->m_type_description == NULL);
    frame_1ff1f9fac06e3dbcb9af98c5540bbb34 = cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1ff1f9fac06e3dbcb9af98c5540bbb34);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1ff1f9fac06e3dbcb9af98c5540bbb34) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_1ff1f9fac06e3dbcb9af98c5540bbb34->m_frame.f_lineno = 1176;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1176;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ff1f9fac06e3dbcb9af98c5540bbb34);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ff1f9fac06e3dbcb9af98c5540bbb34);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ff1f9fac06e3dbcb9af98c5540bbb34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ff1f9fac06e3dbcb9af98c5540bbb34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ff1f9fac06e3dbcb9af98c5540bbb34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ff1f9fac06e3dbcb9af98c5540bbb34,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1ff1f9fac06e3dbcb9af98c5540bbb34 == cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34);
        cache_frame_1ff1f9fac06e3dbcb9af98c5540bbb34 = NULL;
    }

    assertFrameObject(frame_1ff1f9fac06e3dbcb9af98c5540bbb34);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__55_post_exec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d5e859ed4b5ff52a1b10150bff61b53a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d5e859ed4b5ff52a1b10150bff61b53a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d5e859ed4b5ff52a1b10150bff61b53a)) {
        Py_XDECREF(cache_frame_d5e859ed4b5ff52a1b10150bff61b53a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5e859ed4b5ff52a1b10150bff61b53a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5e859ed4b5ff52a1b10150bff61b53a = MAKE_FUNCTION_FRAME(codeobj_d5e859ed4b5ff52a1b10150bff61b53a, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d5e859ed4b5ff52a1b10150bff61b53a->m_type_description == NULL);
    frame_d5e859ed4b5ff52a1b10150bff61b53a = cache_frame_d5e859ed4b5ff52a1b10150bff61b53a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d5e859ed4b5ff52a1b10150bff61b53a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d5e859ed4b5ff52a1b10150bff61b53a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d5e859ed4b5ff52a1b10150bff61b53a->m_frame.f_lineno = 1186;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1186;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5e859ed4b5ff52a1b10150bff61b53a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5e859ed4b5ff52a1b10150bff61b53a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5e859ed4b5ff52a1b10150bff61b53a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5e859ed4b5ff52a1b10150bff61b53a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5e859ed4b5ff52a1b10150bff61b53a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5e859ed4b5ff52a1b10150bff61b53a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d5e859ed4b5ff52a1b10150bff61b53a == cache_frame_d5e859ed4b5ff52a1b10150bff61b53a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d5e859ed4b5ff52a1b10150bff61b53a);
        cache_frame_d5e859ed4b5ff52a1b10150bff61b53a = NULL;
    }

    assertFrameObject(frame_d5e859ed4b5ff52a1b10150bff61b53a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__56_result(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4eb034e42bd33f5eb3d51ffe7be0b865;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865)) {
        Py_XDECREF(cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865 = MAKE_FUNCTION_FRAME(codeobj_4eb034e42bd33f5eb3d51ffe7be0b865, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865->m_type_description == NULL);
    frame_4eb034e42bd33f5eb3d51ffe7be0b865 = cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4eb034e42bd33f5eb3d51ffe7be0b865);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4eb034e42bd33f5eb3d51ffe7be0b865) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_4eb034e42bd33f5eb3d51ffe7be0b865->m_frame.f_lineno = 1195;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1195;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4eb034e42bd33f5eb3d51ffe7be0b865);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4eb034e42bd33f5eb3d51ffe7be0b865);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4eb034e42bd33f5eb3d51ffe7be0b865, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4eb034e42bd33f5eb3d51ffe7be0b865->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4eb034e42bd33f5eb3d51ffe7be0b865, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4eb034e42bd33f5eb3d51ffe7be0b865,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4eb034e42bd33f5eb3d51ffe7be0b865 == cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865);
        cache_frame_4eb034e42bd33f5eb3d51ffe7be0b865 = NULL;
    }

    assertFrameObject(frame_4eb034e42bd33f5eb3d51ffe7be0b865);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__57_handle_dbapi_exception(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_899fa5f25b1b26d1fe7366c76949c4c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_899fa5f25b1b26d1fe7366c76949c4c5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_899fa5f25b1b26d1fe7366c76949c4c5)) {
        Py_XDECREF(cache_frame_899fa5f25b1b26d1fe7366c76949c4c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_899fa5f25b1b26d1fe7366c76949c4c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_899fa5f25b1b26d1fe7366c76949c4c5 = MAKE_FUNCTION_FRAME(codeobj_899fa5f25b1b26d1fe7366c76949c4c5, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_899fa5f25b1b26d1fe7366c76949c4c5->m_type_description == NULL);
    frame_899fa5f25b1b26d1fe7366c76949c4c5 = cache_frame_899fa5f25b1b26d1fe7366c76949c4c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_899fa5f25b1b26d1fe7366c76949c4c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_899fa5f25b1b26d1fe7366c76949c4c5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_899fa5f25b1b26d1fe7366c76949c4c5->m_frame.f_lineno = 1203;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1203;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_899fa5f25b1b26d1fe7366c76949c4c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_899fa5f25b1b26d1fe7366c76949c4c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_899fa5f25b1b26d1fe7366c76949c4c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_899fa5f25b1b26d1fe7366c76949c4c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_899fa5f25b1b26d1fe7366c76949c4c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_899fa5f25b1b26d1fe7366c76949c4c5,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_899fa5f25b1b26d1fe7366c76949c4c5 == cache_frame_899fa5f25b1b26d1fe7366c76949c4c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_899fa5f25b1b26d1fe7366c76949c4c5);
        cache_frame_899fa5f25b1b26d1fe7366c76949c4c5 = NULL;
    }

    assertFrameObject(frame_899fa5f25b1b26d1fe7366c76949c4c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__58_should_autocommit_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_statement = python_pars[1];
    struct Nuitka_FrameObject *frame_51042616f5e1d12e09b55837ba91df06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51042616f5e1d12e09b55837ba91df06 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51042616f5e1d12e09b55837ba91df06)) {
        Py_XDECREF(cache_frame_51042616f5e1d12e09b55837ba91df06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51042616f5e1d12e09b55837ba91df06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51042616f5e1d12e09b55837ba91df06 = MAKE_FUNCTION_FRAME(codeobj_51042616f5e1d12e09b55837ba91df06, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_51042616f5e1d12e09b55837ba91df06->m_type_description == NULL);
    frame_51042616f5e1d12e09b55837ba91df06 = cache_frame_51042616f5e1d12e09b55837ba91df06;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_51042616f5e1d12e09b55837ba91df06);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_51042616f5e1d12e09b55837ba91df06) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_51042616f5e1d12e09b55837ba91df06->m_frame.f_lineno = 1211;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1211;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_51042616f5e1d12e09b55837ba91df06);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_51042616f5e1d12e09b55837ba91df06);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51042616f5e1d12e09b55837ba91df06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51042616f5e1d12e09b55837ba91df06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51042616f5e1d12e09b55837ba91df06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51042616f5e1d12e09b55837ba91df06,
        type_description_1,
        par_self,
        par_statement
    );


    // Release cached frame if used for exception.
    if (frame_51042616f5e1d12e09b55837ba91df06 == cache_frame_51042616f5e1d12e09b55837ba91df06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_51042616f5e1d12e09b55837ba91df06);
        cache_frame_51042616f5e1d12e09b55837ba91df06 = NULL;
    }

    assertFrameObject(frame_51042616f5e1d12e09b55837ba91df06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__59_lastrow_has_defaults(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b0f152e7ca65196f03a5500762eec401;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b0f152e7ca65196f03a5500762eec401 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0f152e7ca65196f03a5500762eec401)) {
        Py_XDECREF(cache_frame_b0f152e7ca65196f03a5500762eec401);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0f152e7ca65196f03a5500762eec401 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0f152e7ca65196f03a5500762eec401 = MAKE_FUNCTION_FRAME(codeobj_b0f152e7ca65196f03a5500762eec401, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b0f152e7ca65196f03a5500762eec401->m_type_description == NULL);
    frame_b0f152e7ca65196f03a5500762eec401 = cache_frame_b0f152e7ca65196f03a5500762eec401;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b0f152e7ca65196f03a5500762eec401);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b0f152e7ca65196f03a5500762eec401) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_b0f152e7ca65196f03a5500762eec401->m_frame.f_lineno = 1219;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1219;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0f152e7ca65196f03a5500762eec401);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0f152e7ca65196f03a5500762eec401);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0f152e7ca65196f03a5500762eec401, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0f152e7ca65196f03a5500762eec401->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0f152e7ca65196f03a5500762eec401, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0f152e7ca65196f03a5500762eec401,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b0f152e7ca65196f03a5500762eec401 == cache_frame_b0f152e7ca65196f03a5500762eec401) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b0f152e7ca65196f03a5500762eec401);
        cache_frame_b0f152e7ca65196f03a5500762eec401 = NULL;
    }

    assertFrameObject(frame_b0f152e7ca65196f03a5500762eec401);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__60_get_rowcount(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d8e99e0fc951bc08023ef5d124e3776c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d8e99e0fc951bc08023ef5d124e3776c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d8e99e0fc951bc08023ef5d124e3776c)) {
        Py_XDECREF(cache_frame_d8e99e0fc951bc08023ef5d124e3776c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d8e99e0fc951bc08023ef5d124e3776c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d8e99e0fc951bc08023ef5d124e3776c = MAKE_FUNCTION_FRAME(codeobj_d8e99e0fc951bc08023ef5d124e3776c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d8e99e0fc951bc08023ef5d124e3776c->m_type_description == NULL);
    frame_d8e99e0fc951bc08023ef5d124e3776c = cache_frame_d8e99e0fc951bc08023ef5d124e3776c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d8e99e0fc951bc08023ef5d124e3776c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d8e99e0fc951bc08023ef5d124e3776c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d8e99e0fc951bc08023ef5d124e3776c->m_frame.f_lineno = 1229;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1229;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d8e99e0fc951bc08023ef5d124e3776c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d8e99e0fc951bc08023ef5d124e3776c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d8e99e0fc951bc08023ef5d124e3776c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d8e99e0fc951bc08023ef5d124e3776c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d8e99e0fc951bc08023ef5d124e3776c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d8e99e0fc951bc08023ef5d124e3776c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d8e99e0fc951bc08023ef5d124e3776c == cache_frame_d8e99e0fc951bc08023ef5d124e3776c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d8e99e0fc951bc08023ef5d124e3776c);
        cache_frame_d8e99e0fc951bc08023ef5d124e3776c = NULL;
    }

    assertFrameObject(frame_d8e99e0fc951bc08023ef5d124e3776c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__62_contextual_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_arg = python_pars[1];
    PyObject *par_kw = python_pars[2];
    struct Nuitka_FrameObject *frame_cf8081e52b03ca53dad94ec2a47197b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf8081e52b03ca53dad94ec2a47197b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf8081e52b03ca53dad94ec2a47197b7)) {
        Py_XDECREF(cache_frame_cf8081e52b03ca53dad94ec2a47197b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf8081e52b03ca53dad94ec2a47197b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf8081e52b03ca53dad94ec2a47197b7 = MAKE_FUNCTION_FRAME(codeobj_cf8081e52b03ca53dad94ec2a47197b7, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cf8081e52b03ca53dad94ec2a47197b7->m_type_description == NULL);
    frame_cf8081e52b03ca53dad94ec2a47197b7 = cache_frame_cf8081e52b03ca53dad94ec2a47197b7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cf8081e52b03ca53dad94ec2a47197b7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cf8081e52b03ca53dad94ec2a47197b7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[53]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arg);
        tmp_dircall_arg2_1 = par_arg;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf8081e52b03ca53dad94ec2a47197b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf8081e52b03ca53dad94ec2a47197b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf8081e52b03ca53dad94ec2a47197b7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf8081e52b03ca53dad94ec2a47197b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf8081e52b03ca53dad94ec2a47197b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf8081e52b03ca53dad94ec2a47197b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf8081e52b03ca53dad94ec2a47197b7,
        type_description_1,
        par_self,
        par_arg,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_cf8081e52b03ca53dad94ec2a47197b7 == cache_frame_cf8081e52b03ca53dad94ec2a47197b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cf8081e52b03ca53dad94ec2a47197b7);
        cache_frame_cf8081e52b03ca53dad94ec2a47197b7 = NULL;
    }

    assertFrameObject(frame_cf8081e52b03ca53dad94ec2a47197b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__63__contextual_connect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9b28cda6254fceff946f5707c7bd06f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b28cda6254fceff946f5707c7bd06f3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b28cda6254fceff946f5707c7bd06f3)) {
        Py_XDECREF(cache_frame_9b28cda6254fceff946f5707c7bd06f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b28cda6254fceff946f5707c7bd06f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b28cda6254fceff946f5707c7bd06f3 = MAKE_FUNCTION_FRAME(codeobj_9b28cda6254fceff946f5707c7bd06f3, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9b28cda6254fceff946f5707c7bd06f3->m_type_description == NULL);
    frame_9b28cda6254fceff946f5707c7bd06f3 = cache_frame_9b28cda6254fceff946f5707c7bd06f3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9b28cda6254fceff946f5707c7bd06f3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9b28cda6254fceff946f5707c7bd06f3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_9b28cda6254fceff946f5707c7bd06f3->m_frame.f_lineno = 1286;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1286;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b28cda6254fceff946f5707c7bd06f3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b28cda6254fceff946f5707c7bd06f3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b28cda6254fceff946f5707c7bd06f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b28cda6254fceff946f5707c7bd06f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b28cda6254fceff946f5707c7bd06f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b28cda6254fceff946f5707c7bd06f3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9b28cda6254fceff946f5707c7bd06f3 == cache_frame_9b28cda6254fceff946f5707c7bd06f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9b28cda6254fceff946f5707c7bd06f3);
        cache_frame_9b28cda6254fceff946f5707c7bd06f3 = NULL;
    }

    assertFrameObject(frame_9b28cda6254fceff946f5707c7bd06f3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__64_create(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_entity = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_2c9ff65b8bff5e00392e51a6e949ec0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d)) {
        Py_XDECREF(cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d = MAKE_FUNCTION_FRAME(codeobj_2c9ff65b8bff5e00392e51a6e949ec0d, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d->m_type_description == NULL);
    frame_2c9ff65b8bff5e00392e51a6e949ec0d = cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2c9ff65b8bff5e00392e51a6e949ec0d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2c9ff65b8bff5e00392e51a6e949ec0d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_2c9ff65b8bff5e00392e51a6e949ec0d->m_frame.f_lineno = 1299;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1299;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c9ff65b8bff5e00392e51a6e949ec0d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c9ff65b8bff5e00392e51a6e949ec0d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c9ff65b8bff5e00392e51a6e949ec0d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c9ff65b8bff5e00392e51a6e949ec0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c9ff65b8bff5e00392e51a6e949ec0d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c9ff65b8bff5e00392e51a6e949ec0d,
        type_description_1,
        par_self,
        par_entity,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_2c9ff65b8bff5e00392e51a6e949ec0d == cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d);
        cache_frame_2c9ff65b8bff5e00392e51a6e949ec0d = NULL;
    }

    assertFrameObject(frame_2c9ff65b8bff5e00392e51a6e949ec0d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_entity);
    Py_DECREF(par_entity);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__65_drop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_entity = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_ae3a07fb3e6f1c756dbec939e57d074b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae3a07fb3e6f1c756dbec939e57d074b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae3a07fb3e6f1c756dbec939e57d074b)) {
        Py_XDECREF(cache_frame_ae3a07fb3e6f1c756dbec939e57d074b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae3a07fb3e6f1c756dbec939e57d074b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae3a07fb3e6f1c756dbec939e57d074b = MAKE_FUNCTION_FRAME(codeobj_ae3a07fb3e6f1c756dbec939e57d074b, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ae3a07fb3e6f1c756dbec939e57d074b->m_type_description == NULL);
    frame_ae3a07fb3e6f1c756dbec939e57d074b = cache_frame_ae3a07fb3e6f1c756dbec939e57d074b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ae3a07fb3e6f1c756dbec939e57d074b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ae3a07fb3e6f1c756dbec939e57d074b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_ae3a07fb3e6f1c756dbec939e57d074b->m_frame.f_lineno = 1312;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1312;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae3a07fb3e6f1c756dbec939e57d074b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae3a07fb3e6f1c756dbec939e57d074b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae3a07fb3e6f1c756dbec939e57d074b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae3a07fb3e6f1c756dbec939e57d074b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae3a07fb3e6f1c756dbec939e57d074b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae3a07fb3e6f1c756dbec939e57d074b,
        type_description_1,
        par_self,
        par_entity,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_ae3a07fb3e6f1c756dbec939e57d074b == cache_frame_ae3a07fb3e6f1c756dbec939e57d074b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ae3a07fb3e6f1c756dbec939e57d074b);
        cache_frame_ae3a07fb3e6f1c756dbec939e57d074b = NULL;
    }

    assertFrameObject(frame_ae3a07fb3e6f1c756dbec939e57d074b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_entity);
    Py_DECREF(par_entity);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__66_execute(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_object_ = python_pars[1];
    PyObject *par_multiparams = python_pars[2];
    PyObject *par_params = python_pars[3];
    struct Nuitka_FrameObject *frame_f237ee870068eadc1393131f71b2d083;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f237ee870068eadc1393131f71b2d083 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f237ee870068eadc1393131f71b2d083)) {
        Py_XDECREF(cache_frame_f237ee870068eadc1393131f71b2d083);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f237ee870068eadc1393131f71b2d083 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f237ee870068eadc1393131f71b2d083 = MAKE_FUNCTION_FRAME(codeobj_f237ee870068eadc1393131f71b2d083, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f237ee870068eadc1393131f71b2d083->m_type_description == NULL);
    frame_f237ee870068eadc1393131f71b2d083 = cache_frame_f237ee870068eadc1393131f71b2d083;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f237ee870068eadc1393131f71b2d083);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f237ee870068eadc1393131f71b2d083) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_f237ee870068eadc1393131f71b2d083->m_frame.f_lineno = 1317;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1317;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f237ee870068eadc1393131f71b2d083);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f237ee870068eadc1393131f71b2d083);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f237ee870068eadc1393131f71b2d083, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f237ee870068eadc1393131f71b2d083->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f237ee870068eadc1393131f71b2d083, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f237ee870068eadc1393131f71b2d083,
        type_description_1,
        par_self,
        par_object_,
        par_multiparams,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_f237ee870068eadc1393131f71b2d083 == cache_frame_f237ee870068eadc1393131f71b2d083) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f237ee870068eadc1393131f71b2d083);
        cache_frame_f237ee870068eadc1393131f71b2d083 = NULL;
    }

    assertFrameObject(frame_f237ee870068eadc1393131f71b2d083);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object_);
    Py_DECREF(par_object_);
    CHECK_OBJECT(par_multiparams);
    Py_DECREF(par_multiparams);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__67_scalar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_object_ = python_pars[1];
    PyObject *par_multiparams = python_pars[2];
    PyObject *par_params = python_pars[3];
    struct Nuitka_FrameObject *frame_5c42394baf703f2b190c2840cf4ecc70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c42394baf703f2b190c2840cf4ecc70 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c42394baf703f2b190c2840cf4ecc70)) {
        Py_XDECREF(cache_frame_5c42394baf703f2b190c2840cf4ecc70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c42394baf703f2b190c2840cf4ecc70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c42394baf703f2b190c2840cf4ecc70 = MAKE_FUNCTION_FRAME(codeobj_5c42394baf703f2b190c2840cf4ecc70, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5c42394baf703f2b190c2840cf4ecc70->m_type_description == NULL);
    frame_5c42394baf703f2b190c2840cf4ecc70 = cache_frame_5c42394baf703f2b190c2840cf4ecc70;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5c42394baf703f2b190c2840cf4ecc70);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5c42394baf703f2b190c2840cf4ecc70) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_5c42394baf703f2b190c2840cf4ecc70->m_frame.f_lineno = 1324;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1324;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c42394baf703f2b190c2840cf4ecc70);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c42394baf703f2b190c2840cf4ecc70);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c42394baf703f2b190c2840cf4ecc70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c42394baf703f2b190c2840cf4ecc70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c42394baf703f2b190c2840cf4ecc70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c42394baf703f2b190c2840cf4ecc70,
        type_description_1,
        par_self,
        par_object_,
        par_multiparams,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_5c42394baf703f2b190c2840cf4ecc70 == cache_frame_5c42394baf703f2b190c2840cf4ecc70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5c42394baf703f2b190c2840cf4ecc70);
        cache_frame_5c42394baf703f2b190c2840cf4ecc70 = NULL;
    }

    assertFrameObject(frame_5c42394baf703f2b190c2840cf4ecc70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object_);
    Py_DECREF(par_object_);
    CHECK_OBJECT(par_multiparams);
    Py_DECREF(par_multiparams);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__68__run_visitor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_visitorcallable = python_pars[1];
    PyObject *par_element = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_d7803626e1f58558fd39e05433ccc77c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7803626e1f58558fd39e05433ccc77c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7803626e1f58558fd39e05433ccc77c)) {
        Py_XDECREF(cache_frame_d7803626e1f58558fd39e05433ccc77c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7803626e1f58558fd39e05433ccc77c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7803626e1f58558fd39e05433ccc77c = MAKE_FUNCTION_FRAME(codeobj_d7803626e1f58558fd39e05433ccc77c, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d7803626e1f58558fd39e05433ccc77c->m_type_description == NULL);
    frame_d7803626e1f58558fd39e05433ccc77c = cache_frame_d7803626e1f58558fd39e05433ccc77c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d7803626e1f58558fd39e05433ccc77c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d7803626e1f58558fd39e05433ccc77c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d7803626e1f58558fd39e05433ccc77c->m_frame.f_lineno = 1327;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1327;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7803626e1f58558fd39e05433ccc77c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7803626e1f58558fd39e05433ccc77c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7803626e1f58558fd39e05433ccc77c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7803626e1f58558fd39e05433ccc77c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7803626e1f58558fd39e05433ccc77c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7803626e1f58558fd39e05433ccc77c,
        type_description_1,
        par_self,
        par_visitorcallable,
        par_element,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_d7803626e1f58558fd39e05433ccc77c == cache_frame_d7803626e1f58558fd39e05433ccc77c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d7803626e1f58558fd39e05433ccc77c);
        cache_frame_d7803626e1f58558fd39e05433ccc77c = NULL;
    }

    assertFrameObject(frame_d7803626e1f58558fd39e05433ccc77c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_visitorcallable);
    Py_DECREF(par_visitorcallable);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$engine$interfaces$$$function__69__execute_clauseelement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_elem = python_pars[1];
    PyObject *par_multiparams = python_pars[2];
    PyObject *par_params = python_pars[3];
    struct Nuitka_FrameObject *frame_defbafd60ccf706b20e612f467b024c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_defbafd60ccf706b20e612f467b024c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_defbafd60ccf706b20e612f467b024c0)) {
        Py_XDECREF(cache_frame_defbafd60ccf706b20e612f467b024c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_defbafd60ccf706b20e612f467b024c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_defbafd60ccf706b20e612f467b024c0 = MAKE_FUNCTION_FRAME(codeobj_defbafd60ccf706b20e612f467b024c0, module_sqlalchemy$engine$interfaces, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_defbafd60ccf706b20e612f467b024c0->m_type_description == NULL);
    frame_defbafd60ccf706b20e612f467b024c0 = cache_frame_defbafd60ccf706b20e612f467b024c0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_defbafd60ccf706b20e612f467b024c0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_defbafd60ccf706b20e612f467b024c0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_defbafd60ccf706b20e612f467b024c0->m_frame.f_lineno = 1330;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1330;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_defbafd60ccf706b20e612f467b024c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_defbafd60ccf706b20e612f467b024c0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_defbafd60ccf706b20e612f467b024c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_defbafd60ccf706b20e612f467b024c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_defbafd60ccf706b20e612f467b024c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_defbafd60ccf706b20e612f467b024c0,
        type_description_1,
        par_self,
        par_elem,
        par_multiparams,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_defbafd60ccf706b20e612f467b024c0 == cache_frame_defbafd60ccf706b20e612f467b024c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_defbafd60ccf706b20e612f467b024c0);
        cache_frame_defbafd60ccf706b20e612f467b024c0 = NULL;
    }

    assertFrameObject(frame_defbafd60ccf706b20e612f467b024c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_multiparams);
    Py_DECREF(par_multiparams);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__10_get_temp_table_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__10_get_temp_table_names,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_0e2a25df6b56e43df433b7cf3c824767,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__11_get_view_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__11_get_view_names,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_fc2d74422e72e3320829896b2d02605c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__12_get_temp_view_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__12_get_temp_view_names,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_70095111510e1376981ed8b6b8f09499,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__13_get_view_definition(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__13_get_view_definition,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_11de30a99489c6a55ef2a92fc7089c5b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__14_get_indexes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__14_get_indexes,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_10b68fe12fcba381b2f2acbb72ceaf41,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__15_get_unique_constraints(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__15_get_unique_constraints,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_c80d2a02ea5d198ed941cb406470c7b4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__16_get_check_constraints(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__16_get_check_constraints,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_5277d5225f70262fb2913837d166e2c1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__17_get_table_comment(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__17_get_table_comment,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_ed647f442edad22c7e8cfa17b5705156,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__18_normalize_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__18_normalize_name,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_967f6aead762243c7708a3c3e27aa0b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__19_denormalize_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__19_denormalize_name,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_14e3da2da9fb88b59a5ce0e38d5fe97e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__1_create_connect_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__1_create_connect_args,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_6920a23eac3dad1c477eeb1c83e200f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__20_has_table(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__20_has_table,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_0b337e6ff21a96b079a0f4a0d3d19609,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__21_has_sequence(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__21_has_sequence,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_1e858af01461f13ff0f8de725c8412c0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_1f30e0b7ad0ec12f6d0b464e60417b2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_f4ab7e7c3bab0047e7a9732229101df1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__24_do_begin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__24_do_begin,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_e02c7e61f14d91e75489da5b273e875d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__25_do_rollback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__25_do_rollback,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_60d4ebfa9b9098d8607cb9c49217f6b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__26_do_commit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__26_do_commit,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_05f9d8e20785be9b62ee176bc8591bef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__27_do_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__27_do_close,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_ee2c0ba538729a7673c18390609e871a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__28_create_xid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__28_create_xid,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_7c904160abdf265854cb86f90374fd41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__29_do_savepoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__29_do_savepoint,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_44590c6b842866984075ac848b9da078,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__2_type_descriptor,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_eeb41606c5eec5a333f1878afb7ae30f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__30_do_rollback_to_savepoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__30_do_rollback_to_savepoint,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_2d18040194767d7fde1cbee95372a647,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__31_do_release_savepoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__31_do_release_savepoint,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_b6545915db371b714dbd89effedf56ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__32_do_begin_twophase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__32_do_begin_twophase,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_453f43e91d1427113cc66b12a7c37d32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__33_do_prepare_twophase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__33_do_prepare_twophase,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_1aad30d44084880c09b6d74312d9d6fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__34_do_rollback_twophase(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__34_do_rollback_twophase,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_b95a58995ca53225440ca88c51d03d17,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__35_do_commit_twophase(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__35_do_commit_twophase,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_4cb346fa6c2b283ba4e5787ea6fc3ca1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__36_do_recover_twophase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__36_do_recover_twophase,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_6f53d5215b4a47d5b3e6c4366efe9ed1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__37_do_executemany(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__37_do_executemany,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_12beec795cbd9f71eb50b77e5d1e6aa9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__38_do_execute(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__38_do_execute,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_f7496f0af96ce76debd7e754845ed556,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__39_do_execute_no_params(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__39_do_execute_no_params,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_2d6c1957fa438e86787ba57425f1e3d0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__3_initialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_7360b01e5178c4ea5d35f977cc80a6ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__40_is_disconnect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__40_is_disconnect,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_7f8ba8e3a6af9b4cf13178b0cefd3202,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__41_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_d9dd83326ed49cc9ee24fd3edb27a527,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[175],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__42_on_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_5c7a4bf07ebc0951ddeb8d53b5e3b4a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[178],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__43_reset_isolation_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__43_reset_isolation_level,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_de9c60f9369435211c7d1d7f4a2857da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__44_set_isolation_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__44_set_isolation_level,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_4de7bf87ed0b7382c632353a4d296b61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__45_get_isolation_level() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__45_get_isolation_level,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_d3fe94e3cdb6df3fab9e6547495fd36d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__46_get_dialect_cls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__46_get_dialect_cls,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_bb591771b90f7e0071ea4d4aa02a49f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__47_load_provisioning() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_273b8baa34d34fb37604e32b8d45ea4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[189],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__48_engine_created() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_76fc42388e4945248e4c8327f6f80f5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[192],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__49___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__49___init__,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_1a68cbb23dcbadbf451dcb8d182f991c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__4_reflecttable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__4_reflecttable,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_a4275d0de05945d509dabca581c43302,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__50_handle_dialect_kwargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_08d53bc1a73f9bc34bbd5383e297076a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[200],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__51_handle_pool_kwargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_c8598e07d183a2a4e174c3ba7acb22ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[203],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__52_engine_created() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_8d799d6fcdc87ef14ef1d7d413bbb7a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[206],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__53_create_cursor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__53_create_cursor,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_1cee1e984b50d7e95a617045484c677c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__54_pre_exec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__54_pre_exec,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_1ff1f9fac06e3dbcb9af98c5540bbb34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__55_post_exec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__55_post_exec,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_d5e859ed4b5ff52a1b10150bff61b53a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__56_result() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__56_result,
        mod_consts[217],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_4eb034e42bd33f5eb3d51ffe7be0b865,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__57_handle_dbapi_exception() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__57_handle_dbapi_exception,
        mod_consts[219],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_899fa5f25b1b26d1fe7366c76949c4c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__58_should_autocommit_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__58_should_autocommit_text,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_51042616f5e1d12e09b55837ba91df06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__59_lastrow_has_defaults() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__59_lastrow_has_defaults,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_b0f152e7ca65196f03a5500762eec401,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__5_get_columns(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__5_get_columns,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_02576aef3bc92055e1dfbaba74fb903a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__60_get_rowcount() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__60_get_rowcount,
        mod_consts[225],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_d8e99e0fc951bc08023ef5d124e3776c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__61_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_dfebded8798b18a8af672e6372711114,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[229],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__62_contextual_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__62_contextual_connect,
        mod_consts[233],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_cf8081e52b03ca53dad94ec2a47197b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__63__contextual_connect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__63__contextual_connect,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_9b28cda6254fceff946f5707c7bd06f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__64_create() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__64_create,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_2c9ff65b8bff5e00392e51a6e949ec0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__65_drop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__65_drop,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_ae3a07fb3e6f1c756dbec939e57d074b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__66_execute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__66_execute,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_f237ee870068eadc1393131f71b2d083,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__67_scalar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__67_scalar,
        mod_consts[244],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_5c42394baf703f2b190c2840cf4ecc70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__68__run_visitor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__68__run_visitor,
        mod_consts[246],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_d7803626e1f58558fd39e05433ccc77c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__69__execute_clauseelement(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__69__execute_clauseelement,
        mod_consts[249],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        codeobj_defbafd60ccf706b20e612f467b024c0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__6_get_primary_keys(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__6_get_primary_keys,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_76b2936a6607921e086ca175a0f72828,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__7_get_pk_constraint(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__7_get_pk_constraint,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_ad151dcac90b060ea83dc990fe17dc8e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__8_get_foreign_keys(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__8_get_foreign_keys,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_75de8ce34b0c3ed0a8ae1362022d1bed,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__9_get_table_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$engine$interfaces$$$function__9_get_table_names,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_63877fe67cc8873b04f8d8ddd06b5c01,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$engine$interfaces,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_sqlalchemy$engine$interfaces[] = {
    impl_sqlalchemy$engine$interfaces$$$function__1_create_connect_args,
    impl_sqlalchemy$engine$interfaces$$$function__2_type_descriptor,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__4_reflecttable,
    impl_sqlalchemy$engine$interfaces$$$function__5_get_columns,
    impl_sqlalchemy$engine$interfaces$$$function__6_get_primary_keys,
    impl_sqlalchemy$engine$interfaces$$$function__7_get_pk_constraint,
    impl_sqlalchemy$engine$interfaces$$$function__8_get_foreign_keys,
    impl_sqlalchemy$engine$interfaces$$$function__9_get_table_names,
    impl_sqlalchemy$engine$interfaces$$$function__10_get_temp_table_names,
    impl_sqlalchemy$engine$interfaces$$$function__11_get_view_names,
    impl_sqlalchemy$engine$interfaces$$$function__12_get_temp_view_names,
    impl_sqlalchemy$engine$interfaces$$$function__13_get_view_definition,
    impl_sqlalchemy$engine$interfaces$$$function__14_get_indexes,
    impl_sqlalchemy$engine$interfaces$$$function__15_get_unique_constraints,
    impl_sqlalchemy$engine$interfaces$$$function__16_get_check_constraints,
    impl_sqlalchemy$engine$interfaces$$$function__17_get_table_comment,
    impl_sqlalchemy$engine$interfaces$$$function__18_normalize_name,
    impl_sqlalchemy$engine$interfaces$$$function__19_denormalize_name,
    impl_sqlalchemy$engine$interfaces$$$function__20_has_table,
    impl_sqlalchemy$engine$interfaces$$$function__21_has_sequence,
    impl_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info,
    impl_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name,
    impl_sqlalchemy$engine$interfaces$$$function__24_do_begin,
    impl_sqlalchemy$engine$interfaces$$$function__25_do_rollback,
    impl_sqlalchemy$engine$interfaces$$$function__26_do_commit,
    impl_sqlalchemy$engine$interfaces$$$function__27_do_close,
    impl_sqlalchemy$engine$interfaces$$$function__28_create_xid,
    impl_sqlalchemy$engine$interfaces$$$function__29_do_savepoint,
    impl_sqlalchemy$engine$interfaces$$$function__30_do_rollback_to_savepoint,
    impl_sqlalchemy$engine$interfaces$$$function__31_do_release_savepoint,
    impl_sqlalchemy$engine$interfaces$$$function__32_do_begin_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__33_do_prepare_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__34_do_rollback_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__35_do_commit_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__36_do_recover_twophase,
    impl_sqlalchemy$engine$interfaces$$$function__37_do_executemany,
    impl_sqlalchemy$engine$interfaces$$$function__38_do_execute,
    impl_sqlalchemy$engine$interfaces$$$function__39_do_execute_no_params,
    impl_sqlalchemy$engine$interfaces$$$function__40_is_disconnect,
    NULL,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__43_reset_isolation_level,
    impl_sqlalchemy$engine$interfaces$$$function__44_set_isolation_level,
    impl_sqlalchemy$engine$interfaces$$$function__45_get_isolation_level,
    impl_sqlalchemy$engine$interfaces$$$function__46_get_dialect_cls,
    NULL,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__49___init__,
    NULL,
    NULL,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__53_create_cursor,
    impl_sqlalchemy$engine$interfaces$$$function__54_pre_exec,
    impl_sqlalchemy$engine$interfaces$$$function__55_post_exec,
    impl_sqlalchemy$engine$interfaces$$$function__56_result,
    impl_sqlalchemy$engine$interfaces$$$function__57_handle_dbapi_exception,
    impl_sqlalchemy$engine$interfaces$$$function__58_should_autocommit_text,
    impl_sqlalchemy$engine$interfaces$$$function__59_lastrow_has_defaults,
    impl_sqlalchemy$engine$interfaces$$$function__60_get_rowcount,
    NULL,
    impl_sqlalchemy$engine$interfaces$$$function__62_contextual_connect,
    impl_sqlalchemy$engine$interfaces$$$function__63__contextual_connect,
    impl_sqlalchemy$engine$interfaces$$$function__64_create,
    impl_sqlalchemy$engine$interfaces$$$function__65_drop,
    impl_sqlalchemy$engine$interfaces$$$function__66_execute,
    impl_sqlalchemy$engine$interfaces$$$function__67_scalar,
    impl_sqlalchemy$engine$interfaces$$$function__68__run_visitor,
    impl_sqlalchemy$engine$interfaces$$$function__69__execute_clauseelement,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_sqlalchemy$engine$interfaces;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_sqlalchemy$engine$interfaces) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_sqlalchemy$engine$interfaces[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_sqlalchemy$engine$interfaces,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_sqlalchemy$engine$interfaces(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.engine.interfaces");

    // Store the module for future use.
    module_sqlalchemy$engine$interfaces = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.interfaces: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.interfaces: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.engine.interfaces: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$engine$interfaces\n");

    moduledict_sqlalchemy$engine$interfaces = MODULE_DICT(module_sqlalchemy$engine$interfaces);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$engine$interfaces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[66]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$engine$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$engine$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$engine$interfaces);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_sqlalchemy$engine$interfaces);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    struct Nuitka_FrameObject *frame_7349435483dd5edb11380aa9c9cd973b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_db384106ebc3dbd66293799519afe997_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_db384106ebc3dbd66293799519afe997_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941 = NULL;
    struct Nuitka_FrameObject *frame_766e3a015dc2e13c41baf55510ded71c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_766e3a015dc2e13c41baf55510ded71c_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065 = NULL;
    struct Nuitka_FrameObject *frame_e93c13f045868eb7055ae21cd49d4b80_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e93c13f045868eb7055ae21cd49d4b80_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232 = NULL;
    struct Nuitka_FrameObject *frame_cf0780091c8a6e2f0dcc71c49786a46d_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333 = NULL;
    struct Nuitka_FrameObject *frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_7349435483dd5edb11380aa9c9cd973b = MAKE_MODULE_FRAME(codeobj_7349435483dd5edb11380aa9c9cd973b, module_sqlalchemy$engine$interfaces);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7349435483dd5edb11380aa9c9cd973b);
    assert(Py_REFCNT(frame_7349435483dd5edb11380aa9c9cd973b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[64], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[66];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$engine$interfaces;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[67];
        tmp_level_value_1 = mod_consts[68];
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$engine$interfaces,
                mod_consts[69],
                mod_consts[70]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[71];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$engine$interfaces;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[72];
        tmp_level_value_2 = mod_consts[68];
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$engine$interfaces,
                mod_consts[73],
                mod_consts[70]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[71];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$engine$interfaces;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[74];
        tmp_level_value_3 = mod_consts[68];
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 12;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$engine$interfaces,
                mod_consts[75],
                mod_consts[70]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_6);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_7 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[77];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[70];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_9 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[78]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[78]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[79];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 15;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[80]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[82];
        tmp_getattr_default_1 = mod_consts[83];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[82]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_db384106ebc3dbd66293799519afe997_2)) {
            Py_XDECREF(cache_frame_db384106ebc3dbd66293799519afe997_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_db384106ebc3dbd66293799519afe997_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_db384106ebc3dbd66293799519afe997_2 = MAKE_FUNCTION_FRAME(codeobj_db384106ebc3dbd66293799519afe997, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_db384106ebc3dbd66293799519afe997_2->m_type_description == NULL);
        frame_db384106ebc3dbd66293799519afe997_2 = cache_frame_db384106ebc3dbd66293799519afe997_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_db384106ebc3dbd66293799519afe997_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_db384106ebc3dbd66293799519afe997_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__1_create_connect_args();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_2 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor();

            frame_db384106ebc3dbd66293799519afe997_2->m_frame.f_lineno = 183;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__2_type_descriptor();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__3_initialize();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__4_reflecttable();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[97], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[99];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__5_get_columns(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_defaults_2;
            tmp_called_instance_1 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[69]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 271;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_db384106ebc3dbd66293799519afe997_2->m_frame.f_lineno = 271;
            tmp_called_value_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[102],
                &PyTuple_GET_ITEM(mod_consts[103], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = mod_consts[99];
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__6_get_primary_keys(tmp_defaults_2);

            frame_db384106ebc3dbd66293799519afe997_2->m_frame.f_lineno = 271;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[99];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__7_get_pk_constraint(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[99];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__8_get_foreign_keys(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[99];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__9_get_table_names(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[99];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__10_get_temp_table_names(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[99];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__11_get_view_names(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[99];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__12_get_temp_view_names(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[99];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__13_get_view_definition(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = mod_consts[99];
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__14_get_indexes(tmp_defaults_10);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_11;
            tmp_defaults_11 = mod_consts[99];
            Py_INCREF(tmp_defaults_11);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__15_get_unique_constraints(tmp_defaults_11);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_12;
            tmp_defaults_12 = mod_consts[99];
            Py_INCREF(tmp_defaults_12);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__16_get_check_constraints(tmp_defaults_12);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_13;
            tmp_defaults_13 = mod_consts[99];
            Py_INCREF(tmp_defaults_13);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__17_get_table_comment(tmp_defaults_13);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__18_normalize_name();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__19_denormalize_name();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[130], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_14;
            tmp_defaults_14 = mod_consts[99];
            Py_INCREF(tmp_defaults_14);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__20_has_table(tmp_defaults_14);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_15;
            tmp_defaults_15 = mod_consts[99];
            Py_INCREF(tmp_defaults_15);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__21_has_sequence(tmp_defaults_15);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__22__get_server_version_info();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[136], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__23__get_default_schema_name();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[138], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__24_do_begin();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__25_do_rollback();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[142], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__26_do_commit();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[144], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__27_do_close();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[146], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__28_create_xid();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__29_do_savepoint();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[150], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__30_do_rollback_to_savepoint();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__31_do_release_savepoint();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[154], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__32_do_begin_twophase();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[156], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__33_do_prepare_twophase();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_16;
            tmp_defaults_16 = mod_consts[160];
            Py_INCREF(tmp_defaults_16);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__34_do_rollback_twophase(tmp_defaults_16);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[161], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_17;
            tmp_defaults_17 = mod_consts[160];
            Py_INCREF(tmp_defaults_17);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__35_do_commit_twophase(tmp_defaults_17);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__36_do_recover_twophase();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[165], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_18;
            tmp_defaults_18 = mod_consts[99];
            Py_INCREF(tmp_defaults_18);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__37_do_executemany(tmp_defaults_18);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[167], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 674;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_19;
            tmp_defaults_19 = mod_consts[99];
            Py_INCREF(tmp_defaults_19);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__38_do_execute(tmp_defaults_19);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[169], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 682;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_20;
            tmp_defaults_20 = mod_consts[99];
            Py_INCREF(tmp_defaults_20);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__39_do_execute_no_params(tmp_defaults_20);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[171], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__40_is_disconnect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[173], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__41_connect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__42_on_connect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[179], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__43_reset_isolation_level();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[181], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__44_set_isolation_level();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__45_get_isolation_level();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[185], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 842;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 875;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_4 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 875;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 875;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__46_get_dialect_cls();

            frame_db384106ebc3dbd66293799519afe997_2->m_frame.f_lineno = 875;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 875;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__46_get_dialect_cls();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[187], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 876;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_classmethod_arg_3;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 891;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_5 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 891;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 891;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__47_load_provisioning();

            frame_db384106ebc3dbd66293799519afe997_2->m_frame.f_lineno = 891;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 891;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;


            tmp_classmethod_arg_3 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__47_load_provisioning();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[190], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 892;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_classmethod_arg_4;
            tmp_res = MAPPING_HAS_ITEM(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 920;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_6 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[91]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 920;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 920;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__48_engine_created();

            frame_db384106ebc3dbd66293799519afe997_2->m_frame.f_lineno = 920;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 920;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;


            tmp_classmethod_arg_4 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__48_engine_created();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[193], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 921;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_db384106ebc3dbd66293799519afe997_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_db384106ebc3dbd66293799519afe997_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_db384106ebc3dbd66293799519afe997_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_db384106ebc3dbd66293799519afe997_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_db384106ebc3dbd66293799519afe997_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_db384106ebc3dbd66293799519afe997_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_db384106ebc3dbd66293799519afe997_2 == cache_frame_db384106ebc3dbd66293799519afe997_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_db384106ebc3dbd66293799519afe997_2);
            cache_frame_db384106ebc3dbd66293799519afe997_2 = NULL;
        }

        assertFrameObject(frame_db384106ebc3dbd66293799519afe997_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[76];
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_7 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[79];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 15;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15);
        locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15);
        locals_sqlalchemy$engine$interfaces$$$class__1_Dialect_15 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_14 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[77];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[70];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 941;

        goto try_except_handler_4;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[78]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[78]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        tmp_tuple_element_4 = mod_consts[196];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 941;
        tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[80]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_value_2 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[82];
        tmp_getattr_default_2 = mod_consts[83];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[82]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 941;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_value_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 941;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_18;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[197];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[196];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_766e3a015dc2e13c41baf55510ded71c_3)) {
            Py_XDECREF(cache_frame_766e3a015dc2e13c41baf55510ded71c_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_766e3a015dc2e13c41baf55510ded71c_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_766e3a015dc2e13c41baf55510ded71c_3 = MAKE_FUNCTION_FRAME(codeobj_766e3a015dc2e13c41baf55510ded71c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_766e3a015dc2e13c41baf55510ded71c_3->m_type_description == NULL);
        frame_766e3a015dc2e13c41baf55510ded71c_3 = cache_frame_766e3a015dc2e13c41baf55510ded71c_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_766e3a015dc2e13c41baf55510ded71c_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_766e3a015dc2e13c41baf55510ded71c_3) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__49___init__();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[198], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1028;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__50_handle_dialect_kwargs();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[201], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__51_handle_pool_kwargs();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[204], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__52_engine_created();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[193], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_766e3a015dc2e13c41baf55510ded71c_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_766e3a015dc2e13c41baf55510ded71c_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_766e3a015dc2e13c41baf55510ded71c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_766e3a015dc2e13c41baf55510ded71c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_766e3a015dc2e13c41baf55510ded71c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_766e3a015dc2e13c41baf55510ded71c_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_766e3a015dc2e13c41baf55510ded71c_3 == cache_frame_766e3a015dc2e13c41baf55510ded71c_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_766e3a015dc2e13c41baf55510ded71c_3);
            cache_frame_766e3a015dc2e13c41baf55510ded71c_3 = NULL;
        }

        assertFrameObject(frame_766e3a015dc2e13c41baf55510ded71c_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_2 = mod_consts[76];
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 941;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;

            goto try_except_handler_6;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_9 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[196];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 941;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 941;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_19 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941);
        locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941);
        locals_sqlalchemy$engine$interfaces$$$class__2_CreateEnginePlugin_941 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 941;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_19);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_21 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_17;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[77];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        tmp_condition_result_18 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[70];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 1065;

        goto try_except_handler_7;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[78]);
        tmp_condition_result_20 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[78]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = mod_consts[208];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 1065;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[80]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_value_3 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[82];
        tmp_getattr_default_3 = mod_consts[83];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        tmp_right_value_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_value_3, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[82]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1065;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_value_3, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_value_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 1065;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[209];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[208];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_e93c13f045868eb7055ae21cd49d4b80_4)) {
            Py_XDECREF(cache_frame_e93c13f045868eb7055ae21cd49d4b80_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e93c13f045868eb7055ae21cd49d4b80_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e93c13f045868eb7055ae21cd49d4b80_4 = MAKE_FUNCTION_FRAME(codeobj_e93c13f045868eb7055ae21cd49d4b80, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e93c13f045868eb7055ae21cd49d4b80_4->m_type_description == NULL);
        frame_e93c13f045868eb7055ae21cd49d4b80_4 = cache_frame_e93c13f045868eb7055ae21cd49d4b80_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e93c13f045868eb7055ae21cd49d4b80_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e93c13f045868eb7055ae21cd49d4b80_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__53_create_cursor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[211], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1157;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__54_pre_exec();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[213], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1168;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__55_post_exec();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[215], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1178;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__56_result();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[217], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1188;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__57_handle_dbapi_exception();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[219], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1197;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__58_should_autocommit_text();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[221], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1205;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__59_lastrow_has_defaults();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[223], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1213;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__60_get_rowcount();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[225], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1221;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e93c13f045868eb7055ae21cd49d4b80_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e93c13f045868eb7055ae21cd49d4b80_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e93c13f045868eb7055ae21cd49d4b80_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e93c13f045868eb7055ae21cd49d4b80_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e93c13f045868eb7055ae21cd49d4b80_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e93c13f045868eb7055ae21cd49d4b80_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_e93c13f045868eb7055ae21cd49d4b80_4 == cache_frame_e93c13f045868eb7055ae21cd49d4b80_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e93c13f045868eb7055ae21cd49d4b80_4);
            cache_frame_e93c13f045868eb7055ae21cd49d4b80_4 = NULL;
        }

        assertFrameObject(frame_e93c13f045868eb7055ae21cd49d4b80_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_3 = mod_consts[76];
            tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1065;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            assert(tmp_condition_result_22 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_12:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto try_except_handler_9;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_11 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[208];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 1065;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1065;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_26 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065);
        locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065);
        locals_sqlalchemy$engine$interfaces$$$class__3_ExecutionContext_1065 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 1065;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_26);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_4;
        tmp_dircall_arg1_4 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_28 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_23;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_24;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[77];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        tmp_condition_result_24 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_16 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[70];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 1232;

        goto try_except_handler_10;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[78]);
        tmp_condition_result_26 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[78]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        tmp_tuple_element_10 = mod_consts[227];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_10 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 1232;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[80]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_value_4 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[82];
        tmp_getattr_default_4 = mod_consts[83];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        tmp_right_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[82]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1232;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_value_4, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_value_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 1232;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_32;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[228];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[227];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_12;
        }
        if (isFrameUnusable(cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5)) {
            Py_XDECREF(cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5 = MAKE_FUNCTION_FRAME(codeobj_cf0780091c8a6e2f0dcc71c49786a46d, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_type_description == NULL);
        frame_cf0780091c8a6e2f0dcc71c49786a46d_5 = cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_cf0780091c8a6e2f0dcc71c49786a46d_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_cf0780091c8a6e2f0dcc71c49786a46d_5) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__61_connect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1243;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1253;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_2 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[69]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1261;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_frame.f_lineno = 1261;
            tmp_called_value_13 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[102],
                &PyTuple_GET_ITEM(mod_consts[232], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1261;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__62_contextual_connect();

            frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_frame.f_lineno = 1261;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1261;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[233], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1271;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__63__contextual_connect();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1285;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_7;
            tmp_called_instance_3 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[69]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1288;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_frame.f_lineno = 1288;
            tmp_called_value_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[102],
                &PyTuple_GET_ITEM(mod_consts[236], 0)
            );

            Py_DECREF(tmp_called_instance_3);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1288;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__64_create();

            frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_frame.f_lineno = 1288;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1288;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[237], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1296;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_8;
            tmp_called_instance_4 = PyObject_GetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[69]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1301;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_frame.f_lineno = 1301;
            tmp_called_value_15 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[102],
                &PyTuple_GET_ITEM(mod_consts[239], 0)
            );

            Py_DECREF(tmp_called_instance_4);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1301;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_8 = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__65_drop();

            frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_frame.f_lineno = 1301;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1301;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[240], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1309;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__66_execute();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[242], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1314;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__67_scalar();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[244], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1319;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__68__run_visitor();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[246], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1326;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_defaults_21;
            tmp_defaults_21 = mod_consts[248];
            Py_INCREF(tmp_defaults_21);


            tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$engine$interfaces$$$function__69__execute_clauseelement(tmp_defaults_21);

            tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[249], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1329;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cf0780091c8a6e2f0dcc71c49786a46d_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cf0780091c8a6e2f0dcc71c49786a46d_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cf0780091c8a6e2f0dcc71c49786a46d_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cf0780091c8a6e2f0dcc71c49786a46d_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cf0780091c8a6e2f0dcc71c49786a46d_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cf0780091c8a6e2f0dcc71c49786a46d_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_cf0780091c8a6e2f0dcc71c49786a46d_5 == cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5);
            cache_frame_cf0780091c8a6e2f0dcc71c49786a46d_5 = NULL;
        }

        assertFrameObject(frame_cf0780091c8a6e2f0dcc71c49786a46d_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            tmp_cmp_expr_right_4 = mod_consts[76];
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1232;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            assert(tmp_condition_result_28 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_16:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto try_except_handler_12;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_16 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = mod_consts[227];
            tmp_args_value_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 1232;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1232;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_33 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232);
        locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232);
        locals_sqlalchemy$engine$interfaces$$$class__4_Connectable_1232 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 1232;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_33);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_35 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_29;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_30;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[77];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        tmp_condition_result_30 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_21 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[70];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_37 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[77];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 1333;

        goto try_except_handler_13;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[78]);
        tmp_condition_result_32 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_23 = tmp_class_creation_5__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[78]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        tmp_tuple_element_13 = mod_consts[251];
        tmp_args_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_13 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 1333;
        tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[80]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        tmp_condition_result_33 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_value_5 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[82];
        tmp_getattr_default_5 = mod_consts[83];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        tmp_right_value_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_right_value_5, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[82]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1333;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_value_5, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_value_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_5, tmp_right_value_5);
        Py_DECREF(tmp_right_value_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 1333;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_39;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[252];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[251];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_15;
        }
        if (isFrameUnusable(cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6)) {
            Py_XDECREF(cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6 = MAKE_FUNCTION_FRAME(codeobj_bbdf31b6f0fabe3cd22402a9ef41c11c, module_sqlalchemy$engine$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6->m_type_description == NULL);
        frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6 = cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[253], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1345;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1358;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[254], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[255], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1375;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1382;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1389;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[258], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1396;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[259], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1406;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[260], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1417;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[261], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1452;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6 == cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6);
            cache_frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6 = NULL;
        }

        assertFrameObject(frame_bbdf31b6f0fabe3cd22402a9ef41c11c_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            tmp_cmp_expr_right_5 = mod_consts[76];
            tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1333;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
            assert(tmp_condition_result_34 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_20:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto try_except_handler_15;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_18 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_15 = mod_consts[251];
            tmp_args_value_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_15 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_7349435483dd5edb11380aa9c9cd973b->m_frame.f_lineno = 1333;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1333;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_40 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333);
        locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333);
        locals_sqlalchemy$engine$interfaces$$$class__5_ExceptionContext_1333 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 1333;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_40);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7349435483dd5edb11380aa9c9cd973b);
#endif
    popFrameStack();

    assertFrameObject(frame_7349435483dd5edb11380aa9c9cd973b);

    goto frame_no_exception_6;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7349435483dd5edb11380aa9c9cd973b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7349435483dd5edb11380aa9c9cd973b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7349435483dd5edb11380aa9c9cd973b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7349435483dd5edb11380aa9c9cd973b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.engine.interfaces", false);

    Py_INCREF(module_sqlalchemy$engine$interfaces);
    return module_sqlalchemy$engine$interfaces;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$engine$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$engine$interfaces", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
