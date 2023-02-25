/* Generated code for Python module 'prompt_toolkit.key_binding.bindings.search'
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

/* The "module_prompt_toolkit$key_binding$bindings$search" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$key_binding$bindings$search;
PyDictObject *moduledict_prompt_toolkit$key_binding$bindings$search;

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
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("prompt_toolkit.key_binding.bindings.search"));
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
void checkModuleConstants_prompt_toolkit$key_binding$bindings$search(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 69; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e55b57eeee83fa3c049d32eaa51fa0ec;
static PyCodeObject *codeobj_67fe91a21728b90be4ae9ceefab5eaf3;
static PyCodeObject *codeobj_beefac94f42b857777e46ef20ac89ba5;
static PyCodeObject *codeobj_c5a380f96fb438c56862fc15930b2922;
static PyCodeObject *codeobj_567b7c511a0bbb90faa8ebd89b4657f1;
static PyCodeObject *codeobj_4d62d51b565c1f183165cb5079776200;
static PyCodeObject *codeobj_62b5876fa5a59412f7bb4103bcd11de1;
static PyCodeObject *codeobj_956f35b336cc711195ecbecfda87b93a;
static PyCodeObject *codeobj_c373c8cd110337e7c963a880c0bdc219;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[64]); CHECK_OBJECT(module_filename_obj);
    codeobj_e55b57eeee83fa3c049d32eaa51fa0ec = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[65], NULL, NULL, 0, 0, 0);
    codeobj_67fe91a21728b90be4ae9ceefab5eaf3 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[66], NULL, 0, 0, 0);
    codeobj_beefac94f42b857777e46ef20ac89ba5 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[67], NULL, 1, 0, 0);
    codeobj_c5a380f96fb438c56862fc15930b2922 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[67], NULL, 1, 0, 0);
    codeobj_567b7c511a0bbb90faa8ebd89b4657f1 = MAKE_CODEOBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[67], NULL, 1, 0, 0);
    codeobj_4d62d51b565c1f183165cb5079776200 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[67], NULL, 1, 0, 0);
    codeobj_62b5876fa5a59412f7bb4103bcd11de1 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[67], NULL, 1, 0, 0);
    codeobj_956f35b336cc711195ecbecfda87b93a = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[67], NULL, 1, 0, 0);
    codeobj_c373c8cd110337e7c963a880c0bdc219 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[67], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__1_abort_search(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__2_accept_search(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__3_start_reverse_incremental_search(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__4_start_forward_incremental_search(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__5_reverse_incremental_search(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__6_forward_incremental_search(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__7__previous_buffer_is_returnable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__8_accept_search_and_accept_input(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__1_abort_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_beefac94f42b857777e46ef20ac89ba5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_beefac94f42b857777e46ef20ac89ba5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_beefac94f42b857777e46ef20ac89ba5)) {
        Py_XDECREF(cache_frame_beefac94f42b857777e46ef20ac89ba5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_beefac94f42b857777e46ef20ac89ba5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_beefac94f42b857777e46ef20ac89ba5 = MAKE_FUNCTION_FRAME(codeobj_beefac94f42b857777e46ef20ac89ba5, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_beefac94f42b857777e46ef20ac89ba5->m_type_description == NULL);
    frame_beefac94f42b857777e46ef20ac89ba5 = cache_frame_beefac94f42b857777e46ef20ac89ba5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_beefac94f42b857777e46ef20ac89ba5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_beefac94f42b857777e46ef20ac89ba5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_beefac94f42b857777e46ef20ac89ba5->m_frame.f_lineno = 31;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_beefac94f42b857777e46ef20ac89ba5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_beefac94f42b857777e46ef20ac89ba5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_beefac94f42b857777e46ef20ac89ba5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_beefac94f42b857777e46ef20ac89ba5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_beefac94f42b857777e46ef20ac89ba5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_beefac94f42b857777e46ef20ac89ba5,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_beefac94f42b857777e46ef20ac89ba5 == cache_frame_beefac94f42b857777e46ef20ac89ba5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_beefac94f42b857777e46ef20ac89ba5);
        cache_frame_beefac94f42b857777e46ef20ac89ba5 = NULL;
    }

    assertFrameObject(frame_beefac94f42b857777e46ef20ac89ba5);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__2_accept_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_c5a380f96fb438c56862fc15930b2922;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5a380f96fb438c56862fc15930b2922 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5a380f96fb438c56862fc15930b2922)) {
        Py_XDECREF(cache_frame_c5a380f96fb438c56862fc15930b2922);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5a380f96fb438c56862fc15930b2922 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5a380f96fb438c56862fc15930b2922 = MAKE_FUNCTION_FRAME(codeobj_c5a380f96fb438c56862fc15930b2922, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c5a380f96fb438c56862fc15930b2922->m_type_description == NULL);
    frame_c5a380f96fb438c56862fc15930b2922 = cache_frame_c5a380f96fb438c56862fc15930b2922;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c5a380f96fb438c56862fc15930b2922);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c5a380f96fb438c56862fc15930b2922) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c5a380f96fb438c56862fc15930b2922->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c5a380f96fb438c56862fc15930b2922);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c5a380f96fb438c56862fc15930b2922);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5a380f96fb438c56862fc15930b2922, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5a380f96fb438c56862fc15930b2922->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5a380f96fb438c56862fc15930b2922, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5a380f96fb438c56862fc15930b2922,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_c5a380f96fb438c56862fc15930b2922 == cache_frame_c5a380f96fb438c56862fc15930b2922) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c5a380f96fb438c56862fc15930b2922);
        cache_frame_c5a380f96fb438c56862fc15930b2922 = NULL;
    }

    assertFrameObject(frame_c5a380f96fb438c56862fc15930b2922);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__3_start_reverse_incremental_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_c373c8cd110337e7c963a880c0bdc219;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c373c8cd110337e7c963a880c0bdc219 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c373c8cd110337e7c963a880c0bdc219)) {
        Py_XDECREF(cache_frame_c373c8cd110337e7c963a880c0bdc219);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c373c8cd110337e7c963a880c0bdc219 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c373c8cd110337e7c963a880c0bdc219 = MAKE_FUNCTION_FRAME(codeobj_c373c8cd110337e7c963a880c0bdc219, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c373c8cd110337e7c963a880c0bdc219->m_type_description == NULL);
    frame_c373c8cd110337e7c963a880c0bdc219 = cache_frame_c373c8cd110337e7c963a880c0bdc219;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c373c8cd110337e7c963a880c0bdc219);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c373c8cd110337e7c963a880c0bdc219) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c373c8cd110337e7c963a880c0bdc219->m_frame.f_lineno = 50;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c373c8cd110337e7c963a880c0bdc219);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c373c8cd110337e7c963a880c0bdc219);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c373c8cd110337e7c963a880c0bdc219, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c373c8cd110337e7c963a880c0bdc219->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c373c8cd110337e7c963a880c0bdc219, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c373c8cd110337e7c963a880c0bdc219,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_c373c8cd110337e7c963a880c0bdc219 == cache_frame_c373c8cd110337e7c963a880c0bdc219) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c373c8cd110337e7c963a880c0bdc219);
        cache_frame_c373c8cd110337e7c963a880c0bdc219 = NULL;
    }

    assertFrameObject(frame_c373c8cd110337e7c963a880c0bdc219);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__4_start_forward_incremental_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_956f35b336cc711195ecbecfda87b93a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_956f35b336cc711195ecbecfda87b93a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_956f35b336cc711195ecbecfda87b93a)) {
        Py_XDECREF(cache_frame_956f35b336cc711195ecbecfda87b93a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_956f35b336cc711195ecbecfda87b93a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_956f35b336cc711195ecbecfda87b93a = MAKE_FUNCTION_FRAME(codeobj_956f35b336cc711195ecbecfda87b93a, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_956f35b336cc711195ecbecfda87b93a->m_type_description == NULL);
    frame_956f35b336cc711195ecbecfda87b93a = cache_frame_956f35b336cc711195ecbecfda87b93a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_956f35b336cc711195ecbecfda87b93a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_956f35b336cc711195ecbecfda87b93a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_956f35b336cc711195ecbecfda87b93a->m_frame.f_lineno = 59;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_956f35b336cc711195ecbecfda87b93a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_956f35b336cc711195ecbecfda87b93a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_956f35b336cc711195ecbecfda87b93a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_956f35b336cc711195ecbecfda87b93a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_956f35b336cc711195ecbecfda87b93a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_956f35b336cc711195ecbecfda87b93a,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_956f35b336cc711195ecbecfda87b93a == cache_frame_956f35b336cc711195ecbecfda87b93a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_956f35b336cc711195ecbecfda87b93a);
        cache_frame_956f35b336cc711195ecbecfda87b93a = NULL;
    }

    assertFrameObject(frame_956f35b336cc711195ecbecfda87b93a);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__5_reverse_incremental_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_62b5876fa5a59412f7bb4103bcd11de1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62b5876fa5a59412f7bb4103bcd11de1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62b5876fa5a59412f7bb4103bcd11de1)) {
        Py_XDECREF(cache_frame_62b5876fa5a59412f7bb4103bcd11de1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62b5876fa5a59412f7bb4103bcd11de1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62b5876fa5a59412f7bb4103bcd11de1 = MAKE_FUNCTION_FRAME(codeobj_62b5876fa5a59412f7bb4103bcd11de1, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_62b5876fa5a59412f7bb4103bcd11de1->m_type_description == NULL);
    frame_62b5876fa5a59412f7bb4103bcd11de1 = cache_frame_62b5876fa5a59412f7bb4103bcd11de1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_62b5876fa5a59412f7bb4103bcd11de1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_62b5876fa5a59412f7bb4103bcd11de1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[13]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_62b5876fa5a59412f7bb4103bcd11de1->m_frame.f_lineno = 67;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62b5876fa5a59412f7bb4103bcd11de1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62b5876fa5a59412f7bb4103bcd11de1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62b5876fa5a59412f7bb4103bcd11de1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62b5876fa5a59412f7bb4103bcd11de1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62b5876fa5a59412f7bb4103bcd11de1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62b5876fa5a59412f7bb4103bcd11de1,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_62b5876fa5a59412f7bb4103bcd11de1 == cache_frame_62b5876fa5a59412f7bb4103bcd11de1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_62b5876fa5a59412f7bb4103bcd11de1);
        cache_frame_62b5876fa5a59412f7bb4103bcd11de1 = NULL;
    }

    assertFrameObject(frame_62b5876fa5a59412f7bb4103bcd11de1);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__6_forward_incremental_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_4d62d51b565c1f183165cb5079776200;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d62d51b565c1f183165cb5079776200 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d62d51b565c1f183165cb5079776200)) {
        Py_XDECREF(cache_frame_4d62d51b565c1f183165cb5079776200);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d62d51b565c1f183165cb5079776200 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d62d51b565c1f183165cb5079776200 = MAKE_FUNCTION_FRAME(codeobj_4d62d51b565c1f183165cb5079776200, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4d62d51b565c1f183165cb5079776200->m_type_description == NULL);
    frame_4d62d51b565c1f183165cb5079776200 = cache_frame_4d62d51b565c1f183165cb5079776200;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4d62d51b565c1f183165cb5079776200);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4d62d51b565c1f183165cb5079776200) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[13]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4d62d51b565c1f183165cb5079776200->m_frame.f_lineno = 75;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d62d51b565c1f183165cb5079776200);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d62d51b565c1f183165cb5079776200);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d62d51b565c1f183165cb5079776200, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d62d51b565c1f183165cb5079776200->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d62d51b565c1f183165cb5079776200, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d62d51b565c1f183165cb5079776200,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_4d62d51b565c1f183165cb5079776200 == cache_frame_4d62d51b565c1f183165cb5079776200) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4d62d51b565c1f183165cb5079776200);
        cache_frame_4d62d51b565c1f183165cb5079776200 = NULL;
    }

    assertFrameObject(frame_4d62d51b565c1f183165cb5079776200);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__7__previous_buffer_is_returnable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_prev_control = NULL;
    struct Nuitka_FrameObject *frame_67fe91a21728b90be4ae9ceefab5eaf3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_67fe91a21728b90be4ae9ceefab5eaf3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_67fe91a21728b90be4ae9ceefab5eaf3)) {
        Py_XDECREF(cache_frame_67fe91a21728b90be4ae9ceefab5eaf3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_67fe91a21728b90be4ae9ceefab5eaf3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_67fe91a21728b90be4ae9ceefab5eaf3 = MAKE_FUNCTION_FRAME(codeobj_67fe91a21728b90be4ae9ceefab5eaf3, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_67fe91a21728b90be4ae9ceefab5eaf3->m_type_description == NULL);
    frame_67fe91a21728b90be4ae9ceefab5eaf3 = cache_frame_67fe91a21728b90be4ae9ceefab5eaf3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_67fe91a21728b90be4ae9ceefab5eaf3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_67fe91a21728b90be4ae9ceefab5eaf3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_67fe91a21728b90be4ae9ceefab5eaf3->m_frame.f_lineno = 83;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_prev_control == NULL);
        var_prev_control = tmp_assign_source_1;
    }
    {
        PyObject *tmp_value_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_prev_control);
        tmp_and_left_value_1 = var_prev_control;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_prev_control);
        tmp_expression_value_4 = var_prev_control;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_value_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_value_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_67fe91a21728b90be4ae9ceefab5eaf3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_67fe91a21728b90be4ae9ceefab5eaf3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_67fe91a21728b90be4ae9ceefab5eaf3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_67fe91a21728b90be4ae9ceefab5eaf3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_67fe91a21728b90be4ae9ceefab5eaf3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_67fe91a21728b90be4ae9ceefab5eaf3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_67fe91a21728b90be4ae9ceefab5eaf3,
        type_description_1,
        var_prev_control
    );


    // Release cached frame if used for exception.
    if (frame_67fe91a21728b90be4ae9ceefab5eaf3 == cache_frame_67fe91a21728b90be4ae9ceefab5eaf3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_67fe91a21728b90be4ae9ceefab5eaf3);
        cache_frame_67fe91a21728b90be4ae9ceefab5eaf3 = NULL;
    }

    assertFrameObject(frame_67fe91a21728b90be4ae9ceefab5eaf3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prev_control);
    var_prev_control = NULL;
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

    Py_XDECREF(var_prev_control);
    var_prev_control = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$search$$$function__8_accept_search_and_accept_input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_567b7c511a0bbb90faa8ebd89b4657f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_567b7c511a0bbb90faa8ebd89b4657f1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_567b7c511a0bbb90faa8ebd89b4657f1)) {
        Py_XDECREF(cache_frame_567b7c511a0bbb90faa8ebd89b4657f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_567b7c511a0bbb90faa8ebd89b4657f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_567b7c511a0bbb90faa8ebd89b4657f1 = MAKE_FUNCTION_FRAME(codeobj_567b7c511a0bbb90faa8ebd89b4657f1, module_prompt_toolkit$key_binding$bindings$search, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_567b7c511a0bbb90faa8ebd89b4657f1->m_type_description == NULL);
    frame_567b7c511a0bbb90faa8ebd89b4657f1 = cache_frame_567b7c511a0bbb90faa8ebd89b4657f1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_567b7c511a0bbb90faa8ebd89b4657f1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_567b7c511a0bbb90faa8ebd89b4657f1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_567b7c511a0bbb90faa8ebd89b4657f1->m_frame.f_lineno = 92;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_567b7c511a0bbb90faa8ebd89b4657f1->m_frame.f_lineno = 93;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[24]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_567b7c511a0bbb90faa8ebd89b4657f1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_567b7c511a0bbb90faa8ebd89b4657f1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_567b7c511a0bbb90faa8ebd89b4657f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_567b7c511a0bbb90faa8ebd89b4657f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_567b7c511a0bbb90faa8ebd89b4657f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_567b7c511a0bbb90faa8ebd89b4657f1,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_567b7c511a0bbb90faa8ebd89b4657f1 == cache_frame_567b7c511a0bbb90faa8ebd89b4657f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_567b7c511a0bbb90faa8ebd89b4657f1);
        cache_frame_567b7c511a0bbb90faa8ebd89b4657f1 = NULL;
    }

    assertFrameObject(frame_567b7c511a0bbb90faa8ebd89b4657f1);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__1_abort_search(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__1_abort_search,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_beefac94f42b857777e46ef20ac89ba5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__2_accept_search(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__2_accept_search,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5a380f96fb438c56862fc15930b2922,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__3_start_reverse_incremental_search(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__3_start_reverse_incremental_search,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c373c8cd110337e7c963a880c0bdc219,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__4_start_forward_incremental_search(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__4_start_forward_incremental_search,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_956f35b336cc711195ecbecfda87b93a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__5_reverse_incremental_search(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__5_reverse_incremental_search,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_62b5876fa5a59412f7bb4103bcd11de1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__6_forward_incremental_search(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__6_forward_incremental_search,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d62d51b565c1f183165cb5079776200,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__7__previous_buffer_is_returnable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__7__previous_buffer_is_returnable,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_67fe91a21728b90be4ae9ceefab5eaf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__8_accept_search_and_accept_input(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$search$$$function__8_accept_search_and_accept_input,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_567b7c511a0bbb90faa8ebd89b4657f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$search,
        mod_consts[25],
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

function_impl_code functable_prompt_toolkit$key_binding$bindings$search[] = {
    impl_prompt_toolkit$key_binding$bindings$search$$$function__1_abort_search,
    impl_prompt_toolkit$key_binding$bindings$search$$$function__2_accept_search,
    impl_prompt_toolkit$key_binding$bindings$search$$$function__3_start_reverse_incremental_search,
    impl_prompt_toolkit$key_binding$bindings$search$$$function__4_start_forward_incremental_search,
    impl_prompt_toolkit$key_binding$bindings$search$$$function__5_reverse_incremental_search,
    impl_prompt_toolkit$key_binding$bindings$search$$$function__6_forward_incremental_search,
    impl_prompt_toolkit$key_binding$bindings$search$$$function__7__previous_buffer_is_returnable,
    impl_prompt_toolkit$key_binding$bindings$search$$$function__8_accept_search_and_accept_input,
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

    function_impl_code *current = functable_prompt_toolkit$key_binding$bindings$search;
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

    if (offset > sizeof(functable_prompt_toolkit$key_binding$bindings$search) || offset < 0) {
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
        functable_prompt_toolkit$key_binding$bindings$search[offset],
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
        module_prompt_toolkit$key_binding$bindings$search,
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
PyObject *modulecode_prompt_toolkit$key_binding$bindings$search(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit.key_binding.bindings.search");

    // Store the module for future use.
    module_prompt_toolkit$key_binding$bindings$search = module;

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
        PRINT_STRING("prompt_toolkit.key_binding.bindings.search: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.key_binding.bindings.search: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.key_binding.bindings.search: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$key_binding$bindings$search\n");

    moduledict_prompt_toolkit$key_binding$bindings$search = MODULE_DICT(module_prompt_toolkit$key_binding$bindings$search);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$key_binding$bindings$search,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$search,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[68]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$search,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$search,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$search,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$key_binding$bindings$search);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_prompt_toolkit$key_binding$bindings$search);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e55b57eeee83fa3c049d32eaa51fa0ec;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e55b57eeee83fa3c049d32eaa51fa0ec = MAKE_MODULE_FRAME(codeobj_e55b57eeee83fa3c049d32eaa51fa0ec, module_prompt_toolkit$key_binding$bindings$search);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e55b57eeee83fa3c049d32eaa51fa0ec);
    assert(Py_REFCNT(frame_e55b57eeee83fa3c049d32eaa51fa0ec) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[31], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[33];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[34];
        tmp_level_value_1 = mod_consts[35];
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search,
                mod_consts[0],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[36];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[37];
        tmp_level_value_2 = mod_consts[35];
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search,
                mod_consts[17],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[38];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[39];
        tmp_level_value_3 = mod_consts[35];
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 6;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search,
                mod_consts[40],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[40]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search,
                mod_consts[41],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[41]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search,
                mod_consts[42],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[42]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[43];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[44];
        tmp_level_value_4 = mod_consts[35];
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 7;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search,
                mod_consts[45],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[46];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[47];
        tmp_level_value_5 = mod_consts[48];
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 9;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$search,
                mod_consts[49],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY(mod_consts[50]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assign_source_13 == NULL)) {
            tmp_assign_source_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_called_value_2 == NULL));
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 24;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[53]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[54];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[55];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_args_element_value_1 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__1_abort_search(tmp_annotations_1);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 24;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 34;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_called_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[53]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[54];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[55];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_args_element_value_2 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__2_accept_search(tmp_annotations_2);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 34;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 44;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_called_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[53]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[54];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[55];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_args_element_value_3 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__3_start_reverse_incremental_search(tmp_annotations_3);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 44;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 53;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_called_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[53]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[54];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[55];
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_args_element_value_4 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__4_start_forward_incremental_search(tmp_annotations_4);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 53;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 62;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_called_value_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[53]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[54];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[55];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_args_element_value_5 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__5_reverse_incremental_search(tmp_annotations_5);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 62;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 70;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

            tmp_called_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[53]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = mod_consts[54];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[55];
        tmp_dict_value_6 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_args_element_value_6 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__6_forward_incremental_search(tmp_annotations_6);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 70;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_annotations_7;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = PyDict_Copy(mod_consts[61]);


        tmp_args_element_value_7 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__7__previous_buffer_is_returnable(tmp_annotations_7);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 78;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_right_value_1 == NULL));
        tmp_kw_call_value_0_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 87;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

            tmp_called_value_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[53]);
        }

        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = mod_consts[54];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[55];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_args_element_value_8 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$search$$$function__8_accept_search_and_accept_input(tmp_annotations_8);

        frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame.f_lineno = 87;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_21);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e55b57eeee83fa3c049d32eaa51fa0ec);
#endif
    popFrameStack();

    assertFrameObject(frame_e55b57eeee83fa3c049d32eaa51fa0ec);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e55b57eeee83fa3c049d32eaa51fa0ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e55b57eeee83fa3c049d32eaa51fa0ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e55b57eeee83fa3c049d32eaa51fa0ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e55b57eeee83fa3c049d32eaa51fa0ec, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit.key_binding.bindings.search", false);

    Py_INCREF(module_prompt_toolkit$key_binding$bindings$search);
    return module_prompt_toolkit$key_binding$bindings$search;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$search, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$search", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
