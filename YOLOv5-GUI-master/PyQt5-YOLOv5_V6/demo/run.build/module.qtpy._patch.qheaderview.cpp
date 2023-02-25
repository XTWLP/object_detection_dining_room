/* Generated code for Python module 'qtpy._patch.qheaderview'
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

/* The "module_qtpy$_patch$qheaderview" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_qtpy$_patch$qheaderview;
PyDictObject *moduledict_qtpy$_patch$qheaderview;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[69];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[69];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("qtpy._patch.qheaderview"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 69; i++) {
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
void checkModuleConstants_qtpy$_patch$qheaderview(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 69; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5ba628ec4bff04b8f20a31a43496784d;
static PyCodeObject *codeobj_da92ac115d555bfb289a5cb5572c741f;
static PyCodeObject *codeobj_4843226198ea3924d7266154ba94737b;
static PyCodeObject *codeobj_16a6ef0f0ab983a135099797011dfe2b;
static PyCodeObject *codeobj_21d048929a1feb83504314251a288ac7;
static PyCodeObject *codeobj_8b7081d04990ed7c24973ecbd091dc64;
static PyCodeObject *codeobj_6abca6c0a447311f69188b30bce7ea97;
static PyCodeObject *codeobj_cb17d4a9ac90cc8615567fd86b386086;
static PyCodeObject *codeobj_ffe707bb22c2ac201ed57bb9d6895384;
static PyCodeObject *codeobj_79cd268386a871f02f173c9ae88c215e;
static PyCodeObject *codeobj_fb3ad2b6eea905835c702b654ebb17a6;
static PyCodeObject *codeobj_3c0341f79aa6eec7716e32f6c5842469;
static PyCodeObject *codeobj_b6fda17cce383331f04bc662cb326696;
static PyCodeObject *codeobj_61c1f3988ffcd9583d068d1098c0b34e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[53]); CHECK_OBJECT(module_filename_obj);
    codeobj_5ba628ec4bff04b8f20a31a43496784d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[54], NULL, NULL, 0, 0, 0);
    codeobj_da92ac115d555bfb289a5cb5572c741f = MAKE_CODEOBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[55], NULL, 1, 0, 0);
    codeobj_4843226198ea3924d7266154ba94737b = MAKE_CODEOBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[56], mod_consts[57], 1, 0, 0);
    codeobj_16a6ef0f0ab983a135099797011dfe2b = MAKE_CODEOBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[58], mod_consts[59], 1, 0, 0);
    codeobj_21d048929a1feb83504314251a288ac7 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[60], mod_consts[61], 2, 0, 0);
    codeobj_8b7081d04990ed7c24973ecbd091dc64 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[60], mod_consts[61], 2, 0, 0);
    codeobj_6abca6c0a447311f69188b30bce7ea97 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[56], mod_consts[57], 1, 0, 0);
    codeobj_cb17d4a9ac90cc8615567fd86b386086 = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[7], mod_consts[58], mod_consts[59], 1, 0, 0);
    codeobj_ffe707bb22c2ac201ed57bb9d6895384 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[62], mod_consts[63], 2, 0, 0);
    codeobj_79cd268386a871f02f173c9ae88c215e = MAKE_CODEOBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[20], mod_consts[64], mod_consts[65], 2, 0, 0);
    codeobj_fb3ad2b6eea905835c702b654ebb17a6 = MAKE_CODEOBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[25], mod_consts[66], mod_consts[67], 1, 0, 0);
    codeobj_3c0341f79aa6eec7716e32f6c5842469 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[27], mod_consts[66], mod_consts[67], 1, 0, 0);
    codeobj_b6fda17cce383331f04bc662cb326696 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[62], mod_consts[63], 2, 0, 0);
    codeobj_61c1f3988ffcd9583d068d1098c0b34e = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[22], mod_consts[64], mod_consts[65], 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview();


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__10_setMovable(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__11_setSectionResizeMode(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__12_setResizeMode(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__1_sectionsClickable(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__2_isClickable(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__3_sectionsMovable(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__4_isMovable(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__5_sectionResizeMode(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__6_resizeMode(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__7_setSectionsClickable(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__8_setClickable(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__9_setSectionsMovable(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_QHeaderView = python_pars[0];
    struct Nuitka_CellObject *var__isClickable = Nuitka_Cell_Empty();
    PyObject *var_sectionsClickable = NULL;
    PyObject *var_isClickable = NULL;
    struct Nuitka_CellObject *var__isMovable = Nuitka_Cell_Empty();
    PyObject *var_sectionsMovable = NULL;
    PyObject *var_isMovable = NULL;
    struct Nuitka_CellObject *var__resizeMode = Nuitka_Cell_Empty();
    PyObject *var_sectionResizeMode = NULL;
    PyObject *var_resizeMode = NULL;
    struct Nuitka_CellObject *var__setClickable = Nuitka_Cell_Empty();
    PyObject *var_setSectionsClickable = NULL;
    PyObject *var_setClickable = NULL;
    struct Nuitka_CellObject *var__setMovable = Nuitka_Cell_Empty();
    PyObject *var_setSectionsMovable = NULL;
    PyObject *var_setMovable = NULL;
    struct Nuitka_CellObject *var__setResizeMode = Nuitka_Cell_Empty();
    PyObject *var_setSectionResizeMode = NULL;
    PyObject *var_setResizeMode = NULL;
    struct Nuitka_FrameObject *frame_da92ac115d555bfb289a5cb5572c741f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_da92ac115d555bfb289a5cb5572c741f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_da92ac115d555bfb289a5cb5572c741f)) {
        Py_XDECREF(cache_frame_da92ac115d555bfb289a5cb5572c741f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da92ac115d555bfb289a5cb5572c741f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da92ac115d555bfb289a5cb5572c741f = MAKE_FUNCTION_FRAME(codeobj_da92ac115d555bfb289a5cb5572c741f, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_da92ac115d555bfb289a5cb5572c741f->m_type_description == NULL);
    frame_da92ac115d555bfb289a5cb5572c741f = cache_frame_da92ac115d555bfb289a5cb5572c741f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_da92ac115d555bfb289a5cb5572c741f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_da92ac115d555bfb289a5cb5572c741f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_QHeaderView);
        tmp_expression_value_1 = par_QHeaderView;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var__isClickable) == NULL);
        PyCell_SET(var__isClickable, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var__isClickable;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__1_sectionsClickable(tmp_closure_1);

        assert(var_sectionsClickable == NULL);
        var_sectionsClickable = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_sectionsClickable);
        tmp_assattr_value_1 = var_sectionsClickable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_1 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var__isClickable;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_3 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__2_isClickable(tmp_closure_2);

        assert(var_isClickable == NULL);
        var_isClickable = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_isClickable);
        tmp_assattr_value_2 = var_isClickable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_2 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[0], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_QHeaderView);
        tmp_expression_value_2 = par_QHeaderView;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var__isMovable) == NULL);
        PyCell_SET(var__isMovable, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = var__isMovable;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__3_sectionsMovable(tmp_closure_3);

        assert(var_sectionsMovable == NULL);
        var_sectionsMovable = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_sectionsMovable);
        tmp_assattr_value_3 = var_sectionsMovable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_3 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[7], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        struct Nuitka_CellObject *tmp_closure_4[1];

        tmp_closure_4[0] = var__isMovable;
        Py_INCREF(tmp_closure_4[0]);

        tmp_assign_source_6 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__4_isMovable(tmp_closure_4);

        assert(var_isMovable == NULL);
        var_isMovable = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_isMovable);
        tmp_assattr_value_4 = var_isMovable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_4 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[5], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_QHeaderView);
        tmp_expression_value_3 = par_QHeaderView;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var__resizeMode) == NULL);
        PyCell_SET(var__resizeMode, tmp_assign_source_7);

    }
    {
        PyObject *tmp_assign_source_8;
        struct Nuitka_CellObject *tmp_closure_5[1];

        tmp_closure_5[0] = var__resizeMode;
        Py_INCREF(tmp_closure_5[0]);

        tmp_assign_source_8 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__5_sectionResizeMode(tmp_closure_5);

        assert(var_sectionResizeMode == NULL);
        var_sectionResizeMode = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(var_sectionResizeMode);
        tmp_assattr_value_5 = var_sectionResizeMode;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_5 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[12], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_6[1];

        tmp_closure_6[0] = var__resizeMode;
        Py_INCREF(tmp_closure_6[0]);

        tmp_assign_source_9 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__6_resizeMode(tmp_closure_6);

        assert(var_resizeMode == NULL);
        var_resizeMode = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(var_resizeMode);
        tmp_assattr_value_6 = var_resizeMode;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_6 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[10], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_QHeaderView);
        tmp_expression_value_4 = par_QHeaderView;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var__setClickable) == NULL);
        PyCell_SET(var__setClickable, tmp_assign_source_10);

    }
    {
        PyObject *tmp_assign_source_11;
        struct Nuitka_CellObject *tmp_closure_7[1];

        tmp_closure_7[0] = var__setClickable;
        Py_INCREF(tmp_closure_7[0]);

        tmp_assign_source_11 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__7_setSectionsClickable(tmp_closure_7);

        assert(var_setSectionsClickable == NULL);
        var_setSectionsClickable = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(var_setSectionsClickable);
        tmp_assattr_value_7 = var_setSectionsClickable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_7 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[17], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        struct Nuitka_CellObject *tmp_closure_8[1];

        tmp_closure_8[0] = var__setClickable;
        Py_INCREF(tmp_closure_8[0]);

        tmp_assign_source_12 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__8_setClickable(tmp_closure_8);

        assert(var_setClickable == NULL);
        var_setClickable = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(var_setClickable);
        tmp_assattr_value_8 = var_setClickable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_8 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[15], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_QHeaderView);
        tmp_expression_value_5 = par_QHeaderView;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var__setMovable) == NULL);
        PyCell_SET(var__setMovable, tmp_assign_source_13);

    }
    {
        PyObject *tmp_assign_source_14;
        struct Nuitka_CellObject *tmp_closure_9[1];

        tmp_closure_9[0] = var__setMovable;
        Py_INCREF(tmp_closure_9[0]);

        tmp_assign_source_14 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__9_setSectionsMovable(tmp_closure_9);

        assert(var_setSectionsMovable == NULL);
        var_setSectionsMovable = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(var_setSectionsMovable);
        tmp_assattr_value_9 = var_setSectionsMovable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_9 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[22], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_10[1];

        tmp_closure_10[0] = var__setMovable;
        Py_INCREF(tmp_closure_10[0]);

        tmp_assign_source_15 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__10_setMovable(tmp_closure_10);

        assert(var_setMovable == NULL);
        var_setMovable = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(var_setMovable);
        tmp_assattr_value_10 = var_setMovable;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_10 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[20], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_QHeaderView);
        tmp_expression_value_6 = par_QHeaderView;
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[25]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var__setResizeMode) == NULL);
        PyCell_SET(var__setResizeMode, tmp_assign_source_16);

    }
    {
        PyObject *tmp_assign_source_17;
        struct Nuitka_CellObject *tmp_closure_11[1];

        tmp_closure_11[0] = var__setResizeMode;
        Py_INCREF(tmp_closure_11[0]);

        tmp_assign_source_17 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__11_setSectionResizeMode(tmp_closure_11);

        assert(var_setSectionResizeMode == NULL);
        var_setSectionResizeMode = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(var_setSectionResizeMode);
        tmp_assattr_value_11 = var_setSectionResizeMode;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_11 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[27], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        struct Nuitka_CellObject *tmp_closure_12[1];

        tmp_closure_12[0] = var__setResizeMode;
        Py_INCREF(tmp_closure_12[0]);

        tmp_assign_source_18 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__12_setResizeMode(tmp_closure_12);

        assert(var_setResizeMode == NULL);
        var_setResizeMode = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(var_setResizeMode);
        tmp_assattr_value_12 = var_setResizeMode;
        CHECK_OBJECT(par_QHeaderView);
        tmp_assattr_target_12 = par_QHeaderView;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[25], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ocoocoocoocoocoocoo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da92ac115d555bfb289a5cb5572c741f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da92ac115d555bfb289a5cb5572c741f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da92ac115d555bfb289a5cb5572c741f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da92ac115d555bfb289a5cb5572c741f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da92ac115d555bfb289a5cb5572c741f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da92ac115d555bfb289a5cb5572c741f,
        type_description_1,
        par_QHeaderView,
        var__isClickable,
        var_sectionsClickable,
        var_isClickable,
        var__isMovable,
        var_sectionsMovable,
        var_isMovable,
        var__resizeMode,
        var_sectionResizeMode,
        var_resizeMode,
        var__setClickable,
        var_setSectionsClickable,
        var_setClickable,
        var__setMovable,
        var_setSectionsMovable,
        var_setMovable,
        var__setResizeMode,
        var_setSectionResizeMode,
        var_setResizeMode
    );


    // Release cached frame if used for exception.
    if (frame_da92ac115d555bfb289a5cb5572c741f == cache_frame_da92ac115d555bfb289a5cb5572c741f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_da92ac115d555bfb289a5cb5572c741f);
        cache_frame_da92ac115d555bfb289a5cb5572c741f = NULL;
    }

    assertFrameObject(frame_da92ac115d555bfb289a5cb5572c741f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__isClickable);
    Py_DECREF(var__isClickable);
    var__isClickable = NULL;
    CHECK_OBJECT(var_sectionsClickable);
    Py_DECREF(var_sectionsClickable);
    var_sectionsClickable = NULL;
    CHECK_OBJECT(var_isClickable);
    Py_DECREF(var_isClickable);
    var_isClickable = NULL;
    CHECK_OBJECT(var__isMovable);
    Py_DECREF(var__isMovable);
    var__isMovable = NULL;
    CHECK_OBJECT(var_sectionsMovable);
    Py_DECREF(var_sectionsMovable);
    var_sectionsMovable = NULL;
    CHECK_OBJECT(var_isMovable);
    Py_DECREF(var_isMovable);
    var_isMovable = NULL;
    CHECK_OBJECT(var__resizeMode);
    Py_DECREF(var__resizeMode);
    var__resizeMode = NULL;
    CHECK_OBJECT(var_sectionResizeMode);
    Py_DECREF(var_sectionResizeMode);
    var_sectionResizeMode = NULL;
    CHECK_OBJECT(var_resizeMode);
    Py_DECREF(var_resizeMode);
    var_resizeMode = NULL;
    CHECK_OBJECT(var__setClickable);
    Py_DECREF(var__setClickable);
    var__setClickable = NULL;
    CHECK_OBJECT(var_setSectionsClickable);
    Py_DECREF(var_setSectionsClickable);
    var_setSectionsClickable = NULL;
    CHECK_OBJECT(var_setClickable);
    Py_DECREF(var_setClickable);
    var_setClickable = NULL;
    CHECK_OBJECT(var__setMovable);
    Py_DECREF(var__setMovable);
    var__setMovable = NULL;
    CHECK_OBJECT(var_setSectionsMovable);
    Py_DECREF(var_setSectionsMovable);
    var_setSectionsMovable = NULL;
    CHECK_OBJECT(var_setMovable);
    Py_DECREF(var_setMovable);
    var_setMovable = NULL;
    CHECK_OBJECT(var__setResizeMode);
    Py_DECREF(var__setResizeMode);
    var__setResizeMode = NULL;
    CHECK_OBJECT(var_setSectionResizeMode);
    Py_DECREF(var_setSectionResizeMode);
    var_setSectionResizeMode = NULL;
    CHECK_OBJECT(var_setResizeMode);
    Py_DECREF(var_setResizeMode);
    var_setResizeMode = NULL;
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

    CHECK_OBJECT(var__isClickable);
    Py_DECREF(var__isClickable);
    var__isClickable = NULL;
    Py_XDECREF(var_sectionsClickable);
    var_sectionsClickable = NULL;
    Py_XDECREF(var_isClickable);
    var_isClickable = NULL;
    CHECK_OBJECT(var__isMovable);
    Py_DECREF(var__isMovable);
    var__isMovable = NULL;
    Py_XDECREF(var_sectionsMovable);
    var_sectionsMovable = NULL;
    Py_XDECREF(var_isMovable);
    var_isMovable = NULL;
    CHECK_OBJECT(var__resizeMode);
    Py_DECREF(var__resizeMode);
    var__resizeMode = NULL;
    Py_XDECREF(var_sectionResizeMode);
    var_sectionResizeMode = NULL;
    Py_XDECREF(var_resizeMode);
    var_resizeMode = NULL;
    CHECK_OBJECT(var__setClickable);
    Py_DECREF(var__setClickable);
    var__setClickable = NULL;
    Py_XDECREF(var_setSectionsClickable);
    var_setSectionsClickable = NULL;
    Py_XDECREF(var_setClickable);
    var_setClickable = NULL;
    CHECK_OBJECT(var__setMovable);
    Py_DECREF(var__setMovable);
    var__setMovable = NULL;
    Py_XDECREF(var_setSectionsMovable);
    var_setSectionsMovable = NULL;
    Py_XDECREF(var_setMovable);
    var_setMovable = NULL;
    CHECK_OBJECT(var__setResizeMode);
    Py_DECREF(var__setResizeMode);
    var__setResizeMode = NULL;
    Py_XDECREF(var_setSectionResizeMode);
    var_setSectionResizeMode = NULL;
    Py_XDECREF(var_setResizeMode);
    var_setResizeMode = NULL;
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
    CHECK_OBJECT(par_QHeaderView);
    Py_DECREF(par_QHeaderView);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_QHeaderView);
    Py_DECREF(par_QHeaderView);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__1_sectionsClickable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6abca6c0a447311f69188b30bce7ea97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6abca6c0a447311f69188b30bce7ea97 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6abca6c0a447311f69188b30bce7ea97)) {
        Py_XDECREF(cache_frame_6abca6c0a447311f69188b30bce7ea97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6abca6c0a447311f69188b30bce7ea97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6abca6c0a447311f69188b30bce7ea97 = MAKE_FUNCTION_FRAME(codeobj_6abca6c0a447311f69188b30bce7ea97, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6abca6c0a447311f69188b30bce7ea97->m_type_description == NULL);
    frame_6abca6c0a447311f69188b30bce7ea97 = cache_frame_6abca6c0a447311f69188b30bce7ea97;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6abca6c0a447311f69188b30bce7ea97);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6abca6c0a447311f69188b30bce7ea97) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 16;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_6abca6c0a447311f69188b30bce7ea97->m_frame.f_lineno = 16;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6abca6c0a447311f69188b30bce7ea97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6abca6c0a447311f69188b30bce7ea97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6abca6c0a447311f69188b30bce7ea97);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6abca6c0a447311f69188b30bce7ea97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6abca6c0a447311f69188b30bce7ea97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6abca6c0a447311f69188b30bce7ea97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6abca6c0a447311f69188b30bce7ea97,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6abca6c0a447311f69188b30bce7ea97 == cache_frame_6abca6c0a447311f69188b30bce7ea97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6abca6c0a447311f69188b30bce7ea97);
        cache_frame_6abca6c0a447311f69188b30bce7ea97 = NULL;
    }

    assertFrameObject(frame_6abca6c0a447311f69188b30bce7ea97);

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

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__2_isClickable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4843226198ea3924d7266154ba94737b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4843226198ea3924d7266154ba94737b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4843226198ea3924d7266154ba94737b)) {
        Py_XDECREF(cache_frame_4843226198ea3924d7266154ba94737b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4843226198ea3924d7266154ba94737b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4843226198ea3924d7266154ba94737b = MAKE_FUNCTION_FRAME(codeobj_4843226198ea3924d7266154ba94737b, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4843226198ea3924d7266154ba94737b->m_type_description == NULL);
    frame_4843226198ea3924d7266154ba94737b = cache_frame_4843226198ea3924d7266154ba94737b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4843226198ea3924d7266154ba94737b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4843226198ea3924d7266154ba94737b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_4843226198ea3924d7266154ba94737b->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[33], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_4843226198ea3924d7266154ba94737b->m_frame.f_lineno = 21;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4843226198ea3924d7266154ba94737b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4843226198ea3924d7266154ba94737b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4843226198ea3924d7266154ba94737b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4843226198ea3924d7266154ba94737b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4843226198ea3924d7266154ba94737b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4843226198ea3924d7266154ba94737b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4843226198ea3924d7266154ba94737b,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4843226198ea3924d7266154ba94737b == cache_frame_4843226198ea3924d7266154ba94737b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4843226198ea3924d7266154ba94737b);
        cache_frame_4843226198ea3924d7266154ba94737b = NULL;
    }

    assertFrameObject(frame_4843226198ea3924d7266154ba94737b);

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

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__3_sectionsMovable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cb17d4a9ac90cc8615567fd86b386086;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb17d4a9ac90cc8615567fd86b386086 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb17d4a9ac90cc8615567fd86b386086)) {
        Py_XDECREF(cache_frame_cb17d4a9ac90cc8615567fd86b386086);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb17d4a9ac90cc8615567fd86b386086 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb17d4a9ac90cc8615567fd86b386086 = MAKE_FUNCTION_FRAME(codeobj_cb17d4a9ac90cc8615567fd86b386086, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cb17d4a9ac90cc8615567fd86b386086->m_type_description == NULL);
    frame_cb17d4a9ac90cc8615567fd86b386086 = cache_frame_cb17d4a9ac90cc8615567fd86b386086;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cb17d4a9ac90cc8615567fd86b386086);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cb17d4a9ac90cc8615567fd86b386086) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_cb17d4a9ac90cc8615567fd86b386086->m_frame.f_lineno = 30;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb17d4a9ac90cc8615567fd86b386086);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb17d4a9ac90cc8615567fd86b386086);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb17d4a9ac90cc8615567fd86b386086);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb17d4a9ac90cc8615567fd86b386086, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb17d4a9ac90cc8615567fd86b386086->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb17d4a9ac90cc8615567fd86b386086, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb17d4a9ac90cc8615567fd86b386086,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cb17d4a9ac90cc8615567fd86b386086 == cache_frame_cb17d4a9ac90cc8615567fd86b386086) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cb17d4a9ac90cc8615567fd86b386086);
        cache_frame_cb17d4a9ac90cc8615567fd86b386086 = NULL;
    }

    assertFrameObject(frame_cb17d4a9ac90cc8615567fd86b386086);

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

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__4_isMovable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_16a6ef0f0ab983a135099797011dfe2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_16a6ef0f0ab983a135099797011dfe2b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_16a6ef0f0ab983a135099797011dfe2b)) {
        Py_XDECREF(cache_frame_16a6ef0f0ab983a135099797011dfe2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16a6ef0f0ab983a135099797011dfe2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16a6ef0f0ab983a135099797011dfe2b = MAKE_FUNCTION_FRAME(codeobj_16a6ef0f0ab983a135099797011dfe2b, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_16a6ef0f0ab983a135099797011dfe2b->m_type_description == NULL);
    frame_16a6ef0f0ab983a135099797011dfe2b = cache_frame_16a6ef0f0ab983a135099797011dfe2b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_16a6ef0f0ab983a135099797011dfe2b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_16a6ef0f0ab983a135099797011dfe2b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_16a6ef0f0ab983a135099797011dfe2b->m_frame.f_lineno = 33;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_16a6ef0f0ab983a135099797011dfe2b->m_frame.f_lineno = 35;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_16a6ef0f0ab983a135099797011dfe2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_16a6ef0f0ab983a135099797011dfe2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_16a6ef0f0ab983a135099797011dfe2b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16a6ef0f0ab983a135099797011dfe2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16a6ef0f0ab983a135099797011dfe2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16a6ef0f0ab983a135099797011dfe2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16a6ef0f0ab983a135099797011dfe2b,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_16a6ef0f0ab983a135099797011dfe2b == cache_frame_16a6ef0f0ab983a135099797011dfe2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_16a6ef0f0ab983a135099797011dfe2b);
        cache_frame_16a6ef0f0ab983a135099797011dfe2b = NULL;
    }

    assertFrameObject(frame_16a6ef0f0ab983a135099797011dfe2b);

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

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__5_sectionResizeMode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_logicalIndex = python_pars[1];
    struct Nuitka_FrameObject *frame_8b7081d04990ed7c24973ecbd091dc64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b7081d04990ed7c24973ecbd091dc64 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b7081d04990ed7c24973ecbd091dc64)) {
        Py_XDECREF(cache_frame_8b7081d04990ed7c24973ecbd091dc64);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b7081d04990ed7c24973ecbd091dc64 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b7081d04990ed7c24973ecbd091dc64 = MAKE_FUNCTION_FRAME(codeobj_8b7081d04990ed7c24973ecbd091dc64, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8b7081d04990ed7c24973ecbd091dc64->m_type_description == NULL);
    frame_8b7081d04990ed7c24973ecbd091dc64 = cache_frame_8b7081d04990ed7c24973ecbd091dc64;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8b7081d04990ed7c24973ecbd091dc64);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8b7081d04990ed7c24973ecbd091dc64) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_logicalIndex);
        tmp_args_element_value_2 = par_logicalIndex;
        frame_8b7081d04990ed7c24973ecbd091dc64->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b7081d04990ed7c24973ecbd091dc64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b7081d04990ed7c24973ecbd091dc64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b7081d04990ed7c24973ecbd091dc64);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b7081d04990ed7c24973ecbd091dc64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b7081d04990ed7c24973ecbd091dc64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b7081d04990ed7c24973ecbd091dc64, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b7081d04990ed7c24973ecbd091dc64,
        type_description_1,
        par_self,
        par_logicalIndex,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8b7081d04990ed7c24973ecbd091dc64 == cache_frame_8b7081d04990ed7c24973ecbd091dc64) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8b7081d04990ed7c24973ecbd091dc64);
        cache_frame_8b7081d04990ed7c24973ecbd091dc64 = NULL;
    }

    assertFrameObject(frame_8b7081d04990ed7c24973ecbd091dc64);

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
    CHECK_OBJECT(par_logicalIndex);
    Py_DECREF(par_logicalIndex);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_logicalIndex);
    Py_DECREF(par_logicalIndex);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__6_resizeMode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_logicalIndex = python_pars[1];
    struct Nuitka_FrameObject *frame_21d048929a1feb83504314251a288ac7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_21d048929a1feb83504314251a288ac7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21d048929a1feb83504314251a288ac7)) {
        Py_XDECREF(cache_frame_21d048929a1feb83504314251a288ac7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21d048929a1feb83504314251a288ac7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21d048929a1feb83504314251a288ac7 = MAKE_FUNCTION_FRAME(codeobj_21d048929a1feb83504314251a288ac7, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_21d048929a1feb83504314251a288ac7->m_type_description == NULL);
    frame_21d048929a1feb83504314251a288ac7 = cache_frame_21d048929a1feb83504314251a288ac7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_21d048929a1feb83504314251a288ac7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_21d048929a1feb83504314251a288ac7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_21d048929a1feb83504314251a288ac7->m_frame.f_lineno = 47;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_logicalIndex);
        tmp_args_element_value_2 = par_logicalIndex;
        frame_21d048929a1feb83504314251a288ac7->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21d048929a1feb83504314251a288ac7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_21d048929a1feb83504314251a288ac7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21d048929a1feb83504314251a288ac7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21d048929a1feb83504314251a288ac7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21d048929a1feb83504314251a288ac7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21d048929a1feb83504314251a288ac7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21d048929a1feb83504314251a288ac7,
        type_description_1,
        par_self,
        par_logicalIndex,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_21d048929a1feb83504314251a288ac7 == cache_frame_21d048929a1feb83504314251a288ac7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_21d048929a1feb83504314251a288ac7);
        cache_frame_21d048929a1feb83504314251a288ac7 = NULL;
    }

    assertFrameObject(frame_21d048929a1feb83504314251a288ac7);

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
    CHECK_OBJECT(par_logicalIndex);
    Py_DECREF(par_logicalIndex);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_logicalIndex);
    Py_DECREF(par_logicalIndex);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__7_setSectionsClickable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_clickable = python_pars[1];
    struct Nuitka_FrameObject *frame_b6fda17cce383331f04bc662cb326696;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6fda17cce383331f04bc662cb326696 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6fda17cce383331f04bc662cb326696)) {
        Py_XDECREF(cache_frame_b6fda17cce383331f04bc662cb326696);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6fda17cce383331f04bc662cb326696 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6fda17cce383331f04bc662cb326696 = MAKE_FUNCTION_FRAME(codeobj_b6fda17cce383331f04bc662cb326696, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6fda17cce383331f04bc662cb326696->m_type_description == NULL);
    frame_b6fda17cce383331f04bc662cb326696 = cache_frame_b6fda17cce383331f04bc662cb326696;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b6fda17cce383331f04bc662cb326696);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b6fda17cce383331f04bc662cb326696) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_clickable);
        tmp_args_element_value_2 = par_clickable;
        frame_b6fda17cce383331f04bc662cb326696->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6fda17cce383331f04bc662cb326696);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6fda17cce383331f04bc662cb326696);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6fda17cce383331f04bc662cb326696);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6fda17cce383331f04bc662cb326696, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6fda17cce383331f04bc662cb326696->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6fda17cce383331f04bc662cb326696, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6fda17cce383331f04bc662cb326696,
        type_description_1,
        par_self,
        par_clickable,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b6fda17cce383331f04bc662cb326696 == cache_frame_b6fda17cce383331f04bc662cb326696) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b6fda17cce383331f04bc662cb326696);
        cache_frame_b6fda17cce383331f04bc662cb326696 = NULL;
    }

    assertFrameObject(frame_b6fda17cce383331f04bc662cb326696);

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
    CHECK_OBJECT(par_clickable);
    Py_DECREF(par_clickable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_clickable);
    Py_DECREF(par_clickable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__8_setClickable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_clickable = python_pars[1];
    struct Nuitka_FrameObject *frame_ffe707bb22c2ac201ed57bb9d6895384;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ffe707bb22c2ac201ed57bb9d6895384 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffe707bb22c2ac201ed57bb9d6895384)) {
        Py_XDECREF(cache_frame_ffe707bb22c2ac201ed57bb9d6895384);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffe707bb22c2ac201ed57bb9d6895384 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffe707bb22c2ac201ed57bb9d6895384 = MAKE_FUNCTION_FRAME(codeobj_ffe707bb22c2ac201ed57bb9d6895384, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ffe707bb22c2ac201ed57bb9d6895384->m_type_description == NULL);
    frame_ffe707bb22c2ac201ed57bb9d6895384 = cache_frame_ffe707bb22c2ac201ed57bb9d6895384;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ffe707bb22c2ac201ed57bb9d6895384);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ffe707bb22c2ac201ed57bb9d6895384) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_ffe707bb22c2ac201ed57bb9d6895384->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[40], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_clickable);
        tmp_args_element_value_2 = par_clickable;
        frame_ffe707bb22c2ac201ed57bb9d6895384->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe707bb22c2ac201ed57bb9d6895384);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe707bb22c2ac201ed57bb9d6895384);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe707bb22c2ac201ed57bb9d6895384);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffe707bb22c2ac201ed57bb9d6895384, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffe707bb22c2ac201ed57bb9d6895384->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffe707bb22c2ac201ed57bb9d6895384, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffe707bb22c2ac201ed57bb9d6895384,
        type_description_1,
        par_self,
        par_clickable,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ffe707bb22c2ac201ed57bb9d6895384 == cache_frame_ffe707bb22c2ac201ed57bb9d6895384) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ffe707bb22c2ac201ed57bb9d6895384);
        cache_frame_ffe707bb22c2ac201ed57bb9d6895384 = NULL;
    }

    assertFrameObject(frame_ffe707bb22c2ac201ed57bb9d6895384);

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
    CHECK_OBJECT(par_clickable);
    Py_DECREF(par_clickable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_clickable);
    Py_DECREF(par_clickable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__9_setSectionsMovable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_movable = python_pars[1];
    struct Nuitka_FrameObject *frame_61c1f3988ffcd9583d068d1098c0b34e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61c1f3988ffcd9583d068d1098c0b34e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61c1f3988ffcd9583d068d1098c0b34e)) {
        Py_XDECREF(cache_frame_61c1f3988ffcd9583d068d1098c0b34e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61c1f3988ffcd9583d068d1098c0b34e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61c1f3988ffcd9583d068d1098c0b34e = MAKE_FUNCTION_FRAME(codeobj_61c1f3988ffcd9583d068d1098c0b34e, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_61c1f3988ffcd9583d068d1098c0b34e->m_type_description == NULL);
    frame_61c1f3988ffcd9583d068d1098c0b34e = cache_frame_61c1f3988ffcd9583d068d1098c0b34e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_61c1f3988ffcd9583d068d1098c0b34e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_61c1f3988ffcd9583d068d1098c0b34e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_movable);
        tmp_args_element_value_2 = par_movable;
        frame_61c1f3988ffcd9583d068d1098c0b34e->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_61c1f3988ffcd9583d068d1098c0b34e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_61c1f3988ffcd9583d068d1098c0b34e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_61c1f3988ffcd9583d068d1098c0b34e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61c1f3988ffcd9583d068d1098c0b34e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61c1f3988ffcd9583d068d1098c0b34e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61c1f3988ffcd9583d068d1098c0b34e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61c1f3988ffcd9583d068d1098c0b34e,
        type_description_1,
        par_self,
        par_movable,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_61c1f3988ffcd9583d068d1098c0b34e == cache_frame_61c1f3988ffcd9583d068d1098c0b34e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_61c1f3988ffcd9583d068d1098c0b34e);
        cache_frame_61c1f3988ffcd9583d068d1098c0b34e = NULL;
    }

    assertFrameObject(frame_61c1f3988ffcd9583d068d1098c0b34e);

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
    CHECK_OBJECT(par_movable);
    Py_DECREF(par_movable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_movable);
    Py_DECREF(par_movable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__10_setMovable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_movable = python_pars[1];
    struct Nuitka_FrameObject *frame_79cd268386a871f02f173c9ae88c215e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_79cd268386a871f02f173c9ae88c215e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79cd268386a871f02f173c9ae88c215e)) {
        Py_XDECREF(cache_frame_79cd268386a871f02f173c9ae88c215e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79cd268386a871f02f173c9ae88c215e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79cd268386a871f02f173c9ae88c215e = MAKE_FUNCTION_FRAME(codeobj_79cd268386a871f02f173c9ae88c215e, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_79cd268386a871f02f173c9ae88c215e->m_type_description == NULL);
    frame_79cd268386a871f02f173c9ae88c215e = cache_frame_79cd268386a871f02f173c9ae88c215e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_79cd268386a871f02f173c9ae88c215e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_79cd268386a871f02f173c9ae88c215e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_79cd268386a871f02f173c9ae88c215e->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[42], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_movable);
        tmp_args_element_value_2 = par_movable;
        frame_79cd268386a871f02f173c9ae88c215e->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79cd268386a871f02f173c9ae88c215e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_79cd268386a871f02f173c9ae88c215e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79cd268386a871f02f173c9ae88c215e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79cd268386a871f02f173c9ae88c215e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79cd268386a871f02f173c9ae88c215e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79cd268386a871f02f173c9ae88c215e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79cd268386a871f02f173c9ae88c215e,
        type_description_1,
        par_self,
        par_movable,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_79cd268386a871f02f173c9ae88c215e == cache_frame_79cd268386a871f02f173c9ae88c215e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_79cd268386a871f02f173c9ae88c215e);
        cache_frame_79cd268386a871f02f173c9ae88c215e = NULL;
    }

    assertFrameObject(frame_79cd268386a871f02f173c9ae88c215e);

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
    CHECK_OBJECT(par_movable);
    Py_DECREF(par_movable);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_movable);
    Py_DECREF(par_movable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__11_setSectionResizeMode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_3c0341f79aa6eec7716e32f6c5842469;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c0341f79aa6eec7716e32f6c5842469 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c0341f79aa6eec7716e32f6c5842469)) {
        Py_XDECREF(cache_frame_3c0341f79aa6eec7716e32f6c5842469);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c0341f79aa6eec7716e32f6c5842469 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c0341f79aa6eec7716e32f6c5842469 = MAKE_FUNCTION_FRAME(codeobj_3c0341f79aa6eec7716e32f6c5842469, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3c0341f79aa6eec7716e32f6c5842469->m_type_description == NULL);
    frame_3c0341f79aa6eec7716e32f6c5842469 = cache_frame_3c0341f79aa6eec7716e32f6c5842469;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3c0341f79aa6eec7716e32f6c5842469);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3c0341f79aa6eec7716e32f6c5842469) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__6_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c0341f79aa6eec7716e32f6c5842469);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c0341f79aa6eec7716e32f6c5842469);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3c0341f79aa6eec7716e32f6c5842469, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c0341f79aa6eec7716e32f6c5842469->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c0341f79aa6eec7716e32f6c5842469, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c0341f79aa6eec7716e32f6c5842469,
        type_description_1,
        par_self,
        par_args,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3c0341f79aa6eec7716e32f6c5842469 == cache_frame_3c0341f79aa6eec7716e32f6c5842469) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3c0341f79aa6eec7716e32f6c5842469);
        cache_frame_3c0341f79aa6eec7716e32f6c5842469 = NULL;
    }

    assertFrameObject(frame_3c0341f79aa6eec7716e32f6c5842469);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__12_setResizeMode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_fb3ad2b6eea905835c702b654ebb17a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb3ad2b6eea905835c702b654ebb17a6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb3ad2b6eea905835c702b654ebb17a6)) {
        Py_XDECREF(cache_frame_fb3ad2b6eea905835c702b654ebb17a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb3ad2b6eea905835c702b654ebb17a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb3ad2b6eea905835c702b654ebb17a6 = MAKE_FUNCTION_FRAME(codeobj_fb3ad2b6eea905835c702b654ebb17a6, module_qtpy$_patch$qheaderview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fb3ad2b6eea905835c702b654ebb17a6->m_type_description == NULL);
    frame_fb3ad2b6eea905835c702b654ebb17a6 = cache_frame_fb3ad2b6eea905835c702b654ebb17a6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fb3ad2b6eea905835c702b654ebb17a6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fb3ad2b6eea905835c702b654ebb17a6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_fb3ad2b6eea905835c702b654ebb17a6->m_frame.f_lineno = 89;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[44], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_2 = impl___main__$$$function__6_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb3ad2b6eea905835c702b654ebb17a6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb3ad2b6eea905835c702b654ebb17a6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb3ad2b6eea905835c702b654ebb17a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb3ad2b6eea905835c702b654ebb17a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb3ad2b6eea905835c702b654ebb17a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb3ad2b6eea905835c702b654ebb17a6,
        type_description_1,
        par_self,
        par_args,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fb3ad2b6eea905835c702b654ebb17a6 == cache_frame_fb3ad2b6eea905835c702b654ebb17a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fb3ad2b6eea905835c702b654ebb17a6);
        cache_frame_fb3ad2b6eea905835c702b654ebb17a6 = NULL;
    }

    assertFrameObject(frame_fb3ad2b6eea905835c702b654ebb17a6);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da92ac115d555bfb289a5cb5572c741f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__10_setMovable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__10_setMovable,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_79cd268386a871f02f173c9ae88c215e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__11_setSectionResizeMode(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__11_setSectionResizeMode,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_3c0341f79aa6eec7716e32f6c5842469,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        mod_consts[26],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__12_setResizeMode(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__12_setResizeMode,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[29],
#endif
        codeobj_fb3ad2b6eea905835c702b654ebb17a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__1_sectionsClickable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__1_sectionsClickable,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_6abca6c0a447311f69188b30bce7ea97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        mod_consts[1],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__2_isClickable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__2_isClickable,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[4],
#endif
        codeobj_4843226198ea3924d7266154ba94737b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__3_sectionsMovable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__3_sectionsMovable,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[8],
#endif
        codeobj_cb17d4a9ac90cc8615567fd86b386086,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        mod_consts[6],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__4_isMovable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__4_isMovable,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_16a6ef0f0ab983a135099797011dfe2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__5_sectionResizeMode(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__5_sectionResizeMode,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_8b7081d04990ed7c24973ecbd091dc64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        mod_consts[11],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__6_resizeMode(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__6_resizeMode,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_21d048929a1feb83504314251a288ac7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__7_setSectionsClickable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__7_setSectionsClickable,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[18],
#endif
        codeobj_b6fda17cce383331f04bc662cb326696,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        mod_consts[16],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__8_setClickable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__8_setClickable,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[19],
#endif
        codeobj_ffe707bb22c2ac201ed57bb9d6895384,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__9_setSectionsMovable(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__9_setSectionsMovable,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[23],
#endif
        codeobj_61c1f3988ffcd9583d068d1098c0b34e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_qtpy$_patch$qheaderview,
        mod_consts[21],
        closure,
        1
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

function_impl_code functable_qtpy$_patch$qheaderview[] = {
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__1_sectionsClickable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__2_isClickable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__3_sectionsMovable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__4_isMovable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__5_sectionResizeMode,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__6_resizeMode,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__7_setSectionsClickable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__8_setClickable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__9_setSectionsMovable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__10_setMovable,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__11_setSectionResizeMode,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview$$$function__12_setResizeMode,
    impl_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview,
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

    function_impl_code *current = functable_qtpy$_patch$qheaderview;
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

    if (offset > sizeof(functable_qtpy$_patch$qheaderview) || offset < 0) {
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
        functable_qtpy$_patch$qheaderview[offset],
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
        module_qtpy$_patch$qheaderview,
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
PyObject *modulecode_qtpy$_patch$qheaderview(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("qtpy._patch.qheaderview");

    // Store the module for future use.
    module_qtpy$_patch$qheaderview = module;

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
        PRINT_STRING("qtpy._patch.qheaderview: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("qtpy._patch.qheaderview: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("qtpy._patch.qheaderview: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initqtpy$_patch$qheaderview\n");

    moduledict_qtpy$_patch$qheaderview = MODULE_DICT(module_qtpy$_patch$qheaderview);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_qtpy$_patch$qheaderview,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_qtpy$_patch$qheaderview,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[68]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_qtpy$_patch$qheaderview,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_qtpy$_patch$qheaderview,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_qtpy$_patch$qheaderview,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_qtpy$_patch$qheaderview);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_qtpy$_patch$qheaderview);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_5ba628ec4bff04b8f20a31a43496784d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5ba628ec4bff04b8f20a31a43496784d = MAKE_MODULE_FRAME(codeobj_5ba628ec4bff04b8f20a31a43496784d, module_qtpy$_patch$qheaderview);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5ba628ec4bff04b8f20a31a43496784d);
    assert(Py_REFCNT(frame_5ba628ec4bff04b8f20a31a43496784d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[31];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_qtpy$_patch$qheaderview;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[51];
        frame_5ba628ec4bff04b8f20a31a43496784d->m_frame.f_lineno = 7;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_4);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ba628ec4bff04b8f20a31a43496784d);
#endif
    popFrameStack();

    assertFrameObject(frame_5ba628ec4bff04b8f20a31a43496784d);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ba628ec4bff04b8f20a31a43496784d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ba628ec4bff04b8f20a31a43496784d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ba628ec4bff04b8f20a31a43496784d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ba628ec4bff04b8f20a31a43496784d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_qtpy$_patch$qheaderview$$$function__1_introduce_renamed_methods_qheaderview();

        UPDATE_STRING_DICT1(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_5);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("qtpy._patch.qheaderview", false);

    Py_INCREF(module_qtpy$_patch$qheaderview);
    return module_qtpy$_patch$qheaderview;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_qtpy$_patch$qheaderview, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("qtpy$_patch$qheaderview", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
