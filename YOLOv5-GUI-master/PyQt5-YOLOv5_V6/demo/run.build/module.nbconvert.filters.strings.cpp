/* Generated code for Python module 'nbconvert.filters.strings'
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

/* The "module_nbconvert$filters$strings" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nbconvert$filters$strings;
PyDictObject *moduledict_nbconvert$filters$strings;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[143];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[143];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("nbconvert.filters.strings"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 143; i++) {
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
void checkModuleConstants_nbconvert$filters$strings(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 143; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_21ede6440dd8fc1d987896be1133ac33;
static PyCodeObject *codeobj_d620e83e34a7b157204d80eed5efbe66;
static PyCodeObject *codeobj_4c0a150b903d8f6cf08ac714a4db350b;
static PyCodeObject *codeobj_f9860c8e07675a2f8568b2ef1d3308e0;
static PyCodeObject *codeobj_bad2ae154989aeb6beb2c3d076c663ae;
static PyCodeObject *codeobj_8646701e934a873975fa2f65f149ebfe;
static PyCodeObject *codeobj_ba8273598095f36a652739c1585f49e5;
static PyCodeObject *codeobj_a5c1da88f819be234d86d2f5d7b94b41;
static PyCodeObject *codeobj_03c32b6bbda3cd13fc5f96b253e67492;
static PyCodeObject *codeobj_9d76de820410973467f86605ea2965e3;
static PyCodeObject *codeobj_ee2189ee8e1837cad3d3ef1505ae55a8;
static PyCodeObject *codeobj_216480945a5045b0379707fcb4e930f0;
static PyCodeObject *codeobj_403aaa8c449b45a6ce6b0cd610a761c1;
static PyCodeObject *codeobj_ee389da86d5e349e47595f4274ada8bd;
static PyCodeObject *codeobj_a7ca34409300b006039b8d2e3b09b820;
static PyCodeObject *codeobj_ad3c1098961e92f68c6fbb530c33a377;
static PyCodeObject *codeobj_5d9daf696e9b04bed182a4e0216c7c4e;
static PyCodeObject *codeobj_6c2e957884bf234010ebbc05945188f1;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[124]); CHECK_OBJECT(module_filename_obj);
    codeobj_21ede6440dd8fc1d987896be1133ac33 = MAKE_CODEOBJECT(module_filename_obj, 226, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[125], NULL, 1, 0, 0);
    codeobj_d620e83e34a7b157204d80eed5efbe66 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[126], mod_consts[127], 1, 0, 0);
    codeobj_4c0a150b903d8f6cf08ac714a4db350b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_f9860c8e07675a2f8568b2ef1d3308e0 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[129], NULL, 1, 0, 0);
    codeobj_bad2ae154989aeb6beb2c3d076c663ae = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[130], NULL, 2, 0, 0);
    codeobj_8646701e934a873975fa2f65f149ebfe = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[131], NULL, 3, 0, 0);
    codeobj_ba8273598095f36a652739c1585f49e5 = MAKE_CODEOBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[132], NULL, 1, 0, 0);
    codeobj_a5c1da88f819be234d86d2f5d7b94b41 = MAKE_CODEOBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[133], NULL, 2, 0, 0);
    codeobj_03c32b6bbda3cd13fc5f96b253e67492 = MAKE_CODEOBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[134], NULL, 3, 0, 0);
    codeobj_9d76de820410973467f86605ea2965e3 = MAKE_CODEOBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[135], NULL, 1, 0, 0);
    codeobj_ee2189ee8e1837cad3d3ef1505ae55a8 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[136], NULL, 1, 0, 0);
    codeobj_216480945a5045b0379707fcb4e930f0 = MAKE_CODEOBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[137], NULL, 1, 0, 0);
    codeobj_403aaa8c449b45a6ce6b0cd610a761c1 = MAKE_CODEOBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[138], NULL, 1, 0, 0);
    codeobj_ee389da86d5e349e47595f4274ada8bd = MAKE_CODEOBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[139], NULL, 1, 0, 0);
    codeobj_a7ca34409300b006039b8d2e3b09b820 = MAKE_CODEOBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[140], NULL, 1, 0, 0);
    codeobj_ad3c1098961e92f68c6fbb530c33a377 = MAKE_CODEOBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[141], NULL, 1, 0, 0);
    codeobj_5d9daf696e9b04bed182a4e0216c7c4e = MAKE_CODEOBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[140], NULL, 1, 0, 0);
    codeobj_6c2e957884bf234010ebbc05945188f1 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[142], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__10_ipython2python();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__11_posix_path();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__12_path2url();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__13_ascii_only();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__14_prevent_list_blocks();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__15_strip_trailing_newline();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__1_wrap_text(PyObject *defaults);


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__1_wrap_text$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__2_html2text();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__3__convert_header_id();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__4_add_anchor(PyObject *defaults);


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__5_add_prompts(PyObject *defaults);


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__6_strip_dollars();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__7_strip_files_prefix();


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__8_comment_lines(PyObject *defaults);


static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__9_get_lines(PyObject *defaults);


// The module function definitions.
static PyObject *impl_nbconvert$filters$strings$$$function__1_wrap_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_CellObject *par_width = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_split_text = NULL;
    PyObject *var_wrp = NULL;
    PyObject *var_wrpd = NULL;
    struct Nuitka_FrameObject *frame_6c2e957884bf234010ebbc05945188f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c2e957884bf234010ebbc05945188f1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6c2e957884bf234010ebbc05945188f1)) {
        Py_XDECREF(cache_frame_6c2e957884bf234010ebbc05945188f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c2e957884bf234010ebbc05945188f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c2e957884bf234010ebbc05945188f1 = MAKE_FUNCTION_FRAME(codeobj_6c2e957884bf234010ebbc05945188f1, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6c2e957884bf234010ebbc05945188f1->m_type_description == NULL);
    frame_6c2e957884bf234010ebbc05945188f1 = cache_frame_6c2e957884bf234010ebbc05945188f1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6c2e957884bf234010ebbc05945188f1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6c2e957884bf234010ebbc05945188f1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_text);
        tmp_expression_value_1 = par_text;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        frame_6c2e957884bf234010ebbc05945188f1->m_frame.f_lineno = 54;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        assert(var_split_text == NULL);
        var_split_text = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = (PyObject *)&PyMap_Type;

        tmp_closure_1[0] = par_width;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_1 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__1_wrap_text$$$function__1_lambda(tmp_closure_1);

        CHECK_OBJECT(var_split_text);
        tmp_args_element_value_2 = var_split_text;
        frame_6c2e957884bf234010ebbc05945188f1->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        assert(var_wrp == NULL);
        var_wrp = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = (PyObject *)&PyMap_Type;
        tmp_expression_value_2 = mod_consts[4];
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        assert(!(tmp_args_element_value_3 == NULL));
        CHECK_OBJECT(var_wrp);
        tmp_args_element_value_4 = var_wrp;
        frame_6c2e957884bf234010ebbc05945188f1->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        assert(var_wrpd == NULL);
        var_wrpd = tmp_assign_source_3;
    }
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[4];
        CHECK_OBJECT(var_wrpd);
        tmp_iterable_value_1 = var_wrpd;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c2e957884bf234010ebbc05945188f1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c2e957884bf234010ebbc05945188f1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c2e957884bf234010ebbc05945188f1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c2e957884bf234010ebbc05945188f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c2e957884bf234010ebbc05945188f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c2e957884bf234010ebbc05945188f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c2e957884bf234010ebbc05945188f1,
        type_description_1,
        par_text,
        par_width,
        var_split_text,
        var_wrp,
        var_wrpd
    );


    // Release cached frame if used for exception.
    if (frame_6c2e957884bf234010ebbc05945188f1 == cache_frame_6c2e957884bf234010ebbc05945188f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6c2e957884bf234010ebbc05945188f1);
        cache_frame_6c2e957884bf234010ebbc05945188f1 = NULL;
    }

    assertFrameObject(frame_6c2e957884bf234010ebbc05945188f1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_split_text);
    Py_DECREF(var_split_text);
    var_split_text = NULL;
    CHECK_OBJECT(var_wrp);
    Py_DECREF(var_wrp);
    var_wrp = NULL;
    CHECK_OBJECT(var_wrpd);
    Py_DECREF(var_wrpd);
    var_wrpd = NULL;
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

    Py_XDECREF(var_split_text);
    var_split_text = NULL;
    Py_XDECREF(var_wrp);
    var_wrp = NULL;
    Py_XDECREF(var_wrpd);
    var_wrpd = NULL;
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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__1_wrap_text$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_d620e83e34a7b157204d80eed5efbe66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d620e83e34a7b157204d80eed5efbe66 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d620e83e34a7b157204d80eed5efbe66)) {
        Py_XDECREF(cache_frame_d620e83e34a7b157204d80eed5efbe66);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d620e83e34a7b157204d80eed5efbe66 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d620e83e34a7b157204d80eed5efbe66 = MAKE_FUNCTION_FRAME(codeobj_d620e83e34a7b157204d80eed5efbe66, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d620e83e34a7b157204d80eed5efbe66->m_type_description == NULL);
    frame_d620e83e34a7b157204d80eed5efbe66 = cache_frame_d620e83e34a7b157204d80eed5efbe66;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d620e83e34a7b157204d80eed5efbe66);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d620e83e34a7b157204d80eed5efbe66) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_d620e83e34a7b157204d80eed5efbe66->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d620e83e34a7b157204d80eed5efbe66);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d620e83e34a7b157204d80eed5efbe66);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d620e83e34a7b157204d80eed5efbe66);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d620e83e34a7b157204d80eed5efbe66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d620e83e34a7b157204d80eed5efbe66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d620e83e34a7b157204d80eed5efbe66, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d620e83e34a7b157204d80eed5efbe66,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d620e83e34a7b157204d80eed5efbe66 == cache_frame_d620e83e34a7b157204d80eed5efbe66) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d620e83e34a7b157204d80eed5efbe66);
        cache_frame_d620e83e34a7b157204d80eed5efbe66 = NULL;
    }

    assertFrameObject(frame_d620e83e34a7b157204d80eed5efbe66);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__2_html2text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *var_text = NULL;
    PyObject *var_child = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9d76de820410973467f86605ea2965e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_9d76de820410973467f86605ea2965e3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9d76de820410973467f86605ea2965e3)) {
        Py_XDECREF(cache_frame_9d76de820410973467f86605ea2965e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d76de820410973467f86605ea2965e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d76de820410973467f86605ea2965e3 = MAKE_FUNCTION_FRAME(codeobj_9d76de820410973467f86605ea2965e3, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9d76de820410973467f86605ea2965e3->m_type_description == NULL);
    frame_9d76de820410973467f86605ea2965e3 = cache_frame_9d76de820410973467f86605ea2965e3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d76de820410973467f86605ea2965e3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d76de820410973467f86605ea2965e3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_element);
        tmp_isinstance_inst_1 = par_element;
        tmp_isinstance_cls_1 = mod_consts[10];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        frame_9d76de820410973467f86605ea2965e3->m_frame.f_lineno = 67;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_element;
            assert(old != NULL);
            par_element = tmp_assign_source_1;
            Py_DECREF(old);
        }

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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9d76de820410973467f86605ea2965e3, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9d76de820410973467f86605ea2965e3, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_element);
    tmp_return_value = par_element;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 66;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9d76de820410973467f86605ea2965e3->m_frame) frame_9d76de820410973467f86605ea2965e3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_element);
        tmp_expression_value_1 = par_element;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[14];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_text == NULL);
        var_text = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_element);
        tmp_iter_arg_1 = par_element;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 73;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_child;
            var_child = tmp_assign_source_5;
            Py_INCREF(var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        if (var_text == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_left_value_1 = var_text;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_child);
        tmp_args_element_value_2 = var_child;
        frame_9d76de820410973467f86605ea2965e3->m_frame.f_lineno = 74;
        tmp_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = tmp_left_value_1;
        var_text = tmp_assign_source_6;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 73;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
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
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_2;
        if (var_text == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_2 = var_text;
        CHECK_OBJECT(par_element);
        tmp_expression_value_2 = par_element;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = mod_consts[14];
        Py_INCREF(tmp_or_right_value_2);
        tmp_right_value_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_right_value_2 = tmp_or_left_value_2;
        or_end_2:;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_left_value_2;
        var_text = tmp_assign_source_7;

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d76de820410973467f86605ea2965e3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d76de820410973467f86605ea2965e3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d76de820410973467f86605ea2965e3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d76de820410973467f86605ea2965e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d76de820410973467f86605ea2965e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d76de820410973467f86605ea2965e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d76de820410973467f86605ea2965e3,
        type_description_1,
        par_element,
        var_text,
        var_child
    );


    // Release cached frame if used for exception.
    if (frame_9d76de820410973467f86605ea2965e3 == cache_frame_9d76de820410973467f86605ea2965e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9d76de820410973467f86605ea2965e3);
        cache_frame_9d76de820410973467f86605ea2965e3 = NULL;
    }

    assertFrameObject(frame_9d76de820410973467f86605ea2965e3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_text);
    tmp_return_value = var_text;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_element);
    par_element = NULL;
    Py_XDECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
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

    Py_XDECREF(par_element);
    par_element = NULL;
    Py_XDECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
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


static PyObject *impl_nbconvert$filters$strings$$$function__3__convert_header_id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_header_contents = python_pars[0];
    struct Nuitka_FrameObject *frame_f9860c8e07675a2f8568b2ef1d3308e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9860c8e07675a2f8568b2ef1d3308e0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9860c8e07675a2f8568b2ef1d3308e0)) {
        Py_XDECREF(cache_frame_f9860c8e07675a2f8568b2ef1d3308e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9860c8e07675a2f8568b2ef1d3308e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9860c8e07675a2f8568b2ef1d3308e0 = MAKE_FUNCTION_FRAME(codeobj_f9860c8e07675a2f8568b2ef1d3308e0, module_nbconvert$filters$strings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f9860c8e07675a2f8568b2ef1d3308e0->m_type_description == NULL);
    frame_f9860c8e07675a2f8568b2ef1d3308e0 = cache_frame_f9860c8e07675a2f8568b2ef1d3308e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f9860c8e07675a2f8568b2ef1d3308e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f9860c8e07675a2f8568b2ef1d3308e0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_header_contents);
        tmp_expression_value_1 = par_header_contents;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f9860c8e07675a2f8568b2ef1d3308e0->m_frame.f_lineno = 86;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[19]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f9860c8e07675a2f8568b2ef1d3308e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f9860c8e07675a2f8568b2ef1d3308e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f9860c8e07675a2f8568b2ef1d3308e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9860c8e07675a2f8568b2ef1d3308e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9860c8e07675a2f8568b2ef1d3308e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9860c8e07675a2f8568b2ef1d3308e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9860c8e07675a2f8568b2ef1d3308e0,
        type_description_1,
        par_header_contents
    );


    // Release cached frame if used for exception.
    if (frame_f9860c8e07675a2f8568b2ef1d3308e0 == cache_frame_f9860c8e07675a2f8568b2ef1d3308e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f9860c8e07675a2f8568b2ef1d3308e0);
        cache_frame_f9860c8e07675a2f8568b2ef1d3308e0 = NULL;
    }

    assertFrameObject(frame_f9860c8e07675a2f8568b2ef1d3308e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_header_contents);
    Py_DECREF(par_header_contents);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_header_contents);
    Py_DECREF(par_header_contents);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__4_add_anchor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_html = python_pars[0];
    PyObject *par_anchor_link_text = python_pars[1];
    PyObject *var_h = NULL;
    PyObject *var_link = NULL;
    PyObject *var_a = NULL;
    struct Nuitka_FrameObject *frame_bad2ae154989aeb6beb2c3d076c663ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_bad2ae154989aeb6beb2c3d076c663ae = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bad2ae154989aeb6beb2c3d076c663ae)) {
        Py_XDECREF(cache_frame_bad2ae154989aeb6beb2c3d076c663ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bad2ae154989aeb6beb2c3d076c663ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bad2ae154989aeb6beb2c3d076c663ae = MAKE_FUNCTION_FRAME(codeobj_bad2ae154989aeb6beb2c3d076c663ae, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bad2ae154989aeb6beb2c3d076c663ae->m_type_description == NULL);
    frame_bad2ae154989aeb6beb2c3d076c663ae = cache_frame_bad2ae154989aeb6beb2c3d076c663ae;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bad2ae154989aeb6beb2c3d076c663ae);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bad2ae154989aeb6beb2c3d076c663ae) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_html);
        tmp_args_element_value_1 = par_html;
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 95;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_1;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bad2ae154989aeb6beb2c3d076c663ae, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bad2ae154989aeb6beb2c3d076c663ae, exception_keeper_lineno_1);
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
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_html);
    tmp_return_value = par_html;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 94;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame) frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_h);
        tmp_args_element_value_3 = var_h;
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 99;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 99;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_link == NULL);
        var_link = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_h);
        tmp_called_instance_2 = var_h;
        tmp_args_element_value_4 = mod_consts[23];
        CHECK_OBJECT(var_link);
        tmp_args_element_value_5 = var_link;
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[25];
        tmp_dict_key_1 = mod_consts[26];
        tmp_dict_value_1 = mod_consts[27];
        tmp_args_element_value_7 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[28];
            tmp_left_value_1 = mod_consts[29];
            CHECK_OBJECT(var_link);
            tmp_right_value_1 = var_link;
            tmp_dict_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_a);
        tmp_expression_value_1 = var_a;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_anchor_link_text);
        tmp_args_element_value_9 = par_anchor_link_text;
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 104;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[12], tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 104;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_2;
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_bad2ae154989aeb6beb2c3d076c663ae, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_bad2ae154989aeb6beb2c3d076c663ae, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_anchor_link_text);
        tmp_assattr_value_1 = par_anchor_link_text;
        CHECK_OBJECT(var_a);
        tmp_assattr_target_1 = var_a;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 102;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame) frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_3;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_h);
        tmp_called_instance_4 = var_h;
        CHECK_OBJECT(var_a);
        tmp_args_element_value_10 = var_a;
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 108;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[30], tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_h);
        tmp_args_element_value_11 = var_h;
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 110;
        tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[31], tmp_args_element_value_11);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame.f_lineno = 110;
        tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[33], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bad2ae154989aeb6beb2c3d076c663ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bad2ae154989aeb6beb2c3d076c663ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bad2ae154989aeb6beb2c3d076c663ae);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bad2ae154989aeb6beb2c3d076c663ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bad2ae154989aeb6beb2c3d076c663ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bad2ae154989aeb6beb2c3d076c663ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bad2ae154989aeb6beb2c3d076c663ae,
        type_description_1,
        par_html,
        par_anchor_link_text,
        var_h,
        var_link,
        var_a
    );


    // Release cached frame if used for exception.
    if (frame_bad2ae154989aeb6beb2c3d076c663ae == cache_frame_bad2ae154989aeb6beb2c3d076c663ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bad2ae154989aeb6beb2c3d076c663ae);
        cache_frame_bad2ae154989aeb6beb2c3d076c663ae = NULL;
    }

    assertFrameObject(frame_bad2ae154989aeb6beb2c3d076c663ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_link);
    var_link = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
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

    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_link);
    var_link = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
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
    CHECK_OBJECT(par_html);
    Py_DECREF(par_html);
    CHECK_OBJECT(par_anchor_link_text);
    Py_DECREF(par_anchor_link_text);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_html);
    Py_DECREF(par_html);
    CHECK_OBJECT(par_anchor_link_text);
    Py_DECREF(par_anchor_link_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__5_add_prompts(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_code = python_pars[0];
    PyObject *par_first = python_pars[1];
    PyObject *par_cont = python_pars[2];
    PyObject *var_new_code = NULL;
    PyObject *var_code_list = NULL;
    PyObject *var_line = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8646701e934a873975fa2f65f149ebfe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8646701e934a873975fa2f65f149ebfe = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_new_code == NULL);
        var_new_code = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_8646701e934a873975fa2f65f149ebfe)) {
        Py_XDECREF(cache_frame_8646701e934a873975fa2f65f149ebfe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8646701e934a873975fa2f65f149ebfe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8646701e934a873975fa2f65f149ebfe = MAKE_FUNCTION_FRAME(codeobj_8646701e934a873975fa2f65f149ebfe, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8646701e934a873975fa2f65f149ebfe->m_type_description == NULL);
    frame_8646701e934a873975fa2f65f149ebfe = cache_frame_8646701e934a873975fa2f65f149ebfe;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8646701e934a873975fa2f65f149ebfe);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8646701e934a873975fa2f65f149ebfe) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_code);
        tmp_expression_value_1 = par_code;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8646701e934a873975fa2f65f149ebfe->m_frame.f_lineno = 116;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_code_list == NULL);
        var_code_list = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_new_code);
        tmp_expression_value_2 = var_new_code;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        assert(!(tmp_called_value_2 == NULL));
        CHECK_OBJECT(par_first);
        tmp_left_value_1 = par_first;
        CHECK_OBJECT(var_code_list);
        tmp_expression_value_3 = var_code_list;
        tmp_subscript_value_1 = mod_consts[36];
        tmp_right_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8646701e934a873975fa2f65f149ebfe->m_frame.f_lineno = 117;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_code_list);
        tmp_expression_value_4 = var_code_list;
        tmp_subscript_value_2 = mod_consts[37];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 118;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_5;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        if (var_new_code == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_new_code;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_cont == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_left_value_2 = par_cont;
        CHECK_OBJECT(var_line);
        tmp_right_value_2 = var_line;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8646701e934a873975fa2f65f149ebfe->m_frame.f_lineno = 119;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 118;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[4];
        if (var_new_code == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_new_code;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8646701e934a873975fa2f65f149ebfe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8646701e934a873975fa2f65f149ebfe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8646701e934a873975fa2f65f149ebfe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8646701e934a873975fa2f65f149ebfe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8646701e934a873975fa2f65f149ebfe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8646701e934a873975fa2f65f149ebfe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8646701e934a873975fa2f65f149ebfe,
        type_description_1,
        par_code,
        par_first,
        par_cont,
        var_new_code,
        var_code_list,
        var_line
    );


    // Release cached frame if used for exception.
    if (frame_8646701e934a873975fa2f65f149ebfe == cache_frame_8646701e934a873975fa2f65f149ebfe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8646701e934a873975fa2f65f149ebfe);
        cache_frame_8646701e934a873975fa2f65f149ebfe = NULL;
    }

    assertFrameObject(frame_8646701e934a873975fa2f65f149ebfe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_new_code);
    var_new_code = NULL;
    CHECK_OBJECT(var_code_list);
    Py_DECREF(var_code_list);
    var_code_list = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
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

    Py_XDECREF(var_new_code);
    var_new_code = NULL;
    Py_XDECREF(var_code_list);
    var_code_list = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
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
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_first);
    Py_DECREF(par_first);
    CHECK_OBJECT(par_cont);
    Py_DECREF(par_cont);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_first);
    Py_DECREF(par_first);
    CHECK_OBJECT(par_cont);
    Py_DECREF(par_cont);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__6_strip_dollars(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_a7ca34409300b006039b8d2e3b09b820;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7ca34409300b006039b8d2e3b09b820 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7ca34409300b006039b8d2e3b09b820)) {
        Py_XDECREF(cache_frame_a7ca34409300b006039b8d2e3b09b820);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7ca34409300b006039b8d2e3b09b820 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7ca34409300b006039b8d2e3b09b820 = MAKE_FUNCTION_FRAME(codeobj_a7ca34409300b006039b8d2e3b09b820, module_nbconvert$filters$strings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a7ca34409300b006039b8d2e3b09b820->m_type_description == NULL);
    frame_a7ca34409300b006039b8d2e3b09b820 = cache_frame_a7ca34409300b006039b8d2e3b09b820;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7ca34409300b006039b8d2e3b09b820);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7ca34409300b006039b8d2e3b09b820) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_text);
        tmp_expression_value_1 = par_text;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a7ca34409300b006039b8d2e3b09b820->m_frame.f_lineno = 133;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[42]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7ca34409300b006039b8d2e3b09b820);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7ca34409300b006039b8d2e3b09b820);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7ca34409300b006039b8d2e3b09b820);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7ca34409300b006039b8d2e3b09b820, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7ca34409300b006039b8d2e3b09b820->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7ca34409300b006039b8d2e3b09b820, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7ca34409300b006039b8d2e3b09b820,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_a7ca34409300b006039b8d2e3b09b820 == cache_frame_a7ca34409300b006039b8d2e3b09b820) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a7ca34409300b006039b8d2e3b09b820);
        cache_frame_a7ca34409300b006039b8d2e3b09b820 = NULL;
    }

    assertFrameObject(frame_a7ca34409300b006039b8d2e3b09b820);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__7_strip_files_prefix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *var_cleaned_text = NULL;
    struct Nuitka_FrameObject *frame_ad3c1098961e92f68c6fbb530c33a377;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad3c1098961e92f68c6fbb530c33a377 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad3c1098961e92f68c6fbb530c33a377)) {
        Py_XDECREF(cache_frame_ad3c1098961e92f68c6fbb530c33a377);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad3c1098961e92f68c6fbb530c33a377 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad3c1098961e92f68c6fbb530c33a377 = MAKE_FUNCTION_FRAME(codeobj_ad3c1098961e92f68c6fbb530c33a377, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ad3c1098961e92f68c6fbb530c33a377->m_type_description == NULL);
    frame_ad3c1098961e92f68c6fbb530c33a377 = cache_frame_ad3c1098961e92f68c6fbb530c33a377;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ad3c1098961e92f68c6fbb530c33a377);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ad3c1098961e92f68c6fbb530c33a377) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[46];
        CHECK_OBJECT(par_text);
        tmp_args_element_value_2 = par_text;
        frame_ad3c1098961e92f68c6fbb530c33a377->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_cleaned_text == NULL);
        var_cleaned_text = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[48];
        CHECK_OBJECT(var_cleaned_text);
        tmp_args_element_value_4 = var_cleaned_text;
        frame_ad3c1098961e92f68c6fbb530c33a377->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cleaned_text;
            assert(old != NULL);
            var_cleaned_text = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad3c1098961e92f68c6fbb530c33a377);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad3c1098961e92f68c6fbb530c33a377);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad3c1098961e92f68c6fbb530c33a377, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad3c1098961e92f68c6fbb530c33a377->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad3c1098961e92f68c6fbb530c33a377, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad3c1098961e92f68c6fbb530c33a377,
        type_description_1,
        par_text,
        var_cleaned_text
    );


    // Release cached frame if used for exception.
    if (frame_ad3c1098961e92f68c6fbb530c33a377 == cache_frame_ad3c1098961e92f68c6fbb530c33a377) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ad3c1098961e92f68c6fbb530c33a377);
        cache_frame_ad3c1098961e92f68c6fbb530c33a377 = NULL;
    }

    assertFrameObject(frame_ad3c1098961e92f68c6fbb530c33a377);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_cleaned_text);
    tmp_return_value = var_cleaned_text;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cleaned_text);
    Py_DECREF(var_cleaned_text);
    var_cleaned_text = NULL;
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

    Py_XDECREF(var_cleaned_text);
    var_cleaned_text = NULL;
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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__8_comment_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_prefix = python_pars[1];
    struct Nuitka_FrameObject *frame_a5c1da88f819be234d86d2f5d7b94b41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a5c1da88f819be234d86d2f5d7b94b41 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5c1da88f819be234d86d2f5d7b94b41)) {
        Py_XDECREF(cache_frame_a5c1da88f819be234d86d2f5d7b94b41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5c1da88f819be234d86d2f5d7b94b41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5c1da88f819be234d86d2f5d7b94b41 = MAKE_FUNCTION_FRAME(codeobj_a5c1da88f819be234d86d2f5d7b94b41, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a5c1da88f819be234d86d2f5d7b94b41->m_type_description == NULL);
    frame_a5c1da88f819be234d86d2f5d7b94b41 = cache_frame_a5c1da88f819be234d86d2f5d7b94b41;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a5c1da88f819be234d86d2f5d7b94b41);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a5c1da88f819be234d86d2f5d7b94b41) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_prefix);
        tmp_left_value_1 = par_prefix;
        tmp_left_value_2 = mod_consts[4];
        CHECK_OBJECT(par_prefix);
        tmp_right_value_2 = par_prefix;
        tmp_expression_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_2, tmp_right_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_expression_value_2 = par_text;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a5c1da88f819be234d86d2f5d7b94b41->m_frame.f_lineno = 169;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[1]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a5c1da88f819be234d86d2f5d7b94b41->m_frame.f_lineno = 169;
        tmp_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a5c1da88f819be234d86d2f5d7b94b41);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a5c1da88f819be234d86d2f5d7b94b41);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a5c1da88f819be234d86d2f5d7b94b41);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5c1da88f819be234d86d2f5d7b94b41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5c1da88f819be234d86d2f5d7b94b41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5c1da88f819be234d86d2f5d7b94b41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5c1da88f819be234d86d2f5d7b94b41,
        type_description_1,
        par_text,
        par_prefix
    );


    // Release cached frame if used for exception.
    if (frame_a5c1da88f819be234d86d2f5d7b94b41 == cache_frame_a5c1da88f819be234d86d2f5d7b94b41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a5c1da88f819be234d86d2f5d7b94b41);
        cache_frame_a5c1da88f819be234d86d2f5d7b94b41 = NULL;
    }

    assertFrameObject(frame_a5c1da88f819be234d86d2f5d7b94b41);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__9_get_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_start = python_pars[1];
    PyObject *par_end = python_pars[2];
    PyObject *var_lines = NULL;
    struct Nuitka_FrameObject *frame_03c32b6bbda3cd13fc5f96b253e67492;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_03c32b6bbda3cd13fc5f96b253e67492 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_03c32b6bbda3cd13fc5f96b253e67492)) {
        Py_XDECREF(cache_frame_03c32b6bbda3cd13fc5f96b253e67492);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03c32b6bbda3cd13fc5f96b253e67492 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03c32b6bbda3cd13fc5f96b253e67492 = MAKE_FUNCTION_FRAME(codeobj_03c32b6bbda3cd13fc5f96b253e67492, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_03c32b6bbda3cd13fc5f96b253e67492->m_type_description == NULL);
    frame_03c32b6bbda3cd13fc5f96b253e67492 = cache_frame_03c32b6bbda3cd13fc5f96b253e67492;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_03c32b6bbda3cd13fc5f96b253e67492);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_03c32b6bbda3cd13fc5f96b253e67492) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_text);
        tmp_expression_value_1 = par_text;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_03c32b6bbda3cd13fc5f96b253e67492->m_frame.f_lineno = 188;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_1;
    }
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        tmp_str_arg_value_1 = mod_consts[4];
        CHECK_OBJECT(var_lines);
        tmp_expression_value_2 = var_lines;
        CHECK_OBJECT(par_start);
        tmp_start_value_1 = par_start;
        CHECK_OBJECT(par_end);
        tmp_stop_value_1 = par_end;
        tmp_subscript_value_1 = MAKE_SLICEOBJ2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_iterable_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03c32b6bbda3cd13fc5f96b253e67492);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_03c32b6bbda3cd13fc5f96b253e67492);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03c32b6bbda3cd13fc5f96b253e67492);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03c32b6bbda3cd13fc5f96b253e67492, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03c32b6bbda3cd13fc5f96b253e67492->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03c32b6bbda3cd13fc5f96b253e67492, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03c32b6bbda3cd13fc5f96b253e67492,
        type_description_1,
        par_text,
        par_start,
        par_end,
        var_lines
    );


    // Release cached frame if used for exception.
    if (frame_03c32b6bbda3cd13fc5f96b253e67492 == cache_frame_03c32b6bbda3cd13fc5f96b253e67492) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_03c32b6bbda3cd13fc5f96b253e67492);
        cache_frame_03c32b6bbda3cd13fc5f96b253e67492 = NULL;
    }

    assertFrameObject(frame_03c32b6bbda3cd13fc5f96b253e67492);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lines);
    Py_DECREF(var_lines);
    var_lines = NULL;
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

    Py_XDECREF(var_lines);
    var_lines = NULL;
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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__10_ipython2python(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_code = python_pars[0];
    PyObject *var_IPythonInputSplitter = NULL;
    PyObject *var_isp = NULL;
    struct Nuitka_FrameObject *frame_ee2189ee8e1837cad3d3ef1505ae55a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8)) {
        Py_XDECREF(cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8 = MAKE_FUNCTION_FRAME(codeobj_ee2189ee8e1837cad3d3ef1505ae55a8, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_type_description == NULL);
    frame_ee2189ee8e1837cad3d3ef1505ae55a8 = cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee2189ee8e1837cad3d3ef1505ae55a8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee2189ee8e1837cad3d3ef1505ae55a8) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[52];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_nbconvert$filters$strings;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[53];
        tmp_level_value_1 = mod_consts[36];
        frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_frame.f_lineno = 202;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_nbconvert$filters$strings,
                mod_consts[54],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_IPythonInputSplitter == NULL);
        var_IPythonInputSplitter = tmp_assign_source_1;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ee2189ee8e1837cad3d3ef1505ae55a8, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ee2189ee8e1837cad3d3ef1505ae55a8, exception_keeper_lineno_1);
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
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_frame.f_lineno = 204;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[56],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    CHECK_OBJECT(par_code);
    tmp_return_value = par_code;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 201;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_frame) frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_IPythonInputSplitter);
        tmp_called_value_1 = var_IPythonInputSplitter;
        frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_frame.f_lineno = 210;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[58], 0), mod_consts[59]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_isp == NULL);
        var_isp = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_isp);
        tmp_called_instance_2 = var_isp;
        CHECK_OBJECT(par_code);
        tmp_args_element_value_1 = par_code;
        frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_frame.f_lineno = 211;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[60], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2189ee8e1837cad3d3ef1505ae55a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2189ee8e1837cad3d3ef1505ae55a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2189ee8e1837cad3d3ef1505ae55a8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee2189ee8e1837cad3d3ef1505ae55a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee2189ee8e1837cad3d3ef1505ae55a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee2189ee8e1837cad3d3ef1505ae55a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee2189ee8e1837cad3d3ef1505ae55a8,
        type_description_1,
        par_code,
        var_IPythonInputSplitter,
        var_isp
    );


    // Release cached frame if used for exception.
    if (frame_ee2189ee8e1837cad3d3ef1505ae55a8 == cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8);
        cache_frame_ee2189ee8e1837cad3d3ef1505ae55a8 = NULL;
    }

    assertFrameObject(frame_ee2189ee8e1837cad3d3ef1505ae55a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_IPythonInputSplitter);
    var_IPythonInputSplitter = NULL;
    Py_XDECREF(var_isp);
    var_isp = NULL;
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

    Py_XDECREF(var_IPythonInputSplitter);
    var_IPythonInputSplitter = NULL;
    Py_XDECREF(var_isp);
    var_isp = NULL;
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
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__11_posix_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_403aaa8c449b45a6ce6b0cd610a761c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_403aaa8c449b45a6ce6b0cd610a761c1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_403aaa8c449b45a6ce6b0cd610a761c1)) {
        Py_XDECREF(cache_frame_403aaa8c449b45a6ce6b0cd610a761c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_403aaa8c449b45a6ce6b0cd610a761c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_403aaa8c449b45a6ce6b0cd610a761c1 = MAKE_FUNCTION_FRAME(codeobj_403aaa8c449b45a6ce6b0cd610a761c1, module_nbconvert$filters$strings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_403aaa8c449b45a6ce6b0cd610a761c1->m_type_description == NULL);
    frame_403aaa8c449b45a6ce6b0cd610a761c1 = cache_frame_403aaa8c449b45a6ce6b0cd610a761c1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_403aaa8c449b45a6ce6b0cd610a761c1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_403aaa8c449b45a6ce6b0cd610a761c1) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[64]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[65];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "o";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_path);
        tmp_expression_value_3 = par_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[63]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[65];
        frame_403aaa8c449b45a6ce6b0cd610a761c1->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_403aaa8c449b45a6ce6b0cd610a761c1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_403aaa8c449b45a6ce6b0cd610a761c1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_403aaa8c449b45a6ce6b0cd610a761c1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_403aaa8c449b45a6ce6b0cd610a761c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_403aaa8c449b45a6ce6b0cd610a761c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_403aaa8c449b45a6ce6b0cd610a761c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_403aaa8c449b45a6ce6b0cd610a761c1,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_403aaa8c449b45a6ce6b0cd610a761c1 == cache_frame_403aaa8c449b45a6ce6b0cd610a761c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_403aaa8c449b45a6ce6b0cd610a761c1);
        cache_frame_403aaa8c449b45a6ce6b0cd610a761c1 = NULL;
    }

    assertFrameObject(frame_403aaa8c449b45a6ce6b0cd610a761c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_path);
    tmp_return_value = par_path;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__12_path2url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *var_parts = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_216480945a5045b0379707fcb4e930f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_216480945a5045b0379707fcb4e930f0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_216480945a5045b0379707fcb4e930f0)) {
        Py_XDECREF(cache_frame_216480945a5045b0379707fcb4e930f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_216480945a5045b0379707fcb4e930f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_216480945a5045b0379707fcb4e930f0 = MAKE_FUNCTION_FRAME(codeobj_216480945a5045b0379707fcb4e930f0, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_216480945a5045b0379707fcb4e930f0->m_type_description == NULL);
    frame_216480945a5045b0379707fcb4e930f0 = cache_frame_216480945a5045b0379707fcb4e930f0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_216480945a5045b0379707fcb4e930f0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_216480945a5045b0379707fcb4e930f0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_path);
        tmp_expression_value_1 = par_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_216480945a5045b0379707fcb4e930f0->m_frame.f_lineno = 225;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[65];
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_parts);
            tmp_iter_arg_1 = var_parts;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iterable_value_1 = MAKE_GENERATOR_nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_216480945a5045b0379707fcb4e930f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_216480945a5045b0379707fcb4e930f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_216480945a5045b0379707fcb4e930f0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_216480945a5045b0379707fcb4e930f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_216480945a5045b0379707fcb4e930f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_216480945a5045b0379707fcb4e930f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_216480945a5045b0379707fcb4e930f0,
        type_description_1,
        par_path,
        var_parts
    );


    // Release cached frame if used for exception.
    if (frame_216480945a5045b0379707fcb4e930f0 == cache_frame_216480945a5045b0379707fcb4e930f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_216480945a5045b0379707fcb4e930f0);
        cache_frame_216480945a5045b0379707fcb4e930f0 = NULL;
    }

    assertFrameObject(frame_216480945a5045b0379707fcb4e930f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parts);
    Py_DECREF(var_parts);
    var_parts = NULL;
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

    Py_XDECREF(var_parts);
    var_parts = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr_locals {
    PyObject *var_part;
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

static PyObject *nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr_locals *generator_heap = (struct nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_part = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_21ede6440dd8fc1d987896be1133ac33, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 226;
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
            PyObject *old = generator_heap->var_part;
            generator_heap->var_part = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_part);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_part);
        tmp_args_element_value_1 = generator_heap->var_part;
        generator->m_frame->m_frame.f_lineno = 226;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
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


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 226;
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
            generator_heap->var_part
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

    Py_XDECREF(generator_heap->var_part);
    generator_heap->var_part = NULL;
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
    Py_XDECREF(generator_heap->var_part);
    generator_heap->var_part = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr_context,
        module_nbconvert$filters$strings,
        mod_consts[69],
#if PYTHON_VERSION >= 0x350
        mod_consts[70],
#endif
        codeobj_21ede6440dd8fc1d987896be1133ac33,
        closure,
        1,
        sizeof(struct nbconvert$filters$strings$$$function__12_path2url$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_nbconvert$filters$strings$$$function__13_ascii_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_ba8273598095f36a652739c1585f49e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba8273598095f36a652739c1585f49e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba8273598095f36a652739c1585f49e5)) {
        Py_XDECREF(cache_frame_ba8273598095f36a652739c1585f49e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba8273598095f36a652739c1585f49e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba8273598095f36a652739c1585f49e5 = MAKE_FUNCTION_FRAME(codeobj_ba8273598095f36a652739c1585f49e5, module_nbconvert$filters$strings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ba8273598095f36a652739c1585f49e5->m_type_description == NULL);
    frame_ba8273598095f36a652739c1585f49e5 = cache_frame_ba8273598095f36a652739c1585f49e5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ba8273598095f36a652739c1585f49e5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ba8273598095f36a652739c1585f49e5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_s);
        tmp_expression_value_2 = par_s;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[71]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ba8273598095f36a652739c1585f49e5->m_frame.f_lineno = 230;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[72]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ba8273598095f36a652739c1585f49e5->m_frame.f_lineno = 230;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[73]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba8273598095f36a652739c1585f49e5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba8273598095f36a652739c1585f49e5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba8273598095f36a652739c1585f49e5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba8273598095f36a652739c1585f49e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba8273598095f36a652739c1585f49e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba8273598095f36a652739c1585f49e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba8273598095f36a652739c1585f49e5,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_ba8273598095f36a652739c1585f49e5 == cache_frame_ba8273598095f36a652739c1585f49e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ba8273598095f36a652739c1585f49e5);
        cache_frame_ba8273598095f36a652739c1585f49e5 = NULL;
    }

    assertFrameObject(frame_ba8273598095f36a652739c1585f49e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__14_prevent_list_blocks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_ee389da86d5e349e47595f4274ada8bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee389da86d5e349e47595f4274ada8bd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ee389da86d5e349e47595f4274ada8bd)) {
        Py_XDECREF(cache_frame_ee389da86d5e349e47595f4274ada8bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee389da86d5e349e47595f4274ada8bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee389da86d5e349e47595f4274ada8bd = MAKE_FUNCTION_FRAME(codeobj_ee389da86d5e349e47595f4274ada8bd, module_nbconvert$filters$strings, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee389da86d5e349e47595f4274ada8bd->m_type_description == NULL);
    frame_ee389da86d5e349e47595f4274ada8bd = cache_frame_ee389da86d5e349e47595f4274ada8bd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee389da86d5e349e47595f4274ada8bd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee389da86d5e349e47595f4274ada8bd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[76];
        tmp_args_element_value_2 = mod_consts[77];
        CHECK_OBJECT(par_s);
        tmp_args_element_value_3 = par_s;
        frame_ee389da86d5e349e47595f4274ada8bd->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[78];
        tmp_args_element_value_5 = mod_consts[79];
        CHECK_OBJECT(var_out);
        tmp_args_element_value_6 = var_out;
        frame_ee389da86d5e349e47595f4274ada8bd->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_out;
            assert(old != NULL);
            var_out = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[80];
        tmp_args_element_value_8 = mod_consts[81];
        CHECK_OBJECT(var_out);
        tmp_args_element_value_9 = var_out;
        frame_ee389da86d5e349e47595f4274ada8bd->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_out;
            assert(old != NULL);
            var_out = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[82];
        tmp_args_element_value_11 = mod_consts[83];
        CHECK_OBJECT(var_out);
        tmp_args_element_value_12 = var_out;
        frame_ee389da86d5e349e47595f4274ada8bd->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_4,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_out;
            assert(old != NULL);
            var_out = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee389da86d5e349e47595f4274ada8bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee389da86d5e349e47595f4274ada8bd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee389da86d5e349e47595f4274ada8bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee389da86d5e349e47595f4274ada8bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee389da86d5e349e47595f4274ada8bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee389da86d5e349e47595f4274ada8bd,
        type_description_1,
        par_s,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_ee389da86d5e349e47595f4274ada8bd == cache_frame_ee389da86d5e349e47595f4274ada8bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ee389da86d5e349e47595f4274ada8bd);
        cache_frame_ee389da86d5e349e47595f4274ada8bd = NULL;
    }

    assertFrameObject(frame_ee389da86d5e349e47595f4274ada8bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_out);
    tmp_return_value = var_out;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_nbconvert$filters$strings$$$function__15_strip_trailing_newline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_5d9daf696e9b04bed182a4e0216c7c4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d9daf696e9b04bed182a4e0216c7c4e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5d9daf696e9b04bed182a4e0216c7c4e)) {
        Py_XDECREF(cache_frame_5d9daf696e9b04bed182a4e0216c7c4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d9daf696e9b04bed182a4e0216c7c4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d9daf696e9b04bed182a4e0216c7c4e = MAKE_FUNCTION_FRAME(codeobj_5d9daf696e9b04bed182a4e0216c7c4e, module_nbconvert$filters$strings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5d9daf696e9b04bed182a4e0216c7c4e->m_type_description == NULL);
    frame_5d9daf696e9b04bed182a4e0216c7c4e = cache_frame_5d9daf696e9b04bed182a4e0216c7c4e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5d9daf696e9b04bed182a4e0216c7c4e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5d9daf696e9b04bed182a4e0216c7c4e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_text);
        tmp_expression_value_1 = par_text;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[85]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5d9daf696e9b04bed182a4e0216c7c4e->m_frame.f_lineno = 246;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_text);
        tmp_expression_value_2 = par_text;
        tmp_subscript_value_1 = mod_consts[86];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_text;
            assert(old != NULL);
            par_text = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    if (par_text == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 248;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_text;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d9daf696e9b04bed182a4e0216c7c4e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d9daf696e9b04bed182a4e0216c7c4e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d9daf696e9b04bed182a4e0216c7c4e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d9daf696e9b04bed182a4e0216c7c4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d9daf696e9b04bed182a4e0216c7c4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d9daf696e9b04bed182a4e0216c7c4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d9daf696e9b04bed182a4e0216c7c4e,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_5d9daf696e9b04bed182a4e0216c7c4e == cache_frame_5d9daf696e9b04bed182a4e0216c7c4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5d9daf696e9b04bed182a4e0216c7c4e);
        cache_frame_5d9daf696e9b04bed182a4e0216c7c4e = NULL;
    }

    assertFrameObject(frame_5d9daf696e9b04bed182a4e0216c7c4e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_text);
    par_text = NULL;
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

    Py_XDECREF(par_text);
    par_text = NULL;
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



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__10_ipython2python() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__10_ipython2python,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee2189ee8e1837cad3d3ef1505ae55a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__11_posix_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__11_posix_path,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_403aaa8c449b45a6ce6b0cd610a761c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__12_path2url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__12_path2url,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_216480945a5045b0379707fcb4e930f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__13_ascii_only() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__13_ascii_only,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba8273598095f36a652739c1585f49e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__14_prevent_list_blocks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__14_prevent_list_blocks,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee389da86d5e349e47595f4274ada8bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__15_strip_trailing_newline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__15_strip_trailing_newline,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d9daf696e9b04bed182a4e0216c7c4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__1_wrap_text(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__1_wrap_text,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c2e957884bf234010ebbc05945188f1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__1_wrap_text$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__1_wrap_text$$$function__1_lambda,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_d620e83e34a7b157204d80eed5efbe66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__2_html2text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__2_html2text,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d76de820410973467f86605ea2965e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__3__convert_header_id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__3__convert_header_id,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f9860c8e07675a2f8568b2ef1d3308e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__4_add_anchor(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__4_add_anchor,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bad2ae154989aeb6beb2c3d076c663ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__5_add_prompts(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__5_add_prompts,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8646701e934a873975fa2f65f149ebfe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__6_strip_dollars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__6_strip_dollars,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7ca34409300b006039b8d2e3b09b820,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__7_strip_files_prefix() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__7_strip_files_prefix,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad3c1098961e92f68c6fbb530c33a377,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__8_comment_lines(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__8_comment_lines,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5c1da88f819be234d86d2f5d7b94b41,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nbconvert$filters$strings$$$function__9_get_lines(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nbconvert$filters$strings$$$function__9_get_lines,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_03c32b6bbda3cd13fc5f96b253e67492,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_nbconvert$filters$strings,
        mod_consts[51],
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

function_impl_code functable_nbconvert$filters$strings[] = {
    impl_nbconvert$filters$strings$$$function__1_wrap_text$$$function__1_lambda,
    impl_nbconvert$filters$strings$$$function__1_wrap_text,
    impl_nbconvert$filters$strings$$$function__2_html2text,
    impl_nbconvert$filters$strings$$$function__3__convert_header_id,
    impl_nbconvert$filters$strings$$$function__4_add_anchor,
    impl_nbconvert$filters$strings$$$function__5_add_prompts,
    impl_nbconvert$filters$strings$$$function__6_strip_dollars,
    impl_nbconvert$filters$strings$$$function__7_strip_files_prefix,
    impl_nbconvert$filters$strings$$$function__8_comment_lines,
    impl_nbconvert$filters$strings$$$function__9_get_lines,
    impl_nbconvert$filters$strings$$$function__10_ipython2python,
    impl_nbconvert$filters$strings$$$function__11_posix_path,
    impl_nbconvert$filters$strings$$$function__12_path2url,
    impl_nbconvert$filters$strings$$$function__13_ascii_only,
    impl_nbconvert$filters$strings$$$function__14_prevent_list_blocks,
    impl_nbconvert$filters$strings$$$function__15_strip_trailing_newline,
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

    function_impl_code *current = functable_nbconvert$filters$strings;
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

    if (offset > sizeof(functable_nbconvert$filters$strings) || offset < 0) {
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
        functable_nbconvert$filters$strings[offset],
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
        module_nbconvert$filters$strings,
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
PyObject *modulecode_nbconvert$filters$strings(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("nbconvert.filters.strings");

    // Store the module for future use.
    module_nbconvert$filters$strings = module;

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
        PRINT_STRING("nbconvert.filters.strings: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("nbconvert.filters.strings: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("nbconvert.filters.strings: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnbconvert$filters$strings\n");

    moduledict_nbconvert$filters$strings = MODULE_DICT(module_nbconvert$filters$strings);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_nbconvert$filters$strings,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_nbconvert$filters$strings,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[14]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_nbconvert$filters$strings,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_nbconvert$filters$strings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_nbconvert$filters$strings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_nbconvert$filters$strings);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_nbconvert$filters$strings);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_4c0a150b903d8f6cf08ac714a4db350b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_4c0a150b903d8f6cf08ac714a4db350b = MAKE_MODULE_FRAME(codeobj_4c0a150b903d8f6cf08ac714a4db350b, module_nbconvert$filters$strings);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4c0a150b903d8f6cf08ac714a4db350b);
    assert(Py_REFCNT(frame_4c0a150b903d8f6cf08ac714a4db350b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[92], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[93], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[75];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_nbconvert$filters$strings;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[36];
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[7];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_nbconvert$filters$strings;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[36];
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 13;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[55];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_nbconvert$filters$strings;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[36];
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 14;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[95];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_nbconvert$filters$strings;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[96];
        tmp_level_value_4 = mod_consts[36];
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_nbconvert$filters$strings,
                mod_consts[68],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[97];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_nbconvert$filters$strings;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[98];
        tmp_level_value_5 = mod_consts[36];
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 19;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_nbconvert$filters$strings,
                mod_consts[11],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[99];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_nbconvert$filters$strings;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[100];
        tmp_level_value_6 = mod_consts[36];
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 20;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_nbconvert$filters$strings,
                mod_consts[24],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY(mod_consts[101]);
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[103];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_12 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__1_wrap_text(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__2_html2text();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__3__convert_header_id();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[105];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_15 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__4_add_anchor(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[107];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_16 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__5_add_prompts(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__6_strip_dollars();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 136;
        tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[110],
            PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame.f_lineno = 137;
        tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[110],
            PyTuple_GET_ITEM(mod_consts[112], 0)
        );

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c0a150b903d8f6cf08ac714a4db350b);
#endif
    popFrameStack();

    assertFrameObject(frame_4c0a150b903d8f6cf08ac714a4db350b);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c0a150b903d8f6cf08ac714a4db350b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c0a150b903d8f6cf08ac714a4db350b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c0a150b903d8f6cf08ac714a4db350b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c0a150b903d8f6cf08ac714a4db350b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__7_strip_files_prefix();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[114];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_21 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__8_comment_lines(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[116];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_22 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__9_get_lines(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__10_ipython2python();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__11_posix_path();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__12_path2url();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__13_ascii_only();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__14_prevent_list_blocks();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_nbconvert$filters$strings$$$function__15_strip_trailing_newline();

        UPDATE_STRING_DICT1(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_28);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("nbconvert.filters.strings", false);

    Py_INCREF(module_nbconvert$filters$strings);
    return module_nbconvert$filters$strings;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_nbconvert$filters$strings, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("nbconvert$filters$strings", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
