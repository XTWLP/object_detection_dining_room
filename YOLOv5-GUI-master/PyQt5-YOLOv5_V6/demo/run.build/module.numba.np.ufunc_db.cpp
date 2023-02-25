/* Generated code for Python module 'numba.np.ufunc_db'
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

/* The "module_numba$np$ufunc_db" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numba$np$ufunc_db;
PyDictObject *moduledict_numba$np$ufunc_db;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[424];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[424];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numba.np.ufunc_db"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 424; i++) {
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
void checkModuleConstants_numba$np$ufunc_db(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 424; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_752cdae85f16cbf306e53aace9ebe7d4;
static PyCodeObject *codeobj_d6ca6d570d8f5dd285aee07d1f8721c8;
static PyCodeObject *codeobj_bfbeb086de80a8ecf82d6becccd4aa90;
static PyCodeObject *codeobj_7028365257b6cb1c7ba3ed5148317c7e;
static PyCodeObject *codeobj_41d97c36a420745b7007f557e309e72a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[419]); CHECK_OBJECT(module_filename_obj);
    codeobj_752cdae85f16cbf306e53aace9ebe7d4 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[420], NULL, NULL, 0, 0, 0);
    codeobj_d6ca6d570d8f5dd285aee07d1f8721c8 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[421], NULL, 1, 0, 0);
    codeobj_bfbeb086de80a8ecf82d6becccd4aa90 = MAKE_CODEOBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], NULL, NULL, 0, 0, 0);
    codeobj_7028365257b6cb1c7ba3ed5148317c7e = MAKE_CODEOBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[418], mod_consts[422], NULL, 1, 0, 0);
    codeobj_41d97c36a420745b7007f557e309e72a = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[417], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__1__lazy_init_db();


static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__2_get_ufuncs();


static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__3_get_ufunc_info();


static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__4__fill_ufunc_db();


// The module function definitions.
static PyObject *impl_numba$np$ufunc_db$$$function__1__lazy_init_db(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_bfbeb086de80a8ecf82d6becccd4aa90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bfbeb086de80a8ecf82d6becccd4aa90 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bfbeb086de80a8ecf82d6becccd4aa90)) {
        Py_XDECREF(cache_frame_bfbeb086de80a8ecf82d6becccd4aa90);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bfbeb086de80a8ecf82d6becccd4aa90 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bfbeb086de80a8ecf82d6becccd4aa90 = MAKE_FUNCTION_FRAME(codeobj_bfbeb086de80a8ecf82d6becccd4aa90, module_numba$np$ufunc_db, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bfbeb086de80a8ecf82d6becccd4aa90->m_type_description == NULL);
    frame_bfbeb086de80a8ecf82d6becccd4aa90 = cache_frame_bfbeb086de80a8ecf82d6becccd4aa90;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bfbeb086de80a8ecf82d6becccd4aa90);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bfbeb086de80a8ecf82d6becccd4aa90) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        frame_bfbeb086de80a8ecf82d6becccd4aa90->m_frame.f_lineno = 23;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bfbeb086de80a8ecf82d6becccd4aa90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bfbeb086de80a8ecf82d6becccd4aa90);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bfbeb086de80a8ecf82d6becccd4aa90, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bfbeb086de80a8ecf82d6becccd4aa90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bfbeb086de80a8ecf82d6becccd4aa90, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bfbeb086de80a8ecf82d6becccd4aa90,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_bfbeb086de80a8ecf82d6becccd4aa90 == cache_frame_bfbeb086de80a8ecf82d6becccd4aa90) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bfbeb086de80a8ecf82d6becccd4aa90);
        cache_frame_bfbeb086de80a8ecf82d6becccd4aa90 = NULL;
    }

    assertFrameObject(frame_bfbeb086de80a8ecf82d6becccd4aa90);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$np$ufunc_db$$$function__2_get_ufuncs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_41d97c36a420745b7007f557e309e72a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_41d97c36a420745b7007f557e309e72a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41d97c36a420745b7007f557e309e72a)) {
        Py_XDECREF(cache_frame_41d97c36a420745b7007f557e309e72a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41d97c36a420745b7007f557e309e72a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41d97c36a420745b7007f557e309e72a = MAKE_FUNCTION_FRAME(codeobj_41d97c36a420745b7007f557e309e72a, module_numba$np$ufunc_db, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_41d97c36a420745b7007f557e309e72a->m_type_description == NULL);
    frame_41d97c36a420745b7007f557e309e72a = cache_frame_41d97c36a420745b7007f557e309e72a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_41d97c36a420745b7007f557e309e72a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_41d97c36a420745b7007f557e309e72a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_41d97c36a420745b7007f557e309e72a->m_frame.f_lineno = 28;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_41d97c36a420745b7007f557e309e72a->m_frame.f_lineno = 29;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_41d97c36a420745b7007f557e309e72a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_41d97c36a420745b7007f557e309e72a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_41d97c36a420745b7007f557e309e72a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41d97c36a420745b7007f557e309e72a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41d97c36a420745b7007f557e309e72a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41d97c36a420745b7007f557e309e72a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41d97c36a420745b7007f557e309e72a,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_41d97c36a420745b7007f557e309e72a == cache_frame_41d97c36a420745b7007f557e309e72a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_41d97c36a420745b7007f557e309e72a);
        cache_frame_41d97c36a420745b7007f557e309e72a = NULL;
    }

    assertFrameObject(frame_41d97c36a420745b7007f557e309e72a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$np$ufunc_db$$$function__3_get_ufunc_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ufunc_key = python_pars[0];
    struct Nuitka_FrameObject *frame_7028365257b6cb1c7ba3ed5148317c7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7028365257b6cb1c7ba3ed5148317c7e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7028365257b6cb1c7ba3ed5148317c7e)) {
        Py_XDECREF(cache_frame_7028365257b6cb1c7ba3ed5148317c7e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7028365257b6cb1c7ba3ed5148317c7e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7028365257b6cb1c7ba3ed5148317c7e = MAKE_FUNCTION_FRAME(codeobj_7028365257b6cb1c7ba3ed5148317c7e, module_numba$np$ufunc_db, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7028365257b6cb1c7ba3ed5148317c7e->m_type_description == NULL);
    frame_7028365257b6cb1c7ba3ed5148317c7e = cache_frame_7028365257b6cb1c7ba3ed5148317c7e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7028365257b6cb1c7ba3ed5148317c7e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7028365257b6cb1c7ba3ed5148317c7e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7028365257b6cb1c7ba3ed5148317c7e->m_frame.f_lineno = 42;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ufunc_key);
        tmp_subscript_value_1 = par_ufunc_key;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7028365257b6cb1c7ba3ed5148317c7e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7028365257b6cb1c7ba3ed5148317c7e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7028365257b6cb1c7ba3ed5148317c7e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7028365257b6cb1c7ba3ed5148317c7e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7028365257b6cb1c7ba3ed5148317c7e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7028365257b6cb1c7ba3ed5148317c7e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7028365257b6cb1c7ba3ed5148317c7e,
        type_description_1,
        par_ufunc_key
    );


    // Release cached frame if used for exception.
    if (frame_7028365257b6cb1c7ba3ed5148317c7e == cache_frame_7028365257b6cb1c7ba3ed5148317c7e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7028365257b6cb1c7ba3ed5148317c7e);
        cache_frame_7028365257b6cb1c7ba3ed5148317c7e = NULL;
    }

    assertFrameObject(frame_7028365257b6cb1c7ba3ed5148317c7e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc_key);
    Py_DECREF(par_ufunc_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc_key);
    Py_DECREF(par_ufunc_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numba$np$ufunc_db$$$function__4__fill_ufunc_db(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ufunc_db = python_pars[0];
    PyObject *var_npyfuncs = NULL;
    PyObject *var_cmathimpl = NULL;
    PyObject *var_mathimpl = NULL;
    PyObject *var_numbers = NULL;
    PyObject *var_numpy_version = NULL;
    PyObject *var_tan_impl = NULL;
    PyObject *var_arcsin_impl = NULL;
    PyObject *var_arctan_impl = NULL;
    PyObject *var_arcsinh_impl = NULL;
    PyObject *var_arctanh_impl = NULL;
    PyObject *var_npdatetime = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d6ca6d570d8f5dd285aee07d1f8721c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8)) {
        Py_XDECREF(cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8 = MAKE_FUNCTION_FRAME(codeobj_d6ca6d570d8f5dd285aee07d1f8721c8, module_numba$np$ufunc_db, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_type_description == NULL);
    frame_d6ca6d570d8f5dd285aee07d1f8721c8 = cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d6ca6d570d8f5dd285aee07d1f8721c8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d6ca6d570d8f5dd285aee07d1f8721c8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numba$np$ufunc_db;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = mod_consts[8];
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 50;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numba$np$ufunc_db,
                mod_consts[9],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_npyfuncs == NULL);
        var_npyfuncs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[10];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numba$np$ufunc_db;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[11];
        tmp_level_value_2 = mod_consts[8];
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 51;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numba$np$ufunc_db,
                mod_consts[12],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[12]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_cmathimpl == NULL);
        var_cmathimpl = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numba$np$ufunc_db,
                mod_consts[13],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[13]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_mathimpl == NULL);
        var_mathimpl = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numba$np$ufunc_db,
                mod_consts[14],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[14]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_numbers == NULL);
        var_numbers = tmp_assign_source_5;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[15];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numba$np$ufunc_db;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[16];
        tmp_level_value_3 = mod_consts[8];
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 52;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numba$np$ufunc_db,
                mod_consts[17],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numpy_version == NULL);
        var_numpy_version = tmp_assign_source_6;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_3;
        tmp_dict_key_1 = mod_consts[18];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_1 = var_npyfuncs;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[20];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_2 = var_npyfuncs;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_ass_subvalue_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_1 = par_ufunc_db;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 54;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 54;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_expression_value_19;
        tmp_dict_key_2 = mod_consts[23];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_4 = var_numbers;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[24]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = _PyDict_NewPresized( 15 );
        {
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
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[25];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_5 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[27];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_6 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[28];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_7 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[29];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_8 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[30];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_9 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[31];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_10 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[32];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_11 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[33];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_12 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[34];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_13 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[35];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_14 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[36];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_15 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[37]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[38];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_16 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[37]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[39];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_17 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[40]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[41];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_18 = var_numbers;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[40]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_ass_subvalue_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_2 = par_ufunc_db;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[42]);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_expression_value_35;
        tmp_dict_key_3 = mod_consts[23];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_20 = var_numbers;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[43]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[25];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_21 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[27];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_22 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[28];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_23 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[29];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_24 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[30];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_25 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[31];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_26 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[32];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_27 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[33];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_28 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[34];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_29 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[35];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_30 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[43]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[36];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_31 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[44]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[38];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_32 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[44]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[39];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_33 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[45]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[41];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_34 = var_numbers;
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[45]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_ass_subvalue_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_3 = par_ufunc_db;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 78;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[46]);
        if (tmp_ass_subscript_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 78;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_expression_value_51;
        tmp_dict_key_4 = mod_consts[23];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_36 = var_numbers;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[47]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[25];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_37 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[47]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[27];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_38 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[48]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[28];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_39 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[47]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[29];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_40 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[48]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[30];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_41 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[47]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[31];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_42 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[48]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[32];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_43 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[47]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[33];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_44 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[48]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[34];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_45 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[47]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[35];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_46 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[48]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[36];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_47 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[49]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[38];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_48 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[49]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[50];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_49 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[51]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[52];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_50 = var_numbers;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[51]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_ass_subvalue_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_4 = par_ufunc_db;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 96;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[53]);
        if (tmp_ass_subscript_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 96;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_expression_value_66;
        tmp_dict_key_5 = mod_consts[25];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_52 = var_numbers;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[54]);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[27];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_53 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[28];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_54 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[29];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_55 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[30];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_56 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[31];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_57 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[32];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_58 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[33];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_59 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[34];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_60 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[35];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_61 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[54]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[36];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_62 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[55]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[38];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_63 = var_numbers;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[55]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_64 = var_npyfuncs;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[56]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_65 = var_npyfuncs;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[56]);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_ass_subvalue_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_5 = par_ufunc_db;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_5);

            exception_lineno = 114;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[57]);
        if (tmp_ass_subscript_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_5);

            exception_lineno = 114;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscript_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_expression_value_82;
        tmp_dict_key_6 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_67 = var_numbers;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[59]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_6 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[60];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_68 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_69 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_70 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_71 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_72 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_73 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_74 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_75 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_76 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_77 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[61]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[71];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_78 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[72]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[73];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_79 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[72]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[74];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_80 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[75]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[76];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_81 = var_numbers;
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[75]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_ass_subvalue_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_6 = par_ufunc_db;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_6);

            exception_lineno = 131;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[77]);
        if (tmp_ass_subscript_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_6);

            exception_lineno = 131;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscript_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        PyObject *tmp_expression_value_98;
        tmp_dict_key_7 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_83 = var_numbers;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[78]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_7 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[60];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_84 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_85 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_86 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_87 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_88 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_89 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_90 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_91 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_92 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_93 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[79]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[71];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_94 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[80]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[73];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_95 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[80]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[74];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_96 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[81]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[76];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_97 = var_numbers;
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[81]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_ass_subvalue_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_7 = par_ufunc_db;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_7);

            exception_lineno = 149;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[82]);
        if (tmp_ass_subscript_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_7);

            exception_lineno = 149;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subscript_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        PyObject *tmp_expression_value_114;
        tmp_dict_key_8 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_99 = var_numbers;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[83]);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_8 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[60];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_100 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_101 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_102 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_103 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_104 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_105 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_106 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_107 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_108 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_109 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[84]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[71];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_110 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[85]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[73];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_111 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[85]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[74];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_112 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[86]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[76];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_113 = var_numbers;
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[86]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_ass_subvalue_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_8 = par_ufunc_db;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);

            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[87]);
        if (tmp_ass_subscript_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);

            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subscript_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_expression_value_116;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[88]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[89]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
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
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        PyObject *tmp_expression_value_131;
        tmp_dict_key_9 = mod_consts[60];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_117 = var_npyfuncs;
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[90]);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_9 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_expression_value_123;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_expression_value_130;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_118 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[91]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_119 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[90]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_120 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[91]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_121 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[90]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_122 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[91]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_123 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[90]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_124 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[91]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_125 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[90]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_126 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[91]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_127 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[92]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_128 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[92]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_129 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[93]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_130 = var_npyfuncs;
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[93]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_ass_subvalue_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_9 = par_ufunc_db;
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_9);

            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[88]);
        if (tmp_ass_subscript_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_9);

            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subscript_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        PyObject *tmp_expression_value_146;
        tmp_dict_key_10 = mod_consts[94];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_132 = var_npyfuncs;
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[95]);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_10 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_133;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_expression_value_140;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_expression_value_144;
            PyObject *tmp_expression_value_145;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[96];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_133 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[97];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_134 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[98];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_135 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[99];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_136 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[100];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_137 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[101];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_138 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[102];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_139 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[103];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_140 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[104];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_141 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[95]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_142 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[92]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_143 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[92]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_144 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[93]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_145 = var_npyfuncs;
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[93]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_ass_subvalue_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_10 = par_ufunc_db;
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_10);

            exception_lineno = 203;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[89]);
        if (tmp_ass_subscript_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_10);

            exception_lineno = 203;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        Py_DECREF(tmp_ass_subscript_10);
        Py_DECREF(tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        PyObject *tmp_expression_value_161;
        tmp_dict_key_11 = mod_consts[60];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_147 = var_npyfuncs;
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[90]);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_11 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_148;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_expression_value_150;
            PyObject *tmp_expression_value_151;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_expression_value_155;
            PyObject *tmp_expression_value_156;
            PyObject *tmp_expression_value_157;
            PyObject *tmp_expression_value_158;
            PyObject *tmp_expression_value_159;
            PyObject *tmp_expression_value_160;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_148 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[91]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_149 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[90]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_150 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[91]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_151 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[90]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_152 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[91]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_153 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[90]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_154 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[91]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_155 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[90]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_156 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[91]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_157 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[105]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_158 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[105]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_159 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[106]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_160 = var_npyfuncs;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[106]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_ass_subvalue_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_11 = par_ufunc_db;
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_11);

            exception_lineno = 220;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[107]);
        if (tmp_ass_subscript_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_11);

            exception_lineno = 220;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        Py_DECREF(tmp_ass_subscript_11);
        Py_DECREF(tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        PyObject *tmp_expression_value_174;
        tmp_dict_key_12 = mod_consts[60];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_162 = var_npyfuncs;
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[108]);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_12 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_163;
            PyObject *tmp_expression_value_164;
            PyObject *tmp_expression_value_165;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_expression_value_167;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_expression_value_169;
            PyObject *tmp_expression_value_170;
            PyObject *tmp_expression_value_171;
            PyObject *tmp_expression_value_172;
            PyObject *tmp_expression_value_173;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_163 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[109]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_164 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[108]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_165 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[109]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_166 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[108]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_167 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[109]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_168 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[108]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_169 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[109]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_170 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[108]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_171 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[109]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_172 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[110]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_173 = var_npyfuncs;
            tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[110]);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_ass_subvalue_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_12 = par_ufunc_db;
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_12);

            exception_lineno = 237;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[111]);
        if (tmp_ass_subscript_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_12);

            exception_lineno = 237;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        Py_DECREF(tmp_ass_subscript_12);
        Py_DECREF(tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        PyObject *tmp_expression_value_187;
        tmp_dict_key_13 = mod_consts[112];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_175 = var_npyfuncs;
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[113]);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_13 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_176;
            PyObject *tmp_expression_value_177;
            PyObject *tmp_expression_value_178;
            PyObject *tmp_expression_value_179;
            PyObject *tmp_expression_value_180;
            PyObject *tmp_expression_value_181;
            PyObject *tmp_expression_value_182;
            PyObject *tmp_expression_value_183;
            PyObject *tmp_expression_value_184;
            PyObject *tmp_expression_value_185;
            PyObject *tmp_expression_value_186;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[114];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_176 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[115]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[116];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_177 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[113]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[117];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_178 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[115]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[118];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_179 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[113]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[119];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_180 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[115]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[120];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_181 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[113]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[121];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_182 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[115]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[122];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_183 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[113]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[123];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_184 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[115]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[124];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_185 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[125]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[126];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_186 = var_npyfuncs;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[125]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_ass_subvalue_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_13 = par_ufunc_db;
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_13);

            exception_lineno = 252;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[127]);
        if (tmp_ass_subscript_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_13);

            exception_lineno = 252;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        Py_DECREF(tmp_ass_subscript_13);
        Py_DECREF(tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        PyObject *tmp_expression_value_200;
        tmp_dict_key_14 = mod_consts[60];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_188 = var_npyfuncs;
        tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[128]);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_14 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_189;
            PyObject *tmp_expression_value_190;
            PyObject *tmp_expression_value_191;
            PyObject *tmp_expression_value_192;
            PyObject *tmp_expression_value_193;
            PyObject *tmp_expression_value_194;
            PyObject *tmp_expression_value_195;
            PyObject *tmp_expression_value_196;
            PyObject *tmp_expression_value_197;
            PyObject *tmp_expression_value_198;
            PyObject *tmp_expression_value_199;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_189 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_190 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_191 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_192 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_193 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_194 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_195 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_196 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_197 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[128]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_198 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[129]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_199 = var_npyfuncs;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[129]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_ass_subvalue_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_14 = par_ufunc_db;
        tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_200 == NULL)) {
            tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_14);

            exception_lineno = 267;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[130]);
        if (tmp_ass_subscript_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_14);

            exception_lineno = 267;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        Py_DECREF(tmp_ass_subscript_14);
        Py_DECREF(tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        PyObject *tmp_expression_value_203;
        tmp_dict_key_15 = mod_consts[71];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_201 = var_npyfuncs;
        tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[131]);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_15 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_202;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_202 = var_npyfuncs;
            tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[131]);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_ass_subvalue_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_15 = par_ufunc_db;
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_15);

            exception_lineno = 282;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[132]);
        if (tmp_ass_subscript_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_15);

            exception_lineno = 282;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        Py_DECREF(tmp_ass_subscript_15);
        Py_DECREF(tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        PyObject *tmp_expression_value_206;
        tmp_dict_key_16 = mod_consts[71];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_204 = var_npyfuncs;
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[133]);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_16 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_205;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_205 = var_npyfuncs;
            tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[133]);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_ass_subvalue_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_16 = par_ufunc_db;
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_16);

            exception_lineno = 287;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[134]);
        if (tmp_ass_subscript_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_16);

            exception_lineno = 287;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        Py_DECREF(tmp_ass_subscript_16);
        Py_DECREF(tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        PyObject *tmp_expression_value_221;
        tmp_dict_key_17 = mod_consts[60];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_207 = var_numbers;
        tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[135]);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_17 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_208;
            PyObject *tmp_expression_value_209;
            PyObject *tmp_expression_value_210;
            PyObject *tmp_expression_value_211;
            PyObject *tmp_expression_value_212;
            PyObject *tmp_expression_value_213;
            PyObject *tmp_expression_value_214;
            PyObject *tmp_expression_value_215;
            PyObject *tmp_expression_value_216;
            PyObject *tmp_expression_value_217;
            PyObject *tmp_expression_value_218;
            PyObject *tmp_expression_value_219;
            PyObject *tmp_expression_value_220;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_208 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_209 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_210 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_211 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_212 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_213 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_214 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_215 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_216 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[135]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[71];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_217 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[136]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[73];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_218 = var_numbers;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[136]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_219 = var_npyfuncs;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[137]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_220 = var_npyfuncs;
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[137]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_ass_subvalue_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_17 = par_ufunc_db;
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_17);

            exception_lineno = 292;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[138]);
        if (tmp_ass_subscript_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_17);

            exception_lineno = 292;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        Py_DECREF(tmp_ass_subscript_17);
        Py_DECREF(tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        PyObject *tmp_expression_value_232;
        tmp_dict_key_18 = mod_consts[60];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_222 = var_npyfuncs;
        tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[139]);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_18 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_223;
            PyObject *tmp_expression_value_224;
            PyObject *tmp_expression_value_225;
            PyObject *tmp_expression_value_226;
            PyObject *tmp_expression_value_227;
            PyObject *tmp_expression_value_228;
            PyObject *tmp_expression_value_229;
            PyObject *tmp_expression_value_230;
            PyObject *tmp_expression_value_231;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_223 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_224 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_225 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_226 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_227 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_228 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_229 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_230 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_231 = var_npyfuncs;
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[139]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_18;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_18;
        // Exception handling pass through code for dict_build:
        dict_build_exception_18:;
        Py_DECREF(tmp_ass_subvalue_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_18:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_18 = par_ufunc_db;
        tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_232 == NULL)) {
            tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_18);

            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[140]);
        if (tmp_ass_subscript_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_18);

            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        Py_DECREF(tmp_ass_subscript_18);
        Py_DECREF(tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        PyObject *tmp_expression_value_243;
        tmp_dict_key_19 = mod_consts[60];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_233 = var_npyfuncs;
        tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[141]);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_19 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_234;
            PyObject *tmp_expression_value_235;
            PyObject *tmp_expression_value_236;
            PyObject *tmp_expression_value_237;
            PyObject *tmp_expression_value_238;
            PyObject *tmp_expression_value_239;
            PyObject *tmp_expression_value_240;
            PyObject *tmp_expression_value_241;
            PyObject *tmp_expression_value_242;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_234 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_235 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_236 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_237 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_238 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_239 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_240 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_241 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_242 = var_npyfuncs;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[141]);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_19;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_19;
        // Exception handling pass through code for dict_build:
        dict_build_exception_19:;
        Py_DECREF(tmp_ass_subvalue_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_19:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_19 = par_ufunc_db;
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_19);

            exception_lineno = 325;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[142]);
        if (tmp_ass_subscript_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_19);

            exception_lineno = 325;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        Py_DECREF(tmp_ass_subscript_19);
        Py_DECREF(tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        PyObject *tmp_expression_value_248;
        tmp_dict_key_20 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_244 = var_npyfuncs;
        tmp_dict_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[143]);
        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_20 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_245;
            PyObject *tmp_expression_value_246;
            PyObject *tmp_expression_value_247;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_245 = var_npyfuncs;
            tmp_dict_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[143]);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_246 = var_npyfuncs;
            tmp_dict_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[144]);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_247 = var_npyfuncs;
            tmp_dict_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[144]);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_20;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_20;
        // Exception handling pass through code for dict_build:
        dict_build_exception_20:;
        Py_DECREF(tmp_ass_subvalue_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_20:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_20 = par_ufunc_db;
        tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_248 == NULL)) {
            tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_20);

            exception_lineno = 338;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[145]);
        if (tmp_ass_subscript_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_20);

            exception_lineno = 338;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        Py_DECREF(tmp_ass_subscript_20);
        Py_DECREF(tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        PyObject *tmp_expression_value_263;
        tmp_dict_key_21 = mod_consts[25];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_249 = var_numbers;
        tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[146]);
        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_21 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_250;
            PyObject *tmp_expression_value_251;
            PyObject *tmp_expression_value_252;
            PyObject *tmp_expression_value_253;
            PyObject *tmp_expression_value_254;
            PyObject *tmp_expression_value_255;
            PyObject *tmp_expression_value_256;
            PyObject *tmp_expression_value_257;
            PyObject *tmp_expression_value_258;
            PyObject *tmp_expression_value_259;
            PyObject *tmp_expression_value_260;
            PyObject *tmp_expression_value_261;
            PyObject *tmp_expression_value_262;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[27];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_250 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[28];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_251 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[29];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_252 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[30];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_253 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[31];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_254 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[32];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_255 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[33];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_256 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[34];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_257 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[35];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_258 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[36];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_259 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[38];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_260 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[146]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[39];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_261 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[147]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[41];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_262 = var_numbers;
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[147]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_21;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_21;
        // Exception handling pass through code for dict_build:
        dict_build_exception_21:;
        Py_DECREF(tmp_ass_subvalue_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_21:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_21 = par_ufunc_db;
        tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_263 == NULL)) {
            tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_21);

            exception_lineno = 345;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[148]);
        if (tmp_ass_subscript_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_21);

            exception_lineno = 345;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        Py_DECREF(tmp_ass_subscript_21);
        Py_DECREF(tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        PyObject *tmp_expression_value_268;
        tmp_dict_key_22 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_264 = var_npyfuncs;
        tmp_dict_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[149]);
        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_22 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_265;
            PyObject *tmp_expression_value_266;
            PyObject *tmp_expression_value_267;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_265 = var_npyfuncs;
            tmp_dict_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[149]);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_266 = var_npyfuncs;
            tmp_dict_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[150]);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_267 = var_npyfuncs;
            tmp_dict_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[150]);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_22;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_22;
        // Exception handling pass through code for dict_build:
        dict_build_exception_22:;
        Py_DECREF(tmp_ass_subvalue_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_22:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_22 = par_ufunc_db;
        tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_268 == NULL)) {
            tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_22);

            exception_lineno = 362;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[151]);
        if (tmp_ass_subscript_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_22);

            exception_lineno = 362;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        Py_DECREF(tmp_ass_subscript_22);
        Py_DECREF(tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        PyObject *tmp_expression_value_273;
        tmp_dict_key_23 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_269 = var_npyfuncs;
        tmp_dict_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[152]);
        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_23 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_270;
            PyObject *tmp_expression_value_271;
            PyObject *tmp_expression_value_272;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_270 = var_npyfuncs;
            tmp_dict_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[152]);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_271 = var_npyfuncs;
            tmp_dict_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[153]);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_272 = var_npyfuncs;
            tmp_dict_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[153]);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_23;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_23;
        // Exception handling pass through code for dict_build:
        dict_build_exception_23:;
        Py_DECREF(tmp_ass_subvalue_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_23:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_23 = par_ufunc_db;
        tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_273 == NULL)) {
            tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_23);

            exception_lineno = 369;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[154]);
        if (tmp_ass_subscript_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_23);

            exception_lineno = 369;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        Py_DECREF(tmp_ass_subscript_23);
        Py_DECREF(tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        PyObject *tmp_expression_value_278;
        tmp_dict_key_24 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_274 = var_npyfuncs;
        tmp_dict_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[155]);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_24 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_275;
            PyObject *tmp_expression_value_276;
            PyObject *tmp_expression_value_277;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_275 = var_npyfuncs;
            tmp_dict_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[155]);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_276 = var_npyfuncs;
            tmp_dict_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[156]);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_277 = var_npyfuncs;
            tmp_dict_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[156]);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_24;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_24;
        // Exception handling pass through code for dict_build:
        dict_build_exception_24:;
        Py_DECREF(tmp_ass_subvalue_24);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_24:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_24 = par_ufunc_db;
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_24);

            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[157]);
        if (tmp_ass_subscript_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_24);

            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        Py_DECREF(tmp_ass_subscript_24);
        Py_DECREF(tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        PyObject *tmp_expression_value_283;
        tmp_dict_key_25 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_279 = var_npyfuncs;
        tmp_dict_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[158]);
        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_25 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_280;
            PyObject *tmp_expression_value_281;
            PyObject *tmp_expression_value_282;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_280 = var_npyfuncs;
            tmp_dict_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[158]);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_281 = var_npyfuncs;
            tmp_dict_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[159]);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_282 = var_npyfuncs;
            tmp_dict_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[159]);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_25;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_25;
        // Exception handling pass through code for dict_build:
        dict_build_exception_25:;
        Py_DECREF(tmp_ass_subvalue_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_25:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_25 = par_ufunc_db;
        tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_283 == NULL)) {
            tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_25);

            exception_lineno = 383;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[160]);
        if (tmp_ass_subscript_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_25);

            exception_lineno = 383;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        Py_DECREF(tmp_ass_subscript_25);
        Py_DECREF(tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        PyObject *tmp_expression_value_288;
        tmp_dict_key_26 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_284 = var_npyfuncs;
        tmp_dict_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[161]);
        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_26 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_285;
            PyObject *tmp_expression_value_286;
            PyObject *tmp_expression_value_287;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_285 = var_npyfuncs;
            tmp_dict_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[161]);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_286 = var_npyfuncs;
            tmp_dict_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[162]);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_287 = var_npyfuncs;
            tmp_dict_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[162]);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_26;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_26;
        // Exception handling pass through code for dict_build:
        dict_build_exception_26:;
        Py_DECREF(tmp_ass_subvalue_26);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_26:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_26 = par_ufunc_db;
        tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_288 == NULL)) {
            tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_26);

            exception_lineno = 390;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[163]);
        if (tmp_ass_subscript_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_26);

            exception_lineno = 390;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        Py_DECREF(tmp_ass_subscript_26);
        Py_DECREF(tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        PyObject *tmp_expression_value_293;
        tmp_dict_key_27 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_289 = var_npyfuncs;
        tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_289, mod_consts[164]);
        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_27 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_290;
            PyObject *tmp_expression_value_291;
            PyObject *tmp_expression_value_292;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_290 = var_npyfuncs;
            tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[164]);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_291 = var_npyfuncs;
            tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[165]);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_292 = var_npyfuncs;
            tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[165]);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_27;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_27;
        // Exception handling pass through code for dict_build:
        dict_build_exception_27:;
        Py_DECREF(tmp_ass_subvalue_27);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_27:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_27 = par_ufunc_db;
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_27);

            exception_lineno = 397;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[166]);
        if (tmp_ass_subscript_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_27);

            exception_lineno = 397;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        Py_DECREF(tmp_ass_subscript_27);
        Py_DECREF(tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        PyObject *tmp_expression_value_298;
        tmp_dict_key_28 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_294 = var_npyfuncs;
        tmp_dict_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[167]);
        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_28 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_295;
            PyObject *tmp_expression_value_296;
            PyObject *tmp_expression_value_297;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_295 = var_npyfuncs;
            tmp_dict_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[167]);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_296 = var_npyfuncs;
            tmp_dict_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[168]);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_297 = var_npyfuncs;
            tmp_dict_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[168]);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_28;
        // Exception handling pass through code for dict_build:
        dict_build_exception_28:;
        Py_DECREF(tmp_ass_subvalue_28);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_28:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_28 = par_ufunc_db;
        tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_298 == NULL)) {
            tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_28);

            exception_lineno = 404;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[169]);
        if (tmp_ass_subscript_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_28);

            exception_lineno = 404;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        Py_DECREF(tmp_ass_subscript_28);
        Py_DECREF(tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        PyObject *tmp_expression_value_303;
        tmp_dict_key_29 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_299 = var_npyfuncs;
        tmp_dict_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[170]);
        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_29 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_300;
            PyObject *tmp_expression_value_301;
            PyObject *tmp_expression_value_302;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_300 = var_npyfuncs;
            tmp_dict_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_300, mod_consts[170]);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_301 = var_npyfuncs;
            tmp_dict_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[171]);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_302 = var_npyfuncs;
            tmp_dict_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[171]);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_29;
        // Exception handling pass through code for dict_build:
        dict_build_exception_29:;
        Py_DECREF(tmp_ass_subvalue_29);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_29:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_29 = par_ufunc_db;
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_29);

            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[172]);
        if (tmp_ass_subscript_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_29);

            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        Py_DECREF(tmp_ass_subscript_29);
        Py_DECREF(tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        PyObject *tmp_expression_value_318;
        tmp_dict_key_30 = mod_consts[25];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_304 = var_npyfuncs;
        tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[173]);
        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_30 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_305;
            PyObject *tmp_expression_value_306;
            PyObject *tmp_expression_value_307;
            PyObject *tmp_expression_value_308;
            PyObject *tmp_expression_value_309;
            PyObject *tmp_expression_value_310;
            PyObject *tmp_expression_value_311;
            PyObject *tmp_expression_value_312;
            PyObject *tmp_expression_value_313;
            PyObject *tmp_expression_value_314;
            PyObject *tmp_expression_value_315;
            PyObject *tmp_expression_value_316;
            PyObject *tmp_expression_value_317;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[27];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_305 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[28];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_306 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[29];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_307 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_307, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[30];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_308 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_308, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[31];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_309 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_309, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[32];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_310 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_310, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[33];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_311 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_311, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[34];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_312 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_312, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[35];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_313 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_313, mod_consts[173]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[36];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_314 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_314, mod_consts[174]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_315 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_315, mod_consts[174]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_316 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_316, mod_consts[175]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_317 = var_npyfuncs;
            tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_317, mod_consts[175]);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_30;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_30;
        // Exception handling pass through code for dict_build:
        dict_build_exception_30:;
        Py_DECREF(tmp_ass_subvalue_30);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_30:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_30 = par_ufunc_db;
        tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_318 == NULL)) {
            tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_30);

            exception_lineno = 418;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_318, mod_consts[176]);
        if (tmp_ass_subscript_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_30);

            exception_lineno = 418;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        Py_DECREF(tmp_ass_subscript_30);
        Py_DECREF(tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        PyObject *tmp_expression_value_333;
        tmp_dict_key_31 = mod_consts[25];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_319 = var_npyfuncs;
        tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_319, mod_consts[177]);
        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_31 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_320;
            PyObject *tmp_expression_value_321;
            PyObject *tmp_expression_value_322;
            PyObject *tmp_expression_value_323;
            PyObject *tmp_expression_value_324;
            PyObject *tmp_expression_value_325;
            PyObject *tmp_expression_value_326;
            PyObject *tmp_expression_value_327;
            PyObject *tmp_expression_value_328;
            PyObject *tmp_expression_value_329;
            PyObject *tmp_expression_value_330;
            PyObject *tmp_expression_value_331;
            PyObject *tmp_expression_value_332;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[27];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_320 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_320, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[28];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_321 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_321, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[29];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_322 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_322, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[30];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_323 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_323, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 440;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[31];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_324 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_324, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[32];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_325 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_325, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[33];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_326 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_326, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[34];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_327 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_327, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[35];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_328 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_328, mod_consts[177]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[36];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_329 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_329, mod_consts[178]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_330 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_330, mod_consts[178]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_331 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_331, mod_consts[179]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_332 = var_npyfuncs;
            tmp_dict_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_332, mod_consts[179]);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_31;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_31;
        // Exception handling pass through code for dict_build:
        dict_build_exception_31:;
        Py_DECREF(tmp_ass_subvalue_31);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_31:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_31 = par_ufunc_db;
        tmp_expression_value_333 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_333 == NULL)) {
            tmp_expression_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_31);

            exception_lineno = 435;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_333, mod_consts[180]);
        if (tmp_ass_subscript_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_31);

            exception_lineno = 435;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        Py_DECREF(tmp_ass_subscript_31);
        Py_DECREF(tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_expression_value_334;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        PyObject *tmp_expression_value_338;
        tmp_dict_key_32 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_334 = var_npyfuncs;
        tmp_dict_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_334, mod_consts[181]);
        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_32 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_335;
            PyObject *tmp_expression_value_336;
            PyObject *tmp_expression_value_337;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));
            tmp_dict_key_32 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_335 = var_npyfuncs;
            tmp_dict_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_335, mod_consts[181]);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_32;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));
            tmp_dict_key_32 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_336 = var_npyfuncs;
            tmp_dict_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_336, mod_consts[182]);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_32;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));
            tmp_dict_key_32 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_337 = var_npyfuncs;
            tmp_dict_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_337, mod_consts[182]);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_32;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_32;
        // Exception handling pass through code for dict_build:
        dict_build_exception_32:;
        Py_DECREF(tmp_ass_subvalue_32);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_32:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_32 = par_ufunc_db;
        tmp_expression_value_338 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_338 == NULL)) {
            tmp_expression_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_32);

            exception_lineno = 452;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_338, mod_consts[183]);
        if (tmp_ass_subscript_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_32);

            exception_lineno = 452;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        Py_DECREF(tmp_ass_subscript_32);
        Py_DECREF(tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_expression_value_339;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        PyObject *tmp_expression_value_343;
        tmp_dict_key_33 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_339 = var_npyfuncs;
        tmp_dict_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_339, mod_consts[184]);
        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_33 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_340;
            PyObject *tmp_expression_value_341;
            PyObject *tmp_expression_value_342;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));
            tmp_dict_key_33 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_340 = var_npyfuncs;
            tmp_dict_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_340, mod_consts[184]);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_33;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));
            tmp_dict_key_33 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_341 = var_npyfuncs;
            tmp_dict_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_341, mod_consts[185]);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_33;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));
            tmp_dict_key_33 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_342 = var_npyfuncs;
            tmp_dict_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_342, mod_consts[185]);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_33;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_33;
        // Exception handling pass through code for dict_build:
        dict_build_exception_33:;
        Py_DECREF(tmp_ass_subvalue_33);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_33:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_33 = par_ufunc_db;
        tmp_expression_value_343 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_343 == NULL)) {
            tmp_expression_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_33);

            exception_lineno = 459;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_343, mod_consts[186]);
        if (tmp_ass_subscript_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_33);

            exception_lineno = 459;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        Py_DECREF(tmp_ass_subscript_33);
        Py_DECREF(tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_344;
        CHECK_OBJECT(var_cmathimpl);
        tmp_expression_value_344 = var_cmathimpl;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_344, mod_consts[187]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tan_impl == NULL);
        var_tan_impl = tmp_assign_source_7;
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_expression_value_345;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        PyObject *tmp_expression_value_347;
        tmp_dict_key_34 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_345 = var_npyfuncs;
        tmp_dict_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_345, mod_consts[188]);
        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_34 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_346;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));
            tmp_dict_key_34 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_346 = var_npyfuncs;
            tmp_dict_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_346, mod_consts[188]);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_34;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));
            tmp_dict_key_34 = mod_consts[39];
            CHECK_OBJECT(var_tan_impl);
            tmp_dict_value_34 = var_tan_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_34, tmp_dict_key_34, tmp_dict_value_34);
            assert(!(tmp_res != 0));
            tmp_dict_key_34 = mod_consts[41];
            CHECK_OBJECT(var_tan_impl);
            tmp_dict_value_34 = var_tan_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_34, tmp_dict_key_34, tmp_dict_value_34);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_34;
        // Exception handling pass through code for dict_build:
        dict_build_exception_34:;
        Py_DECREF(tmp_ass_subvalue_34);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_34:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_34 = par_ufunc_db;
        tmp_expression_value_347 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_347 == NULL)) {
            tmp_expression_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_34);

            exception_lineno = 468;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_347, mod_consts[189]);
        if (tmp_ass_subscript_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_34);

            exception_lineno = 468;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        Py_DECREF(tmp_ass_subscript_34);
        Py_DECREF(tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_348;
        CHECK_OBJECT(var_cmathimpl);
        tmp_expression_value_348 = var_cmathimpl;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_348, mod_consts[190]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arcsin_impl == NULL);
        var_arcsin_impl = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_expression_value_349;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        PyObject *tmp_expression_value_351;
        tmp_dict_key_35 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_349 = var_npyfuncs;
        tmp_dict_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_349, mod_consts[191]);
        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_35 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_350;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));
            tmp_dict_key_35 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_350 = var_npyfuncs;
            tmp_dict_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_350, mod_consts[191]);
            if (tmp_dict_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_35;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));
            tmp_dict_key_35 = mod_consts[39];
            CHECK_OBJECT(var_arcsin_impl);
            tmp_dict_value_35 = var_arcsin_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_35, tmp_dict_key_35, tmp_dict_value_35);
            assert(!(tmp_res != 0));
            tmp_dict_key_35 = mod_consts[41];
            CHECK_OBJECT(var_arcsin_impl);
            tmp_dict_value_35 = var_arcsin_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_35, tmp_dict_key_35, tmp_dict_value_35);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_35;
        // Exception handling pass through code for dict_build:
        dict_build_exception_35:;
        Py_DECREF(tmp_ass_subvalue_35);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_35:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_35 = par_ufunc_db;
        tmp_expression_value_351 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_351 == NULL)) {
            tmp_expression_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_35);

            exception_lineno = 477;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_351, mod_consts[192]);
        if (tmp_ass_subscript_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_35);

            exception_lineno = 477;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        Py_DECREF(tmp_ass_subscript_35);
        Py_DECREF(tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_expression_value_352;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        PyObject *tmp_expression_value_356;
        tmp_dict_key_36 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_352 = var_npyfuncs;
        tmp_dict_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_352, mod_consts[193]);
        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_36 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_353;
            PyObject *tmp_expression_value_354;
            PyObject *tmp_expression_value_355;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));
            tmp_dict_key_36 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_353 = var_npyfuncs;
            tmp_dict_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_353, mod_consts[193]);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_36;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));
            tmp_dict_key_36 = mod_consts[39];
            CHECK_OBJECT(var_cmathimpl);
            tmp_expression_value_354 = var_cmathimpl;
            tmp_dict_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_354, mod_consts[194]);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_36;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));
            tmp_dict_key_36 = mod_consts[41];
            CHECK_OBJECT(var_cmathimpl);
            tmp_expression_value_355 = var_cmathimpl;
            tmp_dict_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_355, mod_consts[194]);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_36;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_36;
        // Exception handling pass through code for dict_build:
        dict_build_exception_36:;
        Py_DECREF(tmp_ass_subvalue_36);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_36:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_36 = par_ufunc_db;
        tmp_expression_value_356 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_356 == NULL)) {
            tmp_expression_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_36);

            exception_lineno = 484;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_356, mod_consts[195]);
        if (tmp_ass_subscript_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_36);

            exception_lineno = 484;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        Py_DECREF(tmp_ass_subscript_36);
        Py_DECREF(tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_357;
        CHECK_OBJECT(var_cmathimpl);
        tmp_expression_value_357 = var_cmathimpl;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_357, mod_consts[196]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arctan_impl == NULL);
        var_arctan_impl = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_expression_value_358;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        PyObject *tmp_expression_value_360;
        tmp_dict_key_37 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_358 = var_npyfuncs;
        tmp_dict_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_358, mod_consts[197]);
        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_37 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_359;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));
            tmp_dict_key_37 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_359 = var_npyfuncs;
            tmp_dict_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_359, mod_consts[197]);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_37;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));
            tmp_dict_key_37 = mod_consts[39];
            CHECK_OBJECT(var_arctan_impl);
            tmp_dict_value_37 = var_arctan_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_37, tmp_dict_key_37, tmp_dict_value_37);
            assert(!(tmp_res != 0));
            tmp_dict_key_37 = mod_consts[41];
            CHECK_OBJECT(var_arctan_impl);
            tmp_dict_value_37 = var_arctan_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_37, tmp_dict_key_37, tmp_dict_value_37);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_37;
        // Exception handling pass through code for dict_build:
        dict_build_exception_37:;
        Py_DECREF(tmp_ass_subvalue_37);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_37:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_37 = par_ufunc_db;
        tmp_expression_value_360 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_360 == NULL)) {
            tmp_expression_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_37);

            exception_lineno = 493;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_360, mod_consts[198]);
        if (tmp_ass_subscript_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_37);

            exception_lineno = 493;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        Py_DECREF(tmp_ass_subscript_37);
        Py_DECREF(tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_expression_value_361;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        PyObject *tmp_expression_value_363;
        tmp_dict_key_38 = mod_consts[71];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_361 = var_npyfuncs;
        tmp_dict_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_361, mod_consts[199]);
        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_38 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_362;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));
            tmp_dict_key_38 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_362 = var_npyfuncs;
            tmp_dict_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_362, mod_consts[199]);
            if (tmp_dict_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_38;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_38;
        // Exception handling pass through code for dict_build:
        dict_build_exception_38:;
        Py_DECREF(tmp_ass_subvalue_38);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_38:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_38 = par_ufunc_db;
        tmp_expression_value_363 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_363 == NULL)) {
            tmp_expression_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_38);

            exception_lineno = 500;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_363, mod_consts[200]);
        if (tmp_ass_subscript_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_38);

            exception_lineno = 500;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        Py_DECREF(tmp_ass_subscript_38);
        Py_DECREF(tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_expression_value_364;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        PyObject *tmp_expression_value_366;
        tmp_dict_key_39 = mod_consts[71];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_364 = var_npyfuncs;
        tmp_dict_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_364, mod_consts[201]);
        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_39 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_365;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));
            tmp_dict_key_39 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_365 = var_npyfuncs;
            tmp_dict_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_365, mod_consts[201]);
            if (tmp_dict_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_39;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_39;
        // Exception handling pass through code for dict_build:
        dict_build_exception_39:;
        Py_DECREF(tmp_ass_subvalue_39);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_39:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_39 = par_ufunc_db;
        tmp_expression_value_366 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_366 == NULL)) {
            tmp_expression_value_366 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_39);

            exception_lineno = 505;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_366, mod_consts[202]);
        if (tmp_ass_subscript_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_39);

            exception_lineno = 505;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        Py_DECREF(tmp_ass_subscript_39);
        Py_DECREF(tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_expression_value_367;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        PyObject *tmp_expression_value_371;
        tmp_dict_key_40 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_367 = var_npyfuncs;
        tmp_dict_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_367, mod_consts[203]);
        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_40 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_368;
            PyObject *tmp_expression_value_369;
            PyObject *tmp_expression_value_370;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));
            tmp_dict_key_40 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_368 = var_npyfuncs;
            tmp_dict_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_368, mod_consts[203]);
            if (tmp_dict_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 512;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_40;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));
            tmp_dict_key_40 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_369 = var_npyfuncs;
            tmp_dict_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_369, mod_consts[204]);
            if (tmp_dict_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 513;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_40;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));
            tmp_dict_key_40 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_370 = var_npyfuncs;
            tmp_dict_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_370, mod_consts[204]);
            if (tmp_dict_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_40;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_40;
        // Exception handling pass through code for dict_build:
        dict_build_exception_40:;
        Py_DECREF(tmp_ass_subvalue_40);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_40:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_40 = par_ufunc_db;
        tmp_expression_value_371 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_371 == NULL)) {
            tmp_expression_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_40);

            exception_lineno = 510;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_371, mod_consts[205]);
        if (tmp_ass_subscript_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_40);

            exception_lineno = 510;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        Py_DECREF(tmp_ass_subscript_40);
        Py_DECREF(tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_expression_value_372;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        PyObject *tmp_expression_value_376;
        tmp_dict_key_41 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_372 = var_npyfuncs;
        tmp_dict_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_372, mod_consts[206]);
        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_41 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_373;
            PyObject *tmp_expression_value_374;
            PyObject *tmp_expression_value_375;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));
            tmp_dict_key_41 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_373 = var_npyfuncs;
            tmp_dict_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_373, mod_consts[206]);
            if (tmp_dict_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 519;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_41;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));
            tmp_dict_key_41 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_374 = var_npyfuncs;
            tmp_dict_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_374, mod_consts[207]);
            if (tmp_dict_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_41;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));
            tmp_dict_key_41 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_375 = var_npyfuncs;
            tmp_dict_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_375, mod_consts[207]);
            if (tmp_dict_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_41;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_41;
        // Exception handling pass through code for dict_build:
        dict_build_exception_41:;
        Py_DECREF(tmp_ass_subvalue_41);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_41:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_41 = par_ufunc_db;
        tmp_expression_value_376 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_376 == NULL)) {
            tmp_expression_value_376 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_41);

            exception_lineno = 517;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_376, mod_consts[208]);
        if (tmp_ass_subscript_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_41);

            exception_lineno = 517;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        Py_DECREF(tmp_ass_subscript_41);
        Py_DECREF(tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_42;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_expression_value_377;
        PyObject *tmp_ass_subscribed_42;
        PyObject *tmp_ass_subscript_42;
        PyObject *tmp_expression_value_381;
        tmp_dict_key_42 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_377 = var_npyfuncs;
        tmp_dict_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_377, mod_consts[209]);
        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_42 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_378;
            PyObject *tmp_expression_value_379;
            PyObject *tmp_expression_value_380;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));
            tmp_dict_key_42 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_378 = var_npyfuncs;
            tmp_dict_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_378, mod_consts[209]);
            if (tmp_dict_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_42;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));
            tmp_dict_key_42 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_379 = var_npyfuncs;
            tmp_dict_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_379, mod_consts[210]);
            if (tmp_dict_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_42;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));
            tmp_dict_key_42 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_380 = var_npyfuncs;
            tmp_dict_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_380, mod_consts[210]);
            if (tmp_dict_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_42;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_42;
        // Exception handling pass through code for dict_build:
        dict_build_exception_42:;
        Py_DECREF(tmp_ass_subvalue_42);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_42:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_42 = par_ufunc_db;
        tmp_expression_value_381 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_381 == NULL)) {
            tmp_expression_value_381 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_42);

            exception_lineno = 524;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_381, mod_consts[211]);
        if (tmp_ass_subscript_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_42);

            exception_lineno = 524;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
        Py_DECREF(tmp_ass_subscript_42);
        Py_DECREF(tmp_ass_subvalue_42);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_382;
        CHECK_OBJECT(var_cmathimpl);
        tmp_expression_value_382 = var_cmathimpl;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_382, mod_consts[212]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arcsinh_impl == NULL);
        var_arcsinh_impl = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_43;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        PyObject *tmp_expression_value_383;
        PyObject *tmp_ass_subscribed_43;
        PyObject *tmp_ass_subscript_43;
        PyObject *tmp_expression_value_385;
        tmp_dict_key_43 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_383 = var_npyfuncs;
        tmp_dict_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_383, mod_consts[213]);
        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_43 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_384;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_43, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));
            tmp_dict_key_43 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_384 = var_npyfuncs;
            tmp_dict_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_384, mod_consts[213]);
            if (tmp_dict_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 535;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_43;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_43, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));
            tmp_dict_key_43 = mod_consts[39];
            CHECK_OBJECT(var_arcsinh_impl);
            tmp_dict_value_43 = var_arcsinh_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_43, tmp_dict_key_43, tmp_dict_value_43);
            assert(!(tmp_res != 0));
            tmp_dict_key_43 = mod_consts[41];
            CHECK_OBJECT(var_arcsinh_impl);
            tmp_dict_value_43 = var_arcsinh_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_43, tmp_dict_key_43, tmp_dict_value_43);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_43;
        // Exception handling pass through code for dict_build:
        dict_build_exception_43:;
        Py_DECREF(tmp_ass_subvalue_43);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_43:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_43 = par_ufunc_db;
        tmp_expression_value_385 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_385 == NULL)) {
            tmp_expression_value_385 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_43);

            exception_lineno = 533;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_385, mod_consts[214]);
        if (tmp_ass_subscript_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_43);

            exception_lineno = 533;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
        Py_DECREF(tmp_ass_subscript_43);
        Py_DECREF(tmp_ass_subvalue_43);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_44;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        PyObject *tmp_expression_value_386;
        PyObject *tmp_ass_subscribed_44;
        PyObject *tmp_ass_subscript_44;
        PyObject *tmp_expression_value_390;
        tmp_dict_key_44 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_386 = var_npyfuncs;
        tmp_dict_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_386, mod_consts[215]);
        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_44 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_387;
            PyObject *tmp_expression_value_388;
            PyObject *tmp_expression_value_389;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));
            tmp_dict_key_44 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_387 = var_npyfuncs;
            tmp_dict_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_387, mod_consts[215]);
            if (tmp_dict_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_44;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));
            tmp_dict_key_44 = mod_consts[39];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_388 = var_npyfuncs;
            tmp_dict_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_388, mod_consts[216]);
            if (tmp_dict_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_44;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));
            tmp_dict_key_44 = mod_consts[41];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_389 = var_npyfuncs;
            tmp_dict_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_389, mod_consts[216]);
            if (tmp_dict_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_44;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_44;
        // Exception handling pass through code for dict_build:
        dict_build_exception_44:;
        Py_DECREF(tmp_ass_subvalue_44);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_44:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_44 = par_ufunc_db;
        tmp_expression_value_390 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_390 == NULL)) {
            tmp_expression_value_390 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_44);

            exception_lineno = 540;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_390, mod_consts[217]);
        if (tmp_ass_subscript_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_44);

            exception_lineno = 540;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
        Py_DECREF(tmp_ass_subscript_44);
        Py_DECREF(tmp_ass_subvalue_44);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_391;
        CHECK_OBJECT(var_cmathimpl);
        tmp_expression_value_391 = var_cmathimpl;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_391, mod_consts[218]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arctanh_impl == NULL);
        var_arctanh_impl = tmp_assign_source_11;
    }
    {
        PyObject *tmp_ass_subvalue_45;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        PyObject *tmp_expression_value_392;
        PyObject *tmp_ass_subscribed_45;
        PyObject *tmp_ass_subscript_45;
        PyObject *tmp_expression_value_394;
        tmp_dict_key_45 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_392 = var_npyfuncs;
        tmp_dict_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_392, mod_consts[219]);
        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_45 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_393;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_45, tmp_dict_key_45, tmp_dict_value_45);
            Py_DECREF(tmp_dict_value_45);
            assert(!(tmp_res != 0));
            tmp_dict_key_45 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_393 = var_npyfuncs;
            tmp_dict_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_393, mod_consts[219]);
            if (tmp_dict_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_45;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_45, tmp_dict_key_45, tmp_dict_value_45);
            Py_DECREF(tmp_dict_value_45);
            assert(!(tmp_res != 0));
            tmp_dict_key_45 = mod_consts[39];
            CHECK_OBJECT(var_arctanh_impl);
            tmp_dict_value_45 = var_arctanh_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_45, tmp_dict_key_45, tmp_dict_value_45);
            assert(!(tmp_res != 0));
            tmp_dict_key_45 = mod_consts[41];
            CHECK_OBJECT(var_arctanh_impl);
            tmp_dict_value_45 = var_arctanh_impl;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_45, tmp_dict_key_45, tmp_dict_value_45);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_45;
        // Exception handling pass through code for dict_build:
        dict_build_exception_45:;
        Py_DECREF(tmp_ass_subvalue_45);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_45:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_45 = par_ufunc_db;
        tmp_expression_value_394 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_394 == NULL)) {
            tmp_expression_value_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_394 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_45);

            exception_lineno = 549;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_394, mod_consts[220]);
        if (tmp_ass_subscript_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_45);

            exception_lineno = 549;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
        Py_DECREF(tmp_ass_subscript_45);
        Py_DECREF(tmp_ass_subvalue_45);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_46;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        PyObject *tmp_expression_value_395;
        PyObject *tmp_ass_subscribed_46;
        PyObject *tmp_ass_subscript_46;
        PyObject *tmp_expression_value_397;
        tmp_dict_key_46 = mod_consts[36];
        CHECK_OBJECT(var_mathimpl);
        tmp_expression_value_395 = var_mathimpl;
        tmp_dict_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_395, mod_consts[221]);
        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_46 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_396;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_46, tmp_dict_key_46, tmp_dict_value_46);
            Py_DECREF(tmp_dict_value_46);
            assert(!(tmp_res != 0));
            tmp_dict_key_46 = mod_consts[38];
            CHECK_OBJECT(var_mathimpl);
            tmp_expression_value_396 = var_mathimpl;
            tmp_dict_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_396, mod_consts[221]);
            if (tmp_dict_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_46;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_46, tmp_dict_key_46, tmp_dict_value_46);
            Py_DECREF(tmp_dict_value_46);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_46;
        // Exception handling pass through code for dict_build:
        dict_build_exception_46:;
        Py_DECREF(tmp_ass_subvalue_46);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_46:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_46 = par_ufunc_db;
        tmp_expression_value_397 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_397 == NULL)) {
            tmp_expression_value_397 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_46);

            exception_lineno = 556;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_397, mod_consts[222]);
        if (tmp_ass_subscript_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_46);

            exception_lineno = 556;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
        Py_DECREF(tmp_ass_subscript_46);
        Py_DECREF(tmp_ass_subvalue_46);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_47;
        PyObject *tmp_expression_value_398;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_399;
        PyObject *tmp_ass_subscribed_47;
        PyObject *tmp_ass_subscript_47;
        PyObject *tmp_expression_value_400;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_398 = par_ufunc_db;
        tmp_expression_value_399 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_399 == NULL)) {
            tmp_expression_value_399 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_399, mod_consts[222]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_398, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_47 = par_ufunc_db;
        tmp_expression_value_400 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_400 == NULL)) {
            tmp_expression_value_400 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_47);

            exception_lineno = 561;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_400, mod_consts[223]);
        if (tmp_ass_subscript_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_47);

            exception_lineno = 561;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
        Py_DECREF(tmp_ass_subscript_47);
        Py_DECREF(tmp_ass_subvalue_47);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_48;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        PyObject *tmp_expression_value_401;
        PyObject *tmp_ass_subscribed_48;
        PyObject *tmp_ass_subscript_48;
        PyObject *tmp_expression_value_403;
        tmp_dict_key_47 = mod_consts[36];
        CHECK_OBJECT(var_mathimpl);
        tmp_expression_value_401 = var_mathimpl;
        tmp_dict_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_401, mod_consts[224]);
        if (tmp_dict_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_48 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_402;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_48, tmp_dict_key_47, tmp_dict_value_47);
            Py_DECREF(tmp_dict_value_47);
            assert(!(tmp_res != 0));
            tmp_dict_key_47 = mod_consts[38];
            CHECK_OBJECT(var_mathimpl);
            tmp_expression_value_402 = var_mathimpl;
            tmp_dict_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_402, mod_consts[224]);
            if (tmp_dict_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_47;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_48, tmp_dict_key_47, tmp_dict_value_47);
            Py_DECREF(tmp_dict_value_47);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_47;
        // Exception handling pass through code for dict_build:
        dict_build_exception_47:;
        Py_DECREF(tmp_ass_subvalue_48);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_47:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_48 = par_ufunc_db;
        tmp_expression_value_403 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_403 == NULL)) {
            tmp_expression_value_403 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_48);

            exception_lineno = 563;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_403, mod_consts[225]);
        if (tmp_ass_subscript_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_48);

            exception_lineno = 563;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
        Py_DECREF(tmp_ass_subscript_48);
        Py_DECREF(tmp_ass_subvalue_48);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_49;
        PyObject *tmp_expression_value_404;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_405;
        PyObject *tmp_ass_subscribed_49;
        PyObject *tmp_ass_subscript_49;
        PyObject *tmp_expression_value_406;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_404 = par_ufunc_db;
        tmp_expression_value_405 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_405 == NULL)) {
            tmp_expression_value_405 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_405 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_405, mod_consts[225]);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_404, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_ass_subvalue_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_49 = par_ufunc_db;
        tmp_expression_value_406 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_406 == NULL)) {
            tmp_expression_value_406 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_49);

            exception_lineno = 568;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_406, mod_consts[226]);
        if (tmp_ass_subscript_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_49);

            exception_lineno = 568;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
        Py_DECREF(tmp_ass_subscript_49);
        Py_DECREF(tmp_ass_subvalue_49);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_50;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        PyObject *tmp_expression_value_407;
        PyObject *tmp_ass_subscribed_50;
        PyObject *tmp_ass_subscript_50;
        PyObject *tmp_expression_value_409;
        tmp_dict_key_48 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_407 = var_npyfuncs;
        tmp_dict_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_407, mod_consts[227]);
        if (tmp_dict_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_50 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_408;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_50, tmp_dict_key_48, tmp_dict_value_48);
            Py_DECREF(tmp_dict_value_48);
            assert(!(tmp_res != 0));
            tmp_dict_key_48 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_408 = var_npyfuncs;
            tmp_dict_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_408, mod_consts[227]);
            if (tmp_dict_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_48;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_50, tmp_dict_key_48, tmp_dict_value_48);
            Py_DECREF(tmp_dict_value_48);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_48;
        // Exception handling pass through code for dict_build:
        dict_build_exception_48:;
        Py_DECREF(tmp_ass_subvalue_50);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_48:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_50 = par_ufunc_db;
        tmp_expression_value_409 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_409 == NULL)) {
            tmp_expression_value_409 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_50);

            exception_lineno = 570;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_409, mod_consts[228]);
        if (tmp_ass_subscript_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_50);

            exception_lineno = 570;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
        Py_DECREF(tmp_ass_subscript_50);
        Py_DECREF(tmp_ass_subvalue_50);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_51;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        PyObject *tmp_expression_value_410;
        PyObject *tmp_ass_subscribed_51;
        PyObject *tmp_ass_subscript_51;
        PyObject *tmp_expression_value_412;
        tmp_dict_key_49 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_410 = var_npyfuncs;
        tmp_dict_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_410, mod_consts[229]);
        if (tmp_dict_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_51 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_411;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_51, tmp_dict_key_49, tmp_dict_value_49);
            Py_DECREF(tmp_dict_value_49);
            assert(!(tmp_res != 0));
            tmp_dict_key_49 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_411 = var_npyfuncs;
            tmp_dict_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_411, mod_consts[229]);
            if (tmp_dict_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_49;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_51, tmp_dict_key_49, tmp_dict_value_49);
            Py_DECREF(tmp_dict_value_49);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_49;
        // Exception handling pass through code for dict_build:
        dict_build_exception_49:;
        Py_DECREF(tmp_ass_subvalue_51);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_49:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_51 = par_ufunc_db;
        tmp_expression_value_412 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_412 == NULL)) {
            tmp_expression_value_412 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_412 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_51);

            exception_lineno = 575;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_412, mod_consts[230]);
        if (tmp_ass_subscript_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_51);

            exception_lineno = 575;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
        Py_DECREF(tmp_ass_subscript_51);
        Py_DECREF(tmp_ass_subvalue_51);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_52;
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        PyObject *tmp_expression_value_413;
        PyObject *tmp_ass_subscribed_52;
        PyObject *tmp_ass_subscript_52;
        PyObject *tmp_expression_value_415;
        tmp_dict_key_50 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_413 = var_npyfuncs;
        tmp_dict_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_413, mod_consts[231]);
        if (tmp_dict_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_52 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_414;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_52, tmp_dict_key_50, tmp_dict_value_50);
            Py_DECREF(tmp_dict_value_50);
            assert(!(tmp_res != 0));
            tmp_dict_key_50 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_414 = var_npyfuncs;
            tmp_dict_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_414, mod_consts[231]);
            if (tmp_dict_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 582;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_50;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_52, tmp_dict_key_50, tmp_dict_value_50);
            Py_DECREF(tmp_dict_value_50);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_50;
        // Exception handling pass through code for dict_build:
        dict_build_exception_50:;
        Py_DECREF(tmp_ass_subvalue_52);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_50:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_52 = par_ufunc_db;
        tmp_expression_value_415 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_415 == NULL)) {
            tmp_expression_value_415 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_52);

            exception_lineno = 580;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_415, mod_consts[232]);
        if (tmp_ass_subscript_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_52);

            exception_lineno = 580;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
        Py_DECREF(tmp_ass_subscript_52);
        Py_DECREF(tmp_ass_subvalue_52);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_53;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        PyObject *tmp_expression_value_416;
        PyObject *tmp_ass_subscribed_53;
        PyObject *tmp_ass_subscript_53;
        PyObject *tmp_expression_value_418;
        tmp_dict_key_51 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_416 = var_npyfuncs;
        tmp_dict_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_416, mod_consts[233]);
        if (tmp_dict_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_53 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_417;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_53, tmp_dict_key_51, tmp_dict_value_51);
            Py_DECREF(tmp_dict_value_51);
            assert(!(tmp_res != 0));
            tmp_dict_key_51 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_417 = var_npyfuncs;
            tmp_dict_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_417, mod_consts[233]);
            if (tmp_dict_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_51;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_53, tmp_dict_key_51, tmp_dict_value_51);
            Py_DECREF(tmp_dict_value_51);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_51;
        // Exception handling pass through code for dict_build:
        dict_build_exception_51:;
        Py_DECREF(tmp_ass_subvalue_53);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_51:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_53 = par_ufunc_db;
        tmp_expression_value_418 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_418 == NULL)) {
            tmp_expression_value_418 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_418 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_53);

            exception_lineno = 585;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_418, mod_consts[234]);
        if (tmp_ass_subscript_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_53);

            exception_lineno = 585;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
        Py_DECREF(tmp_ass_subscript_53);
        Py_DECREF(tmp_ass_subvalue_53);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_54;
        PyObject *tmp_dict_key_52;
        PyObject *tmp_dict_value_52;
        PyObject *tmp_expression_value_419;
        PyObject *tmp_ass_subscribed_54;
        PyObject *tmp_ass_subscript_54;
        PyObject *tmp_expression_value_434;
        tmp_dict_key_52 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_419 = var_numbers;
        tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_419, mod_consts[235]);
        if (tmp_dict_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_54 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_420;
            PyObject *tmp_expression_value_421;
            PyObject *tmp_expression_value_422;
            PyObject *tmp_expression_value_423;
            PyObject *tmp_expression_value_424;
            PyObject *tmp_expression_value_425;
            PyObject *tmp_expression_value_426;
            PyObject *tmp_expression_value_427;
            PyObject *tmp_expression_value_428;
            PyObject *tmp_expression_value_429;
            PyObject *tmp_expression_value_430;
            PyObject *tmp_expression_value_431;
            PyObject *tmp_expression_value_432;
            PyObject *tmp_expression_value_433;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[236];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_420 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_420, mod_consts[237]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 593;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[238];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_421 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_421, mod_consts[235]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[239];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_422 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_422, mod_consts[237]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 595;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[240];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_423 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_423, mod_consts[235]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[241];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_424 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_424, mod_consts[237]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[242];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_425 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_425, mod_consts[235]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[243];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_426 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_426, mod_consts[237]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 599;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[244];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_427 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_427, mod_consts[235]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[245];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_428 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_428, mod_consts[237]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[246];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_429 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_429, mod_consts[235]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[247];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_430 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_430, mod_consts[248]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 603;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[249];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_431 = var_numbers;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_431, mod_consts[248]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 604;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_432 = var_npyfuncs;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_432, mod_consts[251]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 605;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
            tmp_dict_key_52 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_433 = var_npyfuncs;
            tmp_dict_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_433, mod_consts[251]);
            if (tmp_dict_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_52;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_54, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_52;
        // Exception handling pass through code for dict_build:
        dict_build_exception_52:;
        Py_DECREF(tmp_ass_subvalue_54);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_52:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_54 = par_ufunc_db;
        tmp_expression_value_434 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_434 == NULL)) {
            tmp_expression_value_434 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_434 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_54);

            exception_lineno = 591;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_434, mod_consts[253]);
        if (tmp_ass_subscript_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_54);

            exception_lineno = 591;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
        Py_DECREF(tmp_ass_subscript_54);
        Py_DECREF(tmp_ass_subvalue_54);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_55;
        PyObject *tmp_dict_key_53;
        PyObject *tmp_dict_value_53;
        PyObject *tmp_expression_value_435;
        PyObject *tmp_ass_subscribed_55;
        PyObject *tmp_ass_subscript_55;
        PyObject *tmp_expression_value_450;
        tmp_dict_key_53 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_435 = var_numbers;
        tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_435, mod_consts[254]);
        if (tmp_dict_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_55 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_436;
            PyObject *tmp_expression_value_437;
            PyObject *tmp_expression_value_438;
            PyObject *tmp_expression_value_439;
            PyObject *tmp_expression_value_440;
            PyObject *tmp_expression_value_441;
            PyObject *tmp_expression_value_442;
            PyObject *tmp_expression_value_443;
            PyObject *tmp_expression_value_444;
            PyObject *tmp_expression_value_445;
            PyObject *tmp_expression_value_446;
            PyObject *tmp_expression_value_447;
            PyObject *tmp_expression_value_448;
            PyObject *tmp_expression_value_449;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[236];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_436 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_436, mod_consts[255]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[238];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_437 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_437, mod_consts[254]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 612;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[239];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_438 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_438, mod_consts[255]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[240];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_439 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_439, mod_consts[254]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[241];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_440 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_440, mod_consts[255]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[242];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_441 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_441, mod_consts[254]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[243];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_442 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_442, mod_consts[255]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[244];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_443 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_443, mod_consts[254]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[245];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_444 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_444, mod_consts[255]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[246];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_445 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_445, mod_consts[254]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[247];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_446 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_446, mod_consts[256]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[249];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_447 = var_numbers;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_447, mod_consts[256]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_448 = var_npyfuncs;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_448, mod_consts[257]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
            tmp_dict_key_53 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_449 = var_npyfuncs;
            tmp_dict_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_449, mod_consts[257]);
            if (tmp_dict_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_53;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_55, tmp_dict_key_53, tmp_dict_value_53);
            Py_DECREF(tmp_dict_value_53);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_53;
        // Exception handling pass through code for dict_build:
        dict_build_exception_53:;
        Py_DECREF(tmp_ass_subvalue_55);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_53:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_55 = par_ufunc_db;
        tmp_expression_value_450 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_450 == NULL)) {
            tmp_expression_value_450 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_450 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_55);

            exception_lineno = 609;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_450, mod_consts[258]);
        if (tmp_ass_subscript_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_55);

            exception_lineno = 609;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
        Py_DECREF(tmp_ass_subscript_55);
        Py_DECREF(tmp_ass_subvalue_55);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_56;
        PyObject *tmp_dict_key_54;
        PyObject *tmp_dict_value_54;
        PyObject *tmp_expression_value_451;
        PyObject *tmp_ass_subscribed_56;
        PyObject *tmp_ass_subscript_56;
        PyObject *tmp_expression_value_466;
        tmp_dict_key_54 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_451 = var_numbers;
        tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_451, mod_consts[259]);
        if (tmp_dict_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_56 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_452;
            PyObject *tmp_expression_value_453;
            PyObject *tmp_expression_value_454;
            PyObject *tmp_expression_value_455;
            PyObject *tmp_expression_value_456;
            PyObject *tmp_expression_value_457;
            PyObject *tmp_expression_value_458;
            PyObject *tmp_expression_value_459;
            PyObject *tmp_expression_value_460;
            PyObject *tmp_expression_value_461;
            PyObject *tmp_expression_value_462;
            PyObject *tmp_expression_value_463;
            PyObject *tmp_expression_value_464;
            PyObject *tmp_expression_value_465;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[236];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_452 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_452, mod_consts[260]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[238];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_453 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_453, mod_consts[259]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 630;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[239];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_454 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_454, mod_consts[260]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[240];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_455 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_455, mod_consts[259]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[241];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_456 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_456, mod_consts[260]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[242];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_457 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_457, mod_consts[259]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 634;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[243];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_458 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_458, mod_consts[260]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[244];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_459 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_459, mod_consts[259]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[245];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_460 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_460, mod_consts[260]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 637;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[246];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_461 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_461, mod_consts[259]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 638;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[247];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_462 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_462, mod_consts[261]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[249];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_463 = var_numbers;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_463, mod_consts[261]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_464 = var_npyfuncs;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_464, mod_consts[262]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
            tmp_dict_key_54 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_465 = var_npyfuncs;
            tmp_dict_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_465, mod_consts[262]);
            if (tmp_dict_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 642;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_54;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_56, tmp_dict_key_54, tmp_dict_value_54);
            Py_DECREF(tmp_dict_value_54);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_54;
        // Exception handling pass through code for dict_build:
        dict_build_exception_54:;
        Py_DECREF(tmp_ass_subvalue_56);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_54:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_56 = par_ufunc_db;
        tmp_expression_value_466 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_466 == NULL)) {
            tmp_expression_value_466 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_466 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_56);

            exception_lineno = 627;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_466, mod_consts[263]);
        if (tmp_ass_subscript_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_56);

            exception_lineno = 627;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
        Py_DECREF(tmp_ass_subscript_56);
        Py_DECREF(tmp_ass_subvalue_56);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_57;
        PyObject *tmp_dict_key_55;
        PyObject *tmp_dict_value_55;
        PyObject *tmp_expression_value_467;
        PyObject *tmp_ass_subscribed_57;
        PyObject *tmp_ass_subscript_57;
        PyObject *tmp_expression_value_482;
        tmp_dict_key_55 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_467 = var_numbers;
        tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_467, mod_consts[264]);
        if (tmp_dict_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_57 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_468;
            PyObject *tmp_expression_value_469;
            PyObject *tmp_expression_value_470;
            PyObject *tmp_expression_value_471;
            PyObject *tmp_expression_value_472;
            PyObject *tmp_expression_value_473;
            PyObject *tmp_expression_value_474;
            PyObject *tmp_expression_value_475;
            PyObject *tmp_expression_value_476;
            PyObject *tmp_expression_value_477;
            PyObject *tmp_expression_value_478;
            PyObject *tmp_expression_value_479;
            PyObject *tmp_expression_value_480;
            PyObject *tmp_expression_value_481;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[236];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_468 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_468, mod_consts[265]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 647;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[238];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_469 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_469, mod_consts[264]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[239];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_470 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_470, mod_consts[265]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[240];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_471 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_471, mod_consts[264]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[241];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_472 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_472, mod_consts[265]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[242];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_473 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_473, mod_consts[264]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 652;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[243];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_474 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_474, mod_consts[265]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 653;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[244];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_475 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_475, mod_consts[264]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 654;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[245];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_476 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_476, mod_consts[265]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 655;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[246];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_477 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_477, mod_consts[264]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 656;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[247];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_478 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_478, mod_consts[266]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[249];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_479 = var_numbers;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_479, mod_consts[266]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_480 = var_npyfuncs;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_480, mod_consts[267]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
            tmp_dict_key_55 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_481 = var_npyfuncs;
            tmp_dict_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_481, mod_consts[267]);
            if (tmp_dict_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 660;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_55;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_57, tmp_dict_key_55, tmp_dict_value_55);
            Py_DECREF(tmp_dict_value_55);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_55;
        // Exception handling pass through code for dict_build:
        dict_build_exception_55:;
        Py_DECREF(tmp_ass_subvalue_57);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_55:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_57 = par_ufunc_db;
        tmp_expression_value_482 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_482 == NULL)) {
            tmp_expression_value_482 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_482 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_57);

            exception_lineno = 645;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_482, mod_consts[268]);
        if (tmp_ass_subscript_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_57);

            exception_lineno = 645;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
        Py_DECREF(tmp_ass_subscript_57);
        Py_DECREF(tmp_ass_subvalue_57);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_58;
        PyObject *tmp_dict_key_56;
        PyObject *tmp_dict_value_56;
        PyObject *tmp_expression_value_483;
        PyObject *tmp_ass_subscribed_58;
        PyObject *tmp_ass_subscript_58;
        PyObject *tmp_expression_value_498;
        tmp_dict_key_56 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_483 = var_numbers;
        tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_483, mod_consts[269]);
        if (tmp_dict_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_58 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_484;
            PyObject *tmp_expression_value_485;
            PyObject *tmp_expression_value_486;
            PyObject *tmp_expression_value_487;
            PyObject *tmp_expression_value_488;
            PyObject *tmp_expression_value_489;
            PyObject *tmp_expression_value_490;
            PyObject *tmp_expression_value_491;
            PyObject *tmp_expression_value_492;
            PyObject *tmp_expression_value_493;
            PyObject *tmp_expression_value_494;
            PyObject *tmp_expression_value_495;
            PyObject *tmp_expression_value_496;
            PyObject *tmp_expression_value_497;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[236];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_484 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_484, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[238];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_485 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_485, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[239];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_486 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_486, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[240];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_487 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_487, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 668;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[241];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_488 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_488, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[242];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_489 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_489, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 670;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[243];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_490 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_490, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 671;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[244];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_491 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_491, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[245];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_492 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_492, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 673;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[246];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_493 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_493, mod_consts[269]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 674;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[247];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_494 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_494, mod_consts[270]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 675;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[249];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_495 = var_numbers;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_495, mod_consts[270]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 676;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_496 = var_npyfuncs;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_496, mod_consts[271]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
            tmp_dict_key_56 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_497 = var_npyfuncs;
            tmp_dict_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_497, mod_consts[271]);
            if (tmp_dict_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 678;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_56;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_58, tmp_dict_key_56, tmp_dict_value_56);
            Py_DECREF(tmp_dict_value_56);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_56;
        // Exception handling pass through code for dict_build:
        dict_build_exception_56:;
        Py_DECREF(tmp_ass_subvalue_58);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_56:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_58 = par_ufunc_db;
        tmp_expression_value_498 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_498 == NULL)) {
            tmp_expression_value_498 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_498 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_58);

            exception_lineno = 663;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_498, mod_consts[272]);
        if (tmp_ass_subscript_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_58);

            exception_lineno = 663;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
        Py_DECREF(tmp_ass_subscript_58);
        Py_DECREF(tmp_ass_subvalue_58);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_59;
        PyObject *tmp_dict_key_57;
        PyObject *tmp_dict_value_57;
        PyObject *tmp_expression_value_499;
        PyObject *tmp_ass_subscribed_59;
        PyObject *tmp_ass_subscript_59;
        PyObject *tmp_expression_value_514;
        tmp_dict_key_57 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_499 = var_numbers;
        tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_499, mod_consts[273]);
        if (tmp_dict_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_59 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_500;
            PyObject *tmp_expression_value_501;
            PyObject *tmp_expression_value_502;
            PyObject *tmp_expression_value_503;
            PyObject *tmp_expression_value_504;
            PyObject *tmp_expression_value_505;
            PyObject *tmp_expression_value_506;
            PyObject *tmp_expression_value_507;
            PyObject *tmp_expression_value_508;
            PyObject *tmp_expression_value_509;
            PyObject *tmp_expression_value_510;
            PyObject *tmp_expression_value_511;
            PyObject *tmp_expression_value_512;
            PyObject *tmp_expression_value_513;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[236];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_500 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_500, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 683;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[238];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_501 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_501, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 684;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[239];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_502 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_502, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 685;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[240];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_503 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_503, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 686;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[241];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_504 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_504, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 687;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[242];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_505 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_505, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 688;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[243];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_506 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_506, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 689;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[244];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_507 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_507, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 690;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[245];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_508 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_508, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 691;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[246];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_509 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_509, mod_consts[273]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 692;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[247];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_510 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_510, mod_consts[274]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 693;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[249];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_511 = var_numbers;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_511, mod_consts[274]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 694;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_512 = var_npyfuncs;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_512, mod_consts[275]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 695;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
            tmp_dict_key_57 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_513 = var_npyfuncs;
            tmp_dict_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_513, mod_consts[275]);
            if (tmp_dict_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 696;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_57;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_59, tmp_dict_key_57, tmp_dict_value_57);
            Py_DECREF(tmp_dict_value_57);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_57;
        // Exception handling pass through code for dict_build:
        dict_build_exception_57:;
        Py_DECREF(tmp_ass_subvalue_59);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_57:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_59 = par_ufunc_db;
        tmp_expression_value_514 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_514 == NULL)) {
            tmp_expression_value_514 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_514 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_59);

            exception_lineno = 681;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_514, mod_consts[276]);
        if (tmp_ass_subscript_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_59);

            exception_lineno = 681;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
        Py_DECREF(tmp_ass_subscript_59);
        Py_DECREF(tmp_ass_subvalue_59);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_60;
        PyObject *tmp_dict_key_58;
        PyObject *tmp_dict_value_58;
        PyObject *tmp_expression_value_515;
        PyObject *tmp_ass_subscribed_60;
        PyObject *tmp_ass_subscript_60;
        PyObject *tmp_expression_value_530;
        tmp_dict_key_58 = mod_consts[58];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_515 = var_npyfuncs;
        tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_515, mod_consts[277]);
        if (tmp_dict_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_60 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_516;
            PyObject *tmp_expression_value_517;
            PyObject *tmp_expression_value_518;
            PyObject *tmp_expression_value_519;
            PyObject *tmp_expression_value_520;
            PyObject *tmp_expression_value_521;
            PyObject *tmp_expression_value_522;
            PyObject *tmp_expression_value_523;
            PyObject *tmp_expression_value_524;
            PyObject *tmp_expression_value_525;
            PyObject *tmp_expression_value_526;
            PyObject *tmp_expression_value_527;
            PyObject *tmp_expression_value_528;
            PyObject *tmp_expression_value_529;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[236];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_516 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_516, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 701;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[238];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_517 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_517, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 702;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[239];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_518 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_518, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 703;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[240];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_519 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_519, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 704;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[241];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_520 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_520, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 705;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[242];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_521 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_521, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[243];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_522 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_522, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[244];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_523 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_523, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 708;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[245];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_524 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_524, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 709;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[246];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_525 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_525, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 710;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[247];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_526 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_526, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 711;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[249];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_527 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_527, mod_consts[277]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_528 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_528, mod_consts[278]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 713;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
            tmp_dict_key_58 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_529 = var_npyfuncs;
            tmp_dict_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_529, mod_consts[278]);
            if (tmp_dict_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 714;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_58;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_60, tmp_dict_key_58, tmp_dict_value_58);
            Py_DECREF(tmp_dict_value_58);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_58;
        // Exception handling pass through code for dict_build:
        dict_build_exception_58:;
        Py_DECREF(tmp_ass_subvalue_60);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_58:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_60 = par_ufunc_db;
        tmp_expression_value_530 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_530 == NULL)) {
            tmp_expression_value_530 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_530 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_60);

            exception_lineno = 699;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_530, mod_consts[279]);
        if (tmp_ass_subscript_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_60);

            exception_lineno = 699;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
        Py_DECREF(tmp_ass_subscript_60);
        Py_DECREF(tmp_ass_subvalue_60);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_61;
        PyObject *tmp_dict_key_59;
        PyObject *tmp_dict_value_59;
        PyObject *tmp_expression_value_531;
        PyObject *tmp_ass_subscribed_61;
        PyObject *tmp_ass_subscript_61;
        PyObject *tmp_expression_value_546;
        tmp_dict_key_59 = mod_consts[58];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_531 = var_npyfuncs;
        tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_531, mod_consts[280]);
        if (tmp_dict_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_61 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_532;
            PyObject *tmp_expression_value_533;
            PyObject *tmp_expression_value_534;
            PyObject *tmp_expression_value_535;
            PyObject *tmp_expression_value_536;
            PyObject *tmp_expression_value_537;
            PyObject *tmp_expression_value_538;
            PyObject *tmp_expression_value_539;
            PyObject *tmp_expression_value_540;
            PyObject *tmp_expression_value_541;
            PyObject *tmp_expression_value_542;
            PyObject *tmp_expression_value_543;
            PyObject *tmp_expression_value_544;
            PyObject *tmp_expression_value_545;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[236];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_532 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_532, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 719;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[238];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_533 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_533, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 720;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[239];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_534 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_534, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 721;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[240];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_535 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_535, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 722;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[241];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_536 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_536, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 723;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[242];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_537 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_537, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 724;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[243];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_538 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_538, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 725;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[244];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_539 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_539, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[245];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_540 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_540, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[246];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_541 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_541, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 728;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[247];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_542 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_542, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 729;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[249];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_543 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_543, mod_consts[280]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 730;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_544 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_544, mod_consts[281]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 731;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
            tmp_dict_key_59 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_545 = var_npyfuncs;
            tmp_dict_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_545, mod_consts[281]);
            if (tmp_dict_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 732;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_59;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_61, tmp_dict_key_59, tmp_dict_value_59);
            Py_DECREF(tmp_dict_value_59);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_59;
        // Exception handling pass through code for dict_build:
        dict_build_exception_59:;
        Py_DECREF(tmp_ass_subvalue_61);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_59:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_61 = par_ufunc_db;
        tmp_expression_value_546 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_546 == NULL)) {
            tmp_expression_value_546 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_546 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_61);

            exception_lineno = 717;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_546, mod_consts[282]);
        if (tmp_ass_subscript_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_61);

            exception_lineno = 717;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
        Py_DECREF(tmp_ass_subscript_61);
        Py_DECREF(tmp_ass_subvalue_61);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_62;
        PyObject *tmp_dict_key_60;
        PyObject *tmp_dict_value_60;
        PyObject *tmp_expression_value_547;
        PyObject *tmp_ass_subscribed_62;
        PyObject *tmp_ass_subscript_62;
        PyObject *tmp_expression_value_562;
        tmp_dict_key_60 = mod_consts[58];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_547 = var_npyfuncs;
        tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_547, mod_consts[283]);
        if (tmp_dict_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_62 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_548;
            PyObject *tmp_expression_value_549;
            PyObject *tmp_expression_value_550;
            PyObject *tmp_expression_value_551;
            PyObject *tmp_expression_value_552;
            PyObject *tmp_expression_value_553;
            PyObject *tmp_expression_value_554;
            PyObject *tmp_expression_value_555;
            PyObject *tmp_expression_value_556;
            PyObject *tmp_expression_value_557;
            PyObject *tmp_expression_value_558;
            PyObject *tmp_expression_value_559;
            PyObject *tmp_expression_value_560;
            PyObject *tmp_expression_value_561;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[236];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_548 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_548, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 737;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[238];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_549 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_549, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 738;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[239];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_550 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_550, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 739;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[240];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_551 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_551, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 740;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[241];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_552 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_552, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 741;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[242];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_553 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_553, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 742;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[243];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_554 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_554, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 743;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[244];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_555 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_555, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 744;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[245];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_556 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_556, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 745;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[246];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_557 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_557, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[247];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_558 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_558, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 747;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[249];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_559 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_559, mod_consts[283]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 748;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[250];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_560 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_560, mod_consts[284]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 749;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
            tmp_dict_key_60 = mod_consts[252];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_561 = var_npyfuncs;
            tmp_dict_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_561, mod_consts[284]);
            if (tmp_dict_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 750;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_60;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_62, tmp_dict_key_60, tmp_dict_value_60);
            Py_DECREF(tmp_dict_value_60);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_60;
        // Exception handling pass through code for dict_build:
        dict_build_exception_60:;
        Py_DECREF(tmp_ass_subvalue_62);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_60:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_62 = par_ufunc_db;
        tmp_expression_value_562 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_562 == NULL)) {
            tmp_expression_value_562 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_562 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_62);

            exception_lineno = 735;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_562, mod_consts[285]);
        if (tmp_ass_subscript_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_62);

            exception_lineno = 735;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
        Py_DECREF(tmp_ass_subscript_62);
        Py_DECREF(tmp_ass_subvalue_62);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_63;
        PyObject *tmp_dict_key_61;
        PyObject *tmp_dict_value_61;
        PyObject *tmp_expression_value_563;
        PyObject *tmp_ass_subscribed_63;
        PyObject *tmp_ass_subscript_63;
        PyObject *tmp_expression_value_578;
        tmp_dict_key_61 = mod_consts[23];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_563 = var_npyfuncs;
        tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_563, mod_consts[286]);
        if (tmp_dict_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_63 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_564;
            PyObject *tmp_expression_value_565;
            PyObject *tmp_expression_value_566;
            PyObject *tmp_expression_value_567;
            PyObject *tmp_expression_value_568;
            PyObject *tmp_expression_value_569;
            PyObject *tmp_expression_value_570;
            PyObject *tmp_expression_value_571;
            PyObject *tmp_expression_value_572;
            PyObject *tmp_expression_value_573;
            PyObject *tmp_expression_value_574;
            PyObject *tmp_expression_value_575;
            PyObject *tmp_expression_value_576;
            PyObject *tmp_expression_value_577;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[287];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_564 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_564, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 755;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[288];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_565 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_565, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 756;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[289];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_566 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_566, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 757;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[290];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_567 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_567, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[291];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_568 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_568, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 759;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[292];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_569 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_569, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 760;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[293];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_570 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_570, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 761;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[294];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_571 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_571, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 762;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[295];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_572 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_572, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 763;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[296];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_573 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_573, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 764;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[297];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_574 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_574, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[298];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_575 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_575, mod_consts[286]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 766;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[299];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_576 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_576, mod_consts[300]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 767;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
            tmp_dict_key_61 = mod_consts[301];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_577 = var_npyfuncs;
            tmp_dict_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_577, mod_consts[300]);
            if (tmp_dict_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 768;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_61;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_63, tmp_dict_key_61, tmp_dict_value_61);
            Py_DECREF(tmp_dict_value_61);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_61;
        // Exception handling pass through code for dict_build:
        dict_build_exception_61:;
        Py_DECREF(tmp_ass_subvalue_63);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_61:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_63 = par_ufunc_db;
        tmp_expression_value_578 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_578 == NULL)) {
            tmp_expression_value_578 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_578 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_63);

            exception_lineno = 753;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_578, mod_consts[302]);
        if (tmp_ass_subscript_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_63);

            exception_lineno = 753;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
        Py_DECREF(tmp_ass_subscript_63);
        Py_DECREF(tmp_ass_subvalue_63);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_64;
        PyObject *tmp_dict_key_62;
        PyObject *tmp_dict_value_62;
        PyObject *tmp_expression_value_579;
        PyObject *tmp_ass_subscribed_64;
        PyObject *tmp_ass_subscript_64;
        PyObject *tmp_expression_value_594;
        tmp_dict_key_62 = mod_consts[58];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_579 = var_npyfuncs;
        tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_579, mod_consts[280]);
        if (tmp_dict_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_64 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_580;
            PyObject *tmp_expression_value_581;
            PyObject *tmp_expression_value_582;
            PyObject *tmp_expression_value_583;
            PyObject *tmp_expression_value_584;
            PyObject *tmp_expression_value_585;
            PyObject *tmp_expression_value_586;
            PyObject *tmp_expression_value_587;
            PyObject *tmp_expression_value_588;
            PyObject *tmp_expression_value_589;
            PyObject *tmp_expression_value_590;
            PyObject *tmp_expression_value_591;
            PyObject *tmp_expression_value_592;
            PyObject *tmp_expression_value_593;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[60];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_580 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_580, mod_consts[303]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 773;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_581 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_581, mod_consts[304]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_582 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_582, mod_consts[303]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_583 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_583, mod_consts[304]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 776;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_584 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_584, mod_consts[303]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 777;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_585 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_585, mod_consts[304]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_586 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_586, mod_consts[303]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 779;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_587 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_587, mod_consts[304]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 780;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_588 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_588, mod_consts[303]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 781;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_589 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_589, mod_consts[304]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 782;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_590 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_590, mod_consts[305]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 783;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_591 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_591, mod_consts[305]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 784;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_592 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_592, mod_consts[306]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 785;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
            tmp_dict_key_62 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_593 = var_npyfuncs;
            tmp_dict_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_593, mod_consts[306]);
            if (tmp_dict_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 786;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_62;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_64, tmp_dict_key_62, tmp_dict_value_62);
            Py_DECREF(tmp_dict_value_62);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_62;
        // Exception handling pass through code for dict_build:
        dict_build_exception_62:;
        Py_DECREF(tmp_ass_subvalue_64);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_62:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_64 = par_ufunc_db;
        tmp_expression_value_594 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_594 == NULL)) {
            tmp_expression_value_594 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_594 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_64);

            exception_lineno = 771;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_594, mod_consts[307]);
        if (tmp_ass_subscript_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_64);

            exception_lineno = 771;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
        Py_DECREF(tmp_ass_subscript_64);
        Py_DECREF(tmp_ass_subvalue_64);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_65;
        PyObject *tmp_dict_key_63;
        PyObject *tmp_dict_value_63;
        PyObject *tmp_expression_value_595;
        PyObject *tmp_ass_subscribed_65;
        PyObject *tmp_ass_subscript_65;
        PyObject *tmp_expression_value_610;
        tmp_dict_key_63 = mod_consts[58];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_595 = var_npyfuncs;
        tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_595, mod_consts[277]);
        if (tmp_dict_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_65 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_596;
            PyObject *tmp_expression_value_597;
            PyObject *tmp_expression_value_598;
            PyObject *tmp_expression_value_599;
            PyObject *tmp_expression_value_600;
            PyObject *tmp_expression_value_601;
            PyObject *tmp_expression_value_602;
            PyObject *tmp_expression_value_603;
            PyObject *tmp_expression_value_604;
            PyObject *tmp_expression_value_605;
            PyObject *tmp_expression_value_606;
            PyObject *tmp_expression_value_607;
            PyObject *tmp_expression_value_608;
            PyObject *tmp_expression_value_609;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[60];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_596 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_596, mod_consts[308]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_597 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_597, mod_consts[309]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 792;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_598 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_598, mod_consts[308]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 793;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_599 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_599, mod_consts[309]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 794;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_600 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_600, mod_consts[308]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 795;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_601 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_601, mod_consts[309]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 796;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_602 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_602, mod_consts[308]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 797;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_603 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_603, mod_consts[309]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 798;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_604 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_604, mod_consts[308]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 799;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_605 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_605, mod_consts[309]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 800;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_606 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_606, mod_consts[310]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 801;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_607 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_607, mod_consts[310]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 802;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_608 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_608, mod_consts[311]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 803;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
            tmp_dict_key_63 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_609 = var_npyfuncs;
            tmp_dict_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_609, mod_consts[311]);
            if (tmp_dict_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 804;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_63;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_65, tmp_dict_key_63, tmp_dict_value_63);
            Py_DECREF(tmp_dict_value_63);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_63;
        // Exception handling pass through code for dict_build:
        dict_build_exception_63:;
        Py_DECREF(tmp_ass_subvalue_65);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_63:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_65 = par_ufunc_db;
        tmp_expression_value_610 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_610 == NULL)) {
            tmp_expression_value_610 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_610 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_65);

            exception_lineno = 789;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_610, mod_consts[312]);
        if (tmp_ass_subscript_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_65);

            exception_lineno = 789;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
        Py_DECREF(tmp_ass_subscript_65);
        Py_DECREF(tmp_ass_subvalue_65);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_66;
        PyObject *tmp_dict_key_64;
        PyObject *tmp_dict_value_64;
        PyObject *tmp_expression_value_611;
        PyObject *tmp_ass_subscribed_66;
        PyObject *tmp_ass_subscript_66;
        PyObject *tmp_expression_value_626;
        tmp_dict_key_64 = mod_consts[58];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_611 = var_npyfuncs;
        tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_611, mod_consts[280]);
        if (tmp_dict_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 808;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_66 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_612;
            PyObject *tmp_expression_value_613;
            PyObject *tmp_expression_value_614;
            PyObject *tmp_expression_value_615;
            PyObject *tmp_expression_value_616;
            PyObject *tmp_expression_value_617;
            PyObject *tmp_expression_value_618;
            PyObject *tmp_expression_value_619;
            PyObject *tmp_expression_value_620;
            PyObject *tmp_expression_value_621;
            PyObject *tmp_expression_value_622;
            PyObject *tmp_expression_value_623;
            PyObject *tmp_expression_value_624;
            PyObject *tmp_expression_value_625;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[60];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_612 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_612, mod_consts[303]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 809;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_613 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_613, mod_consts[304]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 810;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_614 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_614, mod_consts[303]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 811;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_615 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_615, mod_consts[304]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 812;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_616 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_616, mod_consts[303]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 813;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_617 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_617, mod_consts[304]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 814;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_618 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_618, mod_consts[303]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 815;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_619 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_619, mod_consts[304]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 816;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_620 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_620, mod_consts[303]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 817;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_621 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_621, mod_consts[304]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 818;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_622 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_622, mod_consts[313]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 819;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_623 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_623, mod_consts[313]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 820;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_624 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_624, mod_consts[314]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 821;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
            tmp_dict_key_64 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_625 = var_npyfuncs;
            tmp_dict_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_625, mod_consts[314]);
            if (tmp_dict_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 822;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_64;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_66, tmp_dict_key_64, tmp_dict_value_64);
            Py_DECREF(tmp_dict_value_64);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_64;
        // Exception handling pass through code for dict_build:
        dict_build_exception_64:;
        Py_DECREF(tmp_ass_subvalue_66);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_64:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_66 = par_ufunc_db;
        tmp_expression_value_626 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_626 == NULL)) {
            tmp_expression_value_626 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_626 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_66);

            exception_lineno = 807;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_626, mod_consts[315]);
        if (tmp_ass_subscript_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_66);

            exception_lineno = 807;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
        Py_DECREF(tmp_ass_subscript_66);
        Py_DECREF(tmp_ass_subvalue_66);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 807;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_67;
        PyObject *tmp_dict_key_65;
        PyObject *tmp_dict_value_65;
        PyObject *tmp_expression_value_627;
        PyObject *tmp_ass_subscribed_67;
        PyObject *tmp_ass_subscript_67;
        PyObject *tmp_expression_value_642;
        tmp_dict_key_65 = mod_consts[58];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_627 = var_npyfuncs;
        tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_627, mod_consts[277]);
        if (tmp_dict_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 826;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_67 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_628;
            PyObject *tmp_expression_value_629;
            PyObject *tmp_expression_value_630;
            PyObject *tmp_expression_value_631;
            PyObject *tmp_expression_value_632;
            PyObject *tmp_expression_value_633;
            PyObject *tmp_expression_value_634;
            PyObject *tmp_expression_value_635;
            PyObject *tmp_expression_value_636;
            PyObject *tmp_expression_value_637;
            PyObject *tmp_expression_value_638;
            PyObject *tmp_expression_value_639;
            PyObject *tmp_expression_value_640;
            PyObject *tmp_expression_value_641;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[60];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_628 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_628, mod_consts[308]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 827;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[62];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_629 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_629, mod_consts[309]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 828;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[63];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_630 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_630, mod_consts[308]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 829;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[64];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_631 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_631, mod_consts[309]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 830;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[65];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_632 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_632, mod_consts[308]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[66];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_633 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_633, mod_consts[309]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 832;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[67];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_634 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_634, mod_consts[308]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 833;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[68];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_635 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_635, mod_consts[309]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 834;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[69];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_636 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_636, mod_consts[308]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 835;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[70];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_637 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_637, mod_consts[309]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 836;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[71];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_638 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_638, mod_consts[316]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 837;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_639 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_639, mod_consts[316]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 838;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[74];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_640 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_640, mod_consts[317]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 839;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
            tmp_dict_key_65 = mod_consts[76];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_641 = var_npyfuncs;
            tmp_dict_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_641, mod_consts[317]);
            if (tmp_dict_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 840;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_65;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_67, tmp_dict_key_65, tmp_dict_value_65);
            Py_DECREF(tmp_dict_value_65);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_65;
        // Exception handling pass through code for dict_build:
        dict_build_exception_65:;
        Py_DECREF(tmp_ass_subvalue_67);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_65:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_67 = par_ufunc_db;
        tmp_expression_value_642 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_642 == NULL)) {
            tmp_expression_value_642 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_642 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_67);

            exception_lineno = 825;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_642, mod_consts[318]);
        if (tmp_ass_subscript_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_67);

            exception_lineno = 825;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
        Py_DECREF(tmp_ass_subscript_67);
        Py_DECREF(tmp_ass_subvalue_67);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_68;
        PyObject *tmp_dict_key_66;
        PyObject *tmp_dict_value_66;
        PyObject *tmp_expression_value_643;
        PyObject *tmp_ass_subscribed_68;
        PyObject *tmp_ass_subscript_68;
        PyObject *tmp_expression_value_658;
        tmp_dict_key_66 = mod_consts[297];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_643 = var_npyfuncs;
        tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_643, mod_consts[319]);
        if (tmp_dict_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_68 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_644;
            PyObject *tmp_expression_value_645;
            PyObject *tmp_expression_value_646;
            PyObject *tmp_expression_value_647;
            PyObject *tmp_expression_value_648;
            PyObject *tmp_expression_value_649;
            PyObject *tmp_expression_value_650;
            PyObject *tmp_expression_value_651;
            PyObject *tmp_expression_value_652;
            PyObject *tmp_expression_value_653;
            PyObject *tmp_expression_value_654;
            PyObject *tmp_expression_value_655;
            PyObject *tmp_expression_value_656;
            PyObject *tmp_expression_value_657;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[298];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_644 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_644, mod_consts[319]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 846;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[299];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_645 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_645, mod_consts[320]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 847;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[301];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_646 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_646, mod_consts[320]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 848;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[287];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_647 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_647, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 850;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[288];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_648 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_648, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 851;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[289];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_649 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_649, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 853;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[290];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_650 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_650, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 854;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[291];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_651 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_651, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 856;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[292];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_652 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_652, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 857;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[293];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_653 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_653, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 859;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[294];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_654 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_654, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 860;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[295];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_655 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_655, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 862;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[296];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_656 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_656, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 863;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
            tmp_dict_key_66 = mod_consts[23];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_657 = var_npyfuncs;
            tmp_dict_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_657, mod_consts[321]);
            if (tmp_dict_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 865;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_66;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_68, tmp_dict_key_66, tmp_dict_value_66);
            Py_DECREF(tmp_dict_value_66);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_66;
        // Exception handling pass through code for dict_build:
        dict_build_exception_66:;
        Py_DECREF(tmp_ass_subvalue_68);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_66:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_68 = par_ufunc_db;
        tmp_expression_value_658 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_658 == NULL)) {
            tmp_expression_value_658 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_658 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_68);

            exception_lineno = 844;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_658, mod_consts[322]);
        if (tmp_ass_subscript_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_68);

            exception_lineno = 844;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
        Py_DECREF(tmp_ass_subscript_68);
        Py_DECREF(tmp_ass_subvalue_68);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 844;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_numpy_version);
        tmp_cmp_expr_left_2 = var_numpy_version;
        tmp_cmp_expr_right_2 = mod_consts[323];
        tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 868;
            type_description_1 = "oooooooooooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_659;
        PyObject *tmp_expression_value_660;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_661;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dict_key_67;
        PyObject *tmp_dict_value_67;
        PyObject *tmp_expression_value_662;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_660 = par_ufunc_db;
        tmp_expression_value_661 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_661 == NULL)) {
            tmp_expression_value_661 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_661 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_661, mod_consts[322]);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_659 = LOOKUP_SUBSCRIPT(tmp_expression_value_660, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_expression_value_659 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_659, mod_consts[324]);
        Py_DECREF(tmp_expression_value_659);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_67 = mod_consts[20];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_662 = var_npyfuncs;
        tmp_dict_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_662, mod_consts[19]);
        if (tmp_dict_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 870;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_663;
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_67, tmp_dict_value_67);
            Py_DECREF(tmp_dict_value_67);
            assert(!(tmp_res != 0));
            tmp_dict_key_67 = mod_consts[18];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_663 = var_npyfuncs;
            tmp_dict_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_663, mod_consts[19]);
            if (tmp_dict_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 871;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_67;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_67, tmp_dict_value_67);
            Py_DECREF(tmp_dict_value_67);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_67;
        // Exception handling pass through code for dict_build:
        dict_build_exception_67:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_67:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 869;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_69;
        PyObject *tmp_dict_key_68;
        PyObject *tmp_dict_value_68;
        PyObject *tmp_expression_value_664;
        PyObject *tmp_ass_subscribed_69;
        PyObject *tmp_ass_subscript_69;
        PyObject *tmp_expression_value_679;
        tmp_dict_key_68 = mod_consts[297];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_664 = var_npyfuncs;
        tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_664, mod_consts[325]);
        if (tmp_dict_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_69 = _PyDict_NewPresized( 15 );
        {
            PyObject *tmp_expression_value_665;
            PyObject *tmp_expression_value_666;
            PyObject *tmp_expression_value_667;
            PyObject *tmp_expression_value_668;
            PyObject *tmp_expression_value_669;
            PyObject *tmp_expression_value_670;
            PyObject *tmp_expression_value_671;
            PyObject *tmp_expression_value_672;
            PyObject *tmp_expression_value_673;
            PyObject *tmp_expression_value_674;
            PyObject *tmp_expression_value_675;
            PyObject *tmp_expression_value_676;
            PyObject *tmp_expression_value_677;
            PyObject *tmp_expression_value_678;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[298];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_665 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_665, mod_consts[325]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 876;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[299];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_666 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_666, mod_consts[326]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 877;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[301];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_667 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_667, mod_consts[326]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 878;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[287];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_668 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_668, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 880;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[288];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_669 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_669, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 881;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[289];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_670 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_670, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 883;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[290];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_671 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_671, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 884;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[291];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_672 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_672, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 886;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[292];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_673 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_673, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 887;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[293];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_674 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_674, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 889;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[294];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_675 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_675, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 890;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[295];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_676 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_676, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 892;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[296];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_677 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_677, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 893;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
            tmp_dict_key_68 = mod_consts[23];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_678 = var_npyfuncs;
            tmp_dict_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_678, mod_consts[327]);
            if (tmp_dict_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 895;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_68;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_69, tmp_dict_key_68, tmp_dict_value_68);
            Py_DECREF(tmp_dict_value_68);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_68;
        // Exception handling pass through code for dict_build:
        dict_build_exception_68:;
        Py_DECREF(tmp_ass_subvalue_69);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_68:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_69 = par_ufunc_db;
        tmp_expression_value_679 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_679 == NULL)) {
            tmp_expression_value_679 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_679 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_69);

            exception_lineno = 874;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_679, mod_consts[328]);
        if (tmp_ass_subscript_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_69);

            exception_lineno = 874;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
        Py_DECREF(tmp_ass_subscript_69);
        Py_DECREF(tmp_ass_subvalue_69);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 874;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_numpy_version);
        tmp_cmp_expr_left_3 = var_numpy_version;
        tmp_cmp_expr_right_3 = mod_consts[323];
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 898;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_680;
        PyObject *tmp_expression_value_681;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_682;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dict_key_69;
        PyObject *tmp_dict_value_69;
        PyObject *tmp_expression_value_683;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_681 = par_ufunc_db;
        tmp_expression_value_682 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_682 == NULL)) {
            tmp_expression_value_682 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_682 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_682, mod_consts[328]);
        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_680 = LOOKUP_SUBSCRIPT(tmp_expression_value_681, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_expression_value_680 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_680, mod_consts[324]);
        Py_DECREF(tmp_expression_value_680);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_69 = mod_consts[20];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_683 = var_npyfuncs;
        tmp_dict_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_683, mod_consts[327]);
        if (tmp_dict_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 900;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_684;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_69, tmp_dict_value_69);
            Py_DECREF(tmp_dict_value_69);
            assert(!(tmp_res != 0));
            tmp_dict_key_69 = mod_consts[18];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_684 = var_npyfuncs;
            tmp_dict_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_684, mod_consts[327]);
            if (tmp_dict_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 901;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_69;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_69, tmp_dict_value_69);
            Py_DECREF(tmp_dict_value_69);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_69;
        // Exception handling pass through code for dict_build:
        dict_build_exception_69:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_69:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 899;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_70;
        PyObject *tmp_dict_key_70;
        PyObject *tmp_dict_value_70;
        PyObject *tmp_expression_value_685;
        PyObject *tmp_ass_subscribed_70;
        PyObject *tmp_ass_subscript_70;
        PyObject *tmp_expression_value_702;
        tmp_dict_key_70 = mod_consts[297];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_685 = var_npyfuncs;
        tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_685, mod_consts[329]);
        if (tmp_dict_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 905;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_70 = _PyDict_NewPresized( 17 );
        {
            PyObject *tmp_expression_value_686;
            PyObject *tmp_expression_value_687;
            PyObject *tmp_expression_value_688;
            PyObject *tmp_expression_value_689;
            PyObject *tmp_expression_value_690;
            PyObject *tmp_expression_value_691;
            PyObject *tmp_expression_value_692;
            PyObject *tmp_expression_value_693;
            PyObject *tmp_expression_value_694;
            PyObject *tmp_expression_value_695;
            PyObject *tmp_expression_value_696;
            PyObject *tmp_expression_value_697;
            PyObject *tmp_expression_value_698;
            PyObject *tmp_expression_value_699;
            PyObject *tmp_expression_value_700;
            PyObject *tmp_expression_value_701;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[298];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_686 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_686, mod_consts[329]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 906;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[299];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_687 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_687, mod_consts[330]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 907;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[301];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_688 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_688, mod_consts[330]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 908;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[287];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_689 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_689, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 910;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[288];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_690 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_690, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 911;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[289];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_691 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_691, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 913;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[290];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_692 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_692, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 914;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[291];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_693 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_693, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 916;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[292];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_694 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_694, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 917;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[293];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_695 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_695, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 919;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[294];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_696 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_696, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 920;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[295];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_697 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_697, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 922;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[296];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_698 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_698, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 923;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[23];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_699 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_699, mod_consts[331]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 925;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[18];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_700 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_700, mod_consts[332]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 927;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
            tmp_dict_key_70 = mod_consts[20];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_701 = var_npyfuncs;
            tmp_dict_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_701, mod_consts[332]);
            if (tmp_dict_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 928;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_70;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_70, tmp_dict_key_70, tmp_dict_value_70);
            Py_DECREF(tmp_dict_value_70);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_70;
        // Exception handling pass through code for dict_build:
        dict_build_exception_70:;
        Py_DECREF(tmp_ass_subvalue_70);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_70:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_70 = par_ufunc_db;
        tmp_expression_value_702 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_702 == NULL)) {
            tmp_expression_value_702 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_702 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_70);

            exception_lineno = 904;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_702, mod_consts[333]);
        if (tmp_ass_subscript_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_70);

            exception_lineno = 904;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
        Py_DECREF(tmp_ass_subscript_70);
        Py_DECREF(tmp_ass_subvalue_70);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 904;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_71;
        PyObject *tmp_dict_key_71;
        PyObject *tmp_dict_value_71;
        PyObject *tmp_expression_value_703;
        PyObject *tmp_ass_subscribed_71;
        PyObject *tmp_ass_subscript_71;
        PyObject *tmp_expression_value_705;
        tmp_dict_key_71 = mod_consts[297];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_703 = var_npyfuncs;
        tmp_dict_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_703, mod_consts[334]);
        if (tmp_dict_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_71 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_704;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_71, tmp_dict_key_71, tmp_dict_value_71);
            Py_DECREF(tmp_dict_value_71);
            assert(!(tmp_res != 0));
            tmp_dict_key_71 = mod_consts[298];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_704 = var_npyfuncs;
            tmp_dict_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_704, mod_consts[334]);
            if (tmp_dict_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 933;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_71;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_71, tmp_dict_key_71, tmp_dict_value_71);
            Py_DECREF(tmp_dict_value_71);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_71;
        // Exception handling pass through code for dict_build:
        dict_build_exception_71:;
        Py_DECREF(tmp_ass_subvalue_71);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_71:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_71 = par_ufunc_db;
        tmp_expression_value_705 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_705 == NULL)) {
            tmp_expression_value_705 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_705 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_71);

            exception_lineno = 931;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_705, mod_consts[335]);
        if (tmp_ass_subscript_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_71);

            exception_lineno = 931;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
        Py_DECREF(tmp_ass_subscript_71);
        Py_DECREF(tmp_ass_subvalue_71);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_72;
        PyObject *tmp_dict_key_72;
        PyObject *tmp_dict_value_72;
        PyObject *tmp_expression_value_706;
        PyObject *tmp_ass_subscribed_72;
        PyObject *tmp_ass_subscript_72;
        PyObject *tmp_expression_value_708;
        tmp_dict_key_72 = mod_consts[71];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_706 = var_npyfuncs;
        tmp_dict_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_706, mod_consts[336]);
        if (tmp_dict_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_72 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_707;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_72, tmp_dict_key_72, tmp_dict_value_72);
            Py_DECREF(tmp_dict_value_72);
            assert(!(tmp_res != 0));
            tmp_dict_key_72 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_707 = var_npyfuncs;
            tmp_dict_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_707, mod_consts[336]);
            if (tmp_dict_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 938;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_72;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_72, tmp_dict_key_72, tmp_dict_value_72);
            Py_DECREF(tmp_dict_value_72);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_72;
        // Exception handling pass through code for dict_build:
        dict_build_exception_72:;
        Py_DECREF(tmp_ass_subvalue_72);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_72:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_72 = par_ufunc_db;
        tmp_expression_value_708 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_708 == NULL)) {
            tmp_expression_value_708 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_708 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_72);

            exception_lineno = 936;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_708, mod_consts[337]);
        if (tmp_ass_subscript_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_72);

            exception_lineno = 936;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
        Py_DECREF(tmp_ass_subscript_72);
        Py_DECREF(tmp_ass_subvalue_72);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_73;
        PyObject *tmp_dict_key_73;
        PyObject *tmp_dict_value_73;
        PyObject *tmp_expression_value_709;
        PyObject *tmp_ass_subscribed_73;
        PyObject *tmp_ass_subscript_73;
        PyObject *tmp_expression_value_711;
        tmp_dict_key_73 = mod_consts[71];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_709 = var_npyfuncs;
        tmp_dict_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_709, mod_consts[338]);
        if (tmp_dict_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 942;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_73 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_710;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_73, tmp_dict_key_73, tmp_dict_value_73);
            Py_DECREF(tmp_dict_value_73);
            assert(!(tmp_res != 0));
            tmp_dict_key_73 = mod_consts[73];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_710 = var_npyfuncs;
            tmp_dict_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_710, mod_consts[338]);
            if (tmp_dict_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 943;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_73;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_73, tmp_dict_key_73, tmp_dict_value_73);
            Py_DECREF(tmp_dict_value_73);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_73;
        // Exception handling pass through code for dict_build:
        dict_build_exception_73:;
        Py_DECREF(tmp_ass_subvalue_73);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_73:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_73 = par_ufunc_db;
        tmp_expression_value_711 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_711 == NULL)) {
            tmp_expression_value_711 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_711 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_73);

            exception_lineno = 941;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_711, mod_consts[339]);
        if (tmp_ass_subscript_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_73);

            exception_lineno = 941;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
        Py_DECREF(tmp_ass_subscript_73);
        Py_DECREF(tmp_ass_subvalue_73);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 941;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_74;
        PyObject *tmp_dict_key_74;
        PyObject *tmp_dict_value_74;
        PyObject *tmp_expression_value_712;
        PyObject *tmp_ass_subscribed_74;
        PyObject *tmp_ass_subscript_74;
        PyObject *tmp_expression_value_714;
        tmp_dict_key_74 = mod_consts[36];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_712 = var_npyfuncs;
        tmp_dict_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_712, mod_consts[340]);
        if (tmp_dict_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_74 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_713;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_74, tmp_dict_key_74, tmp_dict_value_74);
            Py_DECREF(tmp_dict_value_74);
            assert(!(tmp_res != 0));
            tmp_dict_key_74 = mod_consts[38];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_713 = var_npyfuncs;
            tmp_dict_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_713, mod_consts[340]);
            if (tmp_dict_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 948;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_74;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_74, tmp_dict_key_74, tmp_dict_value_74);
            Py_DECREF(tmp_dict_value_74);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_74;
        // Exception handling pass through code for dict_build:
        dict_build_exception_74:;
        Py_DECREF(tmp_ass_subvalue_74);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_74:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_74 = par_ufunc_db;
        tmp_expression_value_714 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_714 == NULL)) {
            tmp_expression_value_714 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_714 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_74);

            exception_lineno = 946;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_714, mod_consts[341]);
        if (tmp_ass_subscript_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_74);

            exception_lineno = 946;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
        Py_DECREF(tmp_ass_subscript_74);
        Py_DECREF(tmp_ass_subvalue_74);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_75;
        PyObject *tmp_dict_key_75;
        PyObject *tmp_dict_value_75;
        PyObject *tmp_expression_value_715;
        PyObject *tmp_ass_subscribed_75;
        PyObject *tmp_ass_subscript_75;
        PyObject *tmp_expression_value_719;
        tmp_dict_key_75 = mod_consts[342];
        CHECK_OBJECT(var_npyfuncs);
        tmp_expression_value_715 = var_npyfuncs;
        tmp_dict_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_715, mod_consts[343]);
        if (tmp_dict_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_75 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_716;
            PyObject *tmp_expression_value_717;
            PyObject *tmp_expression_value_718;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_75, tmp_dict_key_75, tmp_dict_value_75);
            Py_DECREF(tmp_dict_value_75);
            assert(!(tmp_res != 0));
            tmp_dict_key_75 = mod_consts[344];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_716 = var_npyfuncs;
            tmp_dict_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_716, mod_consts[343]);
            if (tmp_dict_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 953;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_75;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_75, tmp_dict_key_75, tmp_dict_value_75);
            Py_DECREF(tmp_dict_value_75);
            assert(!(tmp_res != 0));
            tmp_dict_key_75 = mod_consts[345];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_717 = var_npyfuncs;
            tmp_dict_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_717, mod_consts[343]);
            if (tmp_dict_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 954;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_75;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_75, tmp_dict_key_75, tmp_dict_value_75);
            Py_DECREF(tmp_dict_value_75);
            assert(!(tmp_res != 0));
            tmp_dict_key_75 = mod_consts[346];
            CHECK_OBJECT(var_npyfuncs);
            tmp_expression_value_718 = var_npyfuncs;
            tmp_dict_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_718, mod_consts[343]);
            if (tmp_dict_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 955;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_75;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_75, tmp_dict_key_75, tmp_dict_value_75);
            Py_DECREF(tmp_dict_value_75);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_75;
        // Exception handling pass through code for dict_build:
        dict_build_exception_75:;
        Py_DECREF(tmp_ass_subvalue_75);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_75:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_75 = par_ufunc_db;
        tmp_expression_value_719 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_719 == NULL)) {
            tmp_expression_value_719 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_719 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_75);

            exception_lineno = 951;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_719, mod_consts[347]);
        if (tmp_ass_subscript_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_75);

            exception_lineno = 951;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
        Py_DECREF(tmp_ass_subscript_75);
        Py_DECREF(tmp_ass_subvalue_75);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 951;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_76;
        PyObject *tmp_dict_key_76;
        PyObject *tmp_dict_value_76;
        PyObject *tmp_expression_value_720;
        PyObject *tmp_ass_subscribed_76;
        PyObject *tmp_ass_subscript_76;
        PyObject *tmp_expression_value_731;
        tmp_dict_key_76 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_720 = var_numbers;
        tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_720, mod_consts[83]);
        if (tmp_dict_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_76 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_721;
            PyObject *tmp_expression_value_722;
            PyObject *tmp_expression_value_723;
            PyObject *tmp_expression_value_724;
            PyObject *tmp_expression_value_725;
            PyObject *tmp_expression_value_726;
            PyObject *tmp_expression_value_727;
            PyObject *tmp_expression_value_728;
            PyObject *tmp_expression_value_729;
            PyObject *tmp_expression_value_730;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[60];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_721 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_721, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 961;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_722 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_722, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_723 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_723, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 963;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_724 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_724, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 964;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_725 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_725, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 965;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_726 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_726, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 966;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_727 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_727, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 967;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_728 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_728, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 968;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_729 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_729, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 969;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
            tmp_dict_key_76 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_730 = var_numbers;
            tmp_dict_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_730, mod_consts[83]);
            if (tmp_dict_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 970;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_76;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_76, tmp_dict_key_76, tmp_dict_value_76);
            Py_DECREF(tmp_dict_value_76);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_76;
        // Exception handling pass through code for dict_build:
        dict_build_exception_76:;
        Py_DECREF(tmp_ass_subvalue_76);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_76:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_76 = par_ufunc_db;
        tmp_expression_value_731 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_731 == NULL)) {
            tmp_expression_value_731 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_731 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_76);

            exception_lineno = 959;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_731, mod_consts[348]);
        if (tmp_ass_subscript_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_76);

            exception_lineno = 959;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
        Py_DECREF(tmp_ass_subscript_76);
        Py_DECREF(tmp_ass_subvalue_76);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_77;
        PyObject *tmp_dict_key_77;
        PyObject *tmp_dict_value_77;
        PyObject *tmp_expression_value_732;
        PyObject *tmp_ass_subscribed_77;
        PyObject *tmp_ass_subscript_77;
        PyObject *tmp_expression_value_743;
        tmp_dict_key_77 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_732 = var_numbers;
        tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_732, mod_consts[59]);
        if (tmp_dict_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 974;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_77 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_733;
            PyObject *tmp_expression_value_734;
            PyObject *tmp_expression_value_735;
            PyObject *tmp_expression_value_736;
            PyObject *tmp_expression_value_737;
            PyObject *tmp_expression_value_738;
            PyObject *tmp_expression_value_739;
            PyObject *tmp_expression_value_740;
            PyObject *tmp_expression_value_741;
            PyObject *tmp_expression_value_742;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[60];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_733 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_733, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 975;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_734 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_734, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 976;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_735 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_735, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 977;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_736 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_736, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 978;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_737 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_737, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 979;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_738 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_738, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 980;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_739 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_739, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 981;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_740 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_740, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 982;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_741 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_741, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 983;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
            tmp_dict_key_77 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_742 = var_numbers;
            tmp_dict_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_742, mod_consts[59]);
            if (tmp_dict_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 984;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_77;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_77, tmp_dict_key_77, tmp_dict_value_77);
            Py_DECREF(tmp_dict_value_77);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_77;
        // Exception handling pass through code for dict_build:
        dict_build_exception_77:;
        Py_DECREF(tmp_ass_subvalue_77);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_77:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_77 = par_ufunc_db;
        tmp_expression_value_743 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_743 == NULL)) {
            tmp_expression_value_743 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_743 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_77);

            exception_lineno = 973;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_743, mod_consts[349]);
        if (tmp_ass_subscript_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_77);

            exception_lineno = 973;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
        Py_DECREF(tmp_ass_subscript_77);
        Py_DECREF(tmp_ass_subvalue_77);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 973;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_78;
        PyObject *tmp_dict_key_78;
        PyObject *tmp_dict_value_78;
        PyObject *tmp_expression_value_744;
        PyObject *tmp_ass_subscribed_78;
        PyObject *tmp_ass_subscript_78;
        PyObject *tmp_expression_value_755;
        tmp_dict_key_78 = mod_consts[58];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_744 = var_numbers;
        tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_744, mod_consts[78]);
        if (tmp_dict_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 988;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_78 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_745;
            PyObject *tmp_expression_value_746;
            PyObject *tmp_expression_value_747;
            PyObject *tmp_expression_value_748;
            PyObject *tmp_expression_value_749;
            PyObject *tmp_expression_value_750;
            PyObject *tmp_expression_value_751;
            PyObject *tmp_expression_value_752;
            PyObject *tmp_expression_value_753;
            PyObject *tmp_expression_value_754;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[60];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_745 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_745, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 989;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_746 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_746, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 990;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_747 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_747, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 991;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_748 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_748, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 992;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_749 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_749, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 993;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_750 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_750, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 994;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_751 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_751, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 995;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_752 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_752, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 996;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_753 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_753, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 997;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
            tmp_dict_key_78 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_754 = var_numbers;
            tmp_dict_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_754, mod_consts[78]);
            if (tmp_dict_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 998;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_78;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_78, tmp_dict_key_78, tmp_dict_value_78);
            Py_DECREF(tmp_dict_value_78);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_78;
        // Exception handling pass through code for dict_build:
        dict_build_exception_78:;
        Py_DECREF(tmp_ass_subvalue_78);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_78:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_78 = par_ufunc_db;
        tmp_expression_value_755 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_755 == NULL)) {
            tmp_expression_value_755 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_755 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_78);

            exception_lineno = 987;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_755, mod_consts[350]);
        if (tmp_ass_subscript_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_78);

            exception_lineno = 987;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
        Py_DECREF(tmp_ass_subscript_78);
        Py_DECREF(tmp_ass_subvalue_78);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 987;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_79;
        PyObject *tmp_dict_key_79;
        PyObject *tmp_dict_value_79;
        PyObject *tmp_expression_value_756;
        PyObject *tmp_ass_subscribed_79;
        PyObject *tmp_ass_subscript_79;
        PyObject *tmp_expression_value_767;
        tmp_dict_key_79 = mod_consts[23];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_756 = var_numbers;
        tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_756, mod_consts[24]);
        if (tmp_dict_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1002;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_79 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_757;
            PyObject *tmp_expression_value_758;
            PyObject *tmp_expression_value_759;
            PyObject *tmp_expression_value_760;
            PyObject *tmp_expression_value_761;
            PyObject *tmp_expression_value_762;
            PyObject *tmp_expression_value_763;
            PyObject *tmp_expression_value_764;
            PyObject *tmp_expression_value_765;
            PyObject *tmp_expression_value_766;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[25];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_757 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_757, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1003;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[27];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_758 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_758, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1004;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[28];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_759 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_759, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1005;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[29];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_760 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_760, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1006;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[30];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_761 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_761, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1007;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[31];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_762 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_762, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1008;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[32];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_763 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_763, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1009;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[33];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_764 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_764, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1010;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[34];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_765 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_765, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1011;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
            tmp_dict_key_79 = mod_consts[35];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_766 = var_numbers;
            tmp_dict_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_766, mod_consts[24]);
            if (tmp_dict_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1012;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_79;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_79, tmp_dict_key_79, tmp_dict_value_79);
            Py_DECREF(tmp_dict_value_79);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_79;
        // Exception handling pass through code for dict_build:
        dict_build_exception_79:;
        Py_DECREF(tmp_ass_subvalue_79);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_79:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_79 = par_ufunc_db;
        tmp_expression_value_767 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_767 == NULL)) {
            tmp_expression_value_767 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_767 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_79);

            exception_lineno = 1001;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_767, mod_consts[351]);
        if (tmp_ass_subscript_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_79);

            exception_lineno = 1001;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
        Py_DECREF(tmp_ass_subscript_79);
        Py_DECREF(tmp_ass_subvalue_79);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1001;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_80;
        PyObject *tmp_dict_key_80;
        PyObject *tmp_dict_value_80;
        PyObject *tmp_expression_value_768;
        PyObject *tmp_ass_subscribed_80;
        PyObject *tmp_ass_subscript_80;
        PyObject *tmp_expression_value_778;
        tmp_dict_key_80 = mod_consts[60];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_768 = var_numbers;
        tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_768, mod_consts[352]);
        if (tmp_dict_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1016;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_80 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_769;
            PyObject *tmp_expression_value_770;
            PyObject *tmp_expression_value_771;
            PyObject *tmp_expression_value_772;
            PyObject *tmp_expression_value_773;
            PyObject *tmp_expression_value_774;
            PyObject *tmp_expression_value_775;
            PyObject *tmp_expression_value_776;
            PyObject *tmp_expression_value_777;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_769 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_769, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1017;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_770 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_770, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1018;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_771 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_771, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1019;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_772 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_772, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1020;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_773 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_773, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1021;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_774 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_774, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1022;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_775 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_775, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1023;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_776 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_776, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1024;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
            tmp_dict_key_80 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_777 = var_numbers;
            tmp_dict_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_777, mod_consts[352]);
            if (tmp_dict_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1025;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_80;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_80, tmp_dict_key_80, tmp_dict_value_80);
            Py_DECREF(tmp_dict_value_80);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_80;
        // Exception handling pass through code for dict_build:
        dict_build_exception_80:;
        Py_DECREF(tmp_ass_subvalue_80);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_80:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_80 = par_ufunc_db;
        tmp_expression_value_778 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_778 == NULL)) {
            tmp_expression_value_778 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_778 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_80);

            exception_lineno = 1015;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_778, mod_consts[353]);
        if (tmp_ass_subscript_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_80);

            exception_lineno = 1015;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
        Py_DECREF(tmp_ass_subscript_80);
        Py_DECREF(tmp_ass_subvalue_80);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_81;
        PyObject *tmp_dict_key_81;
        PyObject *tmp_dict_value_81;
        PyObject *tmp_expression_value_779;
        PyObject *tmp_ass_subscribed_81;
        PyObject *tmp_ass_subscript_81;
        PyObject *tmp_expression_value_789;
        tmp_dict_key_81 = mod_consts[60];
        CHECK_OBJECT(var_numbers);
        tmp_expression_value_779 = var_numbers;
        tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_779, mod_consts[354]);
        if (tmp_dict_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1029;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_81 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_780;
            PyObject *tmp_expression_value_781;
            PyObject *tmp_expression_value_782;
            PyObject *tmp_expression_value_783;
            PyObject *tmp_expression_value_784;
            PyObject *tmp_expression_value_785;
            PyObject *tmp_expression_value_786;
            PyObject *tmp_expression_value_787;
            PyObject *tmp_expression_value_788;
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[62];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_780 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_780, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1030;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[63];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_781 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_781, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1031;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[64];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_782 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_782, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1032;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[65];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_783 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_783, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1033;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[66];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_784 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_784, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1034;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[67];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_785 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_785, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1035;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[68];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_786 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_786, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1036;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[69];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_787 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_787, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1037;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
            tmp_dict_key_81 = mod_consts[70];
            CHECK_OBJECT(var_numbers);
            tmp_expression_value_788 = var_numbers;
            tmp_dict_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_788, mod_consts[354]);
            if (tmp_dict_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1038;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_81;
            }
            tmp_res = PyDict_SetItem(tmp_ass_subvalue_81, tmp_dict_key_81, tmp_dict_value_81);
            Py_DECREF(tmp_dict_value_81);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_81;
        // Exception handling pass through code for dict_build:
        dict_build_exception_81:;
        Py_DECREF(tmp_ass_subvalue_81);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_81:;
        CHECK_OBJECT(par_ufunc_db);
        tmp_ass_subscribed_81 = par_ufunc_db;
        tmp_expression_value_789 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_789 == NULL)) {
            tmp_expression_value_789 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_789 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_81);

            exception_lineno = 1028;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_789, mod_consts[355]);
        if (tmp_ass_subscript_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_81);

            exception_lineno = 1028;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
        Py_DECREF(tmp_ass_subscript_81);
        Py_DECREF(tmp_ass_subvalue_81);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1028;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[6];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_numba$np$ufunc_db;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[356];
        tmp_level_value_4 = mod_consts[8];
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1042;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1042;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numba$np$ufunc_db,
                mod_consts[357],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[357]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1042;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_npdatetime == NULL);
        var_npdatetime = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_790;
        PyObject *tmp_expression_value_791;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_792;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dict_key_82;
        PyObject *tmp_dict_value_82;
        PyObject *tmp_expression_value_793;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_791 = par_ufunc_db;
        tmp_expression_value_792 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_792 == NULL)) {
            tmp_expression_value_792 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_792 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_792, mod_consts[42]);
        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_790 = LOOKUP_SUBSCRIPT(tmp_expression_value_791, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_expression_value_790 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_790, mod_consts[324]);
        Py_DECREF(tmp_expression_value_790);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_82 = mod_consts[358];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_793 = var_npdatetime;
        tmp_dict_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_793, mod_consts[359]);
        if (tmp_dict_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 1044;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_82, tmp_dict_value_82);
        Py_DECREF(tmp_dict_value_82);
        assert(!(tmp_res != 0));
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1043;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_794;
        PyObject *tmp_expression_value_795;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_expression_value_796;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_dict_key_83;
        PyObject *tmp_dict_value_83;
        PyObject *tmp_expression_value_797;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_795 = par_ufunc_db;
        tmp_expression_value_796 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_796 == NULL)) {
            tmp_expression_value_796 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_796 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_796, mod_consts[46]);
        if (tmp_subscript_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_794 = LOOKUP_SUBSCRIPT(tmp_expression_value_795, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_expression_value_794 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_794, mod_consts[324]);
        Py_DECREF(tmp_expression_value_794);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_83 = mod_consts[358];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_797 = var_npdatetime;
        tmp_dict_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_797, mod_consts[360]);
        if (tmp_dict_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 1047;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_83, tmp_dict_value_83);
        Py_DECREF(tmp_dict_value_83);
        assert(!(tmp_res != 0));
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1046;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_798;
        PyObject *tmp_expression_value_799;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_expression_value_800;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_dict_key_84;
        PyObject *tmp_dict_value_84;
        PyObject *tmp_expression_value_801;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_799 = par_ufunc_db;
        tmp_expression_value_800 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_800 == NULL)) {
            tmp_expression_value_800 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_800 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_800, mod_consts[53]);
        if (tmp_subscript_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_798 = LOOKUP_SUBSCRIPT(tmp_expression_value_799, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_expression_value_798 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_798, mod_consts[324]);
        Py_DECREF(tmp_expression_value_798);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_84 = mod_consts[358];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_801 = var_npdatetime;
        tmp_dict_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_801, mod_consts[361]);
        if (tmp_dict_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 1050;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_84, tmp_dict_value_84);
        Py_DECREF(tmp_dict_value_84);
        assert(!(tmp_res != 0));
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1049;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_802;
        PyObject *tmp_expression_value_803;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_expression_value_804;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_dict_key_85;
        PyObject *tmp_dict_value_85;
        PyObject *tmp_expression_value_805;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_803 = par_ufunc_db;
        tmp_expression_value_804 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_804 == NULL)) {
            tmp_expression_value_804 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_804 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_804, mod_consts[57]);
        if (tmp_subscript_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_802 = LOOKUP_SUBSCRIPT(tmp_expression_value_803, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_expression_value_802 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_802, mod_consts[324]);
        Py_DECREF(tmp_expression_value_802);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_85 = mod_consts[358];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_805 = var_npdatetime;
        tmp_dict_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_805, mod_consts[362]);
        if (tmp_dict_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 1053;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_85, tmp_dict_value_85);
        Py_DECREF(tmp_dict_value_85);
        assert(!(tmp_res != 0));
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1052;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_806;
        PyObject *tmp_expression_value_807;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_808;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_dict_key_86;
        PyObject *tmp_dict_value_86;
        PyObject *tmp_expression_value_809;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_807 = par_ufunc_db;
        tmp_expression_value_808 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_808 == NULL)) {
            tmp_expression_value_808 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_808 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_808, mod_consts[77]);
        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_806 = LOOKUP_SUBSCRIPT(tmp_expression_value_807, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_expression_value_806 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_806, mod_consts[324]);
        Py_DECREF(tmp_expression_value_806);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_86 = mod_consts[363];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_809 = var_npdatetime;
        tmp_dict_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_809, mod_consts[364]);
        if (tmp_dict_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 1056;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_810;
            PyObject *tmp_expression_value_811;
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_86, tmp_dict_value_86);
            Py_DECREF(tmp_dict_value_86);
            assert(!(tmp_res != 0));
            tmp_dict_key_86 = mod_consts[365];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_810 = var_npdatetime;
            tmp_dict_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_810, mod_consts[366]);
            if (tmp_dict_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1057;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_82;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_86, tmp_dict_value_86);
            Py_DECREF(tmp_dict_value_86);
            assert(!(tmp_res != 0));
            tmp_dict_key_86 = mod_consts[367];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_811 = var_npdatetime;
            tmp_dict_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_811, mod_consts[368]);
            if (tmp_dict_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1058;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_82;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_86, tmp_dict_value_86);
            Py_DECREF(tmp_dict_value_86);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_82;
        // Exception handling pass through code for dict_build:
        dict_build_exception_82:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_82:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1055;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_812;
        PyObject *tmp_expression_value_813;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_expression_value_814;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_dict_key_87;
        PyObject *tmp_dict_value_87;
        PyObject *tmp_expression_value_815;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_813 = par_ufunc_db;
        tmp_expression_value_814 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_814 == NULL)) {
            tmp_expression_value_814 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_814 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_814, mod_consts[82]);
        if (tmp_subscript_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_812 = LOOKUP_SUBSCRIPT(tmp_expression_value_813, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_expression_value_812 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_812, mod_consts[324]);
        Py_DECREF(tmp_expression_value_812);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_87 = mod_consts[363];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_815 = var_npdatetime;
        tmp_dict_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_815, mod_consts[369]);
        if (tmp_dict_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 1061;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_816;
            PyObject *tmp_expression_value_817;
            tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_87, tmp_dict_value_87);
            Py_DECREF(tmp_dict_value_87);
            assert(!(tmp_res != 0));
            tmp_dict_key_87 = mod_consts[365];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_816 = var_npdatetime;
            tmp_dict_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_816, mod_consts[370]);
            if (tmp_dict_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1062;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_83;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_87, tmp_dict_value_87);
            Py_DECREF(tmp_dict_value_87);
            assert(!(tmp_res != 0));
            tmp_dict_key_87 = mod_consts[371];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_817 = var_npdatetime;
            tmp_dict_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_817, mod_consts[372]);
            if (tmp_dict_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1063;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_83;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_87, tmp_dict_value_87);
            Py_DECREF(tmp_dict_value_87);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_83;
        // Exception handling pass through code for dict_build:
        dict_build_exception_83:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_83:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1060;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_818;
        PyObject *tmp_expression_value_819;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_expression_value_820;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_dict_key_88;
        PyObject *tmp_dict_value_88;
        PyObject *tmp_expression_value_821;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_819 = par_ufunc_db;
        tmp_expression_value_820 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_820 == NULL)) {
            tmp_expression_value_820 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_820 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_820, mod_consts[87]);
        if (tmp_subscript_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_818 = LOOKUP_SUBSCRIPT(tmp_expression_value_819, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_expression_value_818 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_818, mod_consts[324]);
        Py_DECREF(tmp_expression_value_818);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_88 = mod_consts[373];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_821 = var_npdatetime;
        tmp_dict_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_821, mod_consts[374]);
        if (tmp_dict_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 1066;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_822;
            PyObject *tmp_expression_value_823;
            PyObject *tmp_expression_value_824;
            tmp_res = PyDict_SetItem(tmp_args_element_value_9, tmp_dict_key_88, tmp_dict_value_88);
            Py_DECREF(tmp_dict_value_88);
            assert(!(tmp_res != 0));
            tmp_dict_key_88 = mod_consts[375];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_822 = var_npdatetime;
            tmp_dict_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_822, mod_consts[374]);
            if (tmp_dict_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1067;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_84;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_9, tmp_dict_key_88, tmp_dict_value_88);
            Py_DECREF(tmp_dict_value_88);
            assert(!(tmp_res != 0));
            tmp_dict_key_88 = mod_consts[376];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_823 = var_npdatetime;
            tmp_dict_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_823, mod_consts[377]);
            if (tmp_dict_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1068;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_84;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_9, tmp_dict_key_88, tmp_dict_value_88);
            Py_DECREF(tmp_dict_value_88);
            assert(!(tmp_res != 0));
            tmp_dict_key_88 = mod_consts[378];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_824 = var_npdatetime;
            tmp_dict_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_824, mod_consts[377]);
            if (tmp_dict_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1069;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_84;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_9, tmp_dict_key_88, tmp_dict_value_88);
            Py_DECREF(tmp_dict_value_88);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_84;
        // Exception handling pass through code for dict_build:
        dict_build_exception_84:;
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_84:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1065;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_825;
        PyObject *tmp_expression_value_826;
        tmp_expression_value_825 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_825 == NULL)) {
            tmp_expression_value_825 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_825 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1071;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_825, mod_consts[88]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1071;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_826 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_826 == NULL)) {
            tmp_expression_value_826 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_826 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 1071;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_826, mod_consts[89]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 1071;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1071;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_827;
        PyObject *tmp_expression_value_828;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_expression_value_829;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_dict_key_89;
        PyObject *tmp_dict_value_89;
        PyObject *tmp_expression_value_830;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_828 = par_ufunc_db;
        tmp_expression_value_829 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_829 == NULL)) {
            tmp_expression_value_829 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_829 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_829, mod_consts[88]);
        if (tmp_subscript_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_827 = LOOKUP_SUBSCRIPT(tmp_expression_value_828, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_expression_value_827 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_827, mod_consts[324]);
        Py_DECREF(tmp_expression_value_827);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_89 = mod_consts[373];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_830 = var_npdatetime;
        tmp_dict_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_830, mod_consts[379]);
        if (tmp_dict_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 1073;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_831;
            PyObject *tmp_expression_value_832;
            tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_89, tmp_dict_value_89);
            Py_DECREF(tmp_dict_value_89);
            assert(!(tmp_res != 0));
            tmp_dict_key_89 = mod_consts[375];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_831 = var_npdatetime;
            tmp_dict_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_831, mod_consts[379]);
            if (tmp_dict_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1074;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_85;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_89, tmp_dict_value_89);
            Py_DECREF(tmp_dict_value_89);
            assert(!(tmp_res != 0));
            tmp_dict_key_89 = mod_consts[380];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_832 = var_npdatetime;
            tmp_dict_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_832, mod_consts[381]);
            if (tmp_dict_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1075;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_85;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_89, tmp_dict_value_89);
            Py_DECREF(tmp_dict_value_89);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_85;
        // Exception handling pass through code for dict_build:
        dict_build_exception_85:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_85:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1072;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1072;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_833;
        PyObject *tmp_expression_value_834;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_expression_value_835;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_dict_key_90;
        PyObject *tmp_dict_value_90;
        PyObject *tmp_expression_value_836;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_834 = par_ufunc_db;
        tmp_expression_value_835 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_835 == NULL)) {
            tmp_expression_value_835 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_835 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_835, mod_consts[89]);
        if (tmp_subscript_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_833 = LOOKUP_SUBSCRIPT(tmp_expression_value_834, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_expression_value_833 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_833, mod_consts[324]);
        Py_DECREF(tmp_expression_value_833);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_90 = mod_consts[373];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_836 = var_npdatetime;
        tmp_dict_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_836, mod_consts[379]);
        if (tmp_dict_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 1078;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_837;
            PyObject *tmp_expression_value_838;
            tmp_res = PyDict_SetItem(tmp_args_element_value_11, tmp_dict_key_90, tmp_dict_value_90);
            Py_DECREF(tmp_dict_value_90);
            assert(!(tmp_res != 0));
            tmp_dict_key_90 = mod_consts[375];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_837 = var_npdatetime;
            tmp_dict_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_837, mod_consts[379]);
            if (tmp_dict_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1079;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_86;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_11, tmp_dict_key_90, tmp_dict_value_90);
            Py_DECREF(tmp_dict_value_90);
            assert(!(tmp_res != 0));
            tmp_dict_key_90 = mod_consts[380];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_838 = var_npdatetime;
            tmp_dict_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_838, mod_consts[381]);
            if (tmp_dict_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1080;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_86;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_11, tmp_dict_key_90, tmp_dict_value_90);
            Py_DECREF(tmp_dict_value_90);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_86;
        // Exception handling pass through code for dict_build:
        dict_build_exception_86:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_86:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1077;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_839;
        PyObject *tmp_expression_value_840;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_expression_value_841;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_dict_key_91;
        PyObject *tmp_dict_value_91;
        PyObject *tmp_expression_value_842;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_840 = par_ufunc_db;
        tmp_expression_value_841 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_841 == NULL)) {
            tmp_expression_value_841 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_841 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_841, mod_consts[107]);
        if (tmp_subscript_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_839 = LOOKUP_SUBSCRIPT(tmp_expression_value_840, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_expression_value_839 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_839, mod_consts[324]);
        Py_DECREF(tmp_expression_value_839);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_91 = mod_consts[373];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_842 = var_npdatetime;
        tmp_dict_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_842, mod_consts[379]);
        if (tmp_dict_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 1083;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_843;
            tmp_res = PyDict_SetItem(tmp_args_element_value_12, tmp_dict_key_91, tmp_dict_value_91);
            Py_DECREF(tmp_dict_value_91);
            assert(!(tmp_res != 0));
            tmp_dict_key_91 = mod_consts[375];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_843 = var_npdatetime;
            tmp_dict_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_843, mod_consts[379]);
            if (tmp_dict_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1084;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_87;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_12, tmp_dict_key_91, tmp_dict_value_91);
            Py_DECREF(tmp_dict_value_91);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_87;
        // Exception handling pass through code for dict_build:
        dict_build_exception_87:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_87:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1082;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_numpy_version);
        tmp_cmp_expr_left_5 = var_numpy_version;
        tmp_cmp_expr_right_5 = mod_consts[382];
        tmp_condition_result_5 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_844;
        PyObject *tmp_expression_value_845;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_expression_value_846;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_dict_key_92;
        PyObject *tmp_dict_value_92;
        PyObject *tmp_expression_value_847;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_845 = par_ufunc_db;
        tmp_expression_value_846 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_846 == NULL)) {
            tmp_expression_value_846 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_846 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1088;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_846, mod_consts[107]);
        if (tmp_subscript_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1088;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_844 = LOOKUP_SUBSCRIPT(tmp_expression_value_845, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_expression_value_844 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1088;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_844, mod_consts[324]);
        Py_DECREF(tmp_expression_value_844);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1088;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_92 = mod_consts[383];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_847 = var_npdatetime;
        tmp_dict_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_847, mod_consts[384]);
        if (tmp_dict_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 1089;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_13, tmp_dict_key_92, tmp_dict_value_92);
        Py_DECREF(tmp_dict_value_92);
        assert(!(tmp_res != 0));
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1088;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1088;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_no_5:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_848;
        PyObject *tmp_expression_value_849;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_expression_value_850;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_dict_key_93;
        PyObject *tmp_dict_value_93;
        PyObject *tmp_expression_value_851;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_849 = par_ufunc_db;
        tmp_expression_value_850 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_850 == NULL)) {
            tmp_expression_value_850 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_850 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1092;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_850, mod_consts[276]);
        if (tmp_subscript_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1092;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_848 = LOOKUP_SUBSCRIPT(tmp_expression_value_849, tmp_subscript_value_16);
        Py_DECREF(tmp_subscript_value_16);
        if (tmp_expression_value_848 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1092;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_848, mod_consts[324]);
        Py_DECREF(tmp_expression_value_848);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1092;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_93 = mod_consts[385];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_851 = var_npdatetime;
        tmp_dict_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_851, mod_consts[386]);
        if (tmp_dict_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 1093;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_852;
            tmp_res = PyDict_SetItem(tmp_args_element_value_14, tmp_dict_key_93, tmp_dict_value_93);
            Py_DECREF(tmp_dict_value_93);
            assert(!(tmp_res != 0));
            tmp_dict_key_93 = mod_consts[387];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_852 = var_npdatetime;
            tmp_dict_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_852, mod_consts[388]);
            if (tmp_dict_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1094;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_88;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_14, tmp_dict_key_93, tmp_dict_value_93);
            Py_DECREF(tmp_dict_value_93);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_88;
        // Exception handling pass through code for dict_build:
        dict_build_exception_88:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_88:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1092;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1092;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_853;
        PyObject *tmp_expression_value_854;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_expression_value_855;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_dict_key_94;
        PyObject *tmp_dict_value_94;
        PyObject *tmp_expression_value_856;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_854 = par_ufunc_db;
        tmp_expression_value_855 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_855 == NULL)) {
            tmp_expression_value_855 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_855 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1096;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_855, mod_consts[272]);
        if (tmp_subscript_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1096;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_853 = LOOKUP_SUBSCRIPT(tmp_expression_value_854, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_expression_value_853 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1096;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_853, mod_consts[324]);
        Py_DECREF(tmp_expression_value_853);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1096;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_94 = mod_consts[385];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_856 = var_npdatetime;
        tmp_dict_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_856, mod_consts[389]);
        if (tmp_dict_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 1097;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_857;
            tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_94, tmp_dict_value_94);
            Py_DECREF(tmp_dict_value_94);
            assert(!(tmp_res != 0));
            tmp_dict_key_94 = mod_consts[387];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_857 = var_npdatetime;
            tmp_dict_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_857, mod_consts[390]);
            if (tmp_dict_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1098;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_89;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_94, tmp_dict_value_94);
            Py_DECREF(tmp_dict_value_94);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_89;
        // Exception handling pass through code for dict_build:
        dict_build_exception_89:;
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_89:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1096;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1096;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_858;
        PyObject *tmp_expression_value_859;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_expression_value_860;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_dict_key_95;
        PyObject *tmp_dict_value_95;
        PyObject *tmp_expression_value_861;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_859 = par_ufunc_db;
        tmp_expression_value_860 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_860 == NULL)) {
            tmp_expression_value_860 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_860 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1100;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_860, mod_consts[263]);
        if (tmp_subscript_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1100;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_858 = LOOKUP_SUBSCRIPT(tmp_expression_value_859, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_expression_value_858 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1100;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_858, mod_consts[324]);
        Py_DECREF(tmp_expression_value_858);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1100;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_95 = mod_consts[385];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_861 = var_npdatetime;
        tmp_dict_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_861, mod_consts[391]);
        if (tmp_dict_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 1101;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_862;
            tmp_res = PyDict_SetItem(tmp_args_element_value_16, tmp_dict_key_95, tmp_dict_value_95);
            Py_DECREF(tmp_dict_value_95);
            assert(!(tmp_res != 0));
            tmp_dict_key_95 = mod_consts[387];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_862 = var_npdatetime;
            tmp_dict_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_862, mod_consts[392]);
            if (tmp_dict_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1102;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_90;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_16, tmp_dict_key_95, tmp_dict_value_95);
            Py_DECREF(tmp_dict_value_95);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_90;
        // Exception handling pass through code for dict_build:
        dict_build_exception_90:;
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_90:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1100;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1100;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_863;
        PyObject *tmp_expression_value_864;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_expression_value_865;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_dict_key_96;
        PyObject *tmp_dict_value_96;
        PyObject *tmp_expression_value_866;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_864 = par_ufunc_db;
        tmp_expression_value_865 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_865 == NULL)) {
            tmp_expression_value_865 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_865 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_865, mod_consts[268]);
        if (tmp_subscript_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_863 = LOOKUP_SUBSCRIPT(tmp_expression_value_864, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_expression_value_863 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_863, mod_consts[324]);
        Py_DECREF(tmp_expression_value_863);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_96 = mod_consts[385];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_866 = var_npdatetime;
        tmp_dict_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_866, mod_consts[393]);
        if (tmp_dict_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 1105;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_867;
            tmp_res = PyDict_SetItem(tmp_args_element_value_17, tmp_dict_key_96, tmp_dict_value_96);
            Py_DECREF(tmp_dict_value_96);
            assert(!(tmp_res != 0));
            tmp_dict_key_96 = mod_consts[387];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_867 = var_npdatetime;
            tmp_dict_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_867, mod_consts[394]);
            if (tmp_dict_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1106;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_91;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_17, tmp_dict_key_96, tmp_dict_value_96);
            Py_DECREF(tmp_dict_value_96);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_91;
        // Exception handling pass through code for dict_build:
        dict_build_exception_91:;
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_91:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1104;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_868;
        PyObject *tmp_expression_value_869;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_expression_value_870;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_dict_key_97;
        PyObject *tmp_dict_value_97;
        PyObject *tmp_expression_value_871;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_869 = par_ufunc_db;
        tmp_expression_value_870 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_870 == NULL)) {
            tmp_expression_value_870 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_870 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1108;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_870, mod_consts[253]);
        if (tmp_subscript_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1108;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_868 = LOOKUP_SUBSCRIPT(tmp_expression_value_869, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_expression_value_868 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1108;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_868, mod_consts[324]);
        Py_DECREF(tmp_expression_value_868);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1108;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_97 = mod_consts[385];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_871 = var_npdatetime;
        tmp_dict_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_871, mod_consts[395]);
        if (tmp_dict_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 1109;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_872;
            tmp_res = PyDict_SetItem(tmp_args_element_value_18, tmp_dict_key_97, tmp_dict_value_97);
            Py_DECREF(tmp_dict_value_97);
            assert(!(tmp_res != 0));
            tmp_dict_key_97 = mod_consts[387];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_872 = var_npdatetime;
            tmp_dict_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_872, mod_consts[396]);
            if (tmp_dict_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1110;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_92;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_18, tmp_dict_key_97, tmp_dict_value_97);
            Py_DECREF(tmp_dict_value_97);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_92;
        // Exception handling pass through code for dict_build:
        dict_build_exception_92:;
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_92:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1108;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1108;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_873;
        PyObject *tmp_expression_value_874;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_expression_value_875;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_dict_key_98;
        PyObject *tmp_dict_value_98;
        PyObject *tmp_expression_value_876;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_874 = par_ufunc_db;
        tmp_expression_value_875 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_875 == NULL)) {
            tmp_expression_value_875 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_875 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_875, mod_consts[258]);
        if (tmp_subscript_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_873 = LOOKUP_SUBSCRIPT(tmp_expression_value_874, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_expression_value_873 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_873, mod_consts[324]);
        Py_DECREF(tmp_expression_value_873);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_98 = mod_consts[385];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_876 = var_npdatetime;
        tmp_dict_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_876, mod_consts[397]);
        if (tmp_dict_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 1113;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_877;
            tmp_res = PyDict_SetItem(tmp_args_element_value_19, tmp_dict_key_98, tmp_dict_value_98);
            Py_DECREF(tmp_dict_value_98);
            assert(!(tmp_res != 0));
            tmp_dict_key_98 = mod_consts[387];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_877 = var_npdatetime;
            tmp_dict_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_877, mod_consts[398]);
            if (tmp_dict_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1114;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_93;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_19, tmp_dict_key_98, tmp_dict_value_98);
            Py_DECREF(tmp_dict_value_98);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_93;
        // Exception handling pass through code for dict_build:
        dict_build_exception_93:;
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_93:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1112;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_878;
        PyObject *tmp_expression_value_879;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_expression_value_880;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_dict_key_99;
        PyObject *tmp_dict_value_99;
        PyObject *tmp_expression_value_881;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_879 = par_ufunc_db;
        tmp_expression_value_880 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_880 == NULL)) {
            tmp_expression_value_880 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_880 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_880, mod_consts[307]);
        if (tmp_subscript_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_878 = LOOKUP_SUBSCRIPT(tmp_expression_value_879, tmp_subscript_value_22);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_expression_value_878 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_878, mod_consts[324]);
        Py_DECREF(tmp_expression_value_878);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_99 = mod_consts[399];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_881 = var_npdatetime;
        tmp_dict_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_881, mod_consts[400]);
        if (tmp_dict_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 1117;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_882;
            tmp_res = PyDict_SetItem(tmp_args_element_value_20, tmp_dict_key_99, tmp_dict_value_99);
            Py_DECREF(tmp_dict_value_99);
            assert(!(tmp_res != 0));
            tmp_dict_key_99 = mod_consts[363];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_882 = var_npdatetime;
            tmp_dict_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_882, mod_consts[401]);
            if (tmp_dict_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1118;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_94;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_20, tmp_dict_key_99, tmp_dict_value_99);
            Py_DECREF(tmp_dict_value_99);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_94;
        // Exception handling pass through code for dict_build:
        dict_build_exception_94:;
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_94:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1116;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_883;
        PyObject *tmp_expression_value_884;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_expression_value_885;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_dict_key_100;
        PyObject *tmp_dict_value_100;
        PyObject *tmp_expression_value_886;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_884 = par_ufunc_db;
        tmp_expression_value_885 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_885 == NULL)) {
            tmp_expression_value_885 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_885 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_885, mod_consts[312]);
        if (tmp_subscript_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_883 = LOOKUP_SUBSCRIPT(tmp_expression_value_884, tmp_subscript_value_23);
        Py_DECREF(tmp_subscript_value_23);
        if (tmp_expression_value_883 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_883, mod_consts[324]);
        Py_DECREF(tmp_expression_value_883);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_100 = mod_consts[399];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_886 = var_npdatetime;
        tmp_dict_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_886, mod_consts[402]);
        if (tmp_dict_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 1121;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_887;
            tmp_res = PyDict_SetItem(tmp_args_element_value_21, tmp_dict_key_100, tmp_dict_value_100);
            Py_DECREF(tmp_dict_value_100);
            assert(!(tmp_res != 0));
            tmp_dict_key_100 = mod_consts[363];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_887 = var_npdatetime;
            tmp_dict_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_887, mod_consts[403]);
            if (tmp_dict_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1122;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_95;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_21, tmp_dict_key_100, tmp_dict_value_100);
            Py_DECREF(tmp_dict_value_100);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_95;
        // Exception handling pass through code for dict_build:
        dict_build_exception_95:;
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_95:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1120;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_888;
        PyObject *tmp_expression_value_889;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_expression_value_890;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_dict_key_101;
        PyObject *tmp_dict_value_101;
        PyObject *tmp_expression_value_891;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_889 = par_ufunc_db;
        tmp_expression_value_890 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_890 == NULL)) {
            tmp_expression_value_890 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_890 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_890, mod_consts[315]);
        if (tmp_subscript_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_888 = LOOKUP_SUBSCRIPT(tmp_expression_value_889, tmp_subscript_value_24);
        Py_DECREF(tmp_subscript_value_24);
        if (tmp_expression_value_888 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_888, mod_consts[324]);
        Py_DECREF(tmp_expression_value_888);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_101 = mod_consts[399];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_891 = var_npdatetime;
        tmp_dict_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_891, mod_consts[404]);
        if (tmp_dict_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 1127;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_892;
            tmp_res = PyDict_SetItem(tmp_args_element_value_22, tmp_dict_key_101, tmp_dict_value_101);
            Py_DECREF(tmp_dict_value_101);
            assert(!(tmp_res != 0));
            tmp_dict_key_101 = mod_consts[363];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_892 = var_npdatetime;
            tmp_dict_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_892, mod_consts[405]);
            if (tmp_dict_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1128;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_96;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_22, tmp_dict_key_101, tmp_dict_value_101);
            Py_DECREF(tmp_dict_value_101);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_96;
        // Exception handling pass through code for dict_build:
        dict_build_exception_96:;
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_96:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1126;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_893;
        PyObject *tmp_expression_value_894;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_expression_value_895;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_dict_key_102;
        PyObject *tmp_dict_value_102;
        PyObject *tmp_expression_value_896;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_894 = par_ufunc_db;
        tmp_expression_value_895 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_895 == NULL)) {
            tmp_expression_value_895 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_895 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_895, mod_consts[318]);
        if (tmp_subscript_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_893 = LOOKUP_SUBSCRIPT(tmp_expression_value_894, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_expression_value_893 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_893, mod_consts[324]);
        Py_DECREF(tmp_expression_value_893);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_102 = mod_consts[399];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_896 = var_npdatetime;
        tmp_dict_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_896, mod_consts[406]);
        if (tmp_dict_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 1131;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_897;
            tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_102, tmp_dict_value_102);
            Py_DECREF(tmp_dict_value_102);
            assert(!(tmp_res != 0));
            tmp_dict_key_102 = mod_consts[363];
            CHECK_OBJECT(var_npdatetime);
            tmp_expression_value_897 = var_npdatetime;
            tmp_dict_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_897, mod_consts[407]);
            if (tmp_dict_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1132;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_97;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_23, tmp_dict_key_102, tmp_dict_value_102);
            Py_DECREF(tmp_dict_value_102);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_97;
        // Exception handling pass through code for dict_build:
        dict_build_exception_97:;
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_97:;
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1130;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_numpy_version);
        tmp_cmp_expr_left_6 = var_numpy_version;
        tmp_cmp_expr_right_6 = mod_consts[382];
        tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_898;
        PyObject *tmp_expression_value_899;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_expression_value_900;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_dict_key_103;
        PyObject *tmp_dict_value_103;
        PyObject *tmp_expression_value_901;
        CHECK_OBJECT(par_ufunc_db);
        tmp_expression_value_899 = par_ufunc_db;
        tmp_expression_value_900 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_900 == NULL)) {
            tmp_expression_value_900 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_900 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_900, mod_consts[111]);
        if (tmp_subscript_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_898 = LOOKUP_SUBSCRIPT(tmp_expression_value_899, tmp_subscript_value_26);
        Py_DECREF(tmp_subscript_value_26);
        if (tmp_expression_value_898 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_898, mod_consts[324]);
        Py_DECREF(tmp_expression_value_898);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_103 = mod_consts[363];
        CHECK_OBJECT(var_npdatetime);
        tmp_expression_value_901 = var_npdatetime;
        tmp_dict_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_901, mod_consts[408]);
        if (tmp_dict_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 1137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_24, tmp_dict_key_103, tmp_dict_value_103);
        Py_DECREF(tmp_dict_value_103);
        assert(!(tmp_res != 0));
        frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame.f_lineno = 1136;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    branch_no_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d6ca6d570d8f5dd285aee07d1f8721c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d6ca6d570d8f5dd285aee07d1f8721c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6ca6d570d8f5dd285aee07d1f8721c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6ca6d570d8f5dd285aee07d1f8721c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6ca6d570d8f5dd285aee07d1f8721c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6ca6d570d8f5dd285aee07d1f8721c8,
        type_description_1,
        par_ufunc_db,
        var_npyfuncs,
        var_cmathimpl,
        var_mathimpl,
        var_numbers,
        var_numpy_version,
        var_tan_impl,
        var_arcsin_impl,
        var_arctan_impl,
        var_arcsinh_impl,
        var_arctanh_impl,
        var_npdatetime
    );


    // Release cached frame if used for exception.
    if (frame_d6ca6d570d8f5dd285aee07d1f8721c8 == cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8);
        cache_frame_d6ca6d570d8f5dd285aee07d1f8721c8 = NULL;
    }

    assertFrameObject(frame_d6ca6d570d8f5dd285aee07d1f8721c8);

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
    CHECK_OBJECT(var_npyfuncs);
    Py_DECREF(var_npyfuncs);
    var_npyfuncs = NULL;
    CHECK_OBJECT(var_cmathimpl);
    Py_DECREF(var_cmathimpl);
    var_cmathimpl = NULL;
    CHECK_OBJECT(var_mathimpl);
    Py_DECREF(var_mathimpl);
    var_mathimpl = NULL;
    CHECK_OBJECT(var_numbers);
    Py_DECREF(var_numbers);
    var_numbers = NULL;
    CHECK_OBJECT(var_numpy_version);
    Py_DECREF(var_numpy_version);
    var_numpy_version = NULL;
    CHECK_OBJECT(var_tan_impl);
    Py_DECREF(var_tan_impl);
    var_tan_impl = NULL;
    CHECK_OBJECT(var_arcsin_impl);
    Py_DECREF(var_arcsin_impl);
    var_arcsin_impl = NULL;
    CHECK_OBJECT(var_arctan_impl);
    Py_DECREF(var_arctan_impl);
    var_arctan_impl = NULL;
    CHECK_OBJECT(var_arcsinh_impl);
    Py_DECREF(var_arcsinh_impl);
    var_arcsinh_impl = NULL;
    CHECK_OBJECT(var_arctanh_impl);
    Py_DECREF(var_arctanh_impl);
    var_arctanh_impl = NULL;
    CHECK_OBJECT(var_npdatetime);
    Py_DECREF(var_npdatetime);
    var_npdatetime = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_npyfuncs);
    var_npyfuncs = NULL;
    Py_XDECREF(var_cmathimpl);
    var_cmathimpl = NULL;
    Py_XDECREF(var_mathimpl);
    var_mathimpl = NULL;
    Py_XDECREF(var_numbers);
    var_numbers = NULL;
    Py_XDECREF(var_numpy_version);
    var_numpy_version = NULL;
    Py_XDECREF(var_tan_impl);
    var_tan_impl = NULL;
    Py_XDECREF(var_arcsin_impl);
    var_arcsin_impl = NULL;
    Py_XDECREF(var_arctan_impl);
    var_arctan_impl = NULL;
    Py_XDECREF(var_arcsinh_impl);
    var_arcsinh_impl = NULL;
    Py_XDECREF(var_arctanh_impl);
    var_arctanh_impl = NULL;
    Py_XDECREF(var_npdatetime);
    var_npdatetime = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc_db);
    Py_DECREF(par_ufunc_db);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc_db);
    Py_DECREF(par_ufunc_db);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__1__lazy_init_db() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$np$ufunc_db$$$function__1__lazy_init_db,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bfbeb086de80a8ecf82d6becccd4aa90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$np$ufunc_db,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__2_get_ufuncs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$np$ufunc_db$$$function__2_get_ufuncs,
        mod_consts[417],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_41d97c36a420745b7007f557e309e72a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$np$ufunc_db,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__3_get_ufunc_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$np$ufunc_db$$$function__3_get_ufunc_info,
        mod_consts[418],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7028365257b6cb1c7ba3ed5148317c7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$np$ufunc_db,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numba$np$ufunc_db$$$function__4__fill_ufunc_db() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numba$np$ufunc_db$$$function__4__fill_ufunc_db,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d6ca6d570d8f5dd285aee07d1f8721c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numba$np$ufunc_db,
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

function_impl_code functable_numba$np$ufunc_db[] = {
    impl_numba$np$ufunc_db$$$function__1__lazy_init_db,
    impl_numba$np$ufunc_db$$$function__2_get_ufuncs,
    impl_numba$np$ufunc_db$$$function__3_get_ufunc_info,
    impl_numba$np$ufunc_db$$$function__4__fill_ufunc_db,
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

    function_impl_code *current = functable_numba$np$ufunc_db;
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

    if (offset > sizeof(functable_numba$np$ufunc_db) || offset < 0) {
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
        functable_numba$np$ufunc_db[offset],
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
        module_numba$np$ufunc_db,
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
PyObject *modulecode_numba$np$ufunc_db(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numba.np.ufunc_db");

    // Store the module for future use.
    module_numba$np$ufunc_db = module;

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
        PRINT_STRING("numba.np.ufunc_db: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numba.np.ufunc_db: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numba.np.ufunc_db: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumba$np$ufunc_db\n");

    moduledict_numba$np$ufunc_db = MODULE_DICT(module_numba$np$ufunc_db);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numba$np$ufunc_db,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numba$np$ufunc_db,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[423]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numba$np$ufunc_db,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numba$np$ufunc_db,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numba$np$ufunc_db,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numba$np$ufunc_db);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numba$np$ufunc_db);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_752cdae85f16cbf306e53aace9ebe7d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_752cdae85f16cbf306e53aace9ebe7d4 = MAKE_MODULE_FRAME(codeobj_752cdae85f16cbf306e53aace9ebe7d4, module_numba$np$ufunc_db);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_752cdae85f16cbf306e53aace9ebe7d4);
    assert(Py_REFCNT(frame_752cdae85f16cbf306e53aace9ebe7d4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[413], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[414], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[416];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numba$np$ufunc_db;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_752cdae85f16cbf306e53aace9ebe7d4->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_4);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_752cdae85f16cbf306e53aace9ebe7d4);
#endif
    popFrameStack();

    assertFrameObject(frame_752cdae85f16cbf306e53aace9ebe7d4);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_752cdae85f16cbf306e53aace9ebe7d4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_752cdae85f16cbf306e53aace9ebe7d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_752cdae85f16cbf306e53aace9ebe7d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_752cdae85f16cbf306e53aace9ebe7d4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_numba$np$ufunc_db$$$function__1__lazy_init_db();

        UPDATE_STRING_DICT1(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_numba$np$ufunc_db$$$function__2_get_ufuncs();

        UPDATE_STRING_DICT1(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_numba$np$ufunc_db$$$function__3_get_ufunc_info();

        UPDATE_STRING_DICT1(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_numba$np$ufunc_db$$$function__4__fill_ufunc_db();

        UPDATE_STRING_DICT1(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_9);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numba.np.ufunc_db", false);

    Py_INCREF(module_numba$np$ufunc_db);
    return module_numba$np$ufunc_db;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$np$ufunc_db, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("numba$np$ufunc_db", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
