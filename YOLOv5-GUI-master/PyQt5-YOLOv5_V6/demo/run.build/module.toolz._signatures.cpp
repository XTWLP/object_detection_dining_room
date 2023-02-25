/* Generated code for Python module 'toolz._signatures'
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

/* The "module_toolz$_signatures" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_toolz$_signatures;
PyDictObject *moduledict_toolz$_signatures;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[449];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[449];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("toolz._signatures"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 449; i++) {
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
void checkModuleConstants_toolz$_signatures(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 449; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0d1d4d08a0dceef36484bdcebbe60efc;
static PyCodeObject *codeobj_b6c601c7a43ef42721938e5aadd8de31;
static PyCodeObject *codeobj_c7325dd33553adf7282f268ac6b4bbaa;
static PyCodeObject *codeobj_a3ee31ff0e9a0f7c5bda45e09847e0bd;
static PyCodeObject *codeobj_4dcdf91cc8c92c11007b7f8d0cdebe48;
static PyCodeObject *codeobj_11f77c74e256d7c552b04769f1759047;
static PyCodeObject *codeobj_18dd46bcdd96c0c8b449a1b2d8758b81;
static PyCodeObject *codeobj_14f540e6b9e56b16771cee2521580f42;
static PyCodeObject *codeobj_8d20b4a8886796b7d232876b0d38f7e4;
static PyCodeObject *codeobj_e9b5d99e4d647a3f8d8c5563eb50b71d;
static PyCodeObject *codeobj_13fb1a1883656dbca0d2dfa55f24b1aa;
static PyCodeObject *codeobj_59a8742c57b19feee8ea1686c96626e3;
static PyCodeObject *codeobj_7b57de0ff58bbcf646170979a44666d7;
static PyCodeObject *codeobj_3676c5f32c9f2abfccb9c4a751a38fb3;
static PyCodeObject *codeobj_dcad8ff787bd70d30a0708e66c518a23;
static PyCodeObject *codeobj_5ce0264b091880bdd18a3fedc2fbc147;
static PyCodeObject *codeobj_b4b99a4e5920644cdeb2087138249cd8;
static PyCodeObject *codeobj_5affabc53dd857b91eea64419dc93409;
static PyCodeObject *codeobj_438134efd6c01cbab974223b43cb7607;
static PyCodeObject *codeobj_2b72054d90ee858fb7a72a6965232d33;
static PyCodeObject *codeobj_49fdf44483580864c2479889e97a1115;
static PyCodeObject *codeobj_6d2865701618e4414285ec8122dcf63b;
static PyCodeObject *codeobj_51b16d3b80afe335cecf44f6f88b0d3d;
static PyCodeObject *codeobj_4733be5aa060fcdacf3f30e8b2806570;
static PyCodeObject *codeobj_6fc77d917656df95759bee9da2de9447;
static PyCodeObject *codeobj_92b24a2e32d4f4892a827f25e2f062e0;
static PyCodeObject *codeobj_119ee1d7a48f5caeb1a6627c0ca8a8b9;
static PyCodeObject *codeobj_f6c03c2e23a73bec97ad3564938765e6;
static PyCodeObject *codeobj_05b8c27d9cd6f3010ecf492bb7c66539;
static PyCodeObject *codeobj_783245c08cf42e5663b9e0798f47b52b;
static PyCodeObject *codeobj_52136c547c58c9205c1e1eb9f02d91f3;
static PyCodeObject *codeobj_98629feeb9eb1df041b42e5d8dcfc088;
static PyCodeObject *codeobj_f3d549fc9a1456319b8755c23b504047;
static PyCodeObject *codeobj_f1356bc623fa045d8dea0a6cc09bec85;
static PyCodeObject *codeobj_26217f6207d197f2c05a196781515a23;
static PyCodeObject *codeobj_dd5de2279d53f457113309f179f473e0;
static PyCodeObject *codeobj_403840b6279df1c6ada770e20b94e425;
static PyCodeObject *codeobj_3367db2666f61d3a9fbff05918594502;
static PyCodeObject *codeobj_2873da5a6ff13322a805815bf2405092;
static PyCodeObject *codeobj_452adde9c7e414a53421ea6d3a664e3a;
static PyCodeObject *codeobj_3dd3ab489b3b1ee3eee69983a85bada2;
static PyCodeObject *codeobj_c81ecf1afb1fe306cb56d7b79a0840a4;
static PyCodeObject *codeobj_04c71e5280d310aacbcdfc39ab36dc31;
static PyCodeObject *codeobj_b1944afe2868761f5f0ad3c73d9fe03d;
static PyCodeObject *codeobj_cd035d45ca7a3f879b9e62ec4fcf239b;
static PyCodeObject *codeobj_9fc5c6493141f34636d2e93562622d7a;
static PyCodeObject *codeobj_2f9cdd9b8fc84f08472671f8db645d04;
static PyCodeObject *codeobj_92487af465a85f7938f53f2e5ca5bbe2;
static PyCodeObject *codeobj_f71ffdc012b991c136b51055760334a2;
static PyCodeObject *codeobj_f3d6e67e411e3d41d42c3863eb53e5d2;
static PyCodeObject *codeobj_ab41da93c2798cb75a3bcbdc51df34bb;
static PyCodeObject *codeobj_fd9b5dfb194a902173d2dd408e9d96fa;
static PyCodeObject *codeobj_b141596c231e9bcdd0639ad0c92a1c1b;
static PyCodeObject *codeobj_ed85dd089e18b3c12c18c149a8475ff9;
static PyCodeObject *codeobj_bca89cf589e3db9d1385024a8c30a3f2;
static PyCodeObject *codeobj_7bc03631026ae0dfe994e7ad292c7062;
static PyCodeObject *codeobj_25bb5203a99ceeaeab8ef3a4fd2faf3b;
static PyCodeObject *codeobj_0439e27a38da0635c423a7c132a9b78d;
static PyCodeObject *codeobj_bb0d6b48f70801bee672f0a219e77ed1;
static PyCodeObject *codeobj_7233ade48d138d7436e592be8fdf0101;
static PyCodeObject *codeobj_e122b2b4ee8315f2ad56815d13952eb9;
static PyCodeObject *codeobj_c87d395a94189c2b5ecc50fe895e77f9;
static PyCodeObject *codeobj_4c1a9e5cc9aa9026b5aa6b22b3534ae9;
static PyCodeObject *codeobj_ed2eb9a4f40afaa99e9de080a0b7819f;
static PyCodeObject *codeobj_fa9fde299a126863c7f36e36500c4946;
static PyCodeObject *codeobj_aeec5abeb511b3f4c834942ccfba30b7;
static PyCodeObject *codeobj_f6ab1fd09e8682c529062d89668f0ddf;
static PyCodeObject *codeobj_6fd705759f972795a589b2e7d964e6a2;
static PyCodeObject *codeobj_93127888b3299aa853481b22866ec805;
static PyCodeObject *codeobj_a4a454727242ec09f491d259c9b7c775;
static PyCodeObject *codeobj_f897f6cee39523de3238ee6f7235b8a1;
static PyCodeObject *codeobj_5b895a04e46eb23d6b8317f297f4dd29;
static PyCodeObject *codeobj_38cdd63657e4507316ec650ac53be3d2;
static PyCodeObject *codeobj_811f4eedebe689682a3d597b74c8bc7f;
static PyCodeObject *codeobj_5e034bc7ac23d0e92e9b20a687810c2f;
static PyCodeObject *codeobj_8db1c69d1734e15838f7fe5a33ab318d;
static PyCodeObject *codeobj_535f0bacb6aa66d8f0b8beeb661bdd1a;
static PyCodeObject *codeobj_f5a3e32fe16dd1307bc4e73f9fad4aa6;
static PyCodeObject *codeobj_1fea56152ef37d6fa23c827287ebd49f;
static PyCodeObject *codeobj_2d313037ee38bfba7ba32473662ed7c4;
static PyCodeObject *codeobj_4077c0f78ae5fa50ac0747e1305299a1;
static PyCodeObject *codeobj_19f7ef84546fa550a2e48791bc693daf;
static PyCodeObject *codeobj_3761492d3b38f6069bbfd8b062818f6a;
static PyCodeObject *codeobj_415048aecf899655fc3fd0cbacf64081;
static PyCodeObject *codeobj_fb00f439f602fcec7371ae1df4975a38;
static PyCodeObject *codeobj_b0bed9b18b8f546ba0b8c814bfecdac5;
static PyCodeObject *codeobj_35c4371c866f05ea69b8210d83254278;
static PyCodeObject *codeobj_35ecbcf4b98ed21112033858bab2bf36;
static PyCodeObject *codeobj_81f00a98256ae014c6a662b464646e13;
static PyCodeObject *codeobj_eccc81761cda78eba7e85103ebb7d1ba;
static PyCodeObject *codeobj_8171138386e569f5f9acd75ce304bbed;
static PyCodeObject *codeobj_e9a7873a523af4a436a78c51b2cedd53;
static PyCodeObject *codeobj_5b32ebc397cc14d6475ff8239c6b4e56;
static PyCodeObject *codeobj_a9c6fffbdee6178494fc92860937a5fb;
static PyCodeObject *codeobj_f2655b861106d7958989498fa4811655;
static PyCodeObject *codeobj_fdbe0a92028d6e6d6492eccebaf632ed;
static PyCodeObject *codeobj_2bea386a946817cbddda8a029f4a1bee;
static PyCodeObject *codeobj_f7f7162ac4564fd6e4133f4ea70596a9;
static PyCodeObject *codeobj_6a89270c22a02ddf6c90c99c83127421;
static PyCodeObject *codeobj_ed337e8ebd48e9272b3a3fd206779fb7;
static PyCodeObject *codeobj_ced039570904d03320167a26070a68e4;
static PyCodeObject *codeobj_e365b05bd61174fb378dedc8252ada54;
static PyCodeObject *codeobj_1734770f84929c1fe1dff0d997009bd1;
static PyCodeObject *codeobj_6c65a4a60f8042572cb5fe9fe232e0ca;
static PyCodeObject *codeobj_ecab054097f8d97ed0ac0c86f36298c5;
static PyCodeObject *codeobj_dbdef3a4c68b6d6e4aee90275fb8725d;
static PyCodeObject *codeobj_6b069a6398096740623f8f43d1ea0dab;
static PyCodeObject *codeobj_4c20d0177c836f6413087b51c73c6a12;
static PyCodeObject *codeobj_6df5c5a9717a624d19b7f257f76d4450;
static PyCodeObject *codeobj_8e552faf2cbe540196685b3a376762f0;
static PyCodeObject *codeobj_b4f9809ed6fd505686f54c8392456bcc;
static PyCodeObject *codeobj_543f0836c78bb6f72f22ae705311b89b;
static PyCodeObject *codeobj_fbe667ba417c15be2dcbacfeee4d7e93;
static PyCodeObject *codeobj_6a1f5566fe2f29ed649efbb3b8ca0bd7;
static PyCodeObject *codeobj_1c5329a88175739f9d02cc7b4a7dff2d;
static PyCodeObject *codeobj_f9c292aafa9899aca8f95dfc4681d1af;
static PyCodeObject *codeobj_b3059cca78069a58fec77ce949fa3900;
static PyCodeObject *codeobj_dbd479af7c4ed7bfa499611129f58f5c;
static PyCodeObject *codeobj_bed065c8a1c272352b80bad3ab7dfe1b;
static PyCodeObject *codeobj_c9cf3945890954dd6dc483de0582502b;
static PyCodeObject *codeobj_578ccaac7eafea885d5fcdc9097ee41e;
static PyCodeObject *codeobj_fe0d250b94333014ac1383c0609fa700;
static PyCodeObject *codeobj_61bbc88393e0a88dd3e167f106b88227;
static PyCodeObject *codeobj_2718b236976e5284530a8c8f1df9bbd8;
static PyCodeObject *codeobj_f22c436933bade8611b161453bcbd85d;
static PyCodeObject *codeobj_470cfc57b7fef8db1c1dc2698c210b9d;
static PyCodeObject *codeobj_bd1f985a1af9854b8b3677be06541999;
static PyCodeObject *codeobj_35ce167ef65929288ebd56c9ad2f3fa1;
static PyCodeObject *codeobj_bac79d269c73beada83cae93878b939e;
static PyCodeObject *codeobj_ab603c4d93296fa98d23ed6013868340;
static PyCodeObject *codeobj_22bd1c7316f79f8f66006dba68c5129a;
static PyCodeObject *codeobj_676e701f4ba7b45f664940da278e9c6e;
static PyCodeObject *codeobj_e63b2df6b7c09baed9c1b0e6d0da634e;
static PyCodeObject *codeobj_68b40d9de98d61e7fa12eb99877ce20f;
static PyCodeObject *codeobj_5e318f6435717ff39361a5519e980dd8;
static PyCodeObject *codeobj_178f20aac254f15b6a706828011579b0;
static PyCodeObject *codeobj_ea9a5eea0a7f40f92d94fa380290c97d;
static PyCodeObject *codeobj_644be236aee0a2e379784dfb59614fd7;
static PyCodeObject *codeobj_cf88142926b9b03fae6ee3fee8a04272;
static PyCodeObject *codeobj_d5b261c9292016a956d03f0ab362aa9d;
static PyCodeObject *codeobj_df6326acdd7c9a66cb391253e4c51e11;
static PyCodeObject *codeobj_f562e72d981f288e6643e51c3643030c;
static PyCodeObject *codeobj_46dd5dca78021bbce221b26aa2b0e266;
static PyCodeObject *codeobj_46d330af79e866a78bdd9d9c956112fc;
static PyCodeObject *codeobj_cfee41218174e3ba4a62fc754cb4b04d;
static PyCodeObject *codeobj_7b4f4439ea2da8376befd8267b126d53;
static PyCodeObject *codeobj_c64a02d6efe420df1f5bd24a6d095b56;
static PyCodeObject *codeobj_59126865c748e53a0059977371d55513;
static PyCodeObject *codeobj_090102eaa2a5149264fa1851c289b48c;
static PyCodeObject *codeobj_aab7a59fd97a9b1b1837b24248758b94;
static PyCodeObject *codeobj_65969d972d8a425ac30103ec45e7fd56;
static PyCodeObject *codeobj_e7092e9a0feb805ffb895ea7b3f77db3;
static PyCodeObject *codeobj_d1a4bb1b044bac55592008f88b61e17b;
static PyCodeObject *codeobj_28e72331b247c6714e7aab37f7d31145;
static PyCodeObject *codeobj_70e38cda786884001d762a8c6e69d50b;
static PyCodeObject *codeobj_98d566f95253cc7e60e3dcb8bf64ed46;
static PyCodeObject *codeobj_fced5ff5b0f41fe923f9a88de8a7344f;
static PyCodeObject *codeobj_debc1976750ae05265fe04f242b8fcfe;
static PyCodeObject *codeobj_69f8e20ae625017d826383adbe995cd9;
static PyCodeObject *codeobj_9646a71adde21a020bb1ff1f4ce8a9dd;
static PyCodeObject *codeobj_1249b1041674547cc80f77124228dac4;
static PyCodeObject *codeobj_a20cc0ba388dede4df08ef31f7b5d180;
static PyCodeObject *codeobj_124213c24b3b6183a57a82effaa3abbd;
static PyCodeObject *codeobj_5ffb5b855d056088042ca7758ea1ee38;
static PyCodeObject *codeobj_d19562b267acf72689851f6437d78746;
static PyCodeObject *codeobj_4207c7d25f7503a11df17d2d4fe61d54;
static PyCodeObject *codeobj_1f9c6f641eadf0857558e2ec3abd7591;
static PyCodeObject *codeobj_5f3e1d98fbaecae76ee683d6bdbe5a52;
static PyCodeObject *codeobj_03057b637eb4528c9ed573e5285fc853;
static PyCodeObject *codeobj_f86b18e1a2ca7c7e6941aa3707395f5e;
static PyCodeObject *codeobj_0cb6a22454366493922a2dd39f637279;
static PyCodeObject *codeobj_d00c0df673026d80f8d67123d17a6d1f;
static PyCodeObject *codeobj_af45f8bbda82b503eb51b933ebcf8263;
static PyCodeObject *codeobj_be06bf69055031a85b34f28e2a8ee6bc;
static PyCodeObject *codeobj_ad68cda16bf6a57202bc489f6a7b8d57;
static PyCodeObject *codeobj_9f2eb08da01b04bf0b129b5814fadc6f;
static PyCodeObject *codeobj_928c526a3f3445e2761e6a139d46f549;
static PyCodeObject *codeobj_f9d31b4395cfee9ddb27754b1d7a872f;
static PyCodeObject *codeobj_652e2ff8d8a322200415f171d5417f3a;
static PyCodeObject *codeobj_282c3a45a1e7ceb0b80271830bd1b170;
static PyCodeObject *codeobj_f1829581772d13a1900293179ed37f07;
static PyCodeObject *codeobj_3430bdf4d4af7324c563507e25970cb0;
static PyCodeObject *codeobj_b18b00bada9e26956b5942e54484dbe9;
static PyCodeObject *codeobj_b909367ca65a3d26dc089c93b923a2da;
static PyCodeObject *codeobj_c37ef1e149c643ced4bd84c552866881;
static PyCodeObject *codeobj_7eaf67e2155a2f6be9db7f5e1a11b9db;
static PyCodeObject *codeobj_0c1f44600a8eaf045eb223efdedb9f9e;
static PyCodeObject *codeobj_cf8045bdc2106ef4fe7a0fd2c82c6fa6;
static PyCodeObject *codeobj_2e02a78ae8cb1e5e40dc0c075d7e5d73;
static PyCodeObject *codeobj_68702b76b657f51c70c14212f46d56e5;
static PyCodeObject *codeobj_51e34b65b36af0908bcbe484ec01d355;
static PyCodeObject *codeobj_ff148b716a279911f9a3a019642e006f;
static PyCodeObject *codeobj_a7b1f9a589ad994af4c551cc94d7c52a;
static PyCodeObject *codeobj_6a3d4733a3d26e648aeec2f468a8ef13;
static PyCodeObject *codeobj_4964c5add1a90c858cc6065c1b31d618;
static PyCodeObject *codeobj_2a4a7671c5a51add9befe7aefb67b9a0;
static PyCodeObject *codeobj_2284fe7dba43e6699606ea7ec9286a0f;
static PyCodeObject *codeobj_448cb69a025a9132a06c973e496c656d;
static PyCodeObject *codeobj_1d012055d8aed31d15f202b1832995b1;
static PyCodeObject *codeobj_f23ec398da712d5693c3692617a031b7;
static PyCodeObject *codeobj_8c8029338e59aa0bf0db53f4a9775836;
static PyCodeObject *codeobj_ec1b81cf0a7dc023473c85fd5d5dc790;
static PyCodeObject *codeobj_6c21c9839064cfa73bf311c43c4a0573;
static PyCodeObject *codeobj_bd7fa85320db918b209755ec473fa17b;
static PyCodeObject *codeobj_07834c0d130fe4aba5f3f6f257b4ac85;
static PyCodeObject *codeobj_fd0568f382b229cc39ca89379b17a150;
static PyCodeObject *codeobj_b1c2b0df500412211a5e5ca2d95196d7;
static PyCodeObject *codeobj_1f9f9b77c6fe198c1ce03938abc18681;
static PyCodeObject *codeobj_39db2a15f50ab3359ddc5f764656f0d7;
static PyCodeObject *codeobj_ef10ab84eec30acd6731232e1da0edf6;
static PyCodeObject *codeobj_527256bfcb7228baf27492ade15d34bb;
static PyCodeObject *codeobj_1a7c2af03c0ed2da5549c6e5275a481d;
static PyCodeObject *codeobj_18babe79dc5ec8258dca0d26e5377a80;
static PyCodeObject *codeobj_bf5ab5c285e0b6dc9288a2d447a5f40a;
static PyCodeObject *codeobj_f1ac89b3d401dc4fdcb9e390ecde5baa;
static PyCodeObject *codeobj_8855d98bbc1e8a4ed60563bc6e4a83d4;
static PyCodeObject *codeobj_6f8ba9fac10c076ffb9f1ee61a62c9e1;
static PyCodeObject *codeobj_795968304448940c0bc9ae6f71ee0b03;
static PyCodeObject *codeobj_19b1a887069b4f3502043b00b450b725;
static PyCodeObject *codeobj_de98a6ab198cb54f76e48c6017326b3d;
static PyCodeObject *codeobj_e608a1f5366d42f8c0cc496abf172e6d;
static PyCodeObject *codeobj_a45b8338e7b226bc5980bb6bb14f35dc;
static PyCodeObject *codeobj_00c2e5711efc028ad9763a10e953d13c;
static PyCodeObject *codeobj_5e6ca4d54e5f4784ee74802290069f27;
static PyCodeObject *codeobj_5e497850dc69bdc2b69fe21fa761637c;
static PyCodeObject *codeobj_96e9d0eb20c5e61a5f4c451a27fcd173;
static PyCodeObject *codeobj_633a561a6a05969003b788a2be6c86ec;
static PyCodeObject *codeobj_8e245c557442fa77839919bc0059a600;
static PyCodeObject *codeobj_31b08931929b88e0e937736e336a5a8d;
static PyCodeObject *codeobj_777cb76e125e0fb50bf8dda7c47f21d3;
static PyCodeObject *codeobj_be027f750448774c7cff367150c06feb;
static PyCodeObject *codeobj_93de4eedb030a6165768198766cb0f56;
static PyCodeObject *codeobj_badf74c90de8c9ec7b25d986daaac4c1;
static PyCodeObject *codeobj_89fb39ff79706892772a3b5b5d2f8017;
static PyCodeObject *codeobj_308faabe13e1673dbbf855fc733d36ee;
static PyCodeObject *codeobj_ecf390162d19c9cb0386a75d7835eaf0;
static PyCodeObject *codeobj_c5d8bc93f44742abb012754750b87ed2;
static PyCodeObject *codeobj_f762ebafb0fdf0919cc508368f389651;
static PyCodeObject *codeobj_bb899fd20569b8a5617d8c7d18c86ac7;
static PyCodeObject *codeobj_81b8fbdc5e84409bfa35aad003cb852a;
static PyCodeObject *codeobj_b752cce32a19d49c8330852bc931b35a;
static PyCodeObject *codeobj_6dc51c97f6ce80af616ba01e40059601;
static PyCodeObject *codeobj_cf37e202958c8f56696db776f6a4d980;
static PyCodeObject *codeobj_6d0b0170f2673b99e756c9c93c4bc078;
static PyCodeObject *codeobj_e0b7d2dcf76ded23ca30f1d8cfa45c53;
static PyCodeObject *codeobj_1f11e0059f4b45944b9726e603ae7b69;
static PyCodeObject *codeobj_76d493656e17f640d7fe7f7c430113a7;
static PyCodeObject *codeobj_30757468920efb4bc65ff84c2a781dbd;
static PyCodeObject *codeobj_01009d695dac546ee1a7a998d0d50832;
static PyCodeObject *codeobj_a4f54f6c6832c7542b1bde36290fdd7a;
static PyCodeObject *codeobj_6a5742e63a1522c17816f097cc35f3a7;
static PyCodeObject *codeobj_877c4c9c8a93c8e9089285aa508d6e2a;
static PyCodeObject *codeobj_73a23b26efd6baa9b2a264c707b5f653;
static PyCodeObject *codeobj_3d91346076588df400f09099e7c28b34;
static PyCodeObject *codeobj_f87229055dc1ccc8ea16f6fee4763087;
static PyCodeObject *codeobj_f0b7ed232c495bdc901c1e2ff78d2e03;
static PyCodeObject *codeobj_602503e567efb0c7338f133e19053a75;
static PyCodeObject *codeobj_cc4d5764f95eca8944b5a744a358ebe8;
static PyCodeObject *codeobj_0146919b9eee32798f83bdb816a5dd02;
static PyCodeObject *codeobj_4649757eeafae1468a06485c72ef856d;
static PyCodeObject *codeobj_3d22fd121106d1b2c08f9283badd2fb4;
static PyCodeObject *codeobj_447fa47a4104ad614165c31ce006762d;
static PyCodeObject *codeobj_015274d395acd3c3bdee0316919d50f4;
static PyCodeObject *codeobj_2b987639871bf2c0c80f3f148fda66c9;
static PyCodeObject *codeobj_b7fa39ad60dbf88eb8d889323360d486;
static PyCodeObject *codeobj_2c961b1fbf08029652c36341b4381e48;
static PyCodeObject *codeobj_984c69069b9fbe7c93a04b57d36c6ba9;
static PyCodeObject *codeobj_012994fc9a7384bc5092d41e2e466493;
static PyCodeObject *codeobj_e8bb296dd39a085de6195e68985efd97;
static PyCodeObject *codeobj_309de8afaa9e5ea6ad74792bb02af7b7;
static PyCodeObject *codeobj_0f9116dafcc1c743720ece1d90226415;
static PyCodeObject *codeobj_ca5825f9bfb09021bf97088fcf7877d3;
static PyCodeObject *codeobj_0e95a944ecaddd607ada53ad2431fb62;
static PyCodeObject *codeobj_f06f82d8c19d3cf530e5d6580867e83d;
static PyCodeObject *codeobj_2103fb8dbd59fdcb9f8c7f705d662df6;
static PyCodeObject *codeobj_3ebbd9af890ef8135576d67669e73479;
static PyCodeObject *codeobj_1939eb6ce8c700257225e8d27468b314;
static PyCodeObject *codeobj_ece47ab9c08408e22a24978d1b23dd44;
static PyCodeObject *codeobj_1a04e114c8a7ea83f7c9441e4960dda5;
static PyCodeObject *codeobj_a9aa815601c7938144f29c182883260c;
static PyCodeObject *codeobj_efc647402040d34a0d4a51039a171e05;
static PyCodeObject *codeobj_ade7050e5540f53c2e6a651ce4c233ff;
static PyCodeObject *codeobj_9fca7727e916d7d360988aa61f06e7c9;
static PyCodeObject *codeobj_eea42c4f5da54194e27180991443483f;
static PyCodeObject *codeobj_9a4f4ef6d55ab4245b8dc7e53155ed53;
static PyCodeObject *codeobj_6074bc3b79cf360a702b37064c2fb43f;
static PyCodeObject *codeobj_204bceec088db951ee0e9df107e13269;
static PyCodeObject *codeobj_3f4a4028d9feae0ff998b4432419f9ce;
static PyCodeObject *codeobj_77308ad0fecf505ec82416412c3986d2;
static PyCodeObject *codeobj_d592ae9b1191338637a55e76e67cf0a7;
static PyCodeObject *codeobj_2c4c86aa8eaa510807fc7fbec80cce47;
static PyCodeObject *codeobj_00ed0a32ecdec5fa179dff1120cd98d4;
static PyCodeObject *codeobj_bb4573ce7c91fc057d42d48e7281f181;
static PyCodeObject *codeobj_0c35939f6db5c938534ddcb81dffb12a;
static PyCodeObject *codeobj_e36e048ec99a88668cb2e87523c6d286;
static PyCodeObject *codeobj_64b3ab9f6af70f2481d2a17326f51c2d;
static PyCodeObject *codeobj_ad1c272c56acb1fe87f0e6962ac5a538;
static PyCodeObject *codeobj_ef29f0f38d4817113872324632d522bf;
static PyCodeObject *codeobj_81a1515999478f8818d512d09d73e5ca;
static PyCodeObject *codeobj_4ad03fef845bd1027046e514df13ff71;
static PyCodeObject *codeobj_f2ad94f50511acb93dfbf924ea6d6687;
static PyCodeObject *codeobj_be24806a26f496a2ef1f9b2bd2570408;
static PyCodeObject *codeobj_11208aad36a244ea625046472e7a85a8;
static PyCodeObject *codeobj_6b9ce9231ec5d84c92f62c8fa239da03;
static PyCodeObject *codeobj_9eaafae6fd36f40532867a539d0222da;
static PyCodeObject *codeobj_1621fb5374ee1ddf11711f9d59ec1b22;
static PyCodeObject *codeobj_fc3038458c82af6105fbdf90089f19f1;
static PyCodeObject *codeobj_8b052a5c54f2a1865c3b2b7fb5886e44;
static PyCodeObject *codeobj_931602095a91190f715efaa557d443ee;
static PyCodeObject *codeobj_a4e1f50762e2d15f4a206fe1fbe85ea3;
static PyCodeObject *codeobj_5f9ce8a8ac92bc0844c37204d8cdef57;
static PyCodeObject *codeobj_e99baa294d7e3ac3bedf7d0feef42ce0;
static PyCodeObject *codeobj_ee27d5ed795e4fa866988da17537f501;
static PyCodeObject *codeobj_07469be31828292b868b4e02e9400ed7;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[335]); CHECK_OBJECT(module_filename_obj);
    codeobj_0d1d4d08a0dceef36484bdcebbe60efc = MAKE_CODEOBJECT(module_filename_obj, 665, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[336], NULL, 1, 0, 0);
    codeobj_b6c601c7a43ef42721938e5aadd8de31 = MAKE_CODEOBJECT(module_filename_obj, 690, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[337], NULL, 1, 0, 0);
    codeobj_c7325dd33553adf7282f268ac6b4bbaa = MAKE_CODEOBJECT(module_filename_obj, 711, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[337], NULL, 1, 0, 0);
    codeobj_a3ee31ff0e9a0f7c5bda45e09847e0bd = MAKE_CODEOBJECT(module_filename_obj, 598, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[338], NULL, 1, 0, 0);
    codeobj_4dcdf91cc8c92c11007b7f8d0cdebe48 = MAKE_CODEOBJECT(module_filename_obj, 607, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[338], NULL, 1, 0, 0);
    codeobj_11f77c74e256d7c552b04769f1759047 = MAKE_CODEOBJECT(module_filename_obj, 612, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[338], NULL, 1, 0, 0);
    codeobj_18dd46bcdd96c0c8b449a1b2d8758b81 = MAKE_CODEOBJECT(module_filename_obj, 780, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[339], NULL, 1, 0, 0);
    codeobj_14f540e6b9e56b16771cee2521580f42 = MAKE_CODEOBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_8d20b4a8886796b7d232876b0d38f7e4 = MAKE_CODEOBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_e9b5d99e4d647a3f8d8c5563eb50b71d = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_13fb1a1883656dbca0d2dfa55f24b1aa = MAKE_CODEOBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_59a8742c57b19feee8ea1686c96626e3 = MAKE_CODEOBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_7b57de0ff58bbcf646170979a44666d7 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_3676c5f32c9f2abfccb9c4a751a38fb3 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_dcad8ff787bd70d30a0708e66c518a23 = MAKE_CODEOBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_5ce0264b091880bdd18a3fedc2fbc147 = MAKE_CODEOBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_b4b99a4e5920644cdeb2087138249cd8 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_5affabc53dd857b91eea64419dc93409 = MAKE_CODEOBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_438134efd6c01cbab974223b43cb7607 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_2b72054d90ee858fb7a72a6965232d33 = MAKE_CODEOBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_49fdf44483580864c2479889e97a1115 = MAKE_CODEOBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_6d2865701618e4414285ec8122dcf63b = MAKE_CODEOBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_51b16d3b80afe335cecf44f6f88b0d3d = MAKE_CODEOBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_4733be5aa060fcdacf3f30e8b2806570 = MAKE_CODEOBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_6fc77d917656df95759bee9da2de9447 = MAKE_CODEOBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_92b24a2e32d4f4892a827f25e2f062e0 = MAKE_CODEOBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_119ee1d7a48f5caeb1a6627c0ca8a8b9 = MAKE_CODEOBJECT(module_filename_obj, 418, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_f6c03c2e23a73bec97ad3564938765e6 = MAKE_CODEOBJECT(module_filename_obj, 440, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_05b8c27d9cd6f3010ecf492bb7c66539 = MAKE_CODEOBJECT(module_filename_obj, 490, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_783245c08cf42e5663b9e0798f47b52b = MAKE_CODEOBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_52136c547c58c9205c1e1eb9f02d91f3 = MAKE_CODEOBJECT(module_filename_obj, 496, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_98629feeb9eb1df041b42e5d8dcfc088 = MAKE_CODEOBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_f3d549fc9a1456319b8755c23b504047 = MAKE_CODEOBJECT(module_filename_obj, 512, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_f1356bc623fa045d8dea0a6cc09bec85 = MAKE_CODEOBJECT(module_filename_obj, 514, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_26217f6207d197f2c05a196781515a23 = MAKE_CODEOBJECT(module_filename_obj, 516, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_dd5de2279d53f457113309f179f473e0 = MAKE_CODEOBJECT(module_filename_obj, 545, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_403840b6279df1c6ada770e20b94e425 = MAKE_CODEOBJECT(module_filename_obj, 547, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_3367db2666f61d3a9fbff05918594502 = MAKE_CODEOBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_2873da5a6ff13322a805815bf2405092 = MAKE_CODEOBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[340], NULL, 1, 0, 0);
    codeobj_452adde9c7e414a53421ea6d3a664e3a = MAKE_CODEOBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_3dd3ab489b3b1ee3eee69983a85bada2 = MAKE_CODEOBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_c81ecf1afb1fe306cb56d7b79a0840a4 = MAKE_CODEOBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_04c71e5280d310aacbcdfc39ab36dc31 = MAKE_CODEOBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_b1944afe2868761f5f0ad3c73d9fe03d = MAKE_CODEOBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_cd035d45ca7a3f879b9e62ec4fcf239b = MAKE_CODEOBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_9fc5c6493141f34636d2e93562622d7a = MAKE_CODEOBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_2f9cdd9b8fc84f08472671f8db645d04 = MAKE_CODEOBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_92487af465a85f7938f53f2e5ca5bbe2 = MAKE_CODEOBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f71ffdc012b991c136b51055760334a2 = MAKE_CODEOBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f3d6e67e411e3d41d42c3863eb53e5d2 = MAKE_CODEOBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_ab41da93c2798cb75a3bcbdc51df34bb = MAKE_CODEOBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_fd9b5dfb194a902173d2dd408e9d96fa = MAKE_CODEOBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_b141596c231e9bcdd0639ad0c92a1c1b = MAKE_CODEOBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_ed85dd089e18b3c12c18c149a8475ff9 = MAKE_CODEOBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_bca89cf589e3db9d1385024a8c30a3f2 = MAKE_CODEOBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_7bc03631026ae0dfe994e7ad292c7062 = MAKE_CODEOBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_25bb5203a99ceeaeab8ef3a4fd2faf3b = MAKE_CODEOBJECT(module_filename_obj, 372, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_0439e27a38da0635c423a7c132a9b78d = MAKE_CODEOBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_bb0d6b48f70801bee672f0a219e77ed1 = MAKE_CODEOBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_7233ade48d138d7436e592be8fdf0101 = MAKE_CODEOBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_e122b2b4ee8315f2ad56815d13952eb9 = MAKE_CODEOBJECT(module_filename_obj, 386, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_c87d395a94189c2b5ecc50fe895e77f9 = MAKE_CODEOBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_4c1a9e5cc9aa9026b5aa6b22b3534ae9 = MAKE_CODEOBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_ed2eb9a4f40afaa99e9de080a0b7819f = MAKE_CODEOBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_fa9fde299a126863c7f36e36500c4946 = MAKE_CODEOBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_aeec5abeb511b3f4c834942ccfba30b7 = MAKE_CODEOBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f6ab1fd09e8682c529062d89668f0ddf = MAKE_CODEOBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_6fd705759f972795a589b2e7d964e6a2 = MAKE_CODEOBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_93127888b3299aa853481b22866ec805 = MAKE_CODEOBJECT(module_filename_obj, 402, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_a4a454727242ec09f491d259c9b7c775 = MAKE_CODEOBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f897f6cee39523de3238ee6f7235b8a1 = MAKE_CODEOBJECT(module_filename_obj, 406, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_5b895a04e46eb23d6b8317f297f4dd29 = MAKE_CODEOBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_38cdd63657e4507316ec650ac53be3d2 = MAKE_CODEOBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_811f4eedebe689682a3d597b74c8bc7f = MAKE_CODEOBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_5e034bc7ac23d0e92e9b20a687810c2f = MAKE_CODEOBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_8db1c69d1734e15838f7fe5a33ab318d = MAKE_CODEOBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_535f0bacb6aa66d8f0b8beeb661bdd1a = MAKE_CODEOBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f5a3e32fe16dd1307bc4e73f9fad4aa6 = MAKE_CODEOBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_1fea56152ef37d6fa23c827287ebd49f = MAKE_CODEOBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_2d313037ee38bfba7ba32473662ed7c4 = MAKE_CODEOBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_4077c0f78ae5fa50ac0747e1305299a1 = MAKE_CODEOBJECT(module_filename_obj, 438, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_19f7ef84546fa550a2e48791bc693daf = MAKE_CODEOBJECT(module_filename_obj, 442, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_3761492d3b38f6069bbfd8b062818f6a = MAKE_CODEOBJECT(module_filename_obj, 444, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_415048aecf899655fc3fd0cbacf64081 = MAKE_CODEOBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_fb00f439f602fcec7371ae1df4975a38 = MAKE_CODEOBJECT(module_filename_obj, 450, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_b0bed9b18b8f546ba0b8c814bfecdac5 = MAKE_CODEOBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_35c4371c866f05ea69b8210d83254278 = MAKE_CODEOBJECT(module_filename_obj, 454, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_35ecbcf4b98ed21112033858bab2bf36 = MAKE_CODEOBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_81f00a98256ae014c6a662b464646e13 = MAKE_CODEOBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_eccc81761cda78eba7e85103ebb7d1ba = MAKE_CODEOBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_8171138386e569f5f9acd75ce304bbed = MAKE_CODEOBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_e9a7873a523af4a436a78c51b2cedd53 = MAKE_CODEOBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_5b32ebc397cc14d6475ff8239c6b4e56 = MAKE_CODEOBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_a9c6fffbdee6178494fc92860937a5fb = MAKE_CODEOBJECT(module_filename_obj, 472, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f2655b861106d7958989498fa4811655 = MAKE_CODEOBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_fdbe0a92028d6e6d6492eccebaf632ed = MAKE_CODEOBJECT(module_filename_obj, 476, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_2bea386a946817cbddda8a029f4a1bee = MAKE_CODEOBJECT(module_filename_obj, 478, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f7f7162ac4564fd6e4133f4ea70596a9 = MAKE_CODEOBJECT(module_filename_obj, 480, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_6a89270c22a02ddf6c90c99c83127421 = MAKE_CODEOBJECT(module_filename_obj, 482, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_ed337e8ebd48e9272b3a3fd206779fb7 = MAKE_CODEOBJECT(module_filename_obj, 484, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_ced039570904d03320167a26070a68e4 = MAKE_CODEOBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_e365b05bd61174fb378dedc8252ada54 = MAKE_CODEOBJECT(module_filename_obj, 488, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_1734770f84929c1fe1dff0d997009bd1 = MAKE_CODEOBJECT(module_filename_obj, 492, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_6c65a4a60f8042572cb5fe9fe232e0ca = MAKE_CODEOBJECT(module_filename_obj, 498, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_ecab054097f8d97ed0ac0c86f36298c5 = MAKE_CODEOBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_dbdef3a4c68b6d6e4aee90275fb8725d = MAKE_CODEOBJECT(module_filename_obj, 502, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_6b069a6398096740623f8f43d1ea0dab = MAKE_CODEOBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_4c20d0177c836f6413087b51c73c6a12 = MAKE_CODEOBJECT(module_filename_obj, 506, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_6df5c5a9717a624d19b7f257f76d4450 = MAKE_CODEOBJECT(module_filename_obj, 508, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_8e552faf2cbe540196685b3a376762f0 = MAKE_CODEOBJECT(module_filename_obj, 518, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_b4f9809ed6fd505686f54c8392456bcc = MAKE_CODEOBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_543f0836c78bb6f72f22ae705311b89b = MAKE_CODEOBJECT(module_filename_obj, 524, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_fbe667ba417c15be2dcbacfeee4d7e93 = MAKE_CODEOBJECT(module_filename_obj, 526, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_6a1f5566fe2f29ed649efbb3b8ca0bd7 = MAKE_CODEOBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_1c5329a88175739f9d02cc7b4a7dff2d = MAKE_CODEOBJECT(module_filename_obj, 533, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f9c292aafa9899aca8f95dfc4681d1af = MAKE_CODEOBJECT(module_filename_obj, 535, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_b3059cca78069a58fec77ce949fa3900 = MAKE_CODEOBJECT(module_filename_obj, 539, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_dbd479af7c4ed7bfa499611129f58f5c = MAKE_CODEOBJECT(module_filename_obj, 541, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_bed065c8a1c272352b80bad3ab7dfe1b = MAKE_CODEOBJECT(module_filename_obj, 543, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_c9cf3945890954dd6dc483de0582502b = MAKE_CODEOBJECT(module_filename_obj, 549, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_578ccaac7eafea885d5fcdc9097ee41e = MAKE_CODEOBJECT(module_filename_obj, 553, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_fe0d250b94333014ac1383c0609fa700 = MAKE_CODEOBJECT(module_filename_obj, 555, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_61bbc88393e0a88dd3e167f106b88227 = MAKE_CODEOBJECT(module_filename_obj, 557, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_2718b236976e5284530a8c8f1df9bbd8 = MAKE_CODEOBJECT(module_filename_obj, 559, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_f22c436933bade8611b161453bcbd85d = MAKE_CODEOBJECT(module_filename_obj, 565, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_470cfc57b7fef8db1c1dc2698c210b9d = MAKE_CODEOBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_bd1f985a1af9854b8b3677be06541999 = MAKE_CODEOBJECT(module_filename_obj, 571, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[341], NULL, 2, 0, 0);
    codeobj_35ce167ef65929288ebd56c9ad2f3fa1 = MAKE_CODEOBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[342], NULL, 3, 0, 0);
    codeobj_bac79d269c73beada83cae93878b939e = MAKE_CODEOBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[342], NULL, 3, 0, 0);
    codeobj_ab603c4d93296fa98d23ed6013868340 = MAKE_CODEOBJECT(module_filename_obj, 426, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[342], NULL, 3, 0, 0);
    codeobj_22bd1c7316f79f8f66006dba68c5129a = MAKE_CODEOBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[342], NULL, 3, 0, 0);
    codeobj_676e701f4ba7b45f664940da278e9c6e = MAKE_CODEOBJECT(module_filename_obj, 468, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[342], NULL, 3, 0, 0);
    codeobj_e63b2df6b7c09baed9c1b0e6d0da634e = MAKE_CODEOBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[342], NULL, 3, 0, 0);
    codeobj_68b40d9de98d61e7fa12eb99877ce20f = MAKE_CODEOBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[343], NULL, 4, 0, 0);
    codeobj_5e318f6435717ff39361a5519e980dd8 = MAKE_CODEOBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[343], NULL, 4, 0, 0);
    codeobj_178f20aac254f15b6a706828011579b0 = MAKE_CODEOBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[344], NULL, 2, 0, 0);
    codeobj_ea9a5eea0a7f40f92d94fa380290c97d = MAKE_CODEOBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[344], NULL, 2, 0, 0);
    codeobj_644be236aee0a2e379784dfb59614fd7 = MAKE_CODEOBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[345], NULL, 0, 0, 0);
    codeobj_cf88142926b9b03fae6ee3fee8a04272 = MAKE_CODEOBJECT(module_filename_obj, 576, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[346], NULL, 0, 0, 0);
    codeobj_d5b261c9292016a956d03f0ab362aa9d = MAKE_CODEOBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[347], NULL, 0, 0, 0);
    codeobj_df6326acdd7c9a66cb391253e4c51e11 = MAKE_CODEOBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[348], NULL, 1, 0, 0);
    codeobj_f562e72d981f288e6643e51c3643030c = MAKE_CODEOBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[349], NULL, 1, 0, 0);
    codeobj_46dd5dca78021bbce221b26aa2b0e266 = MAKE_CODEOBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[350], NULL, 2, 0, 0);
    codeobj_46d330af79e866a78bdd9d9c956112fc = MAKE_CODEOBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[351], NULL, 2, 0, 0);
    codeobj_cfee41218174e3ba4a62fc754cb4b04d = MAKE_CODEOBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[352], NULL, 2, 0, 0);
    codeobj_7b4f4439ea2da8376befd8267b126d53 = MAKE_CODEOBJECT(module_filename_obj, 578, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[353], NULL, 3, 0, 0);
    codeobj_c64a02d6efe420df1f5bd24a6d095b56 = MAKE_CODEOBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[354], NULL, 4, 0, 0);
    codeobj_59126865c748e53a0059977371d55513 = MAKE_CODEOBJECT(module_filename_obj, 591, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[355], NULL, 5, 0, 0);
    codeobj_090102eaa2a5149264fa1851c289b48c = MAKE_CODEOBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[356], NULL, 8, 0, 0);
    codeobj_aab7a59fd97a9b1b1837b24248758b94 = MAKE_CODEOBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[357], NULL, 1, 0, 0);
    codeobj_65969d972d8a425ac30103ec45e7fd56 = MAKE_CODEOBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[358], NULL, 2, 0, 0);
    codeobj_e7092e9a0feb805ffb895ea7b3f77db3 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[359], NULL, 3, 0, 0);
    codeobj_d1a4bb1b044bac55592008f88b61e17b = MAKE_CODEOBJECT(module_filename_obj, 580, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[360], NULL, 3, 0, 0);
    codeobj_28e72331b247c6714e7aab37f7d31145 = MAKE_CODEOBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[361], NULL, 1, 0, 0);
    codeobj_70e38cda786884001d762a8c6e69d50b = MAKE_CODEOBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[361], NULL, 1, 0, 0);
    codeobj_98d566f95253cc7e60e3dcb8bf64ed46 = MAKE_CODEOBJECT(module_filename_obj, 584, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[362], NULL, 3, 0, 0);
    codeobj_fced5ff5b0f41fe923f9a88de8a7344f = MAKE_CODEOBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[363], NULL, 2, 0, 0);
    codeobj_debc1976750ae05265fe04f242b8fcfe = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[364], NULL, 2, 0, 0);
    codeobj_69f8e20ae625017d826383adbe995cd9 = MAKE_CODEOBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[364], NULL, 2, 0, 0);
    codeobj_9646a71adde21a020bb1ff1f4ce8a9dd = MAKE_CODEOBJECT(module_filename_obj, 582, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[365], NULL, 0, 0, 0);
    codeobj_1249b1041674547cc80f77124228dac4 = MAKE_CODEOBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[365], NULL, 1, 0, 0);
    codeobj_a20cc0ba388dede4df08ef31f7b5d180 = MAKE_CODEOBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[366], NULL, 1, 0, 0);
    codeobj_124213c24b3b6183a57a82effaa3abbd = MAKE_CODEOBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[366], NULL, 1, 0, 0);
    codeobj_5ffb5b855d056088042ca7758ea1ee38 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[367], NULL, 2, 0, 0);
    codeobj_d19562b267acf72689851f6437d78746 = MAKE_CODEOBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[368], NULL, 2, 0, 0);
    codeobj_4207c7d25f7503a11df17d2d4fe61d54 = MAKE_CODEOBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[368], NULL, 2, 0, 0);
    codeobj_1f9c6f641eadf0857558e2ec3abd7591 = MAKE_CODEOBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[368], NULL, 2, 0, 0);
    codeobj_5f3e1d98fbaecae76ee683d6bdbe5a52 = MAKE_CODEOBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[368], NULL, 2, 0, 0);
    codeobj_03057b637eb4528c9ed573e5285fc853 = MAKE_CODEOBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[368], NULL, 2, 0, 0);
    codeobj_f86b18e1a2ca7c7e6941aa3707395f5e = MAKE_CODEOBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[368], NULL, 2, 0, 0);
    codeobj_0cb6a22454366493922a2dd39f637279 = MAKE_CODEOBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[369], NULL, 3, 0, 0);
    codeobj_d00c0df673026d80f8d67123d17a6d1f = MAKE_CODEOBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[369], NULL, 3, 0, 0);
    codeobj_af45f8bbda82b503eb51b933ebcf8263 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[370], NULL, 1, 0, 0);
    codeobj_be06bf69055031a85b34f28e2a8ee6bc = MAKE_CODEOBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[370], NULL, 1, 0, 0);
    codeobj_ad68cda16bf6a57202bc489f6a7b8d57 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[371], NULL, 1, 0, 0);
    codeobj_9f2eb08da01b04bf0b129b5814fadc6f = MAKE_CODEOBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[371], NULL, 1, 0, 0);
    codeobj_928c526a3f3445e2761e6a139d46f549 = MAKE_CODEOBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[372], NULL, 1, 0, 0);
    codeobj_f9d31b4395cfee9ddb27754b1d7a872f = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_652e2ff8d8a322200415f171d5417f3a = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_282c3a45a1e7ceb0b80271830bd1b170 = MAKE_CODEOBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_f1829581772d13a1900293179ed37f07 = MAKE_CODEOBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_3430bdf4d4af7324c563507e25970cb0 = MAKE_CODEOBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_b18b00bada9e26956b5942e54484dbe9 = MAKE_CODEOBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_b909367ca65a3d26dc089c93b923a2da = MAKE_CODEOBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_c37ef1e149c643ced4bd84c552866881 = MAKE_CODEOBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_7eaf67e2155a2f6be9db7f5e1a11b9db = MAKE_CODEOBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_0c1f44600a8eaf045eb223efdedb9f9e = MAKE_CODEOBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_cf8045bdc2106ef4fe7a0fd2c82c6fa6 = MAKE_CODEOBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_2e02a78ae8cb1e5e40dc0c075d7e5d73 = MAKE_CODEOBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_68702b76b657f51c70c14212f46d56e5 = MAKE_CODEOBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[373], NULL, 1, 0, 0);
    codeobj_51e34b65b36af0908bcbe484ec01d355 = MAKE_CODEOBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[374], NULL, 2, 0, 0);
    codeobj_ff148b716a279911f9a3a019642e006f = MAKE_CODEOBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[375], NULL, 2, 0, 0);
    codeobj_a7b1f9a589ad994af4c551cc94d7c52a = MAKE_CODEOBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[376], NULL, 2, 0, 0);
    codeobj_6a3d4733a3d26e648aeec2f468a8ef13 = MAKE_CODEOBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[377], NULL, 2, 0, 0);
    codeobj_4964c5add1a90c858cc6065c1b31d618 = MAKE_CODEOBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[377], NULL, 2, 0, 0);
    codeobj_2a4a7671c5a51add9befe7aefb67b9a0 = MAKE_CODEOBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[377], NULL, 2, 0, 0);
    codeobj_2284fe7dba43e6699606ea7ec9286a0f = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[378], NULL, 2, 0, 0);
    codeobj_448cb69a025a9132a06c973e496c656d = MAKE_CODEOBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[378], NULL, 2, 0, 0);
    codeobj_1d012055d8aed31d15f202b1832995b1 = MAKE_CODEOBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[379], NULL, 3, 0, 0);
    codeobj_f23ec398da712d5693c3692617a031b7 = MAKE_CODEOBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[380], NULL, 4, 0, 0);
    codeobj_8c8029338e59aa0bf0db53f4a9775836 = MAKE_CODEOBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[381], NULL, 2, 0, 0);
    codeobj_ec1b81cf0a7dc023473c85fd5d5dc790 = MAKE_CODEOBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[382], NULL, 0, 0, 0);
    codeobj_6c21c9839064cfa73bf311c43c4a0573 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[382], NULL, 0, 0, 0);
    codeobj_bd7fa85320db918b209755ec473fa17b = MAKE_CODEOBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[382], NULL, 0, 0, 0);
    codeobj_07834c0d130fe4aba5f3f6f257b4ac85 = MAKE_CODEOBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[382], NULL, 0, 0, 0);
    codeobj_fd0568f382b229cc39ca89379b17a150 = MAKE_CODEOBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[382], NULL, 0, 0, 0);
    codeobj_b1c2b0df500412211a5e5ca2d95196d7 = MAKE_CODEOBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[76], mod_consts[382], NULL, 0, 0, 0);
    codeobj_1f9f9b77c6fe198c1ce03938abc18681 = MAKE_CODEOBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[383], NULL, 1, 0, 0);
    codeobj_39db2a15f50ab3359ddc5f764656f0d7 = MAKE_CODEOBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[384], NULL, 2, 0, 0);
    codeobj_ef10ab84eec30acd6731232e1da0edf6 = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[385], NULL, 0, 0, 0);
    codeobj_527256bfcb7228baf27492ade15d34bb = MAKE_CODEOBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[386], NULL, 1, 0, 0);
    codeobj_1a7c2af03c0ed2da5549c6e5275a481d = MAKE_CODEOBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[387], NULL, 1, 0, 0);
    codeobj_18babe79dc5ec8258dca0d26e5377a80 = MAKE_CODEOBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[388], NULL, 1, 0, 0);
    codeobj_bf5ab5c285e0b6dc9288a2d447a5f40a = MAKE_CODEOBJECT(module_filename_obj, 537, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[76], mod_consts[389], NULL, 1, 0, 0);
    codeobj_f1ac89b3d401dc4fdcb9e390ecde5baa = MAKE_CODEOBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[390], NULL, 3, 0, 0);
    codeobj_8855d98bbc1e8a4ed60563bc6e4a83d4 = MAKE_CODEOBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[391], NULL, 5, 0, 0);
    codeobj_6f8ba9fac10c076ffb9f1ee61a62c9e1 = MAKE_CODEOBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[392], NULL, 3, 0, 0);
    codeobj_795968304448940c0bc9ae6f71ee0b03 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[393], NULL, 1, 0, 0);
    codeobj_19b1a887069b4f3502043b00b450b725 = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[393], NULL, 1, 0, 0);
    codeobj_de98a6ab198cb54f76e48c6017326b3d = MAKE_CODEOBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[393], NULL, 1, 0, 0);
    codeobj_e608a1f5366d42f8c0cc496abf172e6d = MAKE_CODEOBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[394], NULL, 2, 0, 0);
    codeobj_a45b8338e7b226bc5980bb6bb14f35dc = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[395], NULL, 1, 0, 0);
    codeobj_00c2e5711efc028ad9763a10e953d13c = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[395], NULL, 1, 0, 0);
    codeobj_5e6ca4d54e5f4784ee74802290069f27 = MAKE_CODEOBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[395], NULL, 1, 0, 0);
    codeobj_5e497850dc69bdc2b69fe21fa761637c = MAKE_CODEOBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[395], NULL, 1, 0, 0);
    codeobj_96e9d0eb20c5e61a5f4c451a27fcd173 = MAKE_CODEOBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[395], NULL, 1, 0, 0);
    codeobj_633a561a6a05969003b788a2be6c86ec = MAKE_CODEOBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[395], NULL, 1, 0, 0);
    codeobj_8e245c557442fa77839919bc0059a600 = MAKE_CODEOBJECT(module_filename_obj, 528, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[395], NULL, 1, 0, 0);
    codeobj_31b08931929b88e0e937736e336a5a8d = MAKE_CODEOBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[396], NULL, 2, 0, 0);
    codeobj_777cb76e125e0fb50bf8dda7c47f21d3 = MAKE_CODEOBJECT(module_filename_obj, 529, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[397], NULL, 2, 0, 0);
    codeobj_be027f750448774c7cff367150c06feb = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[398], NULL, 2, 0, 0);
    codeobj_93de4eedb030a6165768198766cb0f56 = MAKE_CODEOBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[398], NULL, 2, 0, 0);
    codeobj_badf74c90de8c9ec7b25d986daaac4c1 = MAKE_CODEOBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[399], NULL, 3, 0, 0);
    codeobj_89fb39ff79706892772a3b5b5d2f8017 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[400], NULL, 1, 0, 0);
    codeobj_308faabe13e1673dbbf855fc733d36ee = MAKE_CODEOBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[400], NULL, 1, 0, 0);
    codeobj_ecf390162d19c9cb0386a75d7835eaf0 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[400], NULL, 1, 0, 0);
    codeobj_c5d8bc93f44742abb012754750b87ed2 = MAKE_CODEOBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[400], NULL, 1, 0, 0);
    codeobj_f762ebafb0fdf0919cc508368f389651 = MAKE_CODEOBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[400], NULL, 1, 0, 0);
    codeobj_bb899fd20569b8a5617d8c7d18c86ac7 = MAKE_CODEOBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[400], NULL, 1, 0, 0);
    codeobj_81b8fbdc5e84409bfa35aad003cb852a = MAKE_CODEOBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[400], NULL, 1, 0, 0);
    codeobj_b752cce32a19d49c8330852bc931b35a = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[401], NULL, 2, 0, 0);
    codeobj_6dc51c97f6ce80af616ba01e40059601 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[402], NULL, 3, 0, 0);
    codeobj_cf37e202958c8f56696db776f6a4d980 = MAKE_CODEOBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[403], NULL, 3, 0, 0);
    codeobj_6d0b0170f2673b99e756c9c93c4bc078 = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[404], NULL, 2, 0, 0);
    codeobj_e0b7d2dcf76ded23ca30f1d8cfa45c53 = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[405], NULL, 3, 0, 0);
    codeobj_1f11e0059f4b45944b9726e603ae7b69 = MAKE_CODEOBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[406], NULL, 2, 0, 0);
    codeobj_76d493656e17f640d7fe7f7c430113a7 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[407], NULL, 3, 0, 0);
    codeobj_30757468920efb4bc65ff84c2a781dbd = MAKE_CODEOBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[408], NULL, 2, 0, 0);
    codeobj_01009d695dac546ee1a7a998d0d50832 = MAKE_CODEOBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[409], NULL, 2, 0, 0);
    codeobj_a4f54f6c6832c7542b1bde36290fdd7a = MAKE_CODEOBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[409], NULL, 2, 0, 0);
    codeobj_6a5742e63a1522c17816f097cc35f3a7 = MAKE_CODEOBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[410], NULL, 1, 0, 0);
    codeobj_877c4c9c8a93c8e9089285aa508d6e2a = MAKE_CODEOBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[410], NULL, 1, 0, 0);
    codeobj_73a23b26efd6baa9b2a264c707b5f653 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[411], NULL, 2, 0, 0);
    codeobj_3d91346076588df400f09099e7c28b34 = MAKE_CODEOBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[412], NULL, 1, 0, 0);
    codeobj_f87229055dc1ccc8ea16f6fee4763087 = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[413], NULL, 1, 0, 0);
    codeobj_f0b7ed232c495bdc901c1e2ff78d2e03 = MAKE_CODEOBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[413], NULL, 1, 0, 0);
    codeobj_602503e567efb0c7338f133e19053a75 = MAKE_CODEOBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[414], NULL, 6, 0, 0);
    codeobj_cc4d5764f95eca8944b5a744a358ebe8 = MAKE_CODEOBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[415], NULL, 2, 0, 0);
    codeobj_0146919b9eee32798f83bdb816a5dd02 = MAKE_CODEOBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[415], NULL, 2, 0, 0);
    codeobj_4649757eeafae1468a06485c72ef856d = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[416], NULL, 3, 0, 0);
    codeobj_3d22fd121106d1b2c08f9283badd2fb4 = MAKE_CODEOBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[416], NULL, 3, 0, 0);
    codeobj_447fa47a4104ad614165c31ce006762d = MAKE_CODEOBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[417], NULL, 2, 0, 0);
    codeobj_015274d395acd3c3bdee0316919d50f4 = MAKE_CODEOBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[418], NULL, 2, 0, 0);
    codeobj_2b987639871bf2c0c80f3f148fda66c9 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[418], NULL, 2, 0, 0);
    codeobj_b7fa39ad60dbf88eb8d889323360d486 = MAKE_CODEOBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[418], NULL, 2, 0, 0);
    codeobj_2c961b1fbf08029652c36341b4381e48 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[419], NULL, 3, 0, 0);
    codeobj_984c69069b9fbe7c93a04b57d36c6ba9 = MAKE_CODEOBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[419], NULL, 3, 0, 0);
    codeobj_012994fc9a7384bc5092d41e2e466493 = MAKE_CODEOBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[419], NULL, 3, 0, 0);
    codeobj_e8bb296dd39a085de6195e68985efd97 = MAKE_CODEOBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[420], NULL, 1, 0, 0);
    codeobj_309de8afaa9e5ea6ad74792bb02af7b7 = MAKE_CODEOBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[420], NULL, 1, 0, 0);
    codeobj_0f9116dafcc1c743720ece1d90226415 = MAKE_CODEOBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[420], NULL, 1, 0, 0);
    codeobj_ca5825f9bfb09021bf97088fcf7877d3 = MAKE_CODEOBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[421], NULL, 1, 0, 0);
    codeobj_0e95a944ecaddd607ada53ad2431fb62 = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[422], NULL, 3, 0, 0);
    codeobj_f06f82d8c19d3cf530e5d6580867e83d = MAKE_CODEOBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[422], NULL, 3, 0, 0);
    codeobj_2103fb8dbd59fdcb9f8c7f705d662df6 = MAKE_CODEOBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[422], NULL, 3, 0, 0);
    codeobj_3ebbd9af890ef8135576d67669e73479 = MAKE_CODEOBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[423], NULL, 1, 0, 0);
    codeobj_1939eb6ce8c700257225e8d27468b314 = MAKE_CODEOBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[424], NULL, 2, 0, 0);
    codeobj_ece47ab9c08408e22a24978d1b23dd44 = MAKE_CODEOBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[425], NULL, 1, 0, 0);
    codeobj_1a04e114c8a7ea83f7c9441e4960dda5 = MAKE_CODEOBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[426], NULL, 2, 0, 0);
    codeobj_a9aa815601c7938144f29c182883260c = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[427], NULL, 1, 0, 0);
    codeobj_efc647402040d34a0d4a51039a171e05 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[427], NULL, 1, 0, 0);
    codeobj_ade7050e5540f53c2e6a651ce4c233ff = MAKE_CODEOBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[427], NULL, 1, 0, 0);
    codeobj_9fca7727e916d7d360988aa61f06e7c9 = MAKE_CODEOBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[427], NULL, 1, 0, 0);
    codeobj_eea42c4f5da54194e27180991443483f = MAKE_CODEOBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[427], NULL, 1, 0, 0);
    codeobj_9a4f4ef6d55ab4245b8dc7e53155ed53 = MAKE_CODEOBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[427], NULL, 1, 0, 0);
    codeobj_6074bc3b79cf360a702b37064c2fb43f = MAKE_CODEOBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[428], NULL, 2, 0, 0);
    codeobj_204bceec088db951ee0e9df107e13269 = MAKE_CODEOBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[428], NULL, 2, 0, 0);
    codeobj_3f4a4028d9feae0ff998b4432419f9ce = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[429], NULL, 2, 0, 0);
    codeobj_77308ad0fecf505ec82416412c3986d2 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[429], NULL, 2, 0, 0);
    codeobj_d592ae9b1191338637a55e76e67cf0a7 = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[429], NULL, 2, 0, 0);
    codeobj_2c4c86aa8eaa510807fc7fbec80cce47 = MAKE_CODEOBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[429], NULL, 2, 0, 0);
    codeobj_00ed0a32ecdec5fa179dff1120cd98d4 = MAKE_CODEOBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[430], NULL, 3, 0, 0);
    codeobj_bb4573ce7c91fc057d42d48e7281f181 = MAKE_CODEOBJECT(module_filename_obj, 742, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[431], mod_consts[432], NULL, 1, 0, 0);
    codeobj_0c35939f6db5c938534ddcb81dffb12a = MAKE_CODEOBJECT(module_filename_obj, 761, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[431], mod_consts[432], NULL, 1, 0, 0);
    codeobj_e36e048ec99a88668cb2e87523c6d286 = MAKE_CODEOBJECT(module_filename_obj, 778, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[431], mod_consts[432], NULL, 1, 0, 0);
    codeobj_64b3ab9f6af70f2481d2a17326f51c2d = MAKE_CODEOBJECT(module_filename_obj, 725, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[431], mod_consts[433], NULL, 1, 0, 0);
    codeobj_ad1c272c56acb1fe87f0e6962ac5a538 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[434], NULL, NULL, 0, 0, 0);
    codeobj_ef29f0f38d4817113872324632d522bf = MAKE_CODEOBJECT(module_filename_obj, 757, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[333], mod_consts[435], NULL, 1, 0, 0);
    codeobj_81a1515999478f8818d512d09d73e5ca = MAKE_CODEOBJECT(module_filename_obj, 738, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[332], mod_consts[435], NULL, 1, 0, 0);
    codeobj_4ad03fef845bd1027046e514df13ff71 = MAKE_CODEOBJECT(module_filename_obj, 721, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[331], mod_consts[436], NULL, 2, 0, 0);
    codeobj_f2ad94f50511acb93dfbf924ea6d6687 = MAKE_CODEOBJECT(module_filename_obj, 706, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[330], mod_consts[437], NULL, 3, 0, 0);
    codeobj_be24806a26f496a2ef1f9b2bd2570408 = MAKE_CODEOBJECT(module_filename_obj, 685, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[329], mod_consts[437], NULL, 3, 0, 0);
    codeobj_11208aad36a244ea625046472e7a85a8 = MAKE_CODEOBJECT(module_filename_obj, 774, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[334], mod_consts[438], NULL, 1, 0, 0);
    codeobj_6b9ce9231ec5d84c92f62c8fa239da03 = MAKE_CODEOBJECT(module_filename_obj, 714, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[439], NULL, 2, 0, 0);
    codeobj_9eaafae6fd36f40532867a539d0222da = MAKE_CODEOBJECT(module_filename_obj, 750, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[440], NULL, 1, 0, 0);
    codeobj_1621fb5374ee1ddf11711f9d59ec1b22 = MAKE_CODEOBJECT(module_filename_obj, 693, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[441], NULL, 3, 0, 0);
    codeobj_fc3038458c82af6105fbdf90089f19f1 = MAKE_CODEOBJECT(module_filename_obj, 769, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[440], NULL, 1, 0, 0);
    codeobj_8b052a5c54f2a1865c3b2b7fb5886e44 = MAKE_CODEOBJECT(module_filename_obj, 669, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[442], NULL, 3, 0, 0);
    codeobj_931602095a91190f715efaa557d443ee = MAKE_CODEOBJECT(module_filename_obj, 733, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[440], NULL, 1, 0, 0);
    codeobj_a4e1f50762e2d15f4a206fe1fbe85ea3 = MAKE_CODEOBJECT(module_filename_obj, 659, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[328], mod_consts[443], NULL, 2, 0, 0);
    codeobj_5f9ce8a8ac92bc0844c37204d8cdef57 = MAKE_CODEOBJECT(module_filename_obj, 622, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[444], NULL, 1, 0, 0);
    codeobj_e99baa294d7e3ac3bedf7d0feef42ce0 = MAKE_CODEOBJECT(module_filename_obj, 603, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[445], NULL, 2, 0, 0);
    codeobj_ee27d5ed795e4fa866988da17537f501 = MAKE_CODEOBJECT(module_filename_obj, 596, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[446], NULL, 1, 0, 0);
    codeobj_07469be31828292b868b4e02e9400ed7 = MAKE_CODEOBJECT(module_filename_obj, 615, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[447], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__100_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__101_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__102_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__103_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__104_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__105_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__106_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__107_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__108_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__109_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__10_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__110_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__111_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__112_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__113_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__114_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__115_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__116_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__117_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__118_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__119_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__11_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__120_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__121_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__122_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__123_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__124_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__125_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__126_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__127_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__128_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__129_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__12_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__130_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__131_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__132_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__133_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__134_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__135_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__136_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__137_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__138_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__139_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__13_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__140_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__141_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__142_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__143_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__144_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__145_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__146_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__147_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__148_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__149_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__14_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__150_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__151_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__152_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__153_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__154_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__155_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__156_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__157_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__158_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__159_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__15_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__160_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__161_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__162_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__163_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__164_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__165_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__166_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__167_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__168_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__169_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__16_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__170_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__171_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__172_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__173_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__174_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__175_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__176_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__177_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__178_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__179_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__17_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__180_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__181_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__182_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__183_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__184_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__185_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__186_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__187_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__188_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__189_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__18_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__190_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__191_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__192_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__193_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__194_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__195_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__196_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__197_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__198_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__199_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__19_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__200_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__201_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__202_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__203_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__204_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__205_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__206_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__207_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__208_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__209_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__20_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__210_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__211_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__212_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__213_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__214_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__215_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__216_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__217_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__218_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__219_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__21_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__220_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__221_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__222_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__223_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__224_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__225_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__226_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__227_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__228_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__229_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__22_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__230_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__231_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__232_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__233_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__234_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__235_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__236_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__237_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__238_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__239_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__23_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__240_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__241_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__242_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__243_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__244_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__245_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__246_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__247_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__248_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__249_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__24_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__250_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__251_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__252_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__253_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__254_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__255_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__256_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__257_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__258_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__259_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__25_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__260_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__261_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__262_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__263_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__264_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__265_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__266_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__267_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__268_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__269_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__26_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__270_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__271_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__272_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__273_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__274_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__275_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__276_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__277_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__278_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__279_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__27_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__280_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__281_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__282_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__283_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__284_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__285_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__286_num_pos_args();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__287_get_exclude_keywords();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__288_signature_or_spec();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__289_expand_sig();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__28_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__290_create_signature_registry(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__291_check_valid();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__292__is_valid_args();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__293_check_partial();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__294__is_partial_args();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__295_check_arity();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__296__is_arity();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__297_check_varargs();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__298__has_varargs();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__299_check_keywords();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__29_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__300__has_keywords();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__301_check_required_args();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__302__num_required_args();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__30_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__31_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__32_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__33_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__34_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__35_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__36_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__37_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__38_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__39_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__40_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__41_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__42_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__43_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__44_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__45_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__46_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__47_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__48_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__49_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__50_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__51_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__52_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__53_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__54_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__55_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__56_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__57_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__58_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__59_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__60_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__61_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__62_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__63_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__64_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__65_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__66_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__67_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__68_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__69_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__70_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__71_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__72_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__73_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__74_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__75_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__76_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__77_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__78_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__79_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__7_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__80_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__81_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__82_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__83_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__84_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__85_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__86_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__87_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__88_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__89_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__90_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__91_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__92_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__93_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__94_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__95_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__96_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__97_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__98_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__99_lambda();


static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__9_lambda(PyObject *defaults);


// The module function definitions.
static PyObject *impl_toolz$_signatures$$$function__286_num_pos_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sigspec = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_ee27d5ed795e4fa866988da17537f501;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee27d5ed795e4fa866988da17537f501 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee27d5ed795e4fa866988da17537f501)) {
        Py_XDECREF(cache_frame_ee27d5ed795e4fa866988da17537f501);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee27d5ed795e4fa866988da17537f501 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee27d5ed795e4fa866988da17537f501 = MAKE_FUNCTION_FRAME(codeobj_ee27d5ed795e4fa866988da17537f501, module_toolz$_signatures, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee27d5ed795e4fa866988da17537f501->m_type_description == NULL);
    frame_ee27d5ed795e4fa866988da17537f501 = cache_frame_ee27d5ed795e4fa866988da17537f501;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee27d5ed795e4fa866988da17537f501);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee27d5ed795e4fa866988da17537f501) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_sigspec);
            tmp_expression_value_2 = par_sigspec;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_ee27d5ed795e4fa866988da17537f501->m_frame.f_lineno = 598;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_sum_sequence_1 = MAKE_GENERATOR_toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee27d5ed795e4fa866988da17537f501);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee27d5ed795e4fa866988da17537f501);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee27d5ed795e4fa866988da17537f501);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee27d5ed795e4fa866988da17537f501, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee27d5ed795e4fa866988da17537f501->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee27d5ed795e4fa866988da17537f501, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee27d5ed795e4fa866988da17537f501,
        type_description_1,
        par_sigspec
    );


    // Release cached frame if used for exception.
    if (frame_ee27d5ed795e4fa866988da17537f501 == cache_frame_ee27d5ed795e4fa866988da17537f501) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ee27d5ed795e4fa866988da17537f501);
        cache_frame_ee27d5ed795e4fa866988da17537f501 = NULL;
    }

    assertFrameObject(frame_ee27d5ed795e4fa866988da17537f501);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sigspec);
    Py_DECREF(par_sigspec);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sigspec);
    Py_DECREF(par_sigspec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr_locals *generator_heap = (struct toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_a3ee31ff0e9a0f7c5bda45e09847e0bd, module_toolz$_signatures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 598;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_1 = generator_heap->var_x;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 599;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_2 = generator_heap->var_x;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 599;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 599;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            generator_heap->exception_lineno = 599;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(tmp_and_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_3 = generator_heap->var_x;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 600;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_4 = generator_heap->var_x;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            generator_heap->exception_lineno = 600;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_5;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_5 = mod_consts[7];
        Py_INCREF(tmp_expression_value_5);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_5;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 598;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 598;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr_context,
        module_toolz$_signatures,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[9],
#endif
        codeobj_a3ee31ff0e9a0f7c5bda45e09847e0bd,
        closure,
        1,
        sizeof(struct toolz$_signatures$$$function__286_num_pos_args$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_toolz$_signatures$$$function__287_get_exclude_keywords(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num_pos_only = python_pars[0];
    PyObject *par_sigspec = python_pars[1];
    nuitka_bool var_has_kwargs = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_pos_args = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    struct Nuitka_FrameObject *frame_e99baa294d7e3ac3bedf7d0feef42ce0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0)) {
        Py_XDECREF(cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0 = MAKE_FUNCTION_FRAME(codeobj_e99baa294d7e3ac3bedf7d0feef42ce0, module_toolz$_signatures, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0->m_type_description == NULL);
    frame_e99baa294d7e3ac3bedf7d0feef42ce0 = cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e99baa294d7e3ac3bedf7d0feef42ce0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e99baa294d7e3ac3bedf7d0feef42ce0) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_num_pos_only);
        tmp_cmp_expr_left_1 = par_num_pos_only;
        tmp_cmp_expr_right_1 = mod_consts[10];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[11];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_sigspec);
            tmp_expression_value_2 = par_sigspec;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_1 = "oobo";
                goto frame_exception_exit_1;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_1 = "oobo";
                goto frame_exception_exit_1;
            }
            frame_e99baa294d7e3ac3bedf7d0feef42ce0->m_frame.f_lineno = 608;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_1 = "oobo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 607;
                type_description_1 = "oobo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        assert(!(tmp_truth_name_1 == -1));
        tmp_assign_source_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        var_has_kwargs = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        assert(var_has_kwargs != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_1 = (var_has_kwargs == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[11];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(par_sigspec);
        tmp_expression_value_5 = par_sigspec;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[1]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        frame_e99baa294d7e3ac3bedf7d0feef42ce0->m_frame.f_lineno = 611;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_pos_only);
        tmp_stop_value_1 = par_num_pos_only;
        tmp_subscript_value_1 = MAKE_SLICEOBJ1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        assert(var_pos_args == NULL);
        var_pos_args = tmp_assign_source_3;
    }
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_pos_args);
            tmp_iter_arg_2 = var_pos_args;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_1 = "oobo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_2__$0 == NULL);
            tmp_genexpr_2__$0 = tmp_assign_source_4;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_2[1];

            tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr(tmp_closure_2);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "oobo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e99baa294d7e3ac3bedf7d0feef42ce0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e99baa294d7e3ac3bedf7d0feef42ce0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e99baa294d7e3ac3bedf7d0feef42ce0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e99baa294d7e3ac3bedf7d0feef42ce0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e99baa294d7e3ac3bedf7d0feef42ce0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e99baa294d7e3ac3bedf7d0feef42ce0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e99baa294d7e3ac3bedf7d0feef42ce0,
        type_description_1,
        par_num_pos_only,
        par_sigspec,
        (int)var_has_kwargs,
        var_pos_args
    );


    // Release cached frame if used for exception.
    if (frame_e99baa294d7e3ac3bedf7d0feef42ce0 == cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0);
        cache_frame_e99baa294d7e3ac3bedf7d0feef42ce0 = NULL;
    }

    assertFrameObject(frame_e99baa294d7e3ac3bedf7d0feef42ce0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    var_has_kwargs = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_pos_args);
    var_pos_args = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    var_has_kwargs = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_pos_args);
    var_pos_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_num_pos_only);
    Py_DECREF(par_num_pos_only);
    CHECK_OBJECT(par_sigspec);
    Py_DECREF(par_sigspec);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_num_pos_only);
    Py_DECREF(par_num_pos_only);
    CHECK_OBJECT(par_sigspec);
    Py_DECREF(par_sigspec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr_locals *generator_heap = (struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4dcdf91cc8c92c11007b7f8d0cdebe48, module_toolz$_signatures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 607;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_2 = generator_heap->var_x;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 607;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_3 = generator_heap->var_x;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 607;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 607;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 607;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 607;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr_context,
        module_toolz$_signatures,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[14],
#endif
        codeobj_4dcdf91cc8c92c11007b7f8d0cdebe48,
        closure,
        1,
        sizeof(struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__1_genexpr_locals)
    );
}



struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr_locals *generator_heap = (struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_11f77c74e256d7c552b04769f1759047, module_toolz$_signatures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 612;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_2 = generator_heap->var_x;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 612;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 612;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 612;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr_context,
        module_toolz$_signatures,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[14],
#endif
        codeobj_11f77c74e256d7c552b04769f1759047,
        closure,
        1,
        sizeof(struct toolz$_signatures$$$function__287_get_exclude_keywords$$$genexpr__2_genexpr_locals)
    );
}


static PyObject *impl_toolz$_signatures$$$function__288_signature_or_spec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    struct Nuitka_FrameObject *frame_07469be31828292b868b4e02e9400ed7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_07469be31828292b868b4e02e9400ed7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07469be31828292b868b4e02e9400ed7)) {
        Py_XDECREF(cache_frame_07469be31828292b868b4e02e9400ed7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07469be31828292b868b4e02e9400ed7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07469be31828292b868b4e02e9400ed7 = MAKE_FUNCTION_FRAME(codeobj_07469be31828292b868b4e02e9400ed7, module_toolz$_signatures, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_07469be31828292b868b4e02e9400ed7->m_type_description == NULL);
    frame_07469be31828292b868b4e02e9400ed7 = cache_frame_07469be31828292b868b4e02e9400ed7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_07469be31828292b868b4e02e9400ed7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_07469be31828292b868b4e02e9400ed7) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_func);
        tmp_args_element_value_1 = par_func;
        frame_07469be31828292b868b4e02e9400ed7->m_frame.f_lineno = 617;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[17], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_07469be31828292b868b4e02e9400ed7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_07469be31828292b868b4e02e9400ed7, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = mod_consts[18];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 616;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_07469be31828292b868b4e02e9400ed7->m_frame) frame_07469be31828292b868b4e02e9400ed7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_07469be31828292b868b4e02e9400ed7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_07469be31828292b868b4e02e9400ed7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_07469be31828292b868b4e02e9400ed7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07469be31828292b868b4e02e9400ed7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07469be31828292b868b4e02e9400ed7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07469be31828292b868b4e02e9400ed7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07469be31828292b868b4e02e9400ed7,
        type_description_1,
        par_func
    );


    // Release cached frame if used for exception.
    if (frame_07469be31828292b868b4e02e9400ed7 == cache_frame_07469be31828292b868b4e02e9400ed7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_07469be31828292b868b4e02e9400ed7);
        cache_frame_07469be31828292b868b4e02e9400ed7 = NULL;
    }

    assertFrameObject(frame_07469be31828292b868b4e02e9400ed7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__289_expand_sig(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sig = python_pars[0];
    PyObject *var_num_pos_only = NULL;
    PyObject *var_func = NULL;
    PyObject *var_keyword_only = NULL;
    PyObject *var_sigspec = NULL;
    PyObject *var_keyword_exclude = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5f9ce8a8ac92bc0844c37204d8cdef57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57)) {
        Py_XDECREF(cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57 = MAKE_FUNCTION_FRAME(codeobj_5f9ce8a8ac92bc0844c37204d8cdef57, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57->m_type_description == NULL);
    frame_5f9ce8a8ac92bc0844c37204d8cdef57 = cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5f9ce8a8ac92bc0844c37204d8cdef57);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5f9ce8a8ac92bc0844c37204d8cdef57) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_sig);
        tmp_isinstance_inst_1 = par_sig;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_len_arg_1 = par_sig;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[19];
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_1 = par_sig;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 641;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 641;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 641;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 641;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[20];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 641;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_num_pos_only = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_func = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_keyword_only == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_keyword_only = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_sig);
        tmp_expression_value_1 = par_sig;
        tmp_subscript_value_1 = mod_consts[21];
        tmp_isinstance_inst_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 642;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_2 = par_sig;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_4, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 644;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_5, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 644;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 644;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 644;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_num_pos_only = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_func = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[11];
        assert(var_keyword_only == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_keyword_only = tmp_assign_source_13;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_value_1 = var_func;
        frame_5f9ce8a8ac92bc0844c37204d8cdef57->m_frame.f_lineno = 646;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sigspec == NULL);
        var_sigspec = tmp_assign_source_14;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(par_sig);
        tmp_assign_source_15 = par_sig;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_func = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_value_2 = var_func;
        frame_5f9ce8a8ac92bc0844c37204d8cdef57->m_frame.f_lineno = 649;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sigspec == NULL);
        var_sigspec = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sigspec);
        tmp_args_element_value_3 = var_sigspec;
        frame_5f9ce8a8ac92bc0844c37204d8cdef57->m_frame.f_lineno = 650;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_pos_only == NULL);
        var_num_pos_only = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[11];
        assert(var_keyword_only == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_keyword_only = tmp_assign_source_18;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_num_pos_only == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 652;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_num_pos_only;
        if (var_sigspec == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 652;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_sigspec;
        frame_5f9ce8a8ac92bc0844c37204d8cdef57->m_frame.f_lineno = 652;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_keyword_exclude == NULL);
        var_keyword_exclude = tmp_assign_source_19;
    }
    {
        PyObject *tmp_tuple_element_1;
        if (var_num_pos_only == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 653;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_num_pos_only;
        tmp_return_value = PyTuple_New(4);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (var_func == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 653;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_tuple_element_1 = var_func;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
            if (var_keyword_only == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 653;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_left_value_1 = var_keyword_only;
            CHECK_OBJECT(var_keyword_exclude);
            tmp_right_value_1 = var_keyword_exclude;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 653;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            if (var_sigspec == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 653;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_tuple_element_1 = var_sigspec;
            PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f9ce8a8ac92bc0844c37204d8cdef57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f9ce8a8ac92bc0844c37204d8cdef57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f9ce8a8ac92bc0844c37204d8cdef57);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f9ce8a8ac92bc0844c37204d8cdef57, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f9ce8a8ac92bc0844c37204d8cdef57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f9ce8a8ac92bc0844c37204d8cdef57, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f9ce8a8ac92bc0844c37204d8cdef57,
        type_description_1,
        par_sig,
        var_num_pos_only,
        var_func,
        var_keyword_only,
        var_sigspec,
        var_keyword_exclude
    );


    // Release cached frame if used for exception.
    if (frame_5f9ce8a8ac92bc0844c37204d8cdef57 == cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57);
        cache_frame_5f9ce8a8ac92bc0844c37204d8cdef57 = NULL;
    }

    assertFrameObject(frame_5f9ce8a8ac92bc0844c37204d8cdef57);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_only);
    var_keyword_only = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    CHECK_OBJECT(var_keyword_exclude);
    Py_DECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_only);
    var_keyword_only = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__290_create_signature_registry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module_info = python_pars[0];
    PyObject *par_signatures = python_pars[1];
    PyObject *var_module = NULL;
    PyObject *var_info = NULL;
    PyObject *var_name = NULL;
    PyObject *var_sigs = NULL;
    PyObject *var_new_sigs = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a4e1f50762e2d15f4a206fe1fbe85ea3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3)) {
        Py_XDECREF(cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3 = MAKE_FUNCTION_FRAME(codeobj_a4e1f50762e2d15f4a206fe1fbe85ea3, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3->m_type_description == NULL);
    frame_a4e1f50762e2d15f4a206fe1fbe85ea3 = cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a4e1f50762e2d15f4a206fe1fbe85ea3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a4e1f50762e2d15f4a206fe1fbe85ea3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_module_info);
        tmp_expression_value_1 = par_module_info;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_a4e1f50762e2d15f4a206fe1fbe85ea3->m_frame.f_lineno = 660;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 660;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 660;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 660;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 660;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 660;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_module;
            var_module = tmp_assign_source_6;
            Py_INCREF(var_module);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_info;
            var_info = tmp_assign_source_7;
            Py_INCREF(var_info);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_module);
        tmp_isinstance_inst_1 = var_module;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_module);
        tmp_args_element_value_1 = var_module;
        frame_a4e1f50762e2d15f4a206fe1fbe85ea3->m_frame.f_lineno = 662;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_module;
            assert(old != NULL);
            var_module = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_2 = var_info;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_a4e1f50762e2d15f4a206fe1fbe85ea3->m_frame.f_lineno = 663;
        tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 663;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 663;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 663;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 663;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[22];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 663;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_14;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_sigs;
            var_sigs = tmp_assign_source_15;
            Py_INCREF(var_sigs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_module);
        tmp_expression_value_3 = var_module;
        CHECK_OBJECT(var_name);
        tmp_attribute_value_1 = var_name;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_3, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(var_sigs);
            tmp_iter_arg_5 = var_sigs;
            tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_16 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_new_sigs;
            var_new_sigs = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(var_new_sigs);
        tmp_ass_subvalue_1 = var_new_sigs;
        if (par_signatures == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 666;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_1 = par_signatures;
        CHECK_OBJECT(var_module);
        tmp_getattr_target_1 = var_module;
        CHECK_OBJECT(var_name);
        tmp_getattr_attr_1 = var_name;
        tmp_ass_subscript_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 663;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 660;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a4e1f50762e2d15f4a206fe1fbe85ea3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a4e1f50762e2d15f4a206fe1fbe85ea3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a4e1f50762e2d15f4a206fe1fbe85ea3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4e1f50762e2d15f4a206fe1fbe85ea3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4e1f50762e2d15f4a206fe1fbe85ea3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4e1f50762e2d15f4a206fe1fbe85ea3,
        type_description_1,
        par_module_info,
        par_signatures,
        var_module,
        var_info,
        var_name,
        var_sigs,
        var_new_sigs
    );


    // Release cached frame if used for exception.
    if (frame_a4e1f50762e2d15f4a206fe1fbe85ea3 == cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3);
        cache_frame_a4e1f50762e2d15f4a206fe1fbe85ea3 = NULL;
    }

    assertFrameObject(frame_a4e1f50762e2d15f4a206fe1fbe85ea3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_module);
    var_module = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_new_sigs);
    var_new_sigs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_module);
    var_module = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_new_sigs);
    var_new_sigs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_module_info);
    Py_DECREF(par_module_info);
    CHECK_OBJECT(par_signatures);
    Py_DECREF(par_signatures);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_module_info);
    Py_DECREF(par_module_info);
    CHECK_OBJECT(par_signatures);
    Py_DECREF(par_signatures);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr_locals {
    PyObject *var_sig;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr_locals *generator_heap = (struct toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_sig = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_0d1d4d08a0dceef36484bdcebbe60efc, module_toolz$_signatures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 665;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_sig;
            generator_heap->var_sig = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_sig);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 665;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_sig);
        tmp_args_element_value_1 = generator_heap->var_sig;
        generator->m_frame->m_frame.f_lineno = 665;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 665;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 665;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 665;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_sig
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_sig);
    generator_heap->var_sig = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_sig);
    generator_heap->var_sig = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr_context,
        module_toolz$_signatures,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[35],
#endif
        codeobj_0d1d4d08a0dceef36484bdcebbe60efc,
        closure,
        1,
        sizeof(struct toolz$_signatures$$$function__290_create_signature_registry$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_toolz$_signatures$$$function__291_check_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sig = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_num_pos_only = NULL;
    PyObject *var_func = NULL;
    PyObject *var_keyword_exclude = NULL;
    PyObject *var_sigspec = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8b052a5c54f2a1865c3b2b7fb5886e44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44)) {
        Py_XDECREF(cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44 = MAKE_FUNCTION_FRAME(codeobj_8b052a5c54f2a1865c3b2b7fb5886e44, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44->m_type_description == NULL);
    frame_8b052a5c54f2a1865c3b2b7fb5886e44 = cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8b052a5c54f2a1865c3b2b7fb5886e44);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8b052a5c54f2a1865c3b2b7fb5886e44) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_1 = par_sig;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 671;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_num_pos_only = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_func = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_keyword_exclude == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_keyword_exclude = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_sigspec == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_sigspec = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_pos_only);
        tmp_cmp_expr_right_1 = var_num_pos_only;
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 672;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_keyword_exclude);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_keyword_exclude);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_seq_1 = par_kwargs;
        tmp_assign_source_10 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kwargs;
            assert(old != NULL);
            par_kwargs = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_keyword_exclude);
        tmp_iter_arg_2 = var_keyword_exclude;
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 676;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_13;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 677;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_item);
        tmp_args_element_value_1 = var_item;
        tmp_args_element_value_2 = Py_None;
        frame_8b052a5c54f2a1865c3b2b7fb5886e44->m_frame.f_lineno = 677;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 676;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_func);
        tmp_dircall_arg1_1 = var_func;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 679;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }

        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_2 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_8b052a5c54f2a1865c3b2b7fb5886e44, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_8b052a5c54f2a1865c3b2b7fb5886e44, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_6;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 678;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8b052a5c54f2a1865c3b2b7fb5886e44->m_frame) frame_8b052a5c54f2a1865c3b2b7fb5886e44->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_6;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b052a5c54f2a1865c3b2b7fb5886e44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b052a5c54f2a1865c3b2b7fb5886e44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b052a5c54f2a1865c3b2b7fb5886e44);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b052a5c54f2a1865c3b2b7fb5886e44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b052a5c54f2a1865c3b2b7fb5886e44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b052a5c54f2a1865c3b2b7fb5886e44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b052a5c54f2a1865c3b2b7fb5886e44,
        type_description_1,
        par_sig,
        par_args,
        par_kwargs,
        var_num_pos_only,
        var_func,
        var_keyword_exclude,
        var_sigspec,
        var_item
    );


    // Release cached frame if used for exception.
    if (frame_8b052a5c54f2a1865c3b2b7fb5886e44 == cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44);
        cache_frame_8b052a5c54f2a1865c3b2b7fb5886e44 = NULL;
    }

    assertFrameObject(frame_8b052a5c54f2a1865c3b2b7fb5886e44);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_num_pos_only);
    Py_DECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    CHECK_OBJECT(var_sigspec);
    Py_DECREF(var_sigspec);
    var_sigspec = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__292__is_valid_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_sigs = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_be24806a26f496a2ef1f9b2bd2570408;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_be24806a26f496a2ef1f9b2bd2570408 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_be24806a26f496a2ef1f9b2bd2570408)) {
        Py_XDECREF(cache_frame_be24806a26f496a2ef1f9b2bd2570408);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be24806a26f496a2ef1f9b2bd2570408 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be24806a26f496a2ef1f9b2bd2570408 = MAKE_FUNCTION_FRAME(codeobj_be24806a26f496a2ef1f9b2bd2570408, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_be24806a26f496a2ef1f9b2bd2570408->m_type_description == NULL);
    frame_be24806a26f496a2ef1f9b2bd2570408 = cache_frame_be24806a26f496a2ef1f9b2bd2570408;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_be24806a26f496a2ef1f9b2bd2570408);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_be24806a26f496a2ef1f9b2bd2570408) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_1 = par_func;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 687;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_subscript_value_1 = par_func;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(var_sigs == NULL);
        var_sigs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_sigs);
            tmp_iter_arg_1 = var_sigs;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_1 = "occo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[3];

            tmp_closure_1[0] = par_args;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[2] = par_kwargs;
            Py_INCREF(tmp_closure_1[2]);

            tmp_any_arg_1 = MAKE_GENERATOR_toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_be24806a26f496a2ef1f9b2bd2570408);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_be24806a26f496a2ef1f9b2bd2570408);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_be24806a26f496a2ef1f9b2bd2570408);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be24806a26f496a2ef1f9b2bd2570408, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be24806a26f496a2ef1f9b2bd2570408->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be24806a26f496a2ef1f9b2bd2570408, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be24806a26f496a2ef1f9b2bd2570408,
        type_description_1,
        par_func,
        par_args,
        par_kwargs,
        var_sigs
    );


    // Release cached frame if used for exception.
    if (frame_be24806a26f496a2ef1f9b2bd2570408 == cache_frame_be24806a26f496a2ef1f9b2bd2570408) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_be24806a26f496a2ef1f9b2bd2570408);
        cache_frame_be24806a26f496a2ef1f9b2bd2570408 = NULL;
    }

    assertFrameObject(frame_be24806a26f496a2ef1f9b2bd2570408);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr_locals {
    PyObject *var_sig;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr_locals *generator_heap = (struct toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_sig = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b6c601c7a43ef42721938e5aadd8de31, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nocc";
                generator_heap->exception_lineno = 690;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_sig;
            generator_heap->var_sig = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_sig);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 690;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_sig);
        tmp_args_element_value_1 = generator_heap->var_sig;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[42]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 690;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[37]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 690;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 690;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 690;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 690;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 690;
        generator_heap->type_description_1 = "Nocc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_sig,
            generator->m_closure[0],
            generator->m_closure[2]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_sig);
    generator_heap->var_sig = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_sig);
    generator_heap->var_sig = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr_context,
        module_toolz$_signatures,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[43],
#endif
        codeobj_b6c601c7a43ef42721938e5aadd8de31,
        closure,
        3,
        sizeof(struct toolz$_signatures$$$function__292__is_valid_args$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_toolz$_signatures$$$function__293_check_partial(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sig = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_num_pos_only = NULL;
    PyObject *var_func = NULL;
    PyObject *var_keyword_exclude = NULL;
    PyObject *var_sigspec = NULL;
    PyObject *var_pad = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1621fb5374ee1ddf11711f9d59ec1b22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1621fb5374ee1ddf11711f9d59ec1b22 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1621fb5374ee1ddf11711f9d59ec1b22)) {
        Py_XDECREF(cache_frame_1621fb5374ee1ddf11711f9d59ec1b22);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1621fb5374ee1ddf11711f9d59ec1b22 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1621fb5374ee1ddf11711f9d59ec1b22 = MAKE_FUNCTION_FRAME(codeobj_1621fb5374ee1ddf11711f9d59ec1b22, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1621fb5374ee1ddf11711f9d59ec1b22->m_type_description == NULL);
    frame_1621fb5374ee1ddf11711f9d59ec1b22 = cache_frame_1621fb5374ee1ddf11711f9d59ec1b22;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1621fb5374ee1ddf11711f9d59ec1b22);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1621fb5374ee1ddf11711f9d59ec1b22) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_1 = par_sig;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 695;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 695;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 695;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 695;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 695;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 695;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_num_pos_only = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_func = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_keyword_exclude == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_keyword_exclude = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_sigspec == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_sigspec = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 696;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_pos_only);
        tmp_cmp_expr_right_1 = var_num_pos_only;
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 696;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_len_arg_2;
        tmp_left_value_1 = mod_consts[44];
        CHECK_OBJECT(var_num_pos_only);
        tmp_left_value_2 = var_num_pos_only;
        CHECK_OBJECT(par_args);
        tmp_len_arg_2 = par_args;
        tmp_right_value_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pad == NULL);
        var_pad = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(par_args);
        tmp_left_value_3 = par_args;
        CHECK_OBJECT(var_pad);
        tmp_right_value_3 = var_pad;
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_keyword_exclude);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_keyword_exclude);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_seq_1 = par_kwargs;
        tmp_assign_source_12 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kwargs;
            assert(old != NULL);
            par_kwargs = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_keyword_exclude);
        tmp_iter_arg_2 = var_keyword_exclude;
        tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 701;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_15;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 702;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_item);
        tmp_args_element_value_1 = var_item;
        tmp_args_element_value_2 = Py_None;
        frame_1621fb5374ee1ddf11711f9d59ec1b22->m_frame.f_lineno = 702;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 701;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_value_3 = var_func;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 703;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_args;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 703;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = par_kwargs;
        CHECK_OBJECT(var_sigspec);
        tmp_args_element_value_6 = var_sigspec;
        frame_1621fb5374ee1ddf11711f9d59ec1b22->m_frame.f_lineno = 703;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1621fb5374ee1ddf11711f9d59ec1b22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1621fb5374ee1ddf11711f9d59ec1b22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1621fb5374ee1ddf11711f9d59ec1b22);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1621fb5374ee1ddf11711f9d59ec1b22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1621fb5374ee1ddf11711f9d59ec1b22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1621fb5374ee1ddf11711f9d59ec1b22, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1621fb5374ee1ddf11711f9d59ec1b22,
        type_description_1,
        par_sig,
        par_args,
        par_kwargs,
        var_num_pos_only,
        var_func,
        var_keyword_exclude,
        var_sigspec,
        var_pad,
        var_item
    );


    // Release cached frame if used for exception.
    if (frame_1621fb5374ee1ddf11711f9d59ec1b22 == cache_frame_1621fb5374ee1ddf11711f9d59ec1b22) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1621fb5374ee1ddf11711f9d59ec1b22);
        cache_frame_1621fb5374ee1ddf11711f9d59ec1b22 = NULL;
    }

    assertFrameObject(frame_1621fb5374ee1ddf11711f9d59ec1b22);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    CHECK_OBJECT(var_sigspec);
    Py_DECREF(var_sigspec);
    var_sigspec = NULL;
    Py_XDECREF(var_pad);
    var_pad = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    Py_XDECREF(var_pad);
    var_pad = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__294__is_partial_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_sigs = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_f2ad94f50511acb93dfbf924ea6d6687;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f2ad94f50511acb93dfbf924ea6d6687 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f2ad94f50511acb93dfbf924ea6d6687)) {
        Py_XDECREF(cache_frame_f2ad94f50511acb93dfbf924ea6d6687);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2ad94f50511acb93dfbf924ea6d6687 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2ad94f50511acb93dfbf924ea6d6687 = MAKE_FUNCTION_FRAME(codeobj_f2ad94f50511acb93dfbf924ea6d6687, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f2ad94f50511acb93dfbf924ea6d6687->m_type_description == NULL);
    frame_f2ad94f50511acb93dfbf924ea6d6687 = cache_frame_f2ad94f50511acb93dfbf924ea6d6687;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f2ad94f50511acb93dfbf924ea6d6687);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f2ad94f50511acb93dfbf924ea6d6687) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_1 = par_func;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_subscript_value_1 = par_func;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(var_sigs == NULL);
        var_sigs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_sigs);
            tmp_iter_arg_1 = var_sigs;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 711;
                type_description_1 = "occo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[3];

            tmp_closure_1[0] = par_args;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[2] = par_kwargs;
            Py_INCREF(tmp_closure_1[2]);

            tmp_any_arg_1 = MAKE_GENERATOR_toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2ad94f50511acb93dfbf924ea6d6687);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2ad94f50511acb93dfbf924ea6d6687);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2ad94f50511acb93dfbf924ea6d6687);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2ad94f50511acb93dfbf924ea6d6687, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2ad94f50511acb93dfbf924ea6d6687->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2ad94f50511acb93dfbf924ea6d6687, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2ad94f50511acb93dfbf924ea6d6687,
        type_description_1,
        par_func,
        par_args,
        par_kwargs,
        var_sigs
    );


    // Release cached frame if used for exception.
    if (frame_f2ad94f50511acb93dfbf924ea6d6687 == cache_frame_f2ad94f50511acb93dfbf924ea6d6687) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f2ad94f50511acb93dfbf924ea6d6687);
        cache_frame_f2ad94f50511acb93dfbf924ea6d6687 = NULL;
    }

    assertFrameObject(frame_f2ad94f50511acb93dfbf924ea6d6687);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr_locals {
    PyObject *var_sig;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr_locals *generator_heap = (struct toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_sig = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_c7325dd33553adf7282f268ac6b4bbaa, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nocc";
                generator_heap->exception_lineno = 711;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_sig;
            generator_heap->var_sig = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_sig);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 711;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_sig);
        tmp_args_element_value_1 = generator_heap->var_sig;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[42]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 711;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[37]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 711;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 711;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 711;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 711;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 711;
        generator_heap->type_description_1 = "Nocc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_sig,
            generator->m_closure[0],
            generator->m_closure[2]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_sig);
    generator_heap->var_sig = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_sig);
    generator_heap->var_sig = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr_context,
        module_toolz$_signatures,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[49],
#endif
        codeobj_c7325dd33553adf7282f268ac6b4bbaa,
        closure,
        3,
        sizeof(struct toolz$_signatures$$$function__294__is_partial_args$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_toolz$_signatures$$$function__295_check_arity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_sig = python_pars[1];
    PyObject *var_num_pos_only = NULL;
    PyObject *var_func = NULL;
    PyObject *var_keyword_exclude = NULL;
    PyObject *var_sigspec = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6b9ce9231ec5d84c92f62c8fa239da03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6b9ce9231ec5d84c92f62c8fa239da03 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6b9ce9231ec5d84c92f62c8fa239da03)) {
        Py_XDECREF(cache_frame_6b9ce9231ec5d84c92f62c8fa239da03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b9ce9231ec5d84c92f62c8fa239da03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b9ce9231ec5d84c92f62c8fa239da03 = MAKE_FUNCTION_FRAME(codeobj_6b9ce9231ec5d84c92f62c8fa239da03, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6b9ce9231ec5d84c92f62c8fa239da03->m_type_description == NULL);
    frame_6b9ce9231ec5d84c92f62c8fa239da03 = cache_frame_6b9ce9231ec5d84c92f62c8fa239da03;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6b9ce9231ec5d84c92f62c8fa239da03);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6b9ce9231ec5d84c92f62c8fa239da03) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_1 = par_sig;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 715;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 715;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 715;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 715;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 715;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 715;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_num_pos_only = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_func = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_keyword_exclude == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_keyword_exclude = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_sigspec == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_sigspec = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_keyword_exclude);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_keyword_exclude);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_num_pos_only);
        tmp_cmp_expr_left_1 = var_num_pos_only;
        CHECK_OBJECT(par_n);
        tmp_cmp_expr_right_1 = par_n;
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_1 = par_n;
        CHECK_OBJECT(var_func);
        tmp_args_element_value_2 = var_func;
        CHECK_OBJECT(var_sigspec);
        tmp_args_element_value_3 = var_sigspec;
        frame_6b9ce9231ec5d84c92f62c8fa239da03->m_frame.f_lineno = 718;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b9ce9231ec5d84c92f62c8fa239da03);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b9ce9231ec5d84c92f62c8fa239da03);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b9ce9231ec5d84c92f62c8fa239da03);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b9ce9231ec5d84c92f62c8fa239da03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b9ce9231ec5d84c92f62c8fa239da03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b9ce9231ec5d84c92f62c8fa239da03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b9ce9231ec5d84c92f62c8fa239da03,
        type_description_1,
        par_n,
        par_sig,
        var_num_pos_only,
        var_func,
        var_keyword_exclude,
        var_sigspec
    );


    // Release cached frame if used for exception.
    if (frame_6b9ce9231ec5d84c92f62c8fa239da03 == cache_frame_6b9ce9231ec5d84c92f62c8fa239da03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6b9ce9231ec5d84c92f62c8fa239da03);
        cache_frame_6b9ce9231ec5d84c92f62c8fa239da03 = NULL;
    }

    assertFrameObject(frame_6b9ce9231ec5d84c92f62c8fa239da03);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_num_pos_only);
    Py_DECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    CHECK_OBJECT(var_keyword_exclude);
    Py_DECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__296__is_arity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *var_sigs = NULL;
    PyObject *var_checks = NULL;
    PyObject *outline_0_var_sig = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4ad03fef845bd1027046e514df13ff71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_64b3ab9f6af70f2481d2a17326f51c2d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4ad03fef845bd1027046e514df13ff71 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ad03fef845bd1027046e514df13ff71)) {
        Py_XDECREF(cache_frame_4ad03fef845bd1027046e514df13ff71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ad03fef845bd1027046e514df13ff71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ad03fef845bd1027046e514df13ff71 = MAKE_FUNCTION_FRAME(codeobj_4ad03fef845bd1027046e514df13ff71, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4ad03fef845bd1027046e514df13ff71->m_type_description == NULL);
    frame_4ad03fef845bd1027046e514df13ff71 = cache_frame_4ad03fef845bd1027046e514df13ff71;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4ad03fef845bd1027046e514df13ff71);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4ad03fef845bd1027046e514df13ff71) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_1 = par_func;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_subscript_value_1 = par_func;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_sigs == NULL);
        var_sigs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_sigs);
            tmp_iter_arg_1 = var_sigs;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 725;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2)) {
            Py_XDECREF(cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2 = MAKE_FUNCTION_FRAME(codeobj_64b3ab9f6af70f2481d2a17326f51c2d, module_toolz$_signatures, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2->m_type_description == NULL);
        frame_64b3ab9f6af70f2481d2a17326f51c2d_2 = cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_64b3ab9f6af70f2481d2a17326f51c2d_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_64b3ab9f6af70f2481d2a17326f51c2d_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 725;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_sig;
                outline_0_var_sig = tmp_assign_source_6;
                Py_INCREF(outline_0_var_sig);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 725;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            if (par_n == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[52]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 725;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_1 = par_n;
            CHECK_OBJECT(outline_0_var_sig);
            tmp_args_element_value_2 = outline_0_var_sig;
            frame_64b3ab9f6af70f2481d2a17326f51c2d_2->m_frame.f_lineno = 725;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
            }

            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 725;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 725;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_64b3ab9f6af70f2481d2a17326f51c2d_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_64b3ab9f6af70f2481d2a17326f51c2d_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_64b3ab9f6af70f2481d2a17326f51c2d_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_64b3ab9f6af70f2481d2a17326f51c2d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_64b3ab9f6af70f2481d2a17326f51c2d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_64b3ab9f6af70f2481d2a17326f51c2d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_64b3ab9f6af70f2481d2a17326f51c2d_2,
            type_description_2,
            outline_0_var_sig,
            par_n
        );


        // Release cached frame if used for exception.
        if (frame_64b3ab9f6af70f2481d2a17326f51c2d_2 == cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2);
            cache_frame_64b3ab9f6af70f2481d2a17326f51c2d_2 = NULL;
        }

        assertFrameObject(frame_64b3ab9f6af70f2481d2a17326f51c2d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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

        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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
        exception_lineno = 725;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_checks == NULL);
        var_checks = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_all_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(var_checks);
        tmp_all_arg_1 = var_checks;
        tmp_capi_result_1 = BUILTIN_ALL(tmp_all_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 726;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT(var_checks);
        tmp_any_arg_1 = var_checks;
        tmp_capi_result_2 = BUILTIN_ANY(tmp_any_arg_1);
        if (tmp_capi_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = CHECK_IF_TRUE(tmp_capi_result_2) == 1;
        Py_DECREF(tmp_capi_result_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ad03fef845bd1027046e514df13ff71);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ad03fef845bd1027046e514df13ff71);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ad03fef845bd1027046e514df13ff71);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ad03fef845bd1027046e514df13ff71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ad03fef845bd1027046e514df13ff71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ad03fef845bd1027046e514df13ff71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ad03fef845bd1027046e514df13ff71,
        type_description_1,
        par_n,
        par_func,
        var_sigs,
        var_checks
    );


    // Release cached frame if used for exception.
    if (frame_4ad03fef845bd1027046e514df13ff71 == cache_frame_4ad03fef845bd1027046e514df13ff71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4ad03fef845bd1027046e514df13ff71);
        cache_frame_4ad03fef845bd1027046e514df13ff71 = NULL;
    }

    assertFrameObject(frame_4ad03fef845bd1027046e514df13ff71);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_checks);
    var_checks = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_checks);
    var_checks = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__297_check_varargs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sig = python_pars[0];
    PyObject *var_num_pos_only = NULL;
    PyObject *var_func = NULL;
    PyObject *var_keyword_exclude = NULL;
    PyObject *var_sigspec = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_931602095a91190f715efaa557d443ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_931602095a91190f715efaa557d443ee = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_931602095a91190f715efaa557d443ee)) {
        Py_XDECREF(cache_frame_931602095a91190f715efaa557d443ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_931602095a91190f715efaa557d443ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_931602095a91190f715efaa557d443ee = MAKE_FUNCTION_FRAME(codeobj_931602095a91190f715efaa557d443ee, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_931602095a91190f715efaa557d443ee->m_type_description == NULL);
    frame_931602095a91190f715efaa557d443ee = cache_frame_931602095a91190f715efaa557d443ee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_931602095a91190f715efaa557d443ee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_931602095a91190f715efaa557d443ee) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_1 = par_sig;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 734;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 734;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 734;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 734;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 734;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 734;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_num_pos_only = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_func = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_keyword_exclude == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_keyword_exclude = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_sigspec == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_sigspec = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_value_1 = var_func;
        CHECK_OBJECT(var_sigspec);
        tmp_args_element_value_2 = var_sigspec;
        frame_931602095a91190f715efaa557d443ee->m_frame.f_lineno = 735;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_931602095a91190f715efaa557d443ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_931602095a91190f715efaa557d443ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_931602095a91190f715efaa557d443ee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_931602095a91190f715efaa557d443ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_931602095a91190f715efaa557d443ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_931602095a91190f715efaa557d443ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_931602095a91190f715efaa557d443ee,
        type_description_1,
        par_sig,
        var_num_pos_only,
        var_func,
        var_keyword_exclude,
        var_sigspec
    );


    // Release cached frame if used for exception.
    if (frame_931602095a91190f715efaa557d443ee == cache_frame_931602095a91190f715efaa557d443ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_931602095a91190f715efaa557d443ee);
        cache_frame_931602095a91190f715efaa557d443ee = NULL;
    }

    assertFrameObject(frame_931602095a91190f715efaa557d443ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_num_pos_only);
    Py_DECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    CHECK_OBJECT(var_keyword_exclude);
    Py_DECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    CHECK_OBJECT(var_sigspec);
    Py_DECREF(var_sigspec);
    var_sigspec = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__298__has_varargs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_sigs = NULL;
    PyObject *var_checks = NULL;
    PyObject *outline_0_var_sig = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_81a1515999478f8818d512d09d73e5ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_bb4573ce7c91fc057d42d48e7281f181_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_bb4573ce7c91fc057d42d48e7281f181_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_81a1515999478f8818d512d09d73e5ca = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_81a1515999478f8818d512d09d73e5ca)) {
        Py_XDECREF(cache_frame_81a1515999478f8818d512d09d73e5ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81a1515999478f8818d512d09d73e5ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81a1515999478f8818d512d09d73e5ca = MAKE_FUNCTION_FRAME(codeobj_81a1515999478f8818d512d09d73e5ca, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_81a1515999478f8818d512d09d73e5ca->m_type_description == NULL);
    frame_81a1515999478f8818d512d09d73e5ca = cache_frame_81a1515999478f8818d512d09d73e5ca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_81a1515999478f8818d512d09d73e5ca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_81a1515999478f8818d512d09d73e5ca) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_1 = par_func;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_subscript_value_1 = par_func;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_sigs == NULL);
        var_sigs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_sigs);
            tmp_iter_arg_1 = var_sigs;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 742;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_bb4573ce7c91fc057d42d48e7281f181_2)) {
            Py_XDECREF(cache_frame_bb4573ce7c91fc057d42d48e7281f181_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_bb4573ce7c91fc057d42d48e7281f181_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_bb4573ce7c91fc057d42d48e7281f181_2 = MAKE_FUNCTION_FRAME(codeobj_bb4573ce7c91fc057d42d48e7281f181, module_toolz$_signatures, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_bb4573ce7c91fc057d42d48e7281f181_2->m_type_description == NULL);
        frame_bb4573ce7c91fc057d42d48e7281f181_2 = cache_frame_bb4573ce7c91fc057d42d48e7281f181_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_bb4573ce7c91fc057d42d48e7281f181_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_bb4573ce7c91fc057d42d48e7281f181_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 742;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_sig;
                outline_0_var_sig = tmp_assign_source_6;
                Py_INCREF(outline_0_var_sig);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 742;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_sig);
            tmp_args_element_value_1 = outline_0_var_sig;
            frame_bb4573ce7c91fc057d42d48e7281f181_2->m_frame.f_lineno = 742;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 742;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 742;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bb4573ce7c91fc057d42d48e7281f181_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_bb4573ce7c91fc057d42d48e7281f181_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_bb4573ce7c91fc057d42d48e7281f181_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb4573ce7c91fc057d42d48e7281f181_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb4573ce7c91fc057d42d48e7281f181_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb4573ce7c91fc057d42d48e7281f181_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb4573ce7c91fc057d42d48e7281f181_2,
            type_description_2,
            outline_0_var_sig
        );


        // Release cached frame if used for exception.
        if (frame_bb4573ce7c91fc057d42d48e7281f181_2 == cache_frame_bb4573ce7c91fc057d42d48e7281f181_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_bb4573ce7c91fc057d42d48e7281f181_2);
            cache_frame_bb4573ce7c91fc057d42d48e7281f181_2 = NULL;
        }

        assertFrameObject(frame_bb4573ce7c91fc057d42d48e7281f181_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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

        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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
        exception_lineno = 742;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_checks == NULL);
        var_checks = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_all_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(var_checks);
        tmp_all_arg_1 = var_checks;
        tmp_capi_result_1 = BUILTIN_ALL(tmp_all_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT(var_checks);
        tmp_any_arg_1 = var_checks;
        tmp_capi_result_2 = BUILTIN_ANY(tmp_any_arg_1);
        if (tmp_capi_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = CHECK_IF_TRUE(tmp_capi_result_2) == 1;
        Py_DECREF(tmp_capi_result_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81a1515999478f8818d512d09d73e5ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_81a1515999478f8818d512d09d73e5ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81a1515999478f8818d512d09d73e5ca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81a1515999478f8818d512d09d73e5ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81a1515999478f8818d512d09d73e5ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81a1515999478f8818d512d09d73e5ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81a1515999478f8818d512d09d73e5ca,
        type_description_1,
        par_func,
        var_sigs,
        var_checks
    );


    // Release cached frame if used for exception.
    if (frame_81a1515999478f8818d512d09d73e5ca == cache_frame_81a1515999478f8818d512d09d73e5ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_81a1515999478f8818d512d09d73e5ca);
        cache_frame_81a1515999478f8818d512d09d73e5ca = NULL;
    }

    assertFrameObject(frame_81a1515999478f8818d512d09d73e5ca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_checks);
    var_checks = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_checks);
    var_checks = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__299_check_keywords(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sig = python_pars[0];
    PyObject *var_num_pos_only = NULL;
    PyObject *var_func = NULL;
    PyObject *var_keyword_exclude = NULL;
    PyObject *var_sigspec = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9eaafae6fd36f40532867a539d0222da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9eaafae6fd36f40532867a539d0222da = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9eaafae6fd36f40532867a539d0222da)) {
        Py_XDECREF(cache_frame_9eaafae6fd36f40532867a539d0222da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9eaafae6fd36f40532867a539d0222da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9eaafae6fd36f40532867a539d0222da = MAKE_FUNCTION_FRAME(codeobj_9eaafae6fd36f40532867a539d0222da, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9eaafae6fd36f40532867a539d0222da->m_type_description == NULL);
    frame_9eaafae6fd36f40532867a539d0222da = cache_frame_9eaafae6fd36f40532867a539d0222da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9eaafae6fd36f40532867a539d0222da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9eaafae6fd36f40532867a539d0222da) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_1 = par_sig;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 751;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 751;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 751;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 751;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 751;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 751;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_num_pos_only = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_func = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_keyword_exclude == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_keyword_exclude = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_sigspec == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_sigspec = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_keyword_exclude);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_keyword_exclude);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_value_1 = var_func;
        CHECK_OBJECT(var_sigspec);
        tmp_args_element_value_2 = var_sigspec;
        frame_9eaafae6fd36f40532867a539d0222da->m_frame.f_lineno = 754;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9eaafae6fd36f40532867a539d0222da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9eaafae6fd36f40532867a539d0222da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9eaafae6fd36f40532867a539d0222da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9eaafae6fd36f40532867a539d0222da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9eaafae6fd36f40532867a539d0222da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9eaafae6fd36f40532867a539d0222da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9eaafae6fd36f40532867a539d0222da,
        type_description_1,
        par_sig,
        var_num_pos_only,
        var_func,
        var_keyword_exclude,
        var_sigspec
    );


    // Release cached frame if used for exception.
    if (frame_9eaafae6fd36f40532867a539d0222da == cache_frame_9eaafae6fd36f40532867a539d0222da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9eaafae6fd36f40532867a539d0222da);
        cache_frame_9eaafae6fd36f40532867a539d0222da = NULL;
    }

    assertFrameObject(frame_9eaafae6fd36f40532867a539d0222da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_num_pos_only);
    Py_DECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    CHECK_OBJECT(var_keyword_exclude);
    Py_DECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__300__has_keywords(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_sigs = NULL;
    PyObject *var_checks = NULL;
    PyObject *outline_0_var_sig = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_ef29f0f38d4817113872324632d522bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_0c35939f6db5c938534ddcb81dffb12a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0c35939f6db5c938534ddcb81dffb12a_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ef29f0f38d4817113872324632d522bf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef29f0f38d4817113872324632d522bf)) {
        Py_XDECREF(cache_frame_ef29f0f38d4817113872324632d522bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef29f0f38d4817113872324632d522bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef29f0f38d4817113872324632d522bf = MAKE_FUNCTION_FRAME(codeobj_ef29f0f38d4817113872324632d522bf, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ef29f0f38d4817113872324632d522bf->m_type_description == NULL);
    frame_ef29f0f38d4817113872324632d522bf = cache_frame_ef29f0f38d4817113872324632d522bf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ef29f0f38d4817113872324632d522bf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ef29f0f38d4817113872324632d522bf) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_1 = par_func;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_subscript_value_1 = par_func;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_sigs == NULL);
        var_sigs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_sigs);
            tmp_iter_arg_1 = var_sigs;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 761;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_0c35939f6db5c938534ddcb81dffb12a_2)) {
            Py_XDECREF(cache_frame_0c35939f6db5c938534ddcb81dffb12a_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0c35939f6db5c938534ddcb81dffb12a_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0c35939f6db5c938534ddcb81dffb12a_2 = MAKE_FUNCTION_FRAME(codeobj_0c35939f6db5c938534ddcb81dffb12a, module_toolz$_signatures, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0c35939f6db5c938534ddcb81dffb12a_2->m_type_description == NULL);
        frame_0c35939f6db5c938534ddcb81dffb12a_2 = cache_frame_0c35939f6db5c938534ddcb81dffb12a_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0c35939f6db5c938534ddcb81dffb12a_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0c35939f6db5c938534ddcb81dffb12a_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 761;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_sig;
                outline_0_var_sig = tmp_assign_source_6;
                Py_INCREF(outline_0_var_sig);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 761;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_sig);
            tmp_args_element_value_1 = outline_0_var_sig;
            frame_0c35939f6db5c938534ddcb81dffb12a_2->m_frame.f_lineno = 761;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 761;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 761;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c35939f6db5c938534ddcb81dffb12a_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c35939f6db5c938534ddcb81dffb12a_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c35939f6db5c938534ddcb81dffb12a_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0c35939f6db5c938534ddcb81dffb12a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0c35939f6db5c938534ddcb81dffb12a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0c35939f6db5c938534ddcb81dffb12a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0c35939f6db5c938534ddcb81dffb12a_2,
            type_description_2,
            outline_0_var_sig
        );


        // Release cached frame if used for exception.
        if (frame_0c35939f6db5c938534ddcb81dffb12a_2 == cache_frame_0c35939f6db5c938534ddcb81dffb12a_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0c35939f6db5c938534ddcb81dffb12a_2);
            cache_frame_0c35939f6db5c938534ddcb81dffb12a_2 = NULL;
        }

        assertFrameObject(frame_0c35939f6db5c938534ddcb81dffb12a_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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

        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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
        exception_lineno = 761;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_checks == NULL);
        var_checks = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_all_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(var_checks);
        tmp_all_arg_1 = var_checks;
        tmp_capi_result_1 = BUILTIN_ALL(tmp_all_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT(var_checks);
        tmp_any_arg_1 = var_checks;
        tmp_capi_result_2 = BUILTIN_ANY(tmp_any_arg_1);
        if (tmp_capi_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = CHECK_IF_TRUE(tmp_capi_result_2) == 1;
        Py_DECREF(tmp_capi_result_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef29f0f38d4817113872324632d522bf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef29f0f38d4817113872324632d522bf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef29f0f38d4817113872324632d522bf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef29f0f38d4817113872324632d522bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef29f0f38d4817113872324632d522bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef29f0f38d4817113872324632d522bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef29f0f38d4817113872324632d522bf,
        type_description_1,
        par_func,
        var_sigs,
        var_checks
    );


    // Release cached frame if used for exception.
    if (frame_ef29f0f38d4817113872324632d522bf == cache_frame_ef29f0f38d4817113872324632d522bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ef29f0f38d4817113872324632d522bf);
        cache_frame_ef29f0f38d4817113872324632d522bf = NULL;
    }

    assertFrameObject(frame_ef29f0f38d4817113872324632d522bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_checks);
    var_checks = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_checks);
    var_checks = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__301_check_required_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sig = python_pars[0];
    PyObject *var_num_pos_only = NULL;
    PyObject *var_func = NULL;
    PyObject *var_keyword_exclude = NULL;
    PyObject *var_sigspec = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fc3038458c82af6105fbdf90089f19f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fc3038458c82af6105fbdf90089f19f1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fc3038458c82af6105fbdf90089f19f1)) {
        Py_XDECREF(cache_frame_fc3038458c82af6105fbdf90089f19f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc3038458c82af6105fbdf90089f19f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc3038458c82af6105fbdf90089f19f1 = MAKE_FUNCTION_FRAME(codeobj_fc3038458c82af6105fbdf90089f19f1, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fc3038458c82af6105fbdf90089f19f1->m_type_description == NULL);
    frame_fc3038458c82af6105fbdf90089f19f1 = cache_frame_fc3038458c82af6105fbdf90089f19f1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fc3038458c82af6105fbdf90089f19f1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fc3038458c82af6105fbdf90089f19f1) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_sig);
        tmp_iter_arg_1 = par_sig;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 770;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 770;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 770;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 770;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 770;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[36];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 770;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_num_pos_only == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_num_pos_only = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_func = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_keyword_exclude == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_keyword_exclude = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_sigspec == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_sigspec = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_value_1 = var_func;
        CHECK_OBJECT(var_sigspec);
        tmp_args_element_value_2 = var_sigspec;
        frame_fc3038458c82af6105fbdf90089f19f1->m_frame.f_lineno = 771;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc3038458c82af6105fbdf90089f19f1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc3038458c82af6105fbdf90089f19f1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc3038458c82af6105fbdf90089f19f1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc3038458c82af6105fbdf90089f19f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc3038458c82af6105fbdf90089f19f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc3038458c82af6105fbdf90089f19f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc3038458c82af6105fbdf90089f19f1,
        type_description_1,
        par_sig,
        var_num_pos_only,
        var_func,
        var_keyword_exclude,
        var_sigspec
    );


    // Release cached frame if used for exception.
    if (frame_fc3038458c82af6105fbdf90089f19f1 == cache_frame_fc3038458c82af6105fbdf90089f19f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fc3038458c82af6105fbdf90089f19f1);
        cache_frame_fc3038458c82af6105fbdf90089f19f1 = NULL;
    }

    assertFrameObject(frame_fc3038458c82af6105fbdf90089f19f1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_num_pos_only);
    Py_DECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    CHECK_OBJECT(var_keyword_exclude);
    Py_DECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    CHECK_OBJECT(var_sigspec);
    Py_DECREF(var_sigspec);
    var_sigspec = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_num_pos_only);
    var_num_pos_only = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_keyword_exclude);
    var_keyword_exclude = NULL;
    Py_XDECREF(var_sigspec);
    var_sigspec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sig);
    Py_DECREF(par_sig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_toolz$_signatures$$$function__302__num_required_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_sigs = NULL;
    PyObject *var_vals = NULL;
    struct Nuitka_CellObject *var_val = Nuitka_Cell_Empty();
    PyObject *outline_0_var_sig = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_11208aad36a244ea625046472e7a85a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_e36e048ec99a88668cb2e87523c6d286_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e36e048ec99a88668cb2e87523c6d286_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_11208aad36a244ea625046472e7a85a8 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_11208aad36a244ea625046472e7a85a8)) {
        Py_XDECREF(cache_frame_11208aad36a244ea625046472e7a85a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11208aad36a244ea625046472e7a85a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11208aad36a244ea625046472e7a85a8 = MAKE_FUNCTION_FRAME(codeobj_11208aad36a244ea625046472e7a85a8, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_11208aad36a244ea625046472e7a85a8->m_type_description == NULL);
    frame_11208aad36a244ea625046472e7a85a8 = cache_frame_11208aad36a244ea625046472e7a85a8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_11208aad36a244ea625046472e7a85a8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_11208aad36a244ea625046472e7a85a8) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_1 = par_func;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 775;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 775;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_subscript_value_1 = par_func;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_sigs == NULL);
        var_sigs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_sigs);
            tmp_iter_arg_1 = var_sigs;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;
                type_description_1 = "oooc";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_e36e048ec99a88668cb2e87523c6d286_2)) {
            Py_XDECREF(cache_frame_e36e048ec99a88668cb2e87523c6d286_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e36e048ec99a88668cb2e87523c6d286_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e36e048ec99a88668cb2e87523c6d286_2 = MAKE_FUNCTION_FRAME(codeobj_e36e048ec99a88668cb2e87523c6d286, module_toolz$_signatures, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e36e048ec99a88668cb2e87523c6d286_2->m_type_description == NULL);
        frame_e36e048ec99a88668cb2e87523c6d286_2 = cache_frame_e36e048ec99a88668cb2e87523c6d286_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e36e048ec99a88668cb2e87523c6d286_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e36e048ec99a88668cb2e87523c6d286_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 778;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_sig;
                outline_0_var_sig = tmp_assign_source_6;
                Py_INCREF(outline_0_var_sig);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_sig);
            tmp_args_element_value_1 = outline_0_var_sig;
            frame_e36e048ec99a88668cb2e87523c6d286_2->m_frame.f_lineno = 778;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e36e048ec99a88668cb2e87523c6d286_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_e36e048ec99a88668cb2e87523c6d286_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e36e048ec99a88668cb2e87523c6d286_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e36e048ec99a88668cb2e87523c6d286_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e36e048ec99a88668cb2e87523c6d286_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e36e048ec99a88668cb2e87523c6d286_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e36e048ec99a88668cb2e87523c6d286_2,
            type_description_2,
            outline_0_var_sig
        );


        // Release cached frame if used for exception.
        if (frame_e36e048ec99a88668cb2e87523c6d286_2 == cache_frame_e36e048ec99a88668cb2e87523c6d286_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e36e048ec99a88668cb2e87523c6d286_2);
            cache_frame_e36e048ec99a88668cb2e87523c6d286_2 = NULL;
        }

        assertFrameObject(frame_e36e048ec99a88668cb2e87523c6d286_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooc";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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

        Py_XDECREF(outline_0_var_sig);
        outline_0_var_sig = NULL;
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
        exception_lineno = 778;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_vals == NULL);
        var_vals = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_vals);
        tmp_expression_value_2 = var_vals;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 779;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_val) == NULL);
        PyCell_SET(var_val, tmp_assign_source_7);

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_all_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_vals);
            tmp_iter_arg_2 = var_vals;
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 780;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_8;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = var_val;
            Py_INCREF(tmp_closure_1[1]);

            tmp_all_arg_1 = MAKE_GENERATOR_toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_capi_result_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(Nuitka_Cell_GET(var_val));
    tmp_return_value = Nuitka_Cell_GET(var_val);
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11208aad36a244ea625046472e7a85a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_11208aad36a244ea625046472e7a85a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11208aad36a244ea625046472e7a85a8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11208aad36a244ea625046472e7a85a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11208aad36a244ea625046472e7a85a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11208aad36a244ea625046472e7a85a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11208aad36a244ea625046472e7a85a8,
        type_description_1,
        par_func,
        var_sigs,
        var_vals,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_11208aad36a244ea625046472e7a85a8 == cache_frame_11208aad36a244ea625046472e7a85a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_11208aad36a244ea625046472e7a85a8);
        cache_frame_11208aad36a244ea625046472e7a85a8 = NULL;
    }

    assertFrameObject(frame_11208aad36a244ea625046472e7a85a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_vals);
    var_vals = NULL;
    CHECK_OBJECT(var_val);
    Py_DECREF(var_val);
    var_val = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_sigs);
    var_sigs = NULL;
    Py_XDECREF(var_vals);
    var_vals = NULL;
    CHECK_OBJECT(var_val);
    Py_DECREF(var_val);
    var_val = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr_locals *generator_heap = (struct toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_18dd46bcdd96c0c8b449a1b2d8758b81, module_toolz$_signatures, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 780;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_cmp_expr_left_1 = generator_heap->var_x;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[59]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 780;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 780;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 780;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 780;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr_context,
        module_toolz$_signatures,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[60],
#endif
        codeobj_18dd46bcdd96c0c8b449a1b2d8758b81,
        closure,
        2,
        sizeof(struct toolz$_signatures$$$function__302__num_required_args$$$genexpr__1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__100_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be06bf69055031a85b34f28e2a8ee6bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__101_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb899fd20569b8a5617d8c7d18c86ac7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__102_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f06f82d8c19d3cf530e5d6580867e83d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__103_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_438134efd6c01cbab974223b43cb7607,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__104_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81b8fbdc5e84409bfa35aad003cb852a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__105_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f9116dafcc1c743720ece1d90226415,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__106_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b7fa39ad60dbf88eb8d889323360d486,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__107_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_012994fc9a7384bc5092d41e2e466493,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__108_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ec1b81cf0a7dc023473c85fd5d5dc790,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__109_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fced5ff5b0f41fe923f9a88de8a7344f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__10_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_308faabe13e1673dbbf855fc733d36ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__110_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8855d98bbc1e8a4ed60563bc6e4a83d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__111_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0b7ed232c495bdc901c1e2ff78d2e03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__112_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0146919b9eee32798f83bdb816a5dd02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__113_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d22fd121106d1b2c08f9283badd2fb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__114_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5b261c9292016a956d03f0ab362aa9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__115_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2b72054d90ee858fb7a72a6965232d33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__116_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9f2eb08da01b04bf0b129b5814fadc6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__117_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2103fb8dbd59fdcb9f8c7f705d662df6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__118_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_602503e567efb0c7338f133e19053a75,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__119_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7eaf67e2155a2f6be9db7f5e1a11b9db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__11_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f11e0059f4b45944b9726e603ae7b69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__120_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_178f20aac254f15b6a706828011579b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__121_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c1f44600a8eaf045eb223efdedb9f9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__122_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ea9a5eea0a7f40f92d94fa380290c97d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__123_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_090102eaa2a5149264fa1851c289b48c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__124_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf8045bdc2106ef4fe7a0fd2c82c6fa6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__125_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf37e202958c8f56696db776f6a4d980,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__126_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_644be236aee0a2e379784dfb59614fd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__127_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18babe79dc5ec8258dca0d26e5377a80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__128_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28e72331b247c6714e7aab37f7d31145,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__129_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70e38cda786884001d762a8c6e69d50b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__12_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76d493656e17f640d7fe7f7c430113a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__130_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4207c7d25f7503a11df17d2d4fe61d54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__131_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d00c0df673026d80f8d67123d17a6d1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__132_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51e34b65b36af0908bcbe484ec01d355,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__133_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c21c9839064cfa73bf311c43c4a0573,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__134_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a3d4733a3d26e648aeec2f468a8ef13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__135_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4964c5add1a90c858cc6065c1b31d618,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__136_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cfee41218174e3ba4a62fc754cb4b04d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__137_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_447fa47a4104ad614165c31ce006762d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__138_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e02a78ae8cb1e5e40dc0c075d7e5d73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__139_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_01009d695dac546ee1a7a998d0d50832,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__13_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_14f540e6b9e56b16771cee2521580f42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__140_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f9c6f641eadf0857558e2ec3abd7591,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__141_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff148b716a279911f9a3a019642e006f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__142_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f3e1d98fbaecae76ee683d6bdbe5a52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__143_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_03057b637eb4528c9ed573e5285fc853,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__144_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69f8e20ae625017d826383adbe995cd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__145_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8c8029338e59aa0bf0db53f4a9775836,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__146_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d012055d8aed31d15f202b1832995b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__147_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f23ec398da712d5693c3692617a031b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__148_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd7fa85320db918b209755ec473fa17b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__149_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_07834c0d130fe4aba5f3f6f257b4ac85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__14_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad68cda16bf6a57202bc489f6a7b8d57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__150_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2a4a7671c5a51add9befe7aefb67b9a0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__151_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_30757468920efb4bc65ff84c2a781dbd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__152_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f86b18e1a2ca7c7e6941aa3707395f5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__153_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4f54f6c6832c7542b1bde36290fdd7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__154_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_68702b76b657f51c70c14212f46d56e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__155_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7b1f9a589ad994af4c551cc94d7c52a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__156_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fd0568f382b229cc39ca89379b17a150,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__157_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1c2b0df500412211a5e5ca2d95196d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__158_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_49fdf44483580864c2479889e97a1115,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__159_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_452adde9c7e414a53421ea6d3a664e3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__15_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0e95a944ecaddd607ada53ad2431fb62,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__160_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3dd3ab489b3b1ee3eee69983a85bada2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__161_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c81ecf1afb1fe306cb56d7b79a0840a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__162_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04c71e5280d310aacbcdfc39ab36dc31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__163_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1944afe2868761f5f0ad3c73d9fe03d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__164_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35ce167ef65929288ebd56c9ad2f3fa1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__165_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd035d45ca7a3f879b9e62ec4fcf239b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__166_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fc5c6493141f34636d2e93562622d7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__167_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f9cdd9b8fc84f08472671f8db645d04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__168_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92487af465a85f7938f53f2e5ca5bbe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__169_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f71ffdc012b991c136b51055760334a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__16_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_00c2e5711efc028ad9763a10e953d13c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__170_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bac79d269c73beada83cae93878b939e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__171_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3d6e67e411e3d41d42c3863eb53e5d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__172_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab41da93c2798cb75a3bcbdc51df34bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__173_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fd9b5dfb194a902173d2dd408e9d96fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__174_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b141596c231e9bcdd0639ad0c92a1c1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__175_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed85dd089e18b3c12c18c149a8475ff9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__176_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bca89cf589e3db9d1385024a8c30a3f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__177_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7bc03631026ae0dfe994e7ad292c7062,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__178_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25bb5203a99ceeaeab8ef3a4fd2faf3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__179_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0439e27a38da0635c423a7c132a9b78d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__17_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af45f8bbda82b503eb51b933ebcf8263,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__180_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb0d6b48f70801bee672f0a219e77ed1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__181_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d2865701618e4414285ec8122dcf63b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__182_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51b16d3b80afe335cecf44f6f88b0d3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__183_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4733be5aa060fcdacf3f30e8b2806570,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__184_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7233ade48d138d7436e592be8fdf0101,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__185_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e122b2b4ee8315f2ad56815d13952eb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__186_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c87d395a94189c2b5ecc50fe895e77f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__187_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c1a9e5cc9aa9026b5aa6b22b3534ae9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__188_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed2eb9a4f40afaa99e9de080a0b7819f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__189_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa9fde299a126863c7f36e36500c4946,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__18_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a20cc0ba388dede4df08ef31f7b5d180,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__190_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aeec5abeb511b3f4c834942ccfba30b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__191_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6ab1fd09e8682c529062d89668f0ddf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__192_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fd705759f972795a589b2e7d964e6a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__193_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93127888b3299aa853481b22866ec805,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__194_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4a454727242ec09f491d259c9b7c775,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__195_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f897f6cee39523de3238ee6f7235b8a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__196_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5b895a04e46eb23d6b8317f297f4dd29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__197_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38cdd63657e4507316ec650ac53be3d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__198_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fc77d917656df95759bee9da2de9447,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__199_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92b24a2e32d4f4892a827f25e2f062e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__19_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f4a4028d9feae0ff998b4432419f9ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a9aa815601c7938144f29c182883260c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__200_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_811f4eedebe689682a3d597b74c8bc7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__201_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_119ee1d7a48f5caeb1a6627c0ca8a8b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__202_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e034bc7ac23d0e92e9b20a687810c2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__203_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8db1c69d1734e15838f7fe5a33ab318d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__204_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_535f0bacb6aa66d8f0b8beeb661bdd1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__205_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab603c4d93296fa98d23ed6013868340,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__206_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_68b40d9de98d61e7fa12eb99877ce20f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__207_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f5a3e32fe16dd1307bc4e73f9fad4aa6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__208_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1fea56152ef37d6fa23c827287ebd49f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__209_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d313037ee38bfba7ba32473662ed7c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__20_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77308ad0fecf505ec82416412c3986d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__210_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9a4f4ef6d55ab4245b8dc7e53155ed53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__211_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4077c0f78ae5fa50ac0747e1305299a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__212_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6c03c2e23a73bec97ad3564938765e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__213_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19f7ef84546fa550a2e48791bc693daf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__214_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3761492d3b38f6069bbfd8b062818f6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__215_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df6326acdd7c9a66cb391253e4c51e11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__216_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_415048aecf899655fc3fd0cbacf64081,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__217_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb00f439f602fcec7371ae1df4975a38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__218_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b0bed9b18b8f546ba0b8c814bfecdac5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__219_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35c4371c866f05ea69b8210d83254278,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__21_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73a23b26efd6baa9b2a264c707b5f653,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__220_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22bd1c7316f79f8f66006dba68c5129a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__221_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35ecbcf4b98ed21112033858bab2bf36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__222_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81f00a98256ae014c6a662b464646e13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__223_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eccc81761cda78eba7e85103ebb7d1ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__224_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8171138386e569f5f9acd75ce304bbed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__225_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9a7873a523af4a436a78c51b2cedd53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__226_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_676e701f4ba7b45f664940da278e9c6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__227_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5b32ebc397cc14d6475ff8239c6b4e56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__228_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a9c6fffbdee6178494fc92860937a5fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__229_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f2655b861106d7958989498fa4811655,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__22_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be027f750448774c7cff367150c06feb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__230_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fdbe0a92028d6e6d6492eccebaf632ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__231_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2bea386a946817cbddda8a029f4a1bee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__232_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7f7162ac4564fd6e4133f4ea70596a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__233_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a89270c22a02ddf6c90c99c83127421,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__234_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed337e8ebd48e9272b3a3fd206779fb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__235_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ced039570904d03320167a26070a68e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__236_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e365b05bd61174fb378dedc8252ada54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__237_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05b8c27d9cd6f3010ecf492bb7c66539,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__238_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1734770f84929c1fe1dff0d997009bd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__239_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_783245c08cf42e5663b9e0798f47b52b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__23_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef10ab84eec30acd6731232e1da0edf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__240_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52136c547c58c9205c1e1eb9f02d91f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__241_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c65a4a60f8042572cb5fe9fe232e0ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__242_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ecab054097f8d97ed0ac0c86f36298c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__243_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dbdef3a4c68b6d6e4aee90275fb8725d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__244_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b069a6398096740623f8f43d1ea0dab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__245_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c20d0177c836f6413087b51c73c6a12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__246_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6df5c5a9717a624d19b7f257f76d4450,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__247_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_98629feeb9eb1df041b42e5d8dcfc088,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__248_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3d549fc9a1456319b8755c23b504047,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__249_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1356bc623fa045d8dea0a6cc09bec85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__24_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_527256bfcb7228baf27492ade15d34bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__250_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26217f6207d197f2c05a196781515a23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__251_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8e552faf2cbe540196685b3a376762f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__252_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_928c526a3f3445e2761e6a139d46f549,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__253_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4f9809ed6fd505686f54c8392456bcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__254_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_543f0836c78bb6f72f22ae705311b89b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__255_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fbe667ba417c15be2dcbacfeee4d7e93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__256_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8e245c557442fa77839919bc0059a600,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__257_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_777cb76e125e0fb50bf8dda7c47f21d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__258_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a1f5566fe2f29ed649efbb3b8ca0bd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__259_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c5329a88175739f9d02cc7b4a7dff2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__25_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8d20b4a8886796b7d232876b0d38f7e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__260_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f9c292aafa9899aca8f95dfc4681d1af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__261_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf5ab5c285e0b6dc9288a2d447a5f40a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__262_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b3059cca78069a58fec77ce949fa3900,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__263_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dbd479af7c4ed7bfa499611129f58f5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__264_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bed065c8a1c272352b80bad3ab7dfe1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__265_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd5de2279d53f457113309f179f473e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__266_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_403840b6279df1c6ada770e20b94e425,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__267_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c9cf3945890954dd6dc483de0582502b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__268_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3367db2666f61d3a9fbff05918594502,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__269_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_578ccaac7eafea885d5fcdc9097ee41e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__26_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ecf390162d19c9cb0386a75d7835eaf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__270_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe0d250b94333014ac1383c0609fa700,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__271_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61bbc88393e0a88dd3e167f106b88227,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__272_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2718b236976e5284530a8c8f1df9bbd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__273_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e63b2df6b7c09baed9c1b0e6d0da634e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__274_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e318f6435717ff39361a5519e980dd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__275_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f22c436933bade8611b161453bcbd85d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__276_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_470cfc57b7fef8db1c1dc2698c210b9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__277_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2873da5a6ff13322a805815bf2405092,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__278_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd1f985a1af9854b8b3677be06541999,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__279_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf88142926b9b03fae6ee3fee8a04272,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__27_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d592ae9b1191338637a55e76e67cf0a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__280_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7b4f4439ea2da8376befd8267b126d53,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__281_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d1a4bb1b044bac55592008f88b61e17b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__282_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9646a71adde21a020bb1ff1f4ce8a9dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__283_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_98d566f95253cc7e60e3dcb8bf64ed46,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__284_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1249b1041674547cc80f77124228dac4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__285_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_59126865c748e53a0059977371d55513,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__286_num_pos_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__286_num_pos_args,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee27d5ed795e4fa866988da17537f501,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__287_get_exclude_keywords() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__287_get_exclude_keywords,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e99baa294d7e3ac3bedf7d0feef42ce0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__288_signature_or_spec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__288_signature_or_spec,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_07469be31828292b868b4e02e9400ed7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__289_expand_sig() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__289_expand_sig,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f9ce8a8ac92bc0844c37204d8cdef57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__28_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2284fe7dba43e6699606ea7ec9286a0f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__290_create_signature_registry(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__290_create_signature_registry,
        mod_consts[328],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4e1f50762e2d15f4a206fe1fbe85ea3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__291_check_valid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__291_check_valid,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b052a5c54f2a1865c3b2b7fb5886e44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__292__is_valid_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__292__is_valid_args,
        mod_consts[329],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be24806a26f496a2ef1f9b2bd2570408,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__293_check_partial() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__293_check_partial,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1621fb5374ee1ddf11711f9d59ec1b22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__294__is_partial_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__294__is_partial_args,
        mod_consts[330],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f2ad94f50511acb93dfbf924ea6d6687,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__295_check_arity() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__295_check_arity,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b9ce9231ec5d84c92f62c8fa239da03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__296__is_arity() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__296__is_arity,
        mod_consts[331],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ad03fef845bd1027046e514df13ff71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__297_check_varargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__297_check_varargs,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_931602095a91190f715efaa557d443ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__298__has_varargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__298__has_varargs,
        mod_consts[332],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81a1515999478f8818d512d09d73e5ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__299_check_keywords() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__299_check_keywords,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9eaafae6fd36f40532867a539d0222da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__29_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f87229055dc1ccc8ea16f6fee4763087,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f9d31b4395cfee9ddb27754b1d7a872f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__300__has_keywords() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__300__has_keywords,
        mod_consts[333],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef29f0f38d4817113872324632d522bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__301_check_required_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__301_check_required_args,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc3038458c82af6105fbdf90089f19f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__302__num_required_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_toolz$_signatures$$$function__302__num_required_args,
        mod_consts[334],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_11208aad36a244ea625046472e7a85a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__30_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc4d5764f95eca8944b5a744a358ebe8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__31_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4649757eeafae1468a06485c72ef856d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__32_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aab7a59fd97a9b1b1837b24248758b94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__33_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65969d972d8a425ac30103ec45e7fd56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__34_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e7092e9a0feb805ffb895ea7b3f77db3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__35_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f8ba9fac10c076ffb9f1ee61a62c9e1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__36_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ffb5b855d056088042ca7758ea1ee38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__37_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ade7050e5540f53c2e6a651ce4c233ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__38_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ece47ab9c08408e22a24978d1b23dd44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__39_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a04e114c8a7ea83f7c9441e4960dda5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_652e2ff8d8a322200415f171d5417f3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__40_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9b5d99e4d647a3f8d8c5563eb50b71d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__41_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_282c3a45a1e7ceb0b80271830bd1b170,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__42_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d0b0170f2673b99e756c9c93c4bc078,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__43_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e0b7d2dcf76ded23ca30f1d8cfa45c53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__44_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13fb1a1883656dbca0d2dfa55f24b1aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__45_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93de4eedb030a6165768198766cb0f56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__46_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e6ca4d54e5f4784ee74802290069f27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__47_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19b1a887069b4f3502043b00b450b725,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__48_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e497850dc69bdc2b69fe21fa761637c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__49_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_59a8742c57b19feee8ea1686c96626e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_89fb39ff79706892772a3b5b5d2f8017,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__50_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a5742e63a1522c17816f097cc35f3a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__51_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fca7727e916d7d360988aa61f06e7c9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__52_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6074bc3b79cf360a702b37064c2fb43f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__53_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca5825f9bfb09021bf97088fcf7877d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__54_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_31b08931929b88e0e937736e336a5a8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__55_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46d330af79e866a78bdd9d9c956112fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__56_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1829581772d13a1900293179ed37f07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__57_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46dd5dca78021bbce221b26aa2b0e266,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__58_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96e9d0eb20c5e61a5f4c451a27fcd173,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__59_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7b57de0ff58bbcf646170979a44666d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b752cce32a19d49c8330852bc931b35a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__60_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3430bdf4d4af7324c563507e25970cb0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__61_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3676c5f32c9f2abfccb9c4a751a38fb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__62_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eea42c4f5da54194e27180991443483f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__63_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_204bceec088db951ee0e9df107e13269,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__64_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_debc1976750ae05265fe04f242b8fcfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__65_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5d8bc93f44742abb012754750b87ed2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__66_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f9f9b77c6fe198c1ce03938abc18681,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__67_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_39db2a15f50ab3359ddc5f764656f0d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__68_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dcad8ff787bd70d30a0708e66c518a23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__69_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_de98a6ab198cb54f76e48c6017326b3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6dc51c97f6ce80af616ba01e40059601,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__70_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f562e72d981f288e6643e51c3643030c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__71_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c4c86aa8eaa510807fc7fbec80cce47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__72_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_00ed0a32ecdec5fa179dff1120cd98d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__73_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c64a02d6efe420df1f5bd24a6d095b56,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__74_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e8bb296dd39a085de6195e68985efd97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__75_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_015274d395acd3c3bdee0316919d50f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__76_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c961b1fbf08029652c36341b4381e48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__77_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ce0264b091880bdd18a3fedc2fbc147,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__78_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_877c4c9c8a93c8e9089285aa508d6e2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__79_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d19562b267acf72689851f6437d78746,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a45b8338e7b226bc5980bb6bb14f35dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__80_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0cb6a22454366493922a2dd39f637279,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__81_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a7c2af03c0ed2da5549c6e5275a481d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__82_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_633a561a6a05969003b788a2be6c86ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__83_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d91346076588df400f09099e7c28b34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__84_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e608a1f5366d42f8c0cc496abf172e6d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__85_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4b99a4e5920644cdeb2087138249cd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__86_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b18b00bada9e26956b5942e54484dbe9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__87_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_badf74c90de8c9ec7b25d986daaac4c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__88_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_309de8afaa9e5ea6ad74792bb02af7b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__89_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2b987639871bf2c0c80f3f148fda66c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_795968304448940c0bc9ae6f71ee0b03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__90_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_984c69069b9fbe7c93a04b57d36c6ba9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__91_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_124213c24b3b6183a57a82effaa3abbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__92_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b909367ca65a3d26dc089c93b923a2da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__93_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_448cb69a025a9132a06c973e496c656d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__94_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ebbd9af890ef8135576d67669e73479,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__95_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1939eb6ce8c700257225e8d27468b314,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__96_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5affabc53dd857b91eea64419dc93409,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__97_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c37ef1e149c643ced4bd84c552866881,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__98_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f762ebafb0fdf0919cc508368f389651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__99_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1ac89b3d401dc4fdcb9e390ecde5baa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_toolz$_signatures$$$function__9_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_efc647402040d34a0d4a51039a171e05,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_toolz$_signatures,
        NULL,
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

function_impl_code functable_toolz$_signatures[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_toolz$_signatures$$$function__286_num_pos_args,
    impl_toolz$_signatures$$$function__287_get_exclude_keywords,
    impl_toolz$_signatures$$$function__288_signature_or_spec,
    impl_toolz$_signatures$$$function__289_expand_sig,
    impl_toolz$_signatures$$$function__290_create_signature_registry,
    impl_toolz$_signatures$$$function__291_check_valid,
    impl_toolz$_signatures$$$function__292__is_valid_args,
    impl_toolz$_signatures$$$function__293_check_partial,
    impl_toolz$_signatures$$$function__294__is_partial_args,
    impl_toolz$_signatures$$$function__295_check_arity,
    impl_toolz$_signatures$$$function__296__is_arity,
    impl_toolz$_signatures$$$function__297_check_varargs,
    impl_toolz$_signatures$$$function__298__has_varargs,
    impl_toolz$_signatures$$$function__299_check_keywords,
    impl_toolz$_signatures$$$function__300__has_keywords,
    impl_toolz$_signatures$$$function__301_check_required_args,
    impl_toolz$_signatures$$$function__302__num_required_args,
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

    function_impl_code *current = functable_toolz$_signatures;
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

    if (offset > sizeof(functable_toolz$_signatures) || offset < 0) {
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
        functable_toolz$_signatures[offset],
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
        module_toolz$_signatures,
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
PyObject *modulecode_toolz$_signatures(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("toolz._signatures");

    // Store the module for future use.
    module_toolz$_signatures = module;

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
        PRINT_STRING("toolz._signatures: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("toolz._signatures: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("toolz._signatures: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittoolz$_signatures\n");

    moduledict_toolz$_signatures = MODULE_DICT(module_toolz$_signatures);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_toolz$_signatures,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_toolz$_signatures,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[448]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_toolz$_signatures,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_toolz$_signatures,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_toolz$_signatures,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_toolz$_signatures);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_toolz$_signatures);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ad1c272c56acb1fe87f0e6962ac5a538;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dictset_value;
    int tmp_res;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ad1c272c56acb1fe87f0e6962ac5a538 = MAKE_MODULE_FRAME(codeobj_ad1c272c56acb1fe87f0e6962ac5a538, module_toolz$_signatures);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ad1c272c56acb1fe87f0e6962ac5a538);
    assert(Py_REFCNT(frame_ad1c272c56acb1fe87f0e6962ac5a538) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[16];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_toolz$_signatures;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[10];
        frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame.f_lineno = 16;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[69];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_toolz$_signatures;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[10];
        frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame.f_lineno = 17;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[70];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_toolz$_signatures;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[10];
        frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame.f_lineno = 18;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
            tmp_assign_source_8 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[32]);
        }
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[71];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_toolz$_signatures;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[72];
        tmp_level_value_4 = mod_consts[7];
        frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame.f_lineno = 21;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_toolz$_signatures,
                mod_consts[45],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[45]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_toolz$_signatures,
                mod_consts[50],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[50]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_toolz$_signatures,
                mod_consts[53],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[53]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_toolz$_signatures,
                mod_consts[55],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[55]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_toolz$_signatures,
                mod_consts[57],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[57]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_14);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[73];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_toolz$_signatures;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[10];
        frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame.f_lineno = 24;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        assert(!(tmp_assign_source_15 == NULL));
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_16);
    }
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_list_element_1;
        tmp_dict_key_1 = mod_consts[75];


        tmp_list_element_1 = MAKE_FUNCTION_toolz$_signatures$$$function__1_lambda();

        tmp_dict_value_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_1);
        tmp_dictset_value = _PyDict_NewPresized( 73 );
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_list_element_6;
            PyObject *tmp_list_element_7;
            PyObject *tmp_defaults_1;
            PyObject *tmp_list_element_8;
            PyObject *tmp_list_element_9;
            PyObject *tmp_list_element_10;
            PyObject *tmp_list_element_11;
            PyObject *tmp_list_element_12;
            PyObject *tmp_list_element_13;
            PyObject *tmp_list_element_14;
            PyObject *tmp_list_element_15;
            PyObject *tmp_defaults_3;
            PyObject *tmp_list_element_16;
            PyObject *tmp_list_element_17;
            PyObject *tmp_list_element_18;
            PyObject *tmp_list_element_19;
            PyObject *tmp_list_element_20;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_list_element_21;
            PyObject *tmp_list_element_22;
            PyObject *tmp_list_element_23;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_list_element_24;
            PyObject *tmp_list_element_25;
            PyObject *tmp_defaults_6;
            PyObject *tmp_list_element_26;
            PyObject *tmp_list_element_27;
            PyObject *tmp_list_element_28;
            PyObject *tmp_list_element_29;
            PyObject *tmp_list_element_30;
            PyObject *tmp_list_element_31;
            PyObject *tmp_list_element_32;
            PyObject *tmp_list_element_33;
            PyObject *tmp_list_element_34;
            PyObject *tmp_list_element_35;
            PyObject *tmp_defaults_7;
            PyObject *tmp_list_element_36;
            PyObject *tmp_list_element_37;
            PyObject *tmp_list_element_38;
            PyObject *tmp_list_element_39;
            PyObject *tmp_list_element_40;
            PyObject *tmp_list_element_41;
            PyObject *tmp_list_element_42;
            PyObject *tmp_list_element_43;
            PyObject *tmp_defaults_9;
            PyObject *tmp_list_element_44;
            PyObject *tmp_list_element_45;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_list_element_46;
            PyObject *tmp_list_element_47;
            PyObject *tmp_list_element_48;
            PyObject *tmp_list_element_49;
            PyObject *tmp_list_element_50;
            PyObject *tmp_list_element_51;
            PyObject *tmp_defaults_11;
            PyObject *tmp_list_element_52;
            PyObject *tmp_list_element_53;
            PyObject *tmp_list_element_54;
            PyObject *tmp_list_element_55;
            PyObject *tmp_list_element_56;
            PyObject *tmp_list_element_57;
            PyObject *tmp_list_element_58;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_list_element_59;
            PyObject *tmp_list_element_60;
            PyObject *tmp_list_element_61;
            PyObject *tmp_list_element_62;
            PyObject *tmp_list_element_63;
            PyObject *tmp_list_element_64;
            PyObject *tmp_list_element_65;
            PyObject *tmp_list_element_66;
            PyObject *tmp_list_element_67;
            PyObject *tmp_list_element_68;
            PyObject *tmp_list_element_69;
            PyObject *tmp_list_element_70;
            PyObject *tmp_list_element_71;
            PyObject *tmp_list_element_72;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_list_element_73;
            PyObject *tmp_tuple_element_8;
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[77];


            tmp_list_element_2 = MAKE_FUNCTION_toolz$_signatures$$$function__2_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_2);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[78];


            tmp_list_element_3 = MAKE_FUNCTION_toolz$_signatures$$$function__3_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_3);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];


            tmp_list_element_4 = MAKE_FUNCTION_toolz$_signatures$$$function__4_lambda();

            tmp_dict_value_1 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_4);


            tmp_list_element_4 = MAKE_FUNCTION_toolz$_signatures$$$function__5_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_4);


            tmp_list_element_4 = MAKE_FUNCTION_toolz$_signatures$$$function__6_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_4);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[80];


            tmp_list_element_5 = MAKE_FUNCTION_toolz$_signatures$$$function__7_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_5);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[81];


            tmp_list_element_6 = MAKE_FUNCTION_toolz$_signatures$$$function__8_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_6);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[82];
            tmp_defaults_1 = mod_consts[83];
            Py_INCREF(tmp_defaults_1);


            tmp_list_element_7 = MAKE_FUNCTION_toolz$_signatures$$$function__9_lambda(tmp_defaults_1);

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_7);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[84];


            tmp_list_element_8 = MAKE_FUNCTION_toolz$_signatures$$$function__10_lambda();

            tmp_dict_value_1 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_8);


            tmp_list_element_8 = MAKE_FUNCTION_toolz$_signatures$$$function__11_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_8);


            tmp_list_element_8 = MAKE_FUNCTION_toolz$_signatures$$$function__12_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_8);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];


            tmp_list_element_9 = MAKE_FUNCTION_toolz$_signatures$$$function__13_lambda();

            tmp_dict_value_1 = PyList_New(3);
            {
                PyObject *tmp_defaults_2;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_9);


                tmp_list_element_9 = MAKE_FUNCTION_toolz$_signatures$$$function__14_lambda();

                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_9);
                tmp_defaults_2 = mod_consts[86];
                Py_INCREF(tmp_defaults_2);


                tmp_list_element_9 = MAKE_FUNCTION_toolz$_signatures$$$function__15_lambda(tmp_defaults_2);

                PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_9);
            }
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];


            tmp_list_element_10 = MAKE_FUNCTION_toolz$_signatures$$$function__16_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_10);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[88];


            tmp_list_element_11 = MAKE_FUNCTION_toolz$_signatures$$$function__17_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_11);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[89];


            tmp_list_element_12 = MAKE_FUNCTION_toolz$_signatures$$$function__18_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_12);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[90];


            tmp_list_element_13 = MAKE_FUNCTION_toolz$_signatures$$$function__19_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_13);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[91];


            tmp_list_element_14 = MAKE_FUNCTION_toolz$_signatures$$$function__20_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_14);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[92];
            tmp_defaults_3 = mod_consts[93];
            Py_INCREF(tmp_defaults_3);


            tmp_list_element_15 = MAKE_FUNCTION_toolz$_signatures$$$function__21_lambda(tmp_defaults_3);

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_15);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[94];


            tmp_list_element_16 = MAKE_FUNCTION_toolz$_signatures$$$function__22_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_16);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[95];


            tmp_list_element_17 = MAKE_FUNCTION_toolz$_signatures$$$function__23_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_17);


            tmp_list_element_17 = MAKE_FUNCTION_toolz$_signatures$$$function__24_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_17);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[96];


            tmp_list_element_18 = MAKE_FUNCTION_toolz$_signatures$$$function__25_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_18);


            tmp_list_element_18 = MAKE_FUNCTION_toolz$_signatures$$$function__26_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_18);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[97];


            tmp_list_element_19 = MAKE_FUNCTION_toolz$_signatures$$$function__27_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_19);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            tmp_tuple_element_1 = mod_consts[10];
            tmp_list_element_20 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_4;
                PyTuple_SET_ITEM0(tmp_list_element_20, 0, tmp_tuple_element_1);
                tmp_defaults_4 = mod_consts[99];
                Py_INCREF(tmp_defaults_4);


                tmp_tuple_element_1 = MAKE_FUNCTION_toolz$_signatures$$$function__28_lambda(tmp_defaults_4);

                PyTuple_SET_ITEM(tmp_list_element_20, 1, tmp_tuple_element_1);
            }
            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_20);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[100];


            tmp_list_element_21 = MAKE_FUNCTION_toolz$_signatures$$$function__29_lambda();

            tmp_dict_value_1 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_21);


            tmp_list_element_21 = MAKE_FUNCTION_toolz$_signatures$$$function__30_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_21);


            tmp_list_element_21 = MAKE_FUNCTION_toolz$_signatures$$$function__31_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_21);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[101];


            tmp_list_element_22 = MAKE_FUNCTION_toolz$_signatures$$$function__32_lambda();

            tmp_dict_value_1 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_22);


            tmp_list_element_22 = MAKE_FUNCTION_toolz$_signatures$$$function__33_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_22);


            tmp_list_element_22 = MAKE_FUNCTION_toolz$_signatures$$$function__34_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_22);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[102];
            tmp_tuple_element_2 = mod_consts[10];
            tmp_list_element_23 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_5;
                PyTuple_SET_ITEM0(tmp_list_element_23, 0, tmp_tuple_element_2);
                tmp_defaults_5 = mod_consts[103];
                Py_INCREF(tmp_defaults_5);


                tmp_tuple_element_2 = MAKE_FUNCTION_toolz$_signatures$$$function__35_lambda(tmp_defaults_5);

                PyTuple_SET_ITEM(tmp_list_element_23, 1, tmp_tuple_element_2);
            }
            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_23);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[104];


            tmp_list_element_24 = MAKE_FUNCTION_toolz$_signatures$$$function__36_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_24);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[105];
            tmp_defaults_6 = mod_consts[106];
            Py_INCREF(tmp_defaults_6);


            tmp_list_element_25 = MAKE_FUNCTION_toolz$_signatures$$$function__37_lambda(tmp_defaults_6);

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_25);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[107];


            tmp_list_element_26 = MAKE_FUNCTION_toolz$_signatures$$$function__38_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_26);


            tmp_list_element_26 = MAKE_FUNCTION_toolz$_signatures$$$function__39_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_26);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[108];


            tmp_list_element_27 = MAKE_FUNCTION_toolz$_signatures$$$function__40_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_27);


            tmp_list_element_27 = MAKE_FUNCTION_toolz$_signatures$$$function__41_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_27);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[109];


            tmp_list_element_28 = MAKE_FUNCTION_toolz$_signatures$$$function__42_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_28);


            tmp_list_element_28 = MAKE_FUNCTION_toolz$_signatures$$$function__43_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_28);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[110];


            tmp_list_element_29 = MAKE_FUNCTION_toolz$_signatures$$$function__44_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_29);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[111];


            tmp_list_element_30 = MAKE_FUNCTION_toolz$_signatures$$$function__45_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_30);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[112];


            tmp_list_element_31 = MAKE_FUNCTION_toolz$_signatures$$$function__46_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_31);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[113];


            tmp_list_element_32 = MAKE_FUNCTION_toolz$_signatures$$$function__47_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_32);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[114];


            tmp_list_element_33 = MAKE_FUNCTION_toolz$_signatures$$$function__48_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_33);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[115];


            tmp_list_element_34 = MAKE_FUNCTION_toolz$_signatures$$$function__49_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_34);


            tmp_list_element_34 = MAKE_FUNCTION_toolz$_signatures$$$function__50_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_34);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[116];
            tmp_defaults_7 = mod_consts[99];
            Py_INCREF(tmp_defaults_7);


            tmp_list_element_35 = MAKE_FUNCTION_toolz$_signatures$$$function__51_lambda(tmp_defaults_7);

            tmp_dict_value_1 = PyList_New(2);
            {
                PyObject *tmp_tuple_element_3;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_35);
                tmp_tuple_element_3 = mod_consts[10];
                tmp_list_element_35 = PyTuple_New(2);
                {
                    PyObject *tmp_defaults_8;
                    PyTuple_SET_ITEM0(tmp_list_element_35, 0, tmp_tuple_element_3);
                    tmp_defaults_8 = mod_consts[117];
                    Py_INCREF(tmp_defaults_8);


                    tmp_tuple_element_3 = MAKE_FUNCTION_toolz$_signatures$$$function__52_lambda(tmp_defaults_8);

                    PyTuple_SET_ITEM(tmp_list_element_35, 1, tmp_tuple_element_3);
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_35);
            }
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[118];


            tmp_list_element_36 = MAKE_FUNCTION_toolz$_signatures$$$function__53_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_36);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[119];


            tmp_list_element_37 = MAKE_FUNCTION_toolz$_signatures$$$function__54_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_37);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[120];


            tmp_list_element_38 = MAKE_FUNCTION_toolz$_signatures$$$function__55_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_38);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[121];


            tmp_list_element_39 = MAKE_FUNCTION_toolz$_signatures$$$function__56_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_39);


            tmp_list_element_39 = MAKE_FUNCTION_toolz$_signatures$$$function__57_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_39);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[122];


            tmp_list_element_40 = MAKE_FUNCTION_toolz$_signatures$$$function__58_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_40);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[123];


            tmp_list_element_41 = MAKE_FUNCTION_toolz$_signatures$$$function__59_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_41);


            tmp_list_element_41 = MAKE_FUNCTION_toolz$_signatures$$$function__60_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_41);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[124];


            tmp_list_element_42 = MAKE_FUNCTION_toolz$_signatures$$$function__61_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_42);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[125];
            tmp_defaults_9 = mod_consts[99];
            Py_INCREF(tmp_defaults_9);


            tmp_list_element_43 = MAKE_FUNCTION_toolz$_signatures$$$function__62_lambda(tmp_defaults_9);

            tmp_dict_value_1 = PyList_New(2);
            {
                PyObject *tmp_tuple_element_4;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_43);
                tmp_tuple_element_4 = mod_consts[10];
                tmp_list_element_43 = PyTuple_New(2);
                {
                    PyObject *tmp_defaults_10;
                    PyTuple_SET_ITEM0(tmp_list_element_43, 0, tmp_tuple_element_4);
                    tmp_defaults_10 = mod_consts[117];
                    Py_INCREF(tmp_defaults_10);


                    tmp_tuple_element_4 = MAKE_FUNCTION_toolz$_signatures$$$function__63_lambda(tmp_defaults_10);

                    PyTuple_SET_ITEM(tmp_list_element_43, 1, tmp_tuple_element_4);
                }
                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_43);
            }
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[126];


            tmp_list_element_44 = MAKE_FUNCTION_toolz$_signatures$$$function__64_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_44);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[127];
            tmp_tuple_element_5 = mod_consts[10];
            tmp_list_element_45 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_45, 0, tmp_tuple_element_5);


            tmp_tuple_element_5 = MAKE_FUNCTION_toolz$_signatures$$$function__65_lambda();

            PyTuple_SET_ITEM(tmp_list_element_45, 1, tmp_tuple_element_5);
            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_45);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[128];


            tmp_list_element_46 = MAKE_FUNCTION_toolz$_signatures$$$function__66_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_46);


            tmp_list_element_46 = MAKE_FUNCTION_toolz$_signatures$$$function__67_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_46);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[129];


            tmp_list_element_47 = MAKE_FUNCTION_toolz$_signatures$$$function__68_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_47);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[130];


            tmp_list_element_48 = MAKE_FUNCTION_toolz$_signatures$$$function__69_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_48);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[131];


            tmp_list_element_49 = MAKE_FUNCTION_toolz$_signatures$$$function__70_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_49);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[132];


            tmp_list_element_50 = MAKE_FUNCTION_toolz$_signatures$$$function__71_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_50);


            tmp_list_element_50 = MAKE_FUNCTION_toolz$_signatures$$$function__72_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_50);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[133];
            tmp_defaults_11 = mod_consts[134];
            Py_INCREF(tmp_defaults_11);


            tmp_list_element_51 = MAKE_FUNCTION_toolz$_signatures$$$function__73_lambda(tmp_defaults_11);

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_51);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[135];


            tmp_list_element_52 = MAKE_FUNCTION_toolz$_signatures$$$function__74_lambda();

            tmp_dict_value_1 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_52);


            tmp_list_element_52 = MAKE_FUNCTION_toolz$_signatures$$$function__75_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_52);


            tmp_list_element_52 = MAKE_FUNCTION_toolz$_signatures$$$function__76_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_52);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[136];


            tmp_list_element_53 = MAKE_FUNCTION_toolz$_signatures$$$function__77_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_53);


            tmp_list_element_53 = MAKE_FUNCTION_toolz$_signatures$$$function__78_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_53);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[137];


            tmp_list_element_54 = MAKE_FUNCTION_toolz$_signatures$$$function__79_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_54);


            tmp_list_element_54 = MAKE_FUNCTION_toolz$_signatures$$$function__80_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_54);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[138];


            tmp_list_element_55 = MAKE_FUNCTION_toolz$_signatures$$$function__81_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_55);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[139];


            tmp_list_element_56 = MAKE_FUNCTION_toolz$_signatures$$$function__82_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_56);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[140];


            tmp_list_element_57 = MAKE_FUNCTION_toolz$_signatures$$$function__83_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_57);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[141];
            tmp_tuple_element_6 = mod_consts[10];
            tmp_list_element_58 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_12;
                PyTuple_SET_ITEM0(tmp_list_element_58, 0, tmp_tuple_element_6);
                tmp_defaults_12 = mod_consts[99];
                Py_INCREF(tmp_defaults_12);


                tmp_tuple_element_6 = MAKE_FUNCTION_toolz$_signatures$$$function__84_lambda(tmp_defaults_12);

                PyTuple_SET_ITEM(tmp_list_element_58, 1, tmp_tuple_element_6);
            }
            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_58);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[142];


            tmp_list_element_59 = MAKE_FUNCTION_toolz$_signatures$$$function__85_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_59);


            tmp_list_element_59 = MAKE_FUNCTION_toolz$_signatures$$$function__86_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_59);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[143];


            tmp_list_element_60 = MAKE_FUNCTION_toolz$_signatures$$$function__87_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_60);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[144];


            tmp_list_element_61 = MAKE_FUNCTION_toolz$_signatures$$$function__88_lambda();

            tmp_dict_value_1 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_61);


            tmp_list_element_61 = MAKE_FUNCTION_toolz$_signatures$$$function__89_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_61);


            tmp_list_element_61 = MAKE_FUNCTION_toolz$_signatures$$$function__90_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_61);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[145];


            tmp_list_element_62 = MAKE_FUNCTION_toolz$_signatures$$$function__91_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_62);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[146];


            tmp_list_element_63 = MAKE_FUNCTION_toolz$_signatures$$$function__92_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_63);


            tmp_list_element_63 = MAKE_FUNCTION_toolz$_signatures$$$function__93_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_63);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[147];


            tmp_list_element_64 = MAKE_FUNCTION_toolz$_signatures$$$function__94_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_64);


            tmp_list_element_64 = MAKE_FUNCTION_toolz$_signatures$$$function__95_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_64);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[148];


            tmp_list_element_65 = MAKE_FUNCTION_toolz$_signatures$$$function__96_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_65);


            tmp_list_element_65 = MAKE_FUNCTION_toolz$_signatures$$$function__97_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_65);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[149];


            tmp_list_element_66 = MAKE_FUNCTION_toolz$_signatures$$$function__98_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_66);


            tmp_list_element_66 = MAKE_FUNCTION_toolz$_signatures$$$function__99_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_66);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[150];


            tmp_list_element_67 = MAKE_FUNCTION_toolz$_signatures$$$function__100_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_67);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[151];


            tmp_list_element_68 = MAKE_FUNCTION_toolz$_signatures$$$function__101_lambda();

            tmp_dict_value_1 = PyList_New(2);
            {
                PyObject *tmp_defaults_13;
                PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_68);
                tmp_defaults_13 = mod_consts[152];
                Py_INCREF(tmp_defaults_13);


                tmp_list_element_68 = MAKE_FUNCTION_toolz$_signatures$$$function__102_lambda(tmp_defaults_13);

                PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_68);
            }
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[153];


            tmp_list_element_69 = MAKE_FUNCTION_toolz$_signatures$$$function__103_lambda();

            tmp_dict_value_1 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_69);


            tmp_list_element_69 = MAKE_FUNCTION_toolz$_signatures$$$function__104_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_69);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[154];


            tmp_list_element_70 = MAKE_FUNCTION_toolz$_signatures$$$function__105_lambda();

            tmp_dict_value_1 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_70);


            tmp_list_element_70 = MAKE_FUNCTION_toolz$_signatures$$$function__106_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 1, tmp_list_element_70);


            tmp_list_element_70 = MAKE_FUNCTION_toolz$_signatures$$$function__107_lambda();

            PyList_SET_ITEM(tmp_dict_value_1, 2, tmp_list_element_70);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[155];


            tmp_list_element_71 = MAKE_FUNCTION_toolz$_signatures$$$function__108_lambda();

            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_71);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[156];
            tmp_tuple_element_7 = mod_consts[157];
            tmp_list_element_72 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_list_element_72, 0, tmp_tuple_element_7);


            tmp_tuple_element_7 = MAKE_FUNCTION_toolz$_signatures$$$function__109_lambda();

            PyTuple_SET_ITEM(tmp_list_element_72, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[158];
            PyTuple_SET_ITEM0(tmp_list_element_72, 2, tmp_tuple_element_7);
            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_72);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[159];
            tmp_tuple_element_8 = mod_consts[10];
            tmp_list_element_73 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_14;
                PyTuple_SET_ITEM0(tmp_list_element_73, 0, tmp_tuple_element_8);
                tmp_defaults_14 = mod_consts[134];
                Py_INCREF(tmp_defaults_14);


                tmp_tuple_element_8 = MAKE_FUNCTION_toolz$_signatures$$$function__110_lambda(tmp_defaults_14);

                PyTuple_SET_ITEM(tmp_list_element_73, 1, tmp_tuple_element_8);
            }
            tmp_dict_value_1 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_73);
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_dict = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dictset_dict == NULL)) {
            tmp_dictset_dict = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_dictset_dict == NULL));
        tmp_dictset_key = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dictset_key == NULL)) {
            tmp_dictset_key = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_dictset_key == NULL));
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_list_element_74;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscript_1;


        tmp_list_element_74 = MAKE_FUNCTION_toolz$_signatures$$$function__111_lambda();

        tmp_ass_subvalue_1 = PyList_New(3);
        PyList_SET_ITEM(tmp_ass_subvalue_1, 0, tmp_list_element_74);


        tmp_list_element_74 = MAKE_FUNCTION_toolz$_signatures$$$function__112_lambda();

        PyList_SET_ITEM(tmp_ass_subvalue_1, 1, tmp_list_element_74);


        tmp_list_element_74 = MAKE_FUNCTION_toolz$_signatures$$$function__113_lambda();

        PyList_SET_ITEM(tmp_ass_subvalue_1, 2, tmp_list_element_74);
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_subscript_value_1 == NULL));
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[160];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_element_75;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_list_element_76;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_list_element_77;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_list_element_78;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_list_element_79;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_list_element_80;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_list_element_81;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_list_element_82;
        PyObject *tmp_defaults_18;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_subscript_value_2 == NULL)) {
            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[161]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }


        tmp_list_element_75 = MAKE_FUNCTION_toolz$_signatures$$$function__114_lambda();

        tmp_kw_call_value_0_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_list_element_75);


        tmp_list_element_76 = MAKE_FUNCTION_toolz$_signatures$$$function__115_lambda();

        tmp_kw_call_value_1_1 = PyList_New(3);
        {
            PyObject *tmp_defaults_15;
            PyList_SET_ITEM(tmp_kw_call_value_1_1, 0, tmp_list_element_76);


            tmp_list_element_76 = MAKE_FUNCTION_toolz$_signatures$$$function__116_lambda();

            PyList_SET_ITEM(tmp_kw_call_value_1_1, 1, tmp_list_element_76);
            tmp_defaults_15 = mod_consts[86];
            Py_INCREF(tmp_defaults_15);


            tmp_list_element_76 = MAKE_FUNCTION_toolz$_signatures$$$function__117_lambda(tmp_defaults_15);

            PyList_SET_ITEM(tmp_kw_call_value_1_1, 2, tmp_list_element_76);
        }
        tmp_tuple_element_9 = mod_consts[10];
        tmp_list_element_77 = PyTuple_New(2);
        {
            PyObject *tmp_defaults_16;
            PyTuple_SET_ITEM0(tmp_list_element_77, 0, tmp_tuple_element_9);
            tmp_defaults_16 = mod_consts[162];
            Py_INCREF(tmp_defaults_16);


            tmp_tuple_element_9 = MAKE_FUNCTION_toolz$_signatures$$$function__118_lambda(tmp_defaults_16);

            PyTuple_SET_ITEM(tmp_list_element_77, 1, tmp_tuple_element_9);
        }
        tmp_kw_call_value_2_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_2_1, 0, tmp_list_element_77);
        tmp_tuple_element_10 = mod_consts[7];
        tmp_list_element_78 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_list_element_78, 0, tmp_tuple_element_10);


        tmp_tuple_element_10 = MAKE_FUNCTION_toolz$_signatures$$$function__119_lambda();

        PyTuple_SET_ITEM(tmp_list_element_78, 1, tmp_tuple_element_10);
        tmp_tuple_element_10 = mod_consts[163];
        PyTuple_SET_ITEM0(tmp_list_element_78, 2, tmp_tuple_element_10);
        tmp_kw_call_value_3_1 = PyList_New(2);
        {
            PyObject *tmp_tuple_element_11;
            PyList_SET_ITEM(tmp_kw_call_value_3_1, 0, tmp_list_element_78);
            tmp_tuple_element_11 = mod_consts[7];
            tmp_list_element_78 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_list_element_78, 0, tmp_tuple_element_11);


            tmp_tuple_element_11 = MAKE_FUNCTION_toolz$_signatures$$$function__120_lambda();

            PyTuple_SET_ITEM(tmp_list_element_78, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[164];
            PyTuple_SET_ITEM0(tmp_list_element_78, 2, tmp_tuple_element_11);
            PyList_SET_ITEM(tmp_kw_call_value_3_1, 1, tmp_list_element_78);
        }
        tmp_tuple_element_12 = mod_consts[7];
        tmp_list_element_79 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_list_element_79, 0, tmp_tuple_element_12);


        tmp_tuple_element_12 = MAKE_FUNCTION_toolz$_signatures$$$function__121_lambda();

        PyTuple_SET_ITEM(tmp_list_element_79, 1, tmp_tuple_element_12);
        tmp_tuple_element_12 = mod_consts[163];
        PyTuple_SET_ITEM0(tmp_list_element_79, 2, tmp_tuple_element_12);
        tmp_kw_call_value_4_1 = PyList_New(2);
        {
            PyObject *tmp_tuple_element_13;
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 0, tmp_list_element_79);
            tmp_tuple_element_13 = mod_consts[7];
            tmp_list_element_79 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_list_element_79, 0, tmp_tuple_element_13);


            tmp_tuple_element_13 = MAKE_FUNCTION_toolz$_signatures$$$function__122_lambda();

            PyTuple_SET_ITEM(tmp_list_element_79, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[164];
            PyTuple_SET_ITEM0(tmp_list_element_79, 2, tmp_tuple_element_13);
            PyList_SET_ITEM(tmp_kw_call_value_4_1, 1, tmp_list_element_79);
        }
        tmp_tuple_element_14 = mod_consts[10];
        tmp_list_element_80 = PyTuple_New(2);
        {
            PyObject *tmp_defaults_17;
            PyTuple_SET_ITEM0(tmp_list_element_80, 0, tmp_tuple_element_14);
            tmp_defaults_17 = mod_consts[165];
            Py_INCREF(tmp_defaults_17);


            tmp_tuple_element_14 = MAKE_FUNCTION_toolz$_signatures$$$function__123_lambda(tmp_defaults_17);

            PyTuple_SET_ITEM(tmp_list_element_80, 1, tmp_tuple_element_14);
        }
        tmp_kw_call_value_5_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_5_1, 0, tmp_list_element_80);
        tmp_tuple_element_15 = mod_consts[7];
        tmp_list_element_81 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_list_element_81, 0, tmp_tuple_element_15);


        tmp_tuple_element_15 = MAKE_FUNCTION_toolz$_signatures$$$function__124_lambda();

        PyTuple_SET_ITEM(tmp_list_element_81, 1, tmp_tuple_element_15);
        tmp_tuple_element_15 = mod_consts[166];
        PyTuple_SET_ITEM0(tmp_list_element_81, 2, tmp_tuple_element_15);
        tmp_kw_call_value_6_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_6_1, 0, tmp_list_element_81);
        tmp_defaults_18 = mod_consts[167];
        Py_INCREF(tmp_defaults_18);


        tmp_list_element_82 = MAKE_FUNCTION_toolz$_signatures$$$function__125_lambda(tmp_defaults_18);

        tmp_kw_call_value_7_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_7_1, 0, tmp_list_element_82);
        frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame.f_lineno = 234;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[168]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_list_element_83;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscript_2;
        tmp_tuple_element_16 = mod_consts[10];
        tmp_list_element_83 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_list_element_83, 0, tmp_tuple_element_16);


        tmp_tuple_element_16 = MAKE_FUNCTION_toolz$_signatures$$$function__126_lambda();

        PyTuple_SET_ITEM(tmp_list_element_83, 1, tmp_tuple_element_16);
        tmp_tuple_element_16 = mod_consts[169];
        PyTuple_SET_ITEM0(tmp_list_element_83, 2, tmp_tuple_element_16);
        tmp_ass_subvalue_2 = PyList_New(1);
        PyList_SET_ITEM(tmp_ass_subvalue_2, 0, tmp_list_element_83);
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_subscript_value_3 == NULL)) {
            tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[170];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_list_element_84;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_dict_key_2 = mod_consts[171];
        tmp_tuple_element_17 = mod_consts[10];
        tmp_list_element_84 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_list_element_84, 0, tmp_tuple_element_17);


        tmp_tuple_element_17 = MAKE_FUNCTION_toolz$_signatures$$$function__127_lambda();

        PyTuple_SET_ITEM(tmp_list_element_84, 1, tmp_tuple_element_17);
        tmp_dict_value_2 = PyList_New(1);
        PyList_SET_ITEM(tmp_dict_value_2, 0, tmp_list_element_84);
        tmp_ass_subvalue_3 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_list_element_85;
            PyObject *tmp_list_element_86;
            PyObject *tmp_list_element_87;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[172];


            tmp_list_element_85 = MAKE_FUNCTION_toolz$_signatures$$$function__128_lambda();

            tmp_dict_value_2 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_2, 0, tmp_list_element_85);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[173];


            tmp_list_element_86 = MAKE_FUNCTION_toolz$_signatures$$$function__129_lambda();

            tmp_dict_value_2 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_2, 0, tmp_list_element_86);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[137];


            tmp_list_element_87 = MAKE_FUNCTION_toolz$_signatures$$$function__130_lambda();

            tmp_dict_value_2 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_2, 0, tmp_list_element_87);


            tmp_list_element_87 = MAKE_FUNCTION_toolz$_signatures$$$function__131_lambda();

            PyList_SET_ITEM(tmp_dict_value_2, 1, tmp_list_element_87);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_ass_subscript_3 == NULL)) {
            tmp_ass_subscript_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_ass_subscript_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_list_element_88;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_dict_key_3 = mod_consts[174];
        tmp_tuple_element_18 = mod_consts[10];
        tmp_list_element_88 = PyTuple_New(2);
        {
            PyObject *tmp_defaults_19;
            PyTuple_SET_ITEM0(tmp_list_element_88, 0, tmp_tuple_element_18);
            tmp_defaults_19 = mod_consts[44];
            Py_INCREF(tmp_defaults_19);


            tmp_tuple_element_18 = MAKE_FUNCTION_toolz$_signatures$$$function__132_lambda(tmp_defaults_19);

            PyTuple_SET_ITEM(tmp_list_element_88, 1, tmp_tuple_element_18);
        }
        tmp_dict_value_3 = PyList_New(1);
        PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_88);
        tmp_ass_subvalue_4 = _PyDict_NewPresized( 22 );
        {
            PyObject *tmp_list_element_89;
            PyObject *tmp_list_element_90;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_list_element_91;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_list_element_92;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_list_element_93;
            PyObject *tmp_defaults_20;
            PyObject *tmp_list_element_94;
            PyObject *tmp_list_element_95;
            PyObject *tmp_list_element_96;
            PyObject *tmp_list_element_97;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_list_element_98;
            PyObject *tmp_list_element_99;
            PyObject *tmp_list_element_100;
            PyObject *tmp_list_element_101;
            PyObject *tmp_list_element_102;
            PyObject *tmp_list_element_103;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_list_element_104;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_list_element_105;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_list_element_106;
            PyObject *tmp_list_element_107;
            PyObject *tmp_list_element_108;
            PyObject *tmp_list_element_109;
            PyObject *tmp_tuple_element_26;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[175];


            tmp_list_element_89 = MAKE_FUNCTION_toolz$_signatures$$$function__133_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_89);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[176];
            tmp_tuple_element_19 = mod_consts[10];
            tmp_list_element_90 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_90, 0, tmp_tuple_element_19);


            tmp_tuple_element_19 = MAKE_FUNCTION_toolz$_signatures$$$function__134_lambda();

            PyTuple_SET_ITEM(tmp_list_element_90, 1, tmp_tuple_element_19);
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_90);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[177];
            tmp_tuple_element_20 = mod_consts[10];
            tmp_list_element_91 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_91, 0, tmp_tuple_element_20);


            tmp_tuple_element_20 = MAKE_FUNCTION_toolz$_signatures$$$function__135_lambda();

            PyTuple_SET_ITEM(tmp_list_element_91, 1, tmp_tuple_element_20);
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_91);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[178];
            tmp_tuple_element_21 = mod_consts[10];
            tmp_list_element_92 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_92, 0, tmp_tuple_element_21);


            tmp_tuple_element_21 = MAKE_FUNCTION_toolz$_signatures$$$function__136_lambda();

            PyTuple_SET_ITEM(tmp_list_element_92, 1, tmp_tuple_element_21);
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_92);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[179];
            tmp_defaults_20 = mod_consts[180];
            Py_INCREF(tmp_defaults_20);


            tmp_list_element_93 = MAKE_FUNCTION_toolz$_signatures$$$function__137_lambda(tmp_defaults_20);

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_93);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[181];


            tmp_list_element_94 = MAKE_FUNCTION_toolz$_signatures$$$function__138_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_94);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[182];


            tmp_list_element_95 = MAKE_FUNCTION_toolz$_signatures$$$function__139_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_95);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[183];


            tmp_list_element_96 = MAKE_FUNCTION_toolz$_signatures$$$function__140_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_96);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[184];
            tmp_tuple_element_22 = mod_consts[10];
            tmp_list_element_97 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_21;
                PyTuple_SET_ITEM0(tmp_list_element_97, 0, tmp_tuple_element_22);
                tmp_defaults_21 = mod_consts[44];
                Py_INCREF(tmp_defaults_21);


                tmp_tuple_element_22 = MAKE_FUNCTION_toolz$_signatures$$$function__141_lambda(tmp_defaults_21);

                PyTuple_SET_ITEM(tmp_list_element_97, 1, tmp_tuple_element_22);
            }
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_97);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[185];


            tmp_list_element_98 = MAKE_FUNCTION_toolz$_signatures$$$function__142_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_98);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[186];


            tmp_list_element_99 = MAKE_FUNCTION_toolz$_signatures$$$function__143_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_99);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[187];


            tmp_list_element_100 = MAKE_FUNCTION_toolz$_signatures$$$function__144_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_100);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[188];


            tmp_list_element_101 = MAKE_FUNCTION_toolz$_signatures$$$function__145_lambda();

            tmp_dict_value_3 = PyList_New(3);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_101);


            tmp_list_element_101 = MAKE_FUNCTION_toolz$_signatures$$$function__146_lambda();

            PyList_SET_ITEM(tmp_dict_value_3, 1, tmp_list_element_101);


            tmp_list_element_101 = MAKE_FUNCTION_toolz$_signatures$$$function__147_lambda();

            PyList_SET_ITEM(tmp_dict_value_3, 2, tmp_list_element_101);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[189];


            tmp_list_element_102 = MAKE_FUNCTION_toolz$_signatures$$$function__148_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_102);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[190];
            tmp_tuple_element_23 = mod_consts[10];
            tmp_list_element_103 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_list_element_103, 0, tmp_tuple_element_23);


            tmp_tuple_element_23 = MAKE_FUNCTION_toolz$_signatures$$$function__149_lambda();

            PyTuple_SET_ITEM(tmp_list_element_103, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = mod_consts[191];
            PyTuple_SET_ITEM0(tmp_list_element_103, 2, tmp_tuple_element_23);
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_103);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[192];
            tmp_tuple_element_24 = mod_consts[10];
            tmp_list_element_104 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_22;
                PyTuple_SET_ITEM0(tmp_list_element_104, 0, tmp_tuple_element_24);
                tmp_defaults_22 = mod_consts[99];
                Py_INCREF(tmp_defaults_22);


                tmp_tuple_element_24 = MAKE_FUNCTION_toolz$_signatures$$$function__150_lambda(tmp_defaults_22);

                PyTuple_SET_ITEM(tmp_list_element_104, 1, tmp_tuple_element_24);
            }
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_104);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[193];
            tmp_tuple_element_25 = mod_consts[10];
            tmp_list_element_105 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_23;
                PyTuple_SET_ITEM0(tmp_list_element_105, 0, tmp_tuple_element_25);
                tmp_defaults_23 = mod_consts[99];
                Py_INCREF(tmp_defaults_23);


                tmp_tuple_element_25 = MAKE_FUNCTION_toolz$_signatures$$$function__151_lambda(tmp_defaults_23);

                PyTuple_SET_ITEM(tmp_list_element_105, 1, tmp_tuple_element_25);
            }
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_105);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[194];


            tmp_list_element_106 = MAKE_FUNCTION_toolz$_signatures$$$function__152_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_106);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[195];


            tmp_list_element_107 = MAKE_FUNCTION_toolz$_signatures$$$function__153_lambda();

            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_107);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[196];


            tmp_list_element_108 = MAKE_FUNCTION_toolz$_signatures$$$function__154_lambda();

            tmp_dict_value_3 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_108);


            tmp_list_element_108 = MAKE_FUNCTION_toolz$_signatures$$$function__155_lambda();

            PyList_SET_ITEM(tmp_dict_value_3, 1, tmp_list_element_108);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[197];
            tmp_tuple_element_26 = mod_consts[10];
            tmp_list_element_109 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_list_element_109, 0, tmp_tuple_element_26);


            tmp_tuple_element_26 = MAKE_FUNCTION_toolz$_signatures$$$function__156_lambda();

            PyTuple_SET_ITEM(tmp_list_element_109, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[191];
            PyTuple_SET_ITEM0(tmp_list_element_109, 2, tmp_tuple_element_26);
            tmp_dict_value_3 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_3, 0, tmp_list_element_109);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_ass_subscript_4 == NULL)) {
            tmp_ass_subscript_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_ass_subscript_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_list_element_110;
        PyObject *tmp_tuple_element_27;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_subscript_value_4 == NULL)) {
            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[161]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = mod_consts[10];
        tmp_list_element_110 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_list_element_110, 0, tmp_tuple_element_27);


        tmp_tuple_element_27 = MAKE_FUNCTION_toolz$_signatures$$$function__157_lambda();

        PyTuple_SET_ITEM(tmp_list_element_110, 1, tmp_tuple_element_27);
        tmp_tuple_element_27 = mod_consts[198];
        PyTuple_SET_ITEM0(tmp_list_element_110, 2, tmp_tuple_element_27);
        tmp_kw_call_value_0_2 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_0_2, 0, tmp_list_element_110);
        frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame.f_lineno = 324;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[199]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_list_element_111;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_dict_key_4 = mod_consts[200];


        tmp_list_element_111 = MAKE_FUNCTION_toolz$_signatures$$$function__158_lambda();

        tmp_dict_value_4 = PyList_New(1);
        PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_111);
        tmp_ass_subvalue_5 = _PyDict_NewPresized( 120 );
        {
            PyObject *tmp_list_element_112;
            PyObject *tmp_list_element_113;
            PyObject *tmp_list_element_114;
            PyObject *tmp_list_element_115;
            PyObject *tmp_list_element_116;
            PyObject *tmp_list_element_117;
            PyObject *tmp_list_element_118;
            PyObject *tmp_list_element_119;
            PyObject *tmp_list_element_120;
            PyObject *tmp_list_element_121;
            PyObject *tmp_list_element_122;
            PyObject *tmp_list_element_123;
            PyObject *tmp_list_element_124;
            PyObject *tmp_list_element_125;
            PyObject *tmp_list_element_126;
            PyObject *tmp_list_element_127;
            PyObject *tmp_list_element_128;
            PyObject *tmp_list_element_129;
            PyObject *tmp_list_element_130;
            PyObject *tmp_list_element_131;
            PyObject *tmp_list_element_132;
            PyObject *tmp_list_element_133;
            PyObject *tmp_list_element_134;
            PyObject *tmp_list_element_135;
            PyObject *tmp_list_element_136;
            PyObject *tmp_list_element_137;
            PyObject *tmp_list_element_138;
            PyObject *tmp_list_element_139;
            PyObject *tmp_list_element_140;
            PyObject *tmp_list_element_141;
            PyObject *tmp_list_element_142;
            PyObject *tmp_list_element_143;
            PyObject *tmp_list_element_144;
            PyObject *tmp_list_element_145;
            PyObject *tmp_list_element_146;
            PyObject *tmp_list_element_147;
            PyObject *tmp_list_element_148;
            PyObject *tmp_list_element_149;
            PyObject *tmp_list_element_150;
            PyObject *tmp_list_element_151;
            PyObject *tmp_list_element_152;
            PyObject *tmp_list_element_153;
            PyObject *tmp_list_element_154;
            PyObject *tmp_list_element_155;
            PyObject *tmp_list_element_156;
            PyObject *tmp_list_element_157;
            PyObject *tmp_list_element_158;
            PyObject *tmp_list_element_159;
            PyObject *tmp_list_element_160;
            PyObject *tmp_list_element_161;
            PyObject *tmp_list_element_162;
            PyObject *tmp_list_element_163;
            PyObject *tmp_list_element_164;
            PyObject *tmp_list_element_165;
            PyObject *tmp_list_element_166;
            PyObject *tmp_list_element_167;
            PyObject *tmp_list_element_168;
            PyObject *tmp_list_element_169;
            PyObject *tmp_list_element_170;
            PyObject *tmp_list_element_171;
            PyObject *tmp_list_element_172;
            PyObject *tmp_list_element_173;
            PyObject *tmp_list_element_174;
            PyObject *tmp_list_element_175;
            PyObject *tmp_list_element_176;
            PyObject *tmp_list_element_177;
            PyObject *tmp_list_element_178;
            PyObject *tmp_list_element_179;
            PyObject *tmp_list_element_180;
            PyObject *tmp_list_element_181;
            PyObject *tmp_list_element_182;
            PyObject *tmp_list_element_183;
            PyObject *tmp_list_element_184;
            PyObject *tmp_list_element_185;
            PyObject *tmp_list_element_186;
            PyObject *tmp_list_element_187;
            PyObject *tmp_list_element_188;
            PyObject *tmp_list_element_189;
            PyObject *tmp_list_element_190;
            PyObject *tmp_list_element_191;
            PyObject *tmp_list_element_192;
            PyObject *tmp_list_element_193;
            PyObject *tmp_list_element_194;
            PyObject *tmp_list_element_195;
            PyObject *tmp_list_element_196;
            PyObject *tmp_list_element_197;
            PyObject *tmp_list_element_198;
            PyObject *tmp_list_element_199;
            PyObject *tmp_list_element_200;
            PyObject *tmp_list_element_201;
            PyObject *tmp_list_element_202;
            PyObject *tmp_list_element_203;
            PyObject *tmp_list_element_204;
            PyObject *tmp_list_element_205;
            PyObject *tmp_list_element_206;
            PyObject *tmp_list_element_207;
            PyObject *tmp_list_element_208;
            PyObject *tmp_list_element_209;
            PyObject *tmp_list_element_210;
            PyObject *tmp_list_element_211;
            PyObject *tmp_list_element_212;
            PyObject *tmp_list_element_213;
            PyObject *tmp_list_element_214;
            PyObject *tmp_list_element_215;
            PyObject *tmp_list_element_216;
            PyObject *tmp_list_element_217;
            PyObject *tmp_list_element_218;
            PyObject *tmp_list_element_219;
            PyObject *tmp_list_element_220;
            PyObject *tmp_list_element_221;
            PyObject *tmp_list_element_222;
            PyObject *tmp_list_element_223;
            PyObject *tmp_list_element_224;
            PyObject *tmp_list_element_225;
            PyObject *tmp_list_element_226;
            PyObject *tmp_list_element_227;
            PyObject *tmp_list_element_228;
            PyObject *tmp_list_element_229;
            PyObject *tmp_list_element_230;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[201];


            tmp_list_element_112 = MAKE_FUNCTION_toolz$_signatures$$$function__159_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_112);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[202];


            tmp_list_element_113 = MAKE_FUNCTION_toolz$_signatures$$$function__160_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_113);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[203];


            tmp_list_element_114 = MAKE_FUNCTION_toolz$_signatures$$$function__161_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_114);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[204];


            tmp_list_element_115 = MAKE_FUNCTION_toolz$_signatures$$$function__162_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_115);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[205];


            tmp_list_element_116 = MAKE_FUNCTION_toolz$_signatures$$$function__163_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_116);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[206];


            tmp_list_element_117 = MAKE_FUNCTION_toolz$_signatures$$$function__164_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_117);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[207];


            tmp_list_element_118 = MAKE_FUNCTION_toolz$_signatures$$$function__165_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_118);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[208];


            tmp_list_element_119 = MAKE_FUNCTION_toolz$_signatures$$$function__166_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_119);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[209];


            tmp_list_element_120 = MAKE_FUNCTION_toolz$_signatures$$$function__167_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_120);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[210];


            tmp_list_element_121 = MAKE_FUNCTION_toolz$_signatures$$$function__168_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_121);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[211];


            tmp_list_element_122 = MAKE_FUNCTION_toolz$_signatures$$$function__169_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_122);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[212];


            tmp_list_element_123 = MAKE_FUNCTION_toolz$_signatures$$$function__170_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_123);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[213];


            tmp_list_element_124 = MAKE_FUNCTION_toolz$_signatures$$$function__171_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_124);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[214];


            tmp_list_element_125 = MAKE_FUNCTION_toolz$_signatures$$$function__172_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_125);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[215];


            tmp_list_element_126 = MAKE_FUNCTION_toolz$_signatures$$$function__173_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_126);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[216];


            tmp_list_element_127 = MAKE_FUNCTION_toolz$_signatures$$$function__174_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_127);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[217];


            tmp_list_element_128 = MAKE_FUNCTION_toolz$_signatures$$$function__175_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_128);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[218];


            tmp_list_element_129 = MAKE_FUNCTION_toolz$_signatures$$$function__176_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_129);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[219];


            tmp_list_element_130 = MAKE_FUNCTION_toolz$_signatures$$$function__177_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_130);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[220];


            tmp_list_element_131 = MAKE_FUNCTION_toolz$_signatures$$$function__178_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_131);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[221];


            tmp_list_element_132 = MAKE_FUNCTION_toolz$_signatures$$$function__179_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_132);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[222];


            tmp_list_element_133 = MAKE_FUNCTION_toolz$_signatures$$$function__180_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_133);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[223];


            tmp_list_element_134 = MAKE_FUNCTION_toolz$_signatures$$$function__181_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_134);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[224];


            tmp_list_element_135 = MAKE_FUNCTION_toolz$_signatures$$$function__182_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_135);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[225];


            tmp_list_element_136 = MAKE_FUNCTION_toolz$_signatures$$$function__183_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_136);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[226];


            tmp_list_element_137 = MAKE_FUNCTION_toolz$_signatures$$$function__184_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_137);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[227];


            tmp_list_element_138 = MAKE_FUNCTION_toolz$_signatures$$$function__185_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_138);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[228];


            tmp_list_element_139 = MAKE_FUNCTION_toolz$_signatures$$$function__186_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_139);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[229];


            tmp_list_element_140 = MAKE_FUNCTION_toolz$_signatures$$$function__187_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_140);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[230];


            tmp_list_element_141 = MAKE_FUNCTION_toolz$_signatures$$$function__188_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_141);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[231];


            tmp_list_element_142 = MAKE_FUNCTION_toolz$_signatures$$$function__189_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_142);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[232];


            tmp_list_element_143 = MAKE_FUNCTION_toolz$_signatures$$$function__190_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_143);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[233];


            tmp_list_element_144 = MAKE_FUNCTION_toolz$_signatures$$$function__191_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_144);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[234];


            tmp_list_element_145 = MAKE_FUNCTION_toolz$_signatures$$$function__192_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_145);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[235];


            tmp_list_element_146 = MAKE_FUNCTION_toolz$_signatures$$$function__193_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_146);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[236];


            tmp_list_element_147 = MAKE_FUNCTION_toolz$_signatures$$$function__194_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_147);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[237];


            tmp_list_element_148 = MAKE_FUNCTION_toolz$_signatures$$$function__195_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_148);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[238];


            tmp_list_element_149 = MAKE_FUNCTION_toolz$_signatures$$$function__196_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_149);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[239];


            tmp_list_element_150 = MAKE_FUNCTION_toolz$_signatures$$$function__197_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_150);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[240];


            tmp_list_element_151 = MAKE_FUNCTION_toolz$_signatures$$$function__198_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_151);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[241];


            tmp_list_element_152 = MAKE_FUNCTION_toolz$_signatures$$$function__199_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_152);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[242];


            tmp_list_element_153 = MAKE_FUNCTION_toolz$_signatures$$$function__200_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_153);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[243];


            tmp_list_element_154 = MAKE_FUNCTION_toolz$_signatures$$$function__201_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_154);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[244];


            tmp_list_element_155 = MAKE_FUNCTION_toolz$_signatures$$$function__202_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_155);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[245];


            tmp_list_element_156 = MAKE_FUNCTION_toolz$_signatures$$$function__203_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_156);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[246];


            tmp_list_element_157 = MAKE_FUNCTION_toolz$_signatures$$$function__204_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_157);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[247];


            tmp_list_element_158 = MAKE_FUNCTION_toolz$_signatures$$$function__205_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_158);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[248];


            tmp_list_element_159 = MAKE_FUNCTION_toolz$_signatures$$$function__206_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_159);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[249];


            tmp_list_element_160 = MAKE_FUNCTION_toolz$_signatures$$$function__207_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_160);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[250];


            tmp_list_element_161 = MAKE_FUNCTION_toolz$_signatures$$$function__208_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_161);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[251];


            tmp_list_element_162 = MAKE_FUNCTION_toolz$_signatures$$$function__209_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_162);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[252];


            tmp_list_element_163 = MAKE_FUNCTION_toolz$_signatures$$$function__210_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_163);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[253];


            tmp_list_element_164 = MAKE_FUNCTION_toolz$_signatures$$$function__211_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_164);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[75];


            tmp_list_element_165 = MAKE_FUNCTION_toolz$_signatures$$$function__212_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_165);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[254];


            tmp_list_element_166 = MAKE_FUNCTION_toolz$_signatures$$$function__213_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_166);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[255];


            tmp_list_element_167 = MAKE_FUNCTION_toolz$_signatures$$$function__214_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_167);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[256];


            tmp_list_element_168 = MAKE_FUNCTION_toolz$_signatures$$$function__215_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_168);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[257];


            tmp_list_element_169 = MAKE_FUNCTION_toolz$_signatures$$$function__216_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_169);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[258];


            tmp_list_element_170 = MAKE_FUNCTION_toolz$_signatures$$$function__217_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_170);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[259];


            tmp_list_element_171 = MAKE_FUNCTION_toolz$_signatures$$$function__218_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_171);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[260];


            tmp_list_element_172 = MAKE_FUNCTION_toolz$_signatures$$$function__219_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_172);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[261];


            tmp_list_element_173 = MAKE_FUNCTION_toolz$_signatures$$$function__220_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_173);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[262];


            tmp_list_element_174 = MAKE_FUNCTION_toolz$_signatures$$$function__221_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_174);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[263];


            tmp_list_element_175 = MAKE_FUNCTION_toolz$_signatures$$$function__222_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_175);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[264];


            tmp_list_element_176 = MAKE_FUNCTION_toolz$_signatures$$$function__223_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_176);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[265];


            tmp_list_element_177 = MAKE_FUNCTION_toolz$_signatures$$$function__224_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_177);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[266];


            tmp_list_element_178 = MAKE_FUNCTION_toolz$_signatures$$$function__225_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_178);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[267];


            tmp_list_element_179 = MAKE_FUNCTION_toolz$_signatures$$$function__226_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_179);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[268];


            tmp_list_element_180 = MAKE_FUNCTION_toolz$_signatures$$$function__227_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_180);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[269];


            tmp_list_element_181 = MAKE_FUNCTION_toolz$_signatures$$$function__228_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_181);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[270];


            tmp_list_element_182 = MAKE_FUNCTION_toolz$_signatures$$$function__229_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_182);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[271];


            tmp_list_element_183 = MAKE_FUNCTION_toolz$_signatures$$$function__230_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_183);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[272];


            tmp_list_element_184 = MAKE_FUNCTION_toolz$_signatures$$$function__231_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_184);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[273];


            tmp_list_element_185 = MAKE_FUNCTION_toolz$_signatures$$$function__232_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_185);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[274];


            tmp_list_element_186 = MAKE_FUNCTION_toolz$_signatures$$$function__233_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_186);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[275];


            tmp_list_element_187 = MAKE_FUNCTION_toolz$_signatures$$$function__234_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_187);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[276];


            tmp_list_element_188 = MAKE_FUNCTION_toolz$_signatures$$$function__235_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_188);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[277];


            tmp_list_element_189 = MAKE_FUNCTION_toolz$_signatures$$$function__236_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_189);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[278];


            tmp_list_element_190 = MAKE_FUNCTION_toolz$_signatures$$$function__237_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_190);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[279];


            tmp_list_element_191 = MAKE_FUNCTION_toolz$_signatures$$$function__238_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_191);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[280];


            tmp_list_element_192 = MAKE_FUNCTION_toolz$_signatures$$$function__239_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_192);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[281];


            tmp_list_element_193 = MAKE_FUNCTION_toolz$_signatures$$$function__240_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_193);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[282];


            tmp_list_element_194 = MAKE_FUNCTION_toolz$_signatures$$$function__241_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_194);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[283];


            tmp_list_element_195 = MAKE_FUNCTION_toolz$_signatures$$$function__242_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_195);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[284];


            tmp_list_element_196 = MAKE_FUNCTION_toolz$_signatures$$$function__243_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_196);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[285];


            tmp_list_element_197 = MAKE_FUNCTION_toolz$_signatures$$$function__244_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_197);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[286];


            tmp_list_element_198 = MAKE_FUNCTION_toolz$_signatures$$$function__245_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_198);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[287];


            tmp_list_element_199 = MAKE_FUNCTION_toolz$_signatures$$$function__246_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_199);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[288];


            tmp_list_element_200 = MAKE_FUNCTION_toolz$_signatures$$$function__247_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_200);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[289];


            tmp_list_element_201 = MAKE_FUNCTION_toolz$_signatures$$$function__248_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_201);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[290];


            tmp_list_element_202 = MAKE_FUNCTION_toolz$_signatures$$$function__249_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_202);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[291];


            tmp_list_element_203 = MAKE_FUNCTION_toolz$_signatures$$$function__250_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_203);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[292];


            tmp_list_element_204 = MAKE_FUNCTION_toolz$_signatures$$$function__251_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_204);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[293];


            tmp_list_element_205 = MAKE_FUNCTION_toolz$_signatures$$$function__252_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_205);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[294];


            tmp_list_element_206 = MAKE_FUNCTION_toolz$_signatures$$$function__253_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_206);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[295];


            tmp_list_element_207 = MAKE_FUNCTION_toolz$_signatures$$$function__254_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_207);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[296];


            tmp_list_element_208 = MAKE_FUNCTION_toolz$_signatures$$$function__255_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_208);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[297];


            tmp_list_element_209 = MAKE_FUNCTION_toolz$_signatures$$$function__256_lambda();

            tmp_dict_value_4 = PyList_New(2);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_209);


            tmp_list_element_209 = MAKE_FUNCTION_toolz$_signatures$$$function__257_lambda();

            PyList_SET_ITEM(tmp_dict_value_4, 1, tmp_list_element_209);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[298];


            tmp_list_element_210 = MAKE_FUNCTION_toolz$_signatures$$$function__258_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_210);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[299];


            tmp_list_element_211 = MAKE_FUNCTION_toolz$_signatures$$$function__259_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_211);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[300];


            tmp_list_element_212 = MAKE_FUNCTION_toolz$_signatures$$$function__260_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_212);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[301];


            tmp_list_element_213 = MAKE_FUNCTION_toolz$_signatures$$$function__261_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_213);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[302];


            tmp_list_element_214 = MAKE_FUNCTION_toolz$_signatures$$$function__262_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_214);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[303];


            tmp_list_element_215 = MAKE_FUNCTION_toolz$_signatures$$$function__263_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_215);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[304];


            tmp_list_element_216 = MAKE_FUNCTION_toolz$_signatures$$$function__264_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_216);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[305];


            tmp_list_element_217 = MAKE_FUNCTION_toolz$_signatures$$$function__265_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_217);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[306];


            tmp_list_element_218 = MAKE_FUNCTION_toolz$_signatures$$$function__266_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_218);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[307];


            tmp_list_element_219 = MAKE_FUNCTION_toolz$_signatures$$$function__267_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_219);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[308];


            tmp_list_element_220 = MAKE_FUNCTION_toolz$_signatures$$$function__268_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_220);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[132];


            tmp_list_element_221 = MAKE_FUNCTION_toolz$_signatures$$$function__269_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_221);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[193];


            tmp_list_element_222 = MAKE_FUNCTION_toolz$_signatures$$$function__270_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_222);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[309];


            tmp_list_element_223 = MAKE_FUNCTION_toolz$_signatures$$$function__271_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_223);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[310];


            tmp_list_element_224 = MAKE_FUNCTION_toolz$_signatures$$$function__272_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_224);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[311];


            tmp_list_element_225 = MAKE_FUNCTION_toolz$_signatures$$$function__273_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_225);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[312];


            tmp_list_element_226 = MAKE_FUNCTION_toolz$_signatures$$$function__274_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_226);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[313];


            tmp_list_element_227 = MAKE_FUNCTION_toolz$_signatures$$$function__275_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_227);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[314];


            tmp_list_element_228 = MAKE_FUNCTION_toolz$_signatures$$$function__276_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_228);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[315];


            tmp_list_element_229 = MAKE_FUNCTION_toolz$_signatures$$$function__277_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_229);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[316];


            tmp_list_element_230 = MAKE_FUNCTION_toolz$_signatures$$$function__278_lambda();

            tmp_dict_value_4 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_4, 0, tmp_list_element_230);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_5);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_ass_subscript_5 == NULL)) {
            tmp_ass_subscript_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_ass_subscript_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_5);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_list_element_231;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_dict_key_5 = mod_consts[317];
        tmp_tuple_element_28 = mod_consts[10];
        tmp_list_element_231 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_list_element_231, 0, tmp_tuple_element_28);


        tmp_tuple_element_28 = MAKE_FUNCTION_toolz$_signatures$$$function__279_lambda();

        PyTuple_SET_ITEM(tmp_list_element_231, 1, tmp_tuple_element_28);
        tmp_dict_value_5 = PyList_New(1);
        PyList_SET_ITEM(tmp_dict_value_5, 0, tmp_list_element_231);
        tmp_ass_subvalue_6 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_list_element_232;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_list_element_233;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_list_element_234;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_list_element_235;
            PyObject *tmp_tuple_element_32;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[318];
            tmp_tuple_element_29 = mod_consts[10];
            tmp_list_element_232 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_24;
                PyTuple_SET_ITEM0(tmp_list_element_232, 0, tmp_tuple_element_29);
                tmp_defaults_24 = mod_consts[44];
                Py_INCREF(tmp_defaults_24);


                tmp_tuple_element_29 = MAKE_FUNCTION_toolz$_signatures$$$function__280_lambda(tmp_defaults_24);

                PyTuple_SET_ITEM(tmp_list_element_232, 1, tmp_tuple_element_29);
            }
            tmp_dict_value_5 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_5, 0, tmp_list_element_232);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[319];
            tmp_tuple_element_30 = mod_consts[10];
            tmp_list_element_233 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_25;
                PyTuple_SET_ITEM0(tmp_list_element_233, 0, tmp_tuple_element_30);
                tmp_defaults_25 = mod_consts[320];
                Py_INCREF(tmp_defaults_25);


                tmp_tuple_element_30 = MAKE_FUNCTION_toolz$_signatures$$$function__281_lambda(tmp_defaults_25);

                PyTuple_SET_ITEM(tmp_list_element_233, 1, tmp_tuple_element_30);
            }
            tmp_dict_value_5 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_5, 0, tmp_list_element_233);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[321];
            tmp_tuple_element_31 = mod_consts[10];
            tmp_list_element_234 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_234, 0, tmp_tuple_element_31);


            tmp_tuple_element_31 = MAKE_FUNCTION_toolz$_signatures$$$function__282_lambda();

            PyTuple_SET_ITEM(tmp_list_element_234, 1, tmp_tuple_element_31);
            tmp_dict_value_5 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_5, 0, tmp_list_element_234);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[322];
            tmp_tuple_element_32 = mod_consts[10];
            tmp_list_element_235 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_26;
                PyTuple_SET_ITEM0(tmp_list_element_235, 0, tmp_tuple_element_32);
                tmp_defaults_26 = mod_consts[320];
                Py_INCREF(tmp_defaults_26);


                tmp_tuple_element_32 = MAKE_FUNCTION_toolz$_signatures$$$function__283_lambda(tmp_defaults_26);

                PyTuple_SET_ITEM(tmp_list_element_235, 1, tmp_tuple_element_32);
            }
            tmp_dict_value_5 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_5, 0, tmp_list_element_235);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_6);

            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[323];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_list_element_236;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_dict_key_6 = mod_consts[324];
        tmp_tuple_element_33 = mod_consts[10];
        tmp_list_element_236 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_list_element_236, 0, tmp_tuple_element_33);


        tmp_tuple_element_33 = MAKE_FUNCTION_toolz$_signatures$$$function__284_lambda();

        PyTuple_SET_ITEM(tmp_list_element_236, 1, tmp_tuple_element_33);
        tmp_dict_value_6 = PyList_New(1);
        PyList_SET_ITEM(tmp_dict_value_6, 0, tmp_list_element_236);
        tmp_ass_subvalue_7 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_list_element_237;
            PyObject *tmp_tuple_element_34;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[325];
            tmp_tuple_element_34 = mod_consts[10];
            tmp_list_element_237 = PyTuple_New(2);
            {
                PyObject *tmp_defaults_27;
                PyTuple_SET_ITEM0(tmp_list_element_237, 0, tmp_tuple_element_34);
                tmp_defaults_27 = mod_consts[326];
                Py_INCREF(tmp_defaults_27);


                tmp_tuple_element_34 = MAKE_FUNCTION_toolz$_signatures$$$function__285_lambda(tmp_defaults_27);

                PyTuple_SET_ITEM(tmp_list_element_237, 1, tmp_tuple_element_34);
            }
            tmp_dict_value_6 = PyList_New(1);
            PyList_SET_ITEM(tmp_dict_value_6, 0, tmp_list_element_237);
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_7);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[327];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_toolz$_signatures$$$function__286_num_pos_args();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_toolz$_signatures$$$function__287_get_exclude_keywords();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_toolz$_signatures$$$function__288_signature_or_spec();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_toolz$_signatures$$$function__289_expand_sig();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_28;
        PyObject *tmp_tuple_element_35;
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;

            goto frame_exception_exit_1;
        }
        tmp_defaults_28 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_defaults_28, 0, tmp_tuple_element_35);
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        assert(!(tmp_tuple_element_35 == NULL));
        PyTuple_SET_ITEM0(tmp_defaults_28, 1, tmp_tuple_element_35);


        tmp_assign_source_22 = MAKE_FUNCTION_toolz$_signatures$$$function__290_create_signature_registry(tmp_defaults_28);

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_22);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad1c272c56acb1fe87f0e6962ac5a538);
#endif
    popFrameStack();

    assertFrameObject(frame_ad1c272c56acb1fe87f0e6962ac5a538);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad1c272c56acb1fe87f0e6962ac5a538);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad1c272c56acb1fe87f0e6962ac5a538, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad1c272c56acb1fe87f0e6962ac5a538->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad1c272c56acb1fe87f0e6962ac5a538, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_toolz$_signatures$$$function__291_check_valid();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_toolz$_signatures$$$function__292__is_valid_args();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_toolz$_signatures$$$function__293_check_partial();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_toolz$_signatures$$$function__294__is_partial_args();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_toolz$_signatures$$$function__295_check_arity();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_toolz$_signatures$$$function__296__is_arity();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_toolz$_signatures$$$function__297_check_varargs();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_toolz$_signatures$$$function__298__has_varargs();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_toolz$_signatures$$$function__299_check_keywords();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_toolz$_signatures$$$function__300__has_keywords();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_toolz$_signatures$$$function__301_check_required_args();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_toolz$_signatures$$$function__302__num_required_args();

        UPDATE_STRING_DICT1(moduledict_toolz$_signatures, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_34);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("toolz._signatures", false);

    Py_INCREF(module_toolz$_signatures);
    return module_toolz$_signatures;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_toolz$_signatures, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("toolz$_signatures", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
