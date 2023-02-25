/* Generated code for Python module 'prompt_toolkit.input.ansi_escape_sequences'
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

/* The "module_prompt_toolkit$input$ansi_escape_sequences" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$input$ansi_escape_sequences;
PyDictObject *moduledict_prompt_toolkit$input$ansi_escape_sequences;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[411];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[411];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("prompt_toolkit.input.ansi_escape_sequences"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 411; i++) {
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
void checkModuleConstants_prompt_toolkit$input$ansi_escape_sequences(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 411; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f8de2dae455a6e3f47eba16ced7724a4;
static PyCodeObject *codeobj_978a399d3416ab4820c62a16a8bdd2c4;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[407]); CHECK_OBJECT(module_filename_obj);
    codeobj_f8de2dae455a6e3f47eba16ced7724a4 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[408], NULL, NULL, 0, 0, 0);
    codeobj_978a399d3416ab4820c62a16a8bdd2c4 = MAKE_CODEOBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[405], mod_consts[409], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$input$ansi_escape_sequences$$$function__1__get_reverse_ansi_sequences(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$input$ansi_escape_sequences$$$function__1__get_reverse_ansi_sequences(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_result = NULL;
    PyObject *var_sequence = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_978a399d3416ab4820c62a16a8bdd2c4;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_978a399d3416ab4820c62a16a8bdd2c4 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_978a399d3416ab4820c62a16a8bdd2c4)) {
        Py_XDECREF(cache_frame_978a399d3416ab4820c62a16a8bdd2c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_978a399d3416ab4820c62a16a8bdd2c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_978a399d3416ab4820c62a16a8bdd2c4 = MAKE_FUNCTION_FRAME(codeobj_978a399d3416ab4820c62a16a8bdd2c4, module_prompt_toolkit$input$ansi_escape_sequences, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_978a399d3416ab4820c62a16a8bdd2c4->m_type_description == NULL);
    frame_978a399d3416ab4820c62a16a8bdd2c4 = cache_frame_978a399d3416ab4820c62a16a8bdd2c4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_978a399d3416ab4820c62a16a8bdd2c4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_978a399d3416ab4820c62a16a8bdd2c4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_978a399d3416ab4820c62a16a8bdd2c4->m_frame.f_lineno = 323;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 323;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 323;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 323;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooo";
                    exception_lineno = 323;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[2];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 323;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_sequence;
            var_sequence = tmp_assign_source_7;
            Py_INCREF(var_sequence);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_8;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_key);
        tmp_isinstance_inst_1 = var_key;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_key);
        tmp_cmp_expr_left_1 = var_key;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 325;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = var_result;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_sequence);
        tmp_ass_subvalue_1 = var_sequence;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 326;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_result;
        CHECK_OBJECT(var_key);
        tmp_ass_subscript_1 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    branch_no_2:;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 323;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 328;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_978a399d3416ab4820c62a16a8bdd2c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_978a399d3416ab4820c62a16a8bdd2c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_978a399d3416ab4820c62a16a8bdd2c4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_978a399d3416ab4820c62a16a8bdd2c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_978a399d3416ab4820c62a16a8bdd2c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_978a399d3416ab4820c62a16a8bdd2c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_978a399d3416ab4820c62a16a8bdd2c4,
        type_description_1,
        var_result,
        var_sequence,
        var_key
    );


    // Release cached frame if used for exception.
    if (frame_978a399d3416ab4820c62a16a8bdd2c4 == cache_frame_978a399d3416ab4820c62a16a8bdd2c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_978a399d3416ab4820c62a16a8bdd2c4);
        cache_frame_978a399d3416ab4820c62a16a8bdd2c4 = NULL;
    }

    assertFrameObject(frame_978a399d3416ab4820c62a16a8bdd2c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_sequence);
    var_sequence = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_sequence);
    var_sequence = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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



static PyObject *MAKE_FUNCTION_prompt_toolkit$input$ansi_escape_sequences$$$function__1__get_reverse_ansi_sequences(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$input$ansi_escape_sequences$$$function__1__get_reverse_ansi_sequences,
        mod_consts[405],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_978a399d3416ab4820c62a16a8bdd2c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$input$ansi_escape_sequences,
        mod_consts[4],
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

function_impl_code functable_prompt_toolkit$input$ansi_escape_sequences[] = {
    impl_prompt_toolkit$input$ansi_escape_sequences$$$function__1__get_reverse_ansi_sequences,
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

    function_impl_code *current = functable_prompt_toolkit$input$ansi_escape_sequences;
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

    if (offset > sizeof(functable_prompt_toolkit$input$ansi_escape_sequences) || offset < 0) {
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
        functable_prompt_toolkit$input$ansi_escape_sequences[offset],
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
        module_prompt_toolkit$input$ansi_escape_sequences,
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
PyObject *modulecode_prompt_toolkit$input$ansi_escape_sequences(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit.input.ansi_escape_sequences");

    // Store the module for future use.
    module_prompt_toolkit$input$ansi_escape_sequences = module;

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
        PRINT_STRING("prompt_toolkit.input.ansi_escape_sequences: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.input.ansi_escape_sequences: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.input.ansi_escape_sequences: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$input$ansi_escape_sequences\n");

    moduledict_prompt_toolkit$input$ansi_escape_sequences = MODULE_DICT(module_prompt_toolkit$input$ansi_escape_sequences);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$input$ansi_escape_sequences,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$input$ansi_escape_sequences,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[410]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$input$ansi_escape_sequences,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$input$ansi_escape_sequences,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$input$ansi_escape_sequences,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$input$ansi_escape_sequences);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_prompt_toolkit$input$ansi_escape_sequences);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f8de2dae455a6e3f47eba16ced7724a4;
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
        tmp_assign_source_1 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f8de2dae455a6e3f47eba16ced7724a4 = MAKE_MODULE_FRAME(codeobj_f8de2dae455a6e3f47eba16ced7724a4, module_prompt_toolkit$input$ansi_escape_sequences);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f8de2dae455a6e3f47eba16ced7724a4);
    assert(Py_REFCNT(frame_f8de2dae455a6e3f47eba16ced7724a4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$input$ansi_escape_sequences,
                mod_consts[13],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$input$ansi_escape_sequences,
                mod_consts[15],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[15]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_prompt_toolkit$input$ansi_escape_sequences,
                mod_consts[16],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[16]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[17];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$input$ansi_escape_sequences;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[18];
        tmp_level_value_1 = mod_consts[19];
        frame_f8de2dae455a6e3f47eba16ced7724a4->m_frame.f_lineno = 15;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_prompt_toolkit$input$ansi_escape_sequences,
                mod_consts[20],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY(mod_consts[21]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[23];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = _PyDict_NewPresized( 237 );
        {
            PyObject *tmp_expression_value_2;
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
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
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
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
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
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
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
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
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
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_140;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_expression_value_144;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_expression_value_146;
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
            PyObject *tmp_expression_value_161;
            PyObject *tmp_expression_value_162;
            PyObject *tmp_expression_value_163;
            PyObject *tmp_expression_value_164;
            PyObject *tmp_expression_value_165;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_expression_value_170;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_expression_value_172;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_expression_value_174;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_expression_value_176;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_expression_value_178;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_expression_value_180;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_expression_value_182;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_expression_value_184;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_expression_value_186;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_expression_value_188;
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
            PyObject *tmp_expression_value_200;
            PyObject *tmp_expression_value_201;
            PyObject *tmp_expression_value_202;
            PyObject *tmp_expression_value_203;
            PyObject *tmp_expression_value_204;
            PyObject *tmp_expression_value_205;
            PyObject *tmp_expression_value_206;
            PyObject *tmp_expression_value_207;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_expression_value_208;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_expression_value_210;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_expression_value_212;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_expression_value_214;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_expression_value_216;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_expression_value_218;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_expression_value_220;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_expression_value_222;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_expression_value_224;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_expression_value_226;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_expression_value_228;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_expression_value_230;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_expression_value_232;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_expression_value_234;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_expression_value_236;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_expression_value_238;
            PyObject *tmp_expression_value_240;
            PyObject *tmp_expression_value_241;
            PyObject *tmp_expression_value_242;
            PyObject *tmp_expression_value_243;
            PyObject *tmp_expression_value_244;
            PyObject *tmp_expression_value_245;
            PyObject *tmp_expression_value_246;
            PyObject *tmp_expression_value_247;
            PyObject *tmp_expression_value_248;
            PyObject *tmp_expression_value_249;
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
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_expression_value_260;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_expression_value_262;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_expression_value_264;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_expression_value_266;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_expression_value_268;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_expression_value_270;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_expression_value_272;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_expression_value_274;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_expression_value_276;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_expression_value_278;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_expression_value_280;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_expression_value_282;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_expression_value_284;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_expression_value_286;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_expression_value_288;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_expression_value_290;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_expression_value_292;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_expression_value_294;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_expression_value_296;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_expression_value_298;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[33];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[34]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[35];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[36]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[38]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[39];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[40]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[41];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[42]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[43];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[44]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[45];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[46]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[47];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[48]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[49];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[50]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[51];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[52]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[53];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[54]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[55];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[56]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[57];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[58]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[59];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[60]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[61];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[62]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[63];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[64]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[65];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[66]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[67];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[68]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[69];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[70]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[71];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[72]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[73];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[74]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[75];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[76]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[77];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[78]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[80]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[81];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[82]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[83];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[84]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[86]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[88]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[89];
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[40]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[90];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[91]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[92];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[93]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[94];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[95]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[96];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[97]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[99]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[100];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[101]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[102];
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[91]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[103];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[97]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[104];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[105]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[106];
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[107]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[108];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[109]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[110];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[111]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[112];
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[113]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[114];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[107]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[115];
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[109]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[116];
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[111]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[117];
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[113]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[118];
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[119]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[120];
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[107]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[121];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[109]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[122];
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[111]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[123];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[113]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[124];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[119]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[125];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[126]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[127];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[128]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[129];
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[130]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[131];
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[132]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[133];
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[134]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[135];
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[136]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[137];
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[138]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[139];
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[140]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[141];
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[142]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[143];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[144]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[145];
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[146]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[147];
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[148]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[149];
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[150]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[151];
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[152]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[153];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[154]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[155];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[140]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[156];
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[142]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[157];
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[146]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[158];
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[148]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[159];
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[150]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[160];
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[152]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[161];
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[154]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[162];
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[163]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[164];
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[165]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[166];
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[167]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[168];
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[169]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[170];
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[171]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[172];
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[173]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[174];
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[175]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[176];
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[177]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[178];
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[179]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[180];
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[181]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[182];
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[183]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[184];
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[185]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[186];
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[187]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[188];
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[189]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[190];
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[191]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[192];
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[193]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[194];
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[195]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[196];
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[197]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[198];
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[199]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[200];
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[201]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[202];
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[203]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[204];
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[205]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[206];
            tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_102 == NULL)) {
                tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[207]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[208];
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[209]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[210];
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[211]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[212];
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[213]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[214];
            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_106 == NULL)) {
                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[215]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[216];
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[217]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[218];
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[219]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[220];
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[221]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[222];
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[221]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[223];
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[224]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[225];
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[226]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[227];
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[228]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[229];
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[78]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_115;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_1);
                tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_115 == NULL)) {
                    tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_115 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;

                    goto tuple_build_exception_1;
                }
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[93]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;

                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[230];
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[78]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_117;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
                tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_117 == NULL)) {
                    tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_117 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[95]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[231];
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_118 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[78]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_119;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_3);
                tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_119 == NULL)) {
                    tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_119 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;

                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[99]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[232];
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[78]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_121;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_4);
                tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_121 == NULL)) {
                    tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_121 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[101]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[233];
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[78]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_123;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_5);
                tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_123 == NULL)) {
                    tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_123 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;

                    goto tuple_build_exception_5;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[234]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[235];
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_124 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[78]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_125;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_6);
                tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_125 == NULL)) {
                    tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_125 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;

                    goto tuple_build_exception_6;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[224]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[236];
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_126 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[78]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_127;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_7);
                tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_127 == NULL)) {
                    tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_127 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[226]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[237];
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[78]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_129;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_8);
                tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_129 == NULL)) {
                    tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_129 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_8;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[228]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[238];
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[239]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[240];
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_131 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[241]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[242];
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[243]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[244];
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[245]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[246];
            tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_134 == NULL)) {
                tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_134 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[247]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[248];
            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_135 == NULL)) {
                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[249]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[250];
            tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_136 == NULL)) {
                tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[78]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_137;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_9);
                tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_137 == NULL)) {
                    tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_137 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;

                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[251]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[252];
            tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_138 == NULL)) {
                tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[78]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_139;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_10);
                tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_139 == NULL)) {
                    tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_139 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;

                    goto tuple_build_exception_10;
                }
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[243]);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[253];
            tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_140 == NULL)) {
                tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_140 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[78]);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_141;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_11);
                tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_141 == NULL)) {
                    tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_141 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;

                    goto tuple_build_exception_11;
                }
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[243]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[254];
            tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_142 == NULL)) {
                tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[78]);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_143;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_12);
                tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_143 == NULL)) {
                    tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_143 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;

                    goto tuple_build_exception_12;
                }
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[255]);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;

                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[256];
            tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_144 == NULL)) {
                tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[78]);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_145;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_13);
                tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_145 == NULL)) {
                    tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_145 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 180;

                    goto tuple_build_exception_13;
                }
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[249]);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 180;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[257];
            tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_146 == NULL)) {
                tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_146 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[78]);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_147;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_14);
                tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_147 == NULL)) {
                    tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_147 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;

                    goto tuple_build_exception_14;
                }
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[249]);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[258];
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_148 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[259]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[260];
            tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_149 == NULL)) {
                tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_149 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[261]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[262];
            tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_150 == NULL)) {
                tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_150 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[263]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[264];
            tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_151 == NULL)) {
                tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_151 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[265]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[266];
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_152 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[91]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[267];
            tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_153 == NULL)) {
                tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_153 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[97]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[268];
            tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_154 == NULL)) {
                tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_154 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[259]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[269];
            tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_155 == NULL)) {
                tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_155 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[261]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[270];
            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_156 == NULL)) {
                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_156 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[263]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[271];
            tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_157 == NULL)) {
                tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_157 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[265]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[272];
            tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_158 == NULL)) {
                tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_158 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[97]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[273];
            tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_159 == NULL)) {
                tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_159 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[91]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[274];
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_160 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[275]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[276];
            tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_161 == NULL)) {
                tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_161 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[277]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[278];
            tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_162 == NULL)) {
                tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_162 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[279]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[280];
            tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_163 == NULL)) {
                tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_163 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[281]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[282];
            tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_164 == NULL)) {
                tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_164 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[283]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[284];
            tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_165 == NULL)) {
                tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_165 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[285]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[286];
            tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_166 == NULL)) {
                tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_166 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[78]);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_167;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_15);
                tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_167 == NULL)) {
                    tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_167 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 215;

                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[259]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 215;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[287];
            tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_168 == NULL)) {
                tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_168 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[78]);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_169;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_16);
                tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_169 == NULL)) {
                    tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_169 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;

                    goto tuple_build_exception_16;
                }
                tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[261]);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[288];
            tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_170 == NULL)) {
                tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_170 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[78]);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_171;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_17);
                tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_171 == NULL)) {
                    tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_171 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;

                    goto tuple_build_exception_17;
                }
                tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[263]);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;

                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[289];
            tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_172 == NULL)) {
                tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_172 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[78]);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_173;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_18);
                tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_173 == NULL)) {
                    tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_173 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 218;

                    goto tuple_build_exception_18;
                }
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[265]);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 218;

                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[290];
            tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_174 == NULL)) {
                tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_174 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[78]);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_175;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_19);
                tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_175 == NULL)) {
                    tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_175 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;

                    goto tuple_build_exception_19;
                }
                tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[97]);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;

                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[291];
            tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_176 == NULL)) {
                tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_176 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[78]);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_177;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_20);
                tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_177 == NULL)) {
                    tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_177 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;

                    goto tuple_build_exception_20;
                }
                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[91]);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;

                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[292];
            tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_178 == NULL)) {
                tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_178 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[78]);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_179;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_21);
                tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_179 == NULL)) {
                    tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_179 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 222;

                    goto tuple_build_exception_21;
                }
                tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[277]);
                if (tmp_tuple_element_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 222;

                    goto tuple_build_exception_21;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_21);
            }
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[293];
            tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_180 == NULL)) {
                tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_180 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[78]);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_181;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_22);
                tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_181 == NULL)) {
                    tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_181 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;

                    goto tuple_build_exception_22;
                }
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[275]);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;

                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[294];
            tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_182 == NULL)) {
                tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_182 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[78]);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_183;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_23);
                tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_183 == NULL)) {
                    tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_183 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_23;
                }
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[279]);
                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_23;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[295];
            tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_184 == NULL)) {
                tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_184 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[78]);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_185;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_24);
                tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_185 == NULL)) {
                    tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_185 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 225;

                    goto tuple_build_exception_24;
                }
                tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[281]);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 225;

                    goto tuple_build_exception_24;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[296];
            tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_186 == NULL)) {
                tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_186 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[78]);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_187;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_25);
                tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_187 == NULL)) {
                    tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_187 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;

                    goto tuple_build_exception_25;
                }
                tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[283]);
                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;

                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[297];
            tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_188 == NULL)) {
                tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_188 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[78]);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_189;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_26);
                tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_189 == NULL)) {
                    tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_189 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_26;
                }
                tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[285]);
                if (tmp_tuple_element_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_26);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[298];
            tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_190 == NULL)) {
                tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_190 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[299]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[300];
            tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_191 == NULL)) {
                tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_191 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[301]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[302];
            tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_192 == NULL)) {
                tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_192 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[303]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[304];
            tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_193 == NULL)) {
                tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_193 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[305]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[306];
            tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_194 == NULL)) {
                tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_194 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[307]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[308];
            tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_195 == NULL)) {
                tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_195 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[309]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[310];
            tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_196 == NULL)) {
                tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_196 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[299]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[311];
            tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_197 == NULL)) {
                tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_197 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[301]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[312];
            tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_198 == NULL)) {
                tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_198 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[303]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[313];
            tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_199 == NULL)) {
                tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_199 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[305]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[314];
            tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_200 == NULL)) {
                tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_200 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[303]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[315];
            tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_201 == NULL)) {
                tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_201 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[305]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[316];
            tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_202 == NULL)) {
                tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_202 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[317]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[318];
            tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_203 == NULL)) {
                tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_203 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[319]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[320];
            tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_204 == NULL)) {
                tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_204 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[321]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[322];
            tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_205 == NULL)) {
                tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_205 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[323]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[324];
            tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_206 == NULL)) {
                tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_206 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[325]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[326];
            tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_207 == NULL)) {
                tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_207 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[327]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[328];
            tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_208 == NULL)) {
                tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_208 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[78]);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_209;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_27);
                tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_209 == NULL)) {
                    tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_209 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_27;
                }
                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[301]);
                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[329];
            tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_210 == NULL)) {
                tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_210 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[78]);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_211;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_28);
                tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_211 == NULL)) {
                    tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_211 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;

                    goto tuple_build_exception_28;
                }
                tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[299]);
                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;

                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[330];
            tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_212 == NULL)) {
                tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_212 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[78]);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_213;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_29);
                tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_213 == NULL)) {
                    tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_213 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;

                    goto tuple_build_exception_29;
                }
                tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[303]);
                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;

                    goto tuple_build_exception_29;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_29);
            }
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[331];
            tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_214 == NULL)) {
                tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_214 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[78]);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_215;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_30);
                tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_215 == NULL)) {
                    tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_215 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 255;

                    goto tuple_build_exception_30;
                }
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[305]);
                if (tmp_tuple_element_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 255;

                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[332];
            tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_216 == NULL)) {
                tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_216 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[78]);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_217;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_31);
                tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_217 == NULL)) {
                    tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_217 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 256;

                    goto tuple_build_exception_31;
                }
                tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[307]);
                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 256;

                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[333];
            tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_218 == NULL)) {
                tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_218 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[78]);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_219;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_32);
                tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_219 == NULL)) {
                    tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_219 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 257;

                    goto tuple_build_exception_32;
                }
                tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[309]);
                if (tmp_tuple_element_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 257;

                    goto tuple_build_exception_32;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[334];
            tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_220 == NULL)) {
                tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_220 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[78]);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_221;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_33);
                tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_221 == NULL)) {
                    tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_221 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_33;
                }
                tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[317]);
                if (tmp_tuple_element_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_33;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_33);
            }
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[335];
            tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_222 == NULL)) {
                tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_222 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[78]);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_223;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_34);
                tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_223 == NULL)) {
                    tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_223 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;

                    goto tuple_build_exception_34;
                }
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[319]);
                if (tmp_tuple_element_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;

                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[336];
            tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_224 == NULL)) {
                tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_224 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[78]);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_225;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_35);
                tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_225 == NULL)) {
                    tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_225 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_35;
                }
                tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[321]);
                if (tmp_tuple_element_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;

                    goto tuple_build_exception_35;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_35);
            }
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[337];
            tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_226 == NULL)) {
                tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_226 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[78]);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_227;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_36);
                tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_227 == NULL)) {
                    tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_227 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;

                    goto tuple_build_exception_36;
                }
                tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[323]);
                if (tmp_tuple_element_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;

                    goto tuple_build_exception_36;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_36);
            }
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[338];
            tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_228 == NULL)) {
                tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_228 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[78]);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_229;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_37);
                tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_229 == NULL)) {
                    tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_229 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;

                    goto tuple_build_exception_37;
                }
                tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[325]);
                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;

                    goto tuple_build_exception_37;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_37);
            }
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[339];
            tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_230 == NULL)) {
                tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_230 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[78]);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_231;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_38);
                tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_231 == NULL)) {
                    tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_231 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 264;

                    goto tuple_build_exception_38;
                }
                tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[327]);
                if (tmp_tuple_element_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 264;

                    goto tuple_build_exception_38;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_38);
            }
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[340];
            tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_232 == NULL)) {
                tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_232 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[78]);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_233;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_39);
                tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_233 == NULL)) {
                    tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_233 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 266;

                    goto tuple_build_exception_39;
                }
                tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[259]);
                if (tmp_tuple_element_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 266;

                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_39);
            }
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[341];
            tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_234 == NULL)) {
                tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_234 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[78]);
            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_235;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_40);
                tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_235 == NULL)) {
                    tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_235 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 267;

                    goto tuple_build_exception_40;
                }
                tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[261]);
                if (tmp_tuple_element_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 267;

                    goto tuple_build_exception_40;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[342];
            tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_236 == NULL)) {
                tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_236 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[78]);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_237;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_41);
                tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_237 == NULL)) {
                    tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_237 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 268;

                    goto tuple_build_exception_41;
                }
                tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[263]);
                if (tmp_tuple_element_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 268;

                    goto tuple_build_exception_41;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[343];
            tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_238 == NULL)) {
                tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_238 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[78]);
            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_239;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_42);
                tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_239 == NULL)) {
                    tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_239 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;

                    goto tuple_build_exception_42;
                }
                tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[265]);
                if (tmp_tuple_element_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 269;

                    goto tuple_build_exception_42;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_42);
            }
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[344];
            tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_240 == NULL)) {
                tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_240 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[345]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[346];
            tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_241 == NULL)) {
                tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_241 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[347]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[348];
            tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_242 == NULL)) {
                tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_242 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[349]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[350];
            tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_243 == NULL)) {
                tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_243 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[351]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[352];
            tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_244 == NULL)) {
                tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_244 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[353]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[354];
            tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_245 == NULL)) {
                tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_245 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[355]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[356];
            tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_246 == NULL)) {
                tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_246 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[357]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[358];
            tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_247 == NULL)) {
                tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_247 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[359]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[360];
            tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_248 == NULL)) {
                tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_248 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[361]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[362];
            tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_249 == NULL)) {
                tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_249 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[363]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[364];
            tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_250 == NULL)) {
                tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_250 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[365]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[366];
            tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_251 == NULL)) {
                tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_251 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[367]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[368];
            tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_252 == NULL)) {
                tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_252 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[369]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[370];
            tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_253 == NULL)) {
                tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_253 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[371]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[372];
            tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_254 == NULL)) {
                tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_254 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[373]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[374];
            tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_255 == NULL)) {
                tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_255 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[375]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[376];
            tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_256 == NULL)) {
                tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_256 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[377]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[378];
            tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_257 == NULL)) {
                tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_257 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[379]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[380];
            tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_258 == NULL)) {
                tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_258 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[381]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[382];
            tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_259 == NULL)) {
                tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_259 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[383]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[384];
            tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_260 == NULL)) {
                tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_260 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[78]);
            if (tmp_tuple_element_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_261;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_43);
                tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_261 == NULL)) {
                    tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_261 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 293;

                    goto tuple_build_exception_43;
                }
                tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[345]);
                if (tmp_tuple_element_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 293;

                    goto tuple_build_exception_43;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_43);
            }
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[385];
            tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_262 == NULL)) {
                tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_262 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[78]);
            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_263;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_44);
                tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_263 == NULL)) {
                    tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_263 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;

                    goto tuple_build_exception_44;
                }
                tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[347]);
                if (tmp_tuple_element_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;

                    goto tuple_build_exception_44;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_44);
            }
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[386];
            tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_264 == NULL)) {
                tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_264 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[78]);
            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_265;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_45);
                tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_265 == NULL)) {
                    tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_265 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;

                    goto tuple_build_exception_45;
                }
                tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[349]);
                if (tmp_tuple_element_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;

                    goto tuple_build_exception_45;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_45);
            }
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[387];
            tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_266 == NULL)) {
                tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_266 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[78]);
            if (tmp_tuple_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_267;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_46);
                tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_267 == NULL)) {
                    tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_267 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_46;
                }
                tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[351]);
                if (tmp_tuple_element_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_46;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_46);
            }
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[388];
            tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_268 == NULL)) {
                tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_268 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[78]);
            if (tmp_tuple_element_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_269;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_47);
                tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_269 == NULL)) {
                    tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_269 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 297;

                    goto tuple_build_exception_47;
                }
                tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[353]);
                if (tmp_tuple_element_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 297;

                    goto tuple_build_exception_47;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_47);
            }
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[389];
            tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_270 == NULL)) {
                tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_270 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[78]);
            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_271;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_48);
                tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_271 == NULL)) {
                    tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_271 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 298;

                    goto tuple_build_exception_48;
                }
                tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[355]);
                if (tmp_tuple_element_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 298;

                    goto tuple_build_exception_48;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_48);
            }
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[390];
            tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_272 == NULL)) {
                tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_272 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[78]);
            if (tmp_tuple_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_273;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_49);
                tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_273 == NULL)) {
                    tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_273 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;

                    goto tuple_build_exception_49;
                }
                tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[357]);
                if (tmp_tuple_element_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;

                    goto tuple_build_exception_49;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_49);
            }
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[391];
            tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_274 == NULL)) {
                tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_274 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[78]);
            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_275;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_50);
                tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_275 == NULL)) {
                    tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_275 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 300;

                    goto tuple_build_exception_50;
                }
                tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[359]);
                if (tmp_tuple_element_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 300;

                    goto tuple_build_exception_50;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[392];
            tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_276 == NULL)) {
                tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_276 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[78]);
            if (tmp_tuple_element_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_277;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_51);
                tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_277 == NULL)) {
                    tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_277 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 301;

                    goto tuple_build_exception_51;
                }
                tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[361]);
                if (tmp_tuple_element_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 301;

                    goto tuple_build_exception_51;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_51);
            }
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[393];
            tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_278 == NULL)) {
                tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_278 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[78]);
            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_279;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_52);
                tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_279 == NULL)) {
                    tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_279 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;

                    goto tuple_build_exception_52;
                }
                tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[363]);
                if (tmp_tuple_element_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;

                    goto tuple_build_exception_52;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_52);
            }
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[394];
            tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_280 == NULL)) {
                tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_280 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[78]);
            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_281;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_53);
                tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_281 == NULL)) {
                    tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_281 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;

                    goto tuple_build_exception_53;
                }
                tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[365]);
                if (tmp_tuple_element_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;

                    goto tuple_build_exception_53;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_53);
            }
            goto tuple_build_noexception_53;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_53:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_53:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[395];
            tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_282 == NULL)) {
                tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_282 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[78]);
            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_283;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_54);
                tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_283 == NULL)) {
                    tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_283 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 304;

                    goto tuple_build_exception_54;
                }
                tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[367]);
                if (tmp_tuple_element_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 304;

                    goto tuple_build_exception_54;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_54);
            }
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[396];
            tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_284 == NULL)) {
                tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_284 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[78]);
            if (tmp_tuple_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_285;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_55);
                tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_285 == NULL)) {
                    tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_285 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 305;

                    goto tuple_build_exception_55;
                }
                tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[369]);
                if (tmp_tuple_element_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 305;

                    goto tuple_build_exception_55;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_55);
            }
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[397];
            tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_286 == NULL)) {
                tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_286 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[78]);
            if (tmp_tuple_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_287;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_56);
                tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_287 == NULL)) {
                    tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_287 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 306;

                    goto tuple_build_exception_56;
                }
                tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[371]);
                if (tmp_tuple_element_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 306;

                    goto tuple_build_exception_56;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_56);
            }
            goto tuple_build_noexception_56;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_56:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[398];
            tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_288 == NULL)) {
                tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_288 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[78]);
            if (tmp_tuple_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_289;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_57);
                tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_289 == NULL)) {
                    tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_289 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 307;

                    goto tuple_build_exception_57;
                }
                tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_289, mod_consts[373]);
                if (tmp_tuple_element_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 307;

                    goto tuple_build_exception_57;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_57);
            }
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_57:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[399];
            tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_290 == NULL)) {
                tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_290 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[78]);
            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_291;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_58);
                tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_291 == NULL)) {
                    tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_291 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_58;
                }
                tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[375]);
                if (tmp_tuple_element_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_58;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_58);
            }
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[400];
            tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_292 == NULL)) {
                tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_292 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[78]);
            if (tmp_tuple_element_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_293;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_59);
                tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_293 == NULL)) {
                    tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_293 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;

                    goto tuple_build_exception_59;
                }
                tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[377]);
                if (tmp_tuple_element_59 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;

                    goto tuple_build_exception_59;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_59);
            }
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[401];
            tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_294 == NULL)) {
                tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_294 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[78]);
            if (tmp_tuple_element_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_295;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_60);
                tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_295 == NULL)) {
                    tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_295 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 310;

                    goto tuple_build_exception_60;
                }
                tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[379]);
                if (tmp_tuple_element_60 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 310;

                    goto tuple_build_exception_60;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_60);
            }
            goto tuple_build_noexception_60;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_60:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_60:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[402];
            tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_296 == NULL)) {
                tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_296 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[78]);
            if (tmp_tuple_element_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_297;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_61);
                tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_297 == NULL)) {
                    tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_297 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;

                    goto tuple_build_exception_61;
                }
                tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[381]);
                if (tmp_tuple_element_61 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;

                    goto tuple_build_exception_61;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_61);
            }
            goto tuple_build_noexception_61;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_61:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_61:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[403];
            tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_298 == NULL)) {
                tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_value_298 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[78]);
            if (tmp_tuple_element_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_299;
                PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_62);
                tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_299 == NULL)) {
                    tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_expression_value_299 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;

                    goto tuple_build_exception_62;
                }
                tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[383]);
                if (tmp_tuple_element_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;

                    goto tuple_build_exception_62;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_62);
            }
            goto tuple_build_noexception_62;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_62:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_62:;
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_11);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_63;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_300 == NULL)) {
            tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_63 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_301;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_tuple_element_64;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_63);
            tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_301 == NULL)) {
                tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_301 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_63;
            }
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_63;
            }
            tmp_subscript_value_2 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_302;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_tuple_element_65;
                PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_64);
                tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_expression_value_302 == NULL)) {
                    tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                }

                if (tmp_expression_value_302 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;

                    goto tuple_build_exception_64;
                }
                tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_tuple_element_65 == NULL)) {
                    tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_tuple_element_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;

                    goto tuple_build_exception_64;
                }
                tmp_subscript_value_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_65);
                tmp_tuple_element_65 = Py_Ellipsis;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_65);
                tmp_tuple_element_64 = LOOKUP_SUBSCRIPT(tmp_expression_value_302, tmp_subscript_value_3);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_tuple_element_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;

                    goto tuple_build_exception_64;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_64);
            }
            goto tuple_build_noexception_63;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_64:;
            Py_DECREF(tmp_subscript_value_2);
            goto tuple_build_exception_63;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_63:;
            tmp_tuple_element_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_301, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_tuple_element_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_63);
        }
        goto tuple_build_noexception_64;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_63:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_64:;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_300, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[0];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_66;
        tmp_dict_key_2 = mod_consts[404];
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_tuple_element_66 == NULL)) {
            tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_tuple_element_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_66);
        tmp_tuple_element_66 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_66);
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_303, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_12 = MAKE_FUNCTION_prompt_toolkit$input$ansi_escape_sequences$$$function__1__get_reverse_ansi_sequences(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[405]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[405]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_f8de2dae455a6e3f47eba16ced7724a4->m_frame.f_lineno = 331;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_13);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f8de2dae455a6e3f47eba16ced7724a4);
#endif
    popFrameStack();

    assertFrameObject(frame_f8de2dae455a6e3f47eba16ced7724a4);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f8de2dae455a6e3f47eba16ced7724a4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8de2dae455a6e3f47eba16ced7724a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8de2dae455a6e3f47eba16ced7724a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8de2dae455a6e3f47eba16ced7724a4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit.input.ansi_escape_sequences", false);

    Py_INCREF(module_prompt_toolkit$input$ansi_escape_sequences);
    return module_prompt_toolkit$input$ansi_escape_sequences;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$input$ansi_escape_sequences, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$input$ansi_escape_sequences", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
