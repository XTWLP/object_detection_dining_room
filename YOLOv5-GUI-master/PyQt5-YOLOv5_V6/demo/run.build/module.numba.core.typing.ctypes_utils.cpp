/* Generated code for Python module 'numba.core.typing.ctypes_utils'
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

/* The "module_numba$core$typing$ctypes_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numba$core$typing$ctypes_utils;
PyDictObject *moduledict_numba$core$typing$ctypes_utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[100];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[100];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numba.core.typing.ctypes_utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 100; i++) {
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
void checkModuleConstants_numba$core$typing$ctypes_utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 100; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cc60bb231e89b50e5119b4eccb261328;
static PyCodeObject *codeobj_d3f885bb3ff777feba8964b3b8700ea4;
static PyCodeObject *codeobj_5ce35425fd43c6476883aff040778799;
static PyCodeObject *codeobj_fce717a379fb0d39f0dbcd9bbad2af86;
static PyCodeObject *codeobj_7d66643e49f2324e5fe2d0bbbc004a77;
static PyCodeObject *codeobj_dbfae566e305058fbbd849b6bab7ad06;
static PyCodeObject *codeobj_3ea767f515ba4a799bfdd8a04cbd4c96;
static PyCodeObject *codeobj_c6ba4adc6832481af1266623b9943069;
static PyCodeObject *codeobj_db7f532e831d8ab2d91135749eaeba64;
static PyCodeObject *codeobj_967ace40094300acbbcfd7d821cd9528;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[85]); CHECK_OBJECT(module_filename_obj);
    codeobj_cc60bb231e89b50e5119b4eccb261328 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[87], NULL, 1, 0, 0);
    codeobj_d3f885bb3ff777feba8964b3b8700ea4 = MAKE_CODEOBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[89], NULL, 1, 0, 0);
    codeobj_5ce35425fd43c6476883aff040778799 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[90], NULL, NULL, 0, 0, 0);
    codeobj_fce717a379fb0d39f0dbcd9bbad2af86 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[91], mod_consts[92], 1, 0, 0);
    codeobj_7d66643e49f2324e5fe2d0bbbc004a77 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[93], mod_consts[92], 1, 0, 0);
    codeobj_dbfae566e305058fbbd849b6bab7ad06 = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[94], NULL, 1, 0, 0);
    codeobj_3ea767f515ba4a799bfdd8a04cbd4c96 = MAKE_CODEOBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[95], NULL, 1, 0, 0);
    codeobj_c6ba4adc6832481af1266623b9943069 = MAKE_CODEOBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[96], NULL, 1, 0, 0);
    codeobj_db7f532e831d8ab2d91135749eaeba64 = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[97], NULL, 1, 0, 0);
    codeobj_967ace40094300acbbcfd7d821cd9528 = MAKE_CODEOBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[98], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__1_from_ctypes();


static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__1_from_ctypes$$$function__1__convert_internal(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__2_to_ctypes();


static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__2_to_ctypes$$$function__1__convert_internal(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__3_is_ctypes_funcptr();


static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__4_get_pointer();


static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__5_make_function_type();


// The module function definitions.
static PyObject *impl_numba$core$typing$ctypes_utils$$$function__1_from_ctypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctypeobj = python_pars[0];
    struct Nuitka_CellObject *var__convert_internal = Nuitka_Cell_Empty();
    PyObject *var_ty = NULL;
    struct Nuitka_FrameObject *frame_dbfae566e305058fbbd849b6bab7ad06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dbfae566e305058fbbd849b6bab7ad06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dbfae566e305058fbbd849b6bab7ad06)) {
        Py_XDECREF(cache_frame_dbfae566e305058fbbd849b6bab7ad06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dbfae566e305058fbbd849b6bab7ad06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dbfae566e305058fbbd849b6bab7ad06 = MAKE_FUNCTION_FRAME(codeobj_dbfae566e305058fbbd849b6bab7ad06, module_numba$core$typing$ctypes_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dbfae566e305058fbbd849b6bab7ad06->m_type_description == NULL);
    frame_dbfae566e305058fbbd849b6bab7ad06 = cache_frame_dbfae566e305058fbbd849b6bab7ad06;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dbfae566e305058fbbd849b6bab7ad06);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dbfae566e305058fbbd849b6bab7ad06) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_ctypeobj);
        tmp_cmp_expr_left_1 = par_ctypeobj;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_ctypeobj);
        tmp_isinstance_inst_1 = par_ctypeobj;
        tmp_isinstance_cls_1 = (PyObject *)&PyType_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        CHECK_OBJECT(par_ctypeobj);
        tmp_tuple_element_1 = par_ctypeobj;
        tmp_raise_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 45;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oco";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var__convert_internal;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__1_from_ctypes$$$function__1__convert_internal(tmp_closure_1);

        assert(Nuitka_Cell_GET(var__convert_internal) == NULL);
        PyCell_SET(var__convert_internal, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var__convert_internal));
        tmp_called_value_1 = Nuitka_Cell_GET(var__convert_internal);
        CHECK_OBJECT(par_ctypeobj);
        tmp_args_element_value_1 = par_ctypeobj;
        frame_dbfae566e305058fbbd849b6bab7ad06->m_frame.f_lineno = 56;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        assert(var_ty == NULL);
        var_ty = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_ty);
        tmp_cmp_expr_left_2 = var_ty;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = mod_consts[4];
        CHECK_OBJECT(par_ctypeobj);
        tmp_right_value_1 = par_ctypeobj;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        frame_dbfae566e305058fbbd849b6bab7ad06->m_frame.f_lineno = 58;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 58;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oco";
        goto frame_exception_exit_1;
    }
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbfae566e305058fbbd849b6bab7ad06);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbfae566e305058fbbd849b6bab7ad06);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbfae566e305058fbbd849b6bab7ad06);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dbfae566e305058fbbd849b6bab7ad06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dbfae566e305058fbbd849b6bab7ad06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dbfae566e305058fbbd849b6bab7ad06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dbfae566e305058fbbd849b6bab7ad06,
        type_description_1,
        par_ctypeobj,
        var__convert_internal,
        var_ty
    );


    // Release cached frame if used for exception.
    if (frame_dbfae566e305058fbbd849b6bab7ad06 == cache_frame_dbfae566e305058fbbd849b6bab7ad06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dbfae566e305058fbbd849b6bab7ad06);
        cache_frame_dbfae566e305058fbbd849b6bab7ad06 = NULL;
    }

    assertFrameObject(frame_dbfae566e305058fbbd849b6bab7ad06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_ty);
    tmp_return_value = var_ty;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__convert_internal);
    Py_DECREF(var__convert_internal);
    var__convert_internal = NULL;
    Py_XDECREF(var_ty);
    var_ty = NULL;
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

    CHECK_OBJECT(var__convert_internal);
    Py_DECREF(var__convert_internal);
    var__convert_internal = NULL;
    Py_XDECREF(var_ty);
    var_ty = NULL;
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
    CHECK_OBJECT(par_ctypeobj);
    Py_DECREF(par_ctypeobj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctypeobj);
    Py_DECREF(par_ctypeobj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$core$typing$ctypes_utils$$$function__1_from_ctypes$$$function__1__convert_internal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctypeobj = python_pars[0];
    PyObject *var_valuety = NULL;
    struct Nuitka_FrameObject *frame_fce717a379fb0d39f0dbcd9bbad2af86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fce717a379fb0d39f0dbcd9bbad2af86 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fce717a379fb0d39f0dbcd9bbad2af86)) {
        Py_XDECREF(cache_frame_fce717a379fb0d39f0dbcd9bbad2af86);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fce717a379fb0d39f0dbcd9bbad2af86 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fce717a379fb0d39f0dbcd9bbad2af86 = MAKE_FUNCTION_FRAME(codeobj_fce717a379fb0d39f0dbcd9bbad2af86, module_numba$core$typing$ctypes_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fce717a379fb0d39f0dbcd9bbad2af86->m_type_description == NULL);
    frame_fce717a379fb0d39f0dbcd9bbad2af86 = cache_frame_fce717a379fb0d39f0dbcd9bbad2af86;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fce717a379fb0d39f0dbcd9bbad2af86);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fce717a379fb0d39f0dbcd9bbad2af86) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_ctypeobj);
        tmp_issubclass_cls_1 = par_ctypeobj;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_issubclass_classes_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        Py_DECREF(tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_ctypeobj);
        tmp_expression_value_2 = par_ctypeobj;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_fce717a379fb0d39f0dbcd9bbad2af86->m_frame.f_lineno = 50;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_valuety == NULL);
        var_valuety = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_valuety);
        tmp_cmp_expr_left_1 = var_valuety;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_valuety);
        tmp_args_element_value_2 = var_valuety;
        frame_fce717a379fb0d39f0dbcd9bbad2af86->m_frame.f_lineno = 52;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctypeobj);
        tmp_args_element_value_3 = par_ctypeobj;
        frame_fce717a379fb0d39f0dbcd9bbad2af86->m_frame.f_lineno = 54;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fce717a379fb0d39f0dbcd9bbad2af86);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fce717a379fb0d39f0dbcd9bbad2af86);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fce717a379fb0d39f0dbcd9bbad2af86);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fce717a379fb0d39f0dbcd9bbad2af86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fce717a379fb0d39f0dbcd9bbad2af86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fce717a379fb0d39f0dbcd9bbad2af86, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fce717a379fb0d39f0dbcd9bbad2af86,
        type_description_1,
        par_ctypeobj,
        var_valuety,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fce717a379fb0d39f0dbcd9bbad2af86 == cache_frame_fce717a379fb0d39f0dbcd9bbad2af86) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fce717a379fb0d39f0dbcd9bbad2af86);
        cache_frame_fce717a379fb0d39f0dbcd9bbad2af86 = NULL;
    }

    assertFrameObject(frame_fce717a379fb0d39f0dbcd9bbad2af86);

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
    Py_XDECREF(var_valuety);
    var_valuety = NULL;
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

    Py_XDECREF(var_valuety);
    var_valuety = NULL;
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
    CHECK_OBJECT(par_ctypeobj);
    Py_DECREF(par_ctypeobj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctypeobj);
    Py_DECREF(par_ctypeobj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$core$typing$ctypes_utils$$$function__2_to_ctypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ty = python_pars[0];
    struct Nuitka_CellObject *var__convert_internal = Nuitka_Cell_Empty();
    PyObject *var_ctypeobj = NULL;
    struct Nuitka_FrameObject *frame_967ace40094300acbbcfd7d821cd9528;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_967ace40094300acbbcfd7d821cd9528 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_967ace40094300acbbcfd7d821cd9528)) {
        Py_XDECREF(cache_frame_967ace40094300acbbcfd7d821cd9528);

#if _DEBUG_REFCOUNTS
        if (cache_frame_967ace40094300acbbcfd7d821cd9528 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_967ace40094300acbbcfd7d821cd9528 = MAKE_FUNCTION_FRAME(codeobj_967ace40094300acbbcfd7d821cd9528, module_numba$core$typing$ctypes_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_967ace40094300acbbcfd7d821cd9528->m_type_description == NULL);
    frame_967ace40094300acbbcfd7d821cd9528 = cache_frame_967ace40094300acbbcfd7d821cd9528;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_967ace40094300acbbcfd7d821cd9528);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_967ace40094300acbbcfd7d821cd9528) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_ty);
        tmp_isinstance_inst_1 = par_ty;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oco";
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        CHECK_OBJECT(par_ty);
        tmp_tuple_element_1 = par_ty;
        tmp_raise_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 66;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oco";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_ty);
        tmp_cmp_expr_left_1 = par_ty;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var__convert_internal;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__2_to_ctypes$$$function__1__convert_internal(tmp_closure_1);

        assert(Nuitka_Cell_GET(var__convert_internal) == NULL);
        PyCell_SET(var__convert_internal, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var__convert_internal));
        tmp_called_value_1 = Nuitka_Cell_GET(var__convert_internal);
        CHECK_OBJECT(par_ty);
        tmp_args_element_value_1 = par_ty;
        frame_967ace40094300acbbcfd7d821cd9528->m_frame.f_lineno = 78;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        assert(var_ctypeobj == NULL);
        var_ctypeobj = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_ctypeobj);
        tmp_cmp_expr_left_2 = var_ctypeobj;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_2;
        tmp_left_value_1 = mod_consts[14];
        CHECK_OBJECT(par_ty);
        tmp_tuple_element_2 = par_ty;
        tmp_right_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_right_value_1, 0, tmp_tuple_element_2);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        frame_967ace40094300acbbcfd7d821cd9528->m_frame.f_lineno = 80;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 80;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oco";
        goto frame_exception_exit_1;
    }
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_967ace40094300acbbcfd7d821cd9528);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_967ace40094300acbbcfd7d821cd9528);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_967ace40094300acbbcfd7d821cd9528);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_967ace40094300acbbcfd7d821cd9528, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967ace40094300acbbcfd7d821cd9528->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967ace40094300acbbcfd7d821cd9528, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_967ace40094300acbbcfd7d821cd9528,
        type_description_1,
        par_ty,
        var__convert_internal,
        var_ctypeobj
    );


    // Release cached frame if used for exception.
    if (frame_967ace40094300acbbcfd7d821cd9528 == cache_frame_967ace40094300acbbcfd7d821cd9528) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_967ace40094300acbbcfd7d821cd9528);
        cache_frame_967ace40094300acbbcfd7d821cd9528 = NULL;
    }

    assertFrameObject(frame_967ace40094300acbbcfd7d821cd9528);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_ctypeobj);
    tmp_return_value = var_ctypeobj;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__convert_internal);
    Py_DECREF(var__convert_internal);
    var__convert_internal = NULL;
    Py_XDECREF(var_ctypeobj);
    var_ctypeobj = NULL;
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

    CHECK_OBJECT(var__convert_internal);
    Py_DECREF(var__convert_internal);
    var__convert_internal = NULL;
    Py_XDECREF(var_ctypeobj);
    var_ctypeobj = NULL;
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
    CHECK_OBJECT(par_ty);
    Py_DECREF(par_ty);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ty);
    Py_DECREF(par_ty);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$core$typing$ctypes_utils$$$function__2_to_ctypes$$$function__1__convert_internal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ty = python_pars[0];
    struct Nuitka_FrameObject *frame_7d66643e49f2324e5fe2d0bbbc004a77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7d66643e49f2324e5fe2d0bbbc004a77 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d66643e49f2324e5fe2d0bbbc004a77)) {
        Py_XDECREF(cache_frame_7d66643e49f2324e5fe2d0bbbc004a77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d66643e49f2324e5fe2d0bbbc004a77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d66643e49f2324e5fe2d0bbbc004a77 = MAKE_FUNCTION_FRAME(codeobj_7d66643e49f2324e5fe2d0bbbc004a77, module_numba$core$typing$ctypes_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d66643e49f2324e5fe2d0bbbc004a77->m_type_description == NULL);
    frame_7d66643e49f2324e5fe2d0bbbc004a77 = cache_frame_7d66643e49f2324e5fe2d0bbbc004a77;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d66643e49f2324e5fe2d0bbbc004a77);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d66643e49f2324e5fe2d0bbbc004a77) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_ty);
        tmp_isinstance_inst_1 = par_ty;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oc";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_ty);
        tmp_expression_value_3 = par_ty;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_7d66643e49f2324e5fe2d0bbbc004a77->m_frame.f_lineno = 74;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_7d66643e49f2324e5fe2d0bbbc004a77->m_frame.f_lineno = 74;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ty);
        tmp_args_element_value_3 = par_ty;
        frame_7d66643e49f2324e5fe2d0bbbc004a77->m_frame.f_lineno = 76;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d66643e49f2324e5fe2d0bbbc004a77);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d66643e49f2324e5fe2d0bbbc004a77);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d66643e49f2324e5fe2d0bbbc004a77);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d66643e49f2324e5fe2d0bbbc004a77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d66643e49f2324e5fe2d0bbbc004a77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d66643e49f2324e5fe2d0bbbc004a77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d66643e49f2324e5fe2d0bbbc004a77,
        type_description_1,
        par_ty,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7d66643e49f2324e5fe2d0bbbc004a77 == cache_frame_7d66643e49f2324e5fe2d0bbbc004a77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d66643e49f2324e5fe2d0bbbc004a77);
        cache_frame_7d66643e49f2324e5fe2d0bbbc004a77 = NULL;
    }

    assertFrameObject(frame_7d66643e49f2324e5fe2d0bbbc004a77);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ty);
    Py_DECREF(par_ty);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ty);
    Py_DECREF(par_ty);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$core$typing$ctypes_utils$$$function__3_is_ctypes_funcptr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_c6ba4adc6832481af1266623b9943069;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_c6ba4adc6832481af1266623b9943069 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c6ba4adc6832481af1266623b9943069)) {
        Py_XDECREF(cache_frame_c6ba4adc6832481af1266623b9943069);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6ba4adc6832481af1266623b9943069 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6ba4adc6832481af1266623b9943069 = MAKE_FUNCTION_FRAME(codeobj_c6ba4adc6832481af1266623b9943069, module_numba$core$typing$ctypes_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c6ba4adc6832481af1266623b9943069->m_type_description == NULL);
    frame_c6ba4adc6832481af1266623b9943069 = cache_frame_c6ba4adc6832481af1266623b9943069;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c6ba4adc6832481af1266623b9943069);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c6ba4adc6832481af1266623b9943069) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 88;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 88;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_c6ba4adc6832481af1266623b9943069->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c6ba4adc6832481af1266623b9943069, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c6ba4adc6832481af1266623b9943069, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 86;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c6ba4adc6832481af1266623b9943069->m_frame) frame_c6ba4adc6832481af1266623b9943069->m_frame.f_lineno = exception_tb->tb_lineno;
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
    try_end_1:;
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_2;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_4 = par_obj;
        tmp_attribute_value_1 = mod_consts[22];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_4, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_5 = par_obj;
        tmp_attribute_value_2 = mod_consts[23];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_5, tmp_attribute_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6ba4adc6832481af1266623b9943069);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6ba4adc6832481af1266623b9943069);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6ba4adc6832481af1266623b9943069);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6ba4adc6832481af1266623b9943069, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6ba4adc6832481af1266623b9943069->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6ba4adc6832481af1266623b9943069, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6ba4adc6832481af1266623b9943069,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_c6ba4adc6832481af1266623b9943069 == cache_frame_c6ba4adc6832481af1266623b9943069) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c6ba4adc6832481af1266623b9943069);
        cache_frame_c6ba4adc6832481af1266623b9943069 = NULL;
    }

    assertFrameObject(frame_c6ba4adc6832481af1266623b9943069);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$core$typing$ctypes_utils$$$function__4_get_pointer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctypes_func = python_pars[0];
    struct Nuitka_FrameObject *frame_3ea767f515ba4a799bfdd8a04cbd4c96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96)) {
        Py_XDECREF(cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96 = MAKE_FUNCTION_FRAME(codeobj_3ea767f515ba4a799bfdd8a04cbd4c96, module_numba$core$typing$ctypes_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96->m_type_description == NULL);
    frame_3ea767f515ba4a799bfdd8a04cbd4c96 = cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3ea767f515ba4a799bfdd8a04cbd4c96);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3ea767f515ba4a799bfdd8a04cbd4c96) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctypes_func);
        tmp_args_element_value_1 = par_ctypes_func;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3ea767f515ba4a799bfdd8a04cbd4c96->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3ea767f515ba4a799bfdd8a04cbd4c96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3ea767f515ba4a799bfdd8a04cbd4c96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3ea767f515ba4a799bfdd8a04cbd4c96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ea767f515ba4a799bfdd8a04cbd4c96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ea767f515ba4a799bfdd8a04cbd4c96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ea767f515ba4a799bfdd8a04cbd4c96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ea767f515ba4a799bfdd8a04cbd4c96,
        type_description_1,
        par_ctypes_func
    );


    // Release cached frame if used for exception.
    if (frame_3ea767f515ba4a799bfdd8a04cbd4c96 == cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96);
        cache_frame_3ea767f515ba4a799bfdd8a04cbd4c96 = NULL;
    }

    assertFrameObject(frame_3ea767f515ba4a799bfdd8a04cbd4c96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ctypes_func);
    Py_DECREF(par_ctypes_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctypes_func);
    Py_DECREF(par_ctypes_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$core$typing$ctypes_utils$$$function__5_make_function_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cfnptr = python_pars[0];
    PyObject *var_cargs = NULL;
    PyObject *var_cret = NULL;
    PyObject *var_cconv = NULL;
    PyObject *var_sig = NULL;
    PyObject *outline_0_var_a = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_db7f532e831d8ab2d91135749eaeba64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d3f885bb3ff777feba8964b3b8700ea4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_db7f532e831d8ab2d91135749eaeba64 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_db7f532e831d8ab2d91135749eaeba64)) {
        Py_XDECREF(cache_frame_db7f532e831d8ab2d91135749eaeba64);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db7f532e831d8ab2d91135749eaeba64 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db7f532e831d8ab2d91135749eaeba64 = MAKE_FUNCTION_FRAME(codeobj_db7f532e831d8ab2d91135749eaeba64, module_numba$core$typing$ctypes_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_db7f532e831d8ab2d91135749eaeba64->m_type_description == NULL);
    frame_db7f532e831d8ab2d91135749eaeba64 = cache_frame_db7f532e831d8ab2d91135749eaeba64;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_db7f532e831d8ab2d91135749eaeba64);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_db7f532e831d8ab2d91135749eaeba64) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cfnptr);
        tmp_expression_value_1 = par_cfnptr;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_left_value_1 = mod_consts[26];
        CHECK_OBJECT(par_cfnptr);
        tmp_expression_value_2 = par_cfnptr;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_db7f532e831d8ab2d91135749eaeba64->m_frame.f_lineno = 109;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 109;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(par_cfnptr);
            tmp_expression_value_3 = par_cfnptr;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2)) {
            Py_XDECREF(cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2 = MAKE_FUNCTION_FRAME(codeobj_d3f885bb3ff777feba8964b3b8700ea4, module_numba$core$typing$ctypes_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2->m_type_description == NULL);
        frame_d3f885bb3ff777feba8964b3b8700ea4_2 = cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d3f885bb3ff777feba8964b3b8700ea4_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d3f885bb3ff777feba8964b3b8700ea4_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 112;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_5;
                Py_INCREF(outline_0_var_a);
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
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_a);
            tmp_args_element_value_1 = outline_0_var_a;
            frame_d3f885bb3ff777feba8964b3b8700ea4_2->m_frame.f_lineno = 112;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
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
        RESTORE_FRAME_EXCEPTION(frame_d3f885bb3ff777feba8964b3b8700ea4_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_d3f885bb3ff777feba8964b3b8700ea4_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d3f885bb3ff777feba8964b3b8700ea4_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d3f885bb3ff777feba8964b3b8700ea4_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d3f885bb3ff777feba8964b3b8700ea4_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d3f885bb3ff777feba8964b3b8700ea4_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d3f885bb3ff777feba8964b3b8700ea4_2,
            type_description_2,
            outline_0_var_a
        );


        // Release cached frame if used for exception.
        if (frame_d3f885bb3ff777feba8964b3b8700ea4_2 == cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2);
            cache_frame_d3f885bb3ff777feba8964b3b8700ea4_2 = NULL;
        }

        assertFrameObject(frame_d3f885bb3ff777feba8964b3b8700ea4_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
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

        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
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
        exception_lineno = 112;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_cargs == NULL);
        var_cargs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfnptr);
        tmp_expression_value_4 = par_cfnptr;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_db7f532e831d8ab2d91135749eaeba64->m_frame.f_lineno = 114;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cret == NULL);
        var_cret = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_cret);
        tmp_cmp_expr_left_2 = var_cret;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[29]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cret;
            assert(old != NULL);
            var_cret = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_right_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_cfnptr);
        tmp_expression_value_7 = par_cfnptr;
        tmp_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[32]);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[33];
        assert(var_cconv == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_cconv = tmp_assign_source_8;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert(var_cconv == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_cconv = tmp_assign_source_9;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[35]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cret);
        tmp_tuple_element_2 = var_cret;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_cargs);
        tmp_dircall_arg3_1 = var_cargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_10 = impl___main__$$$function__6_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sig == NULL);
        var_sig = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sig);
        tmp_kw_call_arg_value_0_1 = var_sig;
        CHECK_OBJECT(var_cconv);
        tmp_kw_call_dict_value_0_1 = var_cconv;
        tmp_kw_call_dict_value_1_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
            tmp_kw_call_dict_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_db7f532e831d8ab2d91135749eaeba64->m_frame.f_lineno = 127;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db7f532e831d8ab2d91135749eaeba64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_db7f532e831d8ab2d91135749eaeba64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db7f532e831d8ab2d91135749eaeba64);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db7f532e831d8ab2d91135749eaeba64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db7f532e831d8ab2d91135749eaeba64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db7f532e831d8ab2d91135749eaeba64, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db7f532e831d8ab2d91135749eaeba64,
        type_description_1,
        par_cfnptr,
        var_cargs,
        var_cret,
        var_cconv,
        var_sig
    );


    // Release cached frame if used for exception.
    if (frame_db7f532e831d8ab2d91135749eaeba64 == cache_frame_db7f532e831d8ab2d91135749eaeba64) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_db7f532e831d8ab2d91135749eaeba64);
        cache_frame_db7f532e831d8ab2d91135749eaeba64 = NULL;
    }

    assertFrameObject(frame_db7f532e831d8ab2d91135749eaeba64);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cargs);
    Py_DECREF(var_cargs);
    var_cargs = NULL;
    CHECK_OBJECT(var_cret);
    Py_DECREF(var_cret);
    var_cret = NULL;
    CHECK_OBJECT(var_cconv);
    Py_DECREF(var_cconv);
    var_cconv = NULL;
    CHECK_OBJECT(var_sig);
    Py_DECREF(var_sig);
    var_sig = NULL;
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

    Py_XDECREF(var_cargs);
    var_cargs = NULL;
    Py_XDECREF(var_cret);
    var_cret = NULL;
    Py_XDECREF(var_cconv);
    var_cconv = NULL;
    Py_XDECREF(var_sig);
    var_sig = NULL;
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
    CHECK_OBJECT(par_cfnptr);
    Py_DECREF(par_cfnptr);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cfnptr);
    Py_DECREF(par_cfnptr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__1_from_ctypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$core$typing$ctypes_utils$$$function__1_from_ctypes,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dbfae566e305058fbbd849b6bab7ad06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$core$typing$ctypes_utils,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__1_from_ctypes$$$function__1__convert_internal(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$core$typing$ctypes_utils$$$function__1_from_ctypes$$$function__1__convert_internal,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_fce717a379fb0d39f0dbcd9bbad2af86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$core$typing$ctypes_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__2_to_ctypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$core$typing$ctypes_utils$$$function__2_to_ctypes,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_967ace40094300acbbcfd7d821cd9528,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$core$typing$ctypes_utils,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__2_to_ctypes$$$function__1__convert_internal(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$core$typing$ctypes_utils$$$function__2_to_ctypes$$$function__1__convert_internal,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_7d66643e49f2324e5fe2d0bbbc004a77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$core$typing$ctypes_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__3_is_ctypes_funcptr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$core$typing$ctypes_utils$$$function__3_is_ctypes_funcptr,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6ba4adc6832481af1266623b9943069,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$core$typing$ctypes_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__4_get_pointer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$core$typing$ctypes_utils$$$function__4_get_pointer,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ea767f515ba4a799bfdd8a04cbd4c96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$core$typing$ctypes_utils,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__5_make_function_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$core$typing$ctypes_utils$$$function__5_make_function_type,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_db7f532e831d8ab2d91135749eaeba64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$core$typing$ctypes_utils,
        mod_consts[39],
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

function_impl_code functable_numba$core$typing$ctypes_utils[] = {
    impl_numba$core$typing$ctypes_utils$$$function__1_from_ctypes$$$function__1__convert_internal,
    impl_numba$core$typing$ctypes_utils$$$function__2_to_ctypes$$$function__1__convert_internal,
    impl_numba$core$typing$ctypes_utils$$$function__1_from_ctypes,
    impl_numba$core$typing$ctypes_utils$$$function__2_to_ctypes,
    impl_numba$core$typing$ctypes_utils$$$function__3_is_ctypes_funcptr,
    impl_numba$core$typing$ctypes_utils$$$function__4_get_pointer,
    impl_numba$core$typing$ctypes_utils$$$function__5_make_function_type,
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

    function_impl_code *current = functable_numba$core$typing$ctypes_utils;
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

    if (offset > sizeof(functable_numba$core$typing$ctypes_utils) || offset < 0) {
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
        functable_numba$core$typing$ctypes_utils[offset],
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
        module_numba$core$typing$ctypes_utils,
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
PyObject *modulecode_numba$core$typing$ctypes_utils(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numba.core.typing.ctypes_utils");

    // Store the module for future use.
    module_numba$core$typing$ctypes_utils = module;

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
        PRINT_STRING("numba.core.typing.ctypes_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numba.core.typing.ctypes_utils: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numba.core.typing.ctypes_utils: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumba$core$typing$ctypes_utils\n");

    moduledict_numba$core$typing$ctypes_utils = MODULE_DICT(module_numba$core$typing$ctypes_utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numba$core$typing$ctypes_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numba$core$typing$ctypes_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[99]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numba$core$typing$ctypes_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numba$core$typing$ctypes_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numba$core$typing$ctypes_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numba$core$typing$ctypes_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numba$core$typing$ctypes_utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5ce35425fd43c6476883aff040778799;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_cc60bb231e89b50e5119b4eccb261328_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_cc60bb231e89b50e5119b4eccb261328_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5ce35425fd43c6476883aff040778799 = MAKE_MODULE_FRAME(codeobj_5ce35425fd43c6476883aff040778799, module_numba$core$typing$ctypes_utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5ce35425fd43c6476883aff040778799);
    assert(Py_REFCNT(frame_5ce35425fd43c6476883aff040778799) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[45], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numba$core$typing$ctypes_utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[47];
        frame_5ce35425fd43c6476883aff040778799->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[49];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numba$core$typing$ctypes_utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[50];
        tmp_level_value_2 = mod_consts[47];
        frame_5ce35425fd43c6476883aff040778799->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numba$core$typing$ctypes_utils,
                mod_consts[0],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[51];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numba$core$typing$ctypes_utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[52];
        tmp_level_value_3 = mod_consts[47];
        frame_5ce35425fd43c6476883aff040778799->m_frame.f_lineno = 10;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numba$core$typing$ctypes_utils,
                mod_consts[34],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[53];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_numba$core$typing$ctypes_utils;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[54];
        tmp_level_value_4 = mod_consts[55];
        frame_5ce35425fd43c6476883aff040778799->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numba$core$typing$ctypes_utils,
                mod_consts[56],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[57]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[58]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[59]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[60]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[61]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[62]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[63]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[64]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[65]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[66]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[67]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[68]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[69]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[70]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[71]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[72]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[73]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[74]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[75]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[76]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[77]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[78]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[20]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[29]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[79]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[80]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dict_arg_1;
            tmp_dict_arg_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_dict_arg_1 == NULL)) {
                tmp_dict_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            assert(!(tmp_dict_arg_1 == NULL));
            tmp_iter_arg_1 = DICT_ITERITEMS(tmp_dict_arg_1);
            assert(!(tmp_iter_arg_1 == NULL));
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_1;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PyDict_New();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_cc60bb231e89b50e5119b4eccb261328_2)) {
            Py_XDECREF(cache_frame_cc60bb231e89b50e5119b4eccb261328_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cc60bb231e89b50e5119b4eccb261328_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cc60bb231e89b50e5119b4eccb261328_2 = MAKE_FUNCTION_FRAME(codeobj_cc60bb231e89b50e5119b4eccb261328, module_numba$core$typing$ctypes_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_cc60bb231e89b50e5119b4eccb261328_2->m_type_description == NULL);
        frame_cc60bb231e89b50e5119b4eccb261328_2 = cache_frame_cc60bb231e89b50e5119b4eccb261328_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_cc60bb231e89b50e5119b4eccb261328_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_cc60bb231e89b50e5119b4eccb261328_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 34;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_15 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 34;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_16 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 34;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 34;
                        goto try_except_handler_4;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[81];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 34;
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

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_17 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_17;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_18 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_18;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_v);
            tmp_dictset38_key_1 = outline_0_var_v;
            CHECK_OBJECT(outline_0_var_k);
            tmp_dictset38_value_1 = outline_0_var_k;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_10 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cc60bb231e89b50e5119b4eccb261328_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_cc60bb231e89b50e5119b4eccb261328_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cc60bb231e89b50e5119b4eccb261328_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cc60bb231e89b50e5119b4eccb261328_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cc60bb231e89b50e5119b4eccb261328_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cc60bb231e89b50e5119b4eccb261328_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cc60bb231e89b50e5119b4eccb261328_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_cc60bb231e89b50e5119b4eccb261328_2 == cache_frame_cc60bb231e89b50e5119b4eccb261328_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_cc60bb231e89b50e5119b4eccb261328_2);
            cache_frame_cc60bb231e89b50e5119b4eccb261328_2 = NULL;
        }

        assertFrameObject(frame_cc60bb231e89b50e5119b4eccb261328_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 34;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_10);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ce35425fd43c6476883aff040778799);
#endif
    popFrameStack();

    assertFrameObject(frame_5ce35425fd43c6476883aff040778799);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ce35425fd43c6476883aff040778799);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ce35425fd43c6476883aff040778799, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ce35425fd43c6476883aff040778799->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ce35425fd43c6476883aff040778799, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__1_from_ctypes();

        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__2_to_ctypes();

        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__3_is_ctypes_funcptr();

        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__4_get_pointer();

        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_numba$core$typing$ctypes_utils$$$function__5_make_function_type();

        UPDATE_STRING_DICT1(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_23);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numba.core.typing.ctypes_utils", false);

    Py_INCREF(module_numba$core$typing$ctypes_utils);
    return module_numba$core$typing$ctypes_utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$ctypes_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("numba$core$typing$ctypes_utils", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
