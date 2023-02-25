/* Generated code for Python module 'bokeh.palettes'
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

/* The "module_bokeh$palettes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bokeh$palettes;
PyDictObject *moduledict_bokeh$palettes;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[872];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[872];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("bokeh.palettes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 872; i++) {
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
void checkModuleConstants_bokeh$palettes(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 872; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_019a191a47154ffaa9e754b82dfab746;
static PyCodeObject *codeobj_c8f1dfe6c0102c820ea17b5725bc5c85;
static PyCodeObject *codeobj_ec0b80ac2bf61ba289fb32392628a0d2;
static PyCodeObject *codeobj_3fe6bb565b1612f50f35b84f2e3d5685;
static PyCodeObject *codeobj_39e7d0c9c62fd1d012007c80f45a6013;
static PyCodeObject *codeobj_c6b7280659477d55b8ca26077ec59098;
static PyCodeObject *codeobj_88e0544e0596252d81f66a6e2c9266e5;
static PyCodeObject *codeobj_80caae4bb43f55c596c55358637ec06a;
static PyCodeObject *codeobj_bc895e9abb4cd14e64590ee9ce391d9b;
static PyCodeObject *codeobj_2f871ac7c2cab8f945ecb0497b8dea97;
static PyCodeObject *codeobj_0128993943c2978ff5275cd59bd78518;
static PyCodeObject *codeobj_d6e9ede88d97db60ab16a5f56900d371;
static PyCodeObject *codeobj_d5a8e029a330bab13c1824e61e709e63;
static PyCodeObject *codeobj_b8fe558a21c585620f9d21aa2e6cfdc2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[862]); CHECK_OBJECT(module_filename_obj);
    codeobj_019a191a47154ffaa9e754b82dfab746 = MAKE_CODEOBJECT(module_filename_obj, 1268, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[863], NULL, 1, 0, 0);
    codeobj_c8f1dfe6c0102c820ea17b5725bc5c85 = MAKE_CODEOBJECT(module_filename_obj, 1567, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[853], mod_consts[864], NULL, 1, 0, 0);
    codeobj_ec0b80ac2bf61ba289fb32392628a0d2 = MAKE_CODEOBJECT(module_filename_obj, 1569, CO_NEWLOCALS | CO_NOFREE, mod_consts[865], mod_consts[866], NULL, 1, 0, 0);
    codeobj_3fe6bb565b1612f50f35b84f2e3d5685 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[867], NULL, NULL, 0, 0, 0);
    codeobj_39e7d0c9c62fd1d012007c80f45a6013 = MAKE_CODEOBJECT(module_filename_obj, 1428, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[846], mod_consts[868], NULL, 1, 0, 0);
    codeobj_c6b7280659477d55b8ca26077ec59098 = MAKE_CODEOBJECT(module_filename_obj, 1270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[841], mod_consts[869], NULL, 4, 0, 0);
    codeobj_88e0544e0596252d81f66a6e2c9266e5 = MAKE_CODEOBJECT(module_filename_obj, 1522, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[849], mod_consts[868], NULL, 1, 0, 0);
    codeobj_80caae4bb43f55c596c55358637ec06a = MAKE_CODEOBJECT(module_filename_obj, 1490, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[848], mod_consts[868], NULL, 1, 0, 0);
    codeobj_bc895e9abb4cd14e64590ee9ce391d9b = MAKE_CODEOBJECT(module_filename_obj, 1341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[843], mod_consts[868], NULL, 1, 0, 0);
    codeobj_2f871ac7c2cab8f945ecb0497b8dea97 = MAKE_CODEOBJECT(module_filename_obj, 1248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[870], NULL, 2, 0, 0);
    codeobj_0128993943c2978ff5275cd59bd78518 = MAKE_CODEOBJECT(module_filename_obj, 1312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[842], mod_consts[868], NULL, 1, 0, 0);
    codeobj_d6e9ede88d97db60ab16a5f56900d371 = MAKE_CODEOBJECT(module_filename_obj, 1370, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[844], mod_consts[868], NULL, 1, 0, 0);
    codeobj_d5a8e029a330bab13c1824e61e709e63 = MAKE_CODEOBJECT(module_filename_obj, 1457, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[847], mod_consts[868], NULL, 1, 0, 0);
    codeobj_b8fe558a21c585620f9d21aa2e6cfdc2 = MAKE_CODEOBJECT(module_filename_obj, 1399, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[845], mod_consts[868], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__10_gray(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__11_lambda();


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__1_linear_palette(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__2_diverging_palette(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__3_magma(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__4_inferno(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__5_plasma(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__6_viridis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__7_cividis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__8_turbo(PyObject *annotations);


static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__9_grey(PyObject *annotations);


// The module function definitions.
static PyObject *impl_bokeh$palettes$$$function__1_linear_palette(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_palette = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_n = python_pars[1];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_2f871ac7c2cab8f945ecb0497b8dea97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2f871ac7c2cab8f945ecb0497b8dea97 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f871ac7c2cab8f945ecb0497b8dea97)) {
        Py_XDECREF(cache_frame_2f871ac7c2cab8f945ecb0497b8dea97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f871ac7c2cab8f945ecb0497b8dea97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f871ac7c2cab8f945ecb0497b8dea97 = MAKE_FUNCTION_FRAME(codeobj_2f871ac7c2cab8f945ecb0497b8dea97, module_bokeh$palettes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2f871ac7c2cab8f945ecb0497b8dea97->m_type_description == NULL);
    frame_2f871ac7c2cab8f945ecb0497b8dea97 = cache_frame_2f871ac7c2cab8f945ecb0497b8dea97;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f871ac7c2cab8f945ecb0497b8dea97);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f871ac7c2cab8f945ecb0497b8dea97) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_n);
        tmp_cmp_expr_left_1 = par_n;
        CHECK_OBJECT(Nuitka_Cell_GET(par_palette));
        tmp_len_arg_1 = Nuitka_Cell_GET(par_palette);
        tmp_cmp_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1266;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1266;
            type_description_1 = "co";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_left_value_1 = mod_consts[0];
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(par_n);
        tmp_dict_value_1 = par_n;
        tmp_right_value_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_len_arg_2;
            tmp_res = PyDict_SetItem(tmp_right_value_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[2];
            CHECK_OBJECT(Nuitka_Cell_GET(par_palette));
            tmp_len_arg_2 = Nuitka_Cell_GET(par_palette);
            tmp_dict_value_1 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1267;
                type_description_1 = "co";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_right_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        frame_2f871ac7c2cab8f945ecb0497b8dea97->m_frame.f_lineno = 1267;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1267;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_left_value_2;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_right_value_2;
            PyObject *tmp_kw_call_dict_value_0_1;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1268;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1268;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            tmp_kw_call_arg_value_0_1 = mod_consts[5];
            CHECK_OBJECT(Nuitka_Cell_GET(par_palette));
            tmp_len_arg_3 = Nuitka_Cell_GET(par_palette);
            tmp_left_value_2 = BUILTIN_LEN(tmp_len_arg_3);
            if (tmp_left_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 1268;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            tmp_right_value_2 = mod_consts[6];
            tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_2, tmp_right_value_2);
            Py_DECREF(tmp_left_value_2);
            assert(!(tmp_kw_call_arg_value_1_1 == NULL));
            CHECK_OBJECT(par_n);
            tmp_kw_call_dict_value_0_1 = par_n;
            frame_2f871ac7c2cab8f945ecb0497b8dea97->m_frame.f_lineno = 1268;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1268;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1268;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_palette;
            Py_INCREF(tmp_closure_1[1]);

            tmp_tuple_arg_1 = MAKE_GENERATOR_bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1268;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f871ac7c2cab8f945ecb0497b8dea97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f871ac7c2cab8f945ecb0497b8dea97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f871ac7c2cab8f945ecb0497b8dea97);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f871ac7c2cab8f945ecb0497b8dea97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f871ac7c2cab8f945ecb0497b8dea97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f871ac7c2cab8f945ecb0497b8dea97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f871ac7c2cab8f945ecb0497b8dea97,
        type_description_1,
        par_palette,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_2f871ac7c2cab8f945ecb0497b8dea97 == cache_frame_2f871ac7c2cab8f945ecb0497b8dea97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2f871ac7c2cab8f945ecb0497b8dea97);
        cache_frame_2f871ac7c2cab8f945ecb0497b8dea97 = NULL;
    }

    assertFrameObject(frame_2f871ac7c2cab8f945ecb0497b8dea97);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_palette);
    Py_DECREF(par_palette);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_palette);
    Py_DECREF(par_palette);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr_locals {
    PyObject *var_i;
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

static PyObject *bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr_locals *generator_heap = (struct bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_019a191a47154ffaa9e754b82dfab746, module_bokeh$palettes, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 1268;
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
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[9]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 1268;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 1268;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_i);
        tmp_args_element_value_1 = generator_heap->var_i;
        generator->m_frame->m_frame.f_lineno = 1268;
        tmp_int_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[11], tmp_args_element_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 1268;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 1268;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 1268;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_int_arg_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_int_arg_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 1268;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 1268;
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
            generator_heap->var_i,
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

    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
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
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr_context,
        module_bokeh$palettes,
        mod_consts[12],
#if PYTHON_VERSION >= 0x350
        mod_consts[13],
#endif
        codeobj_019a191a47154ffaa9e754b82dfab746,
        closure,
        2,
        sizeof(struct bokeh$palettes$$$function__1_linear_palette$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_bokeh$palettes$$$function__2_diverging_palette(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_palette1 = python_pars[0];
    PyObject *par_palette2 = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_midpoint = python_pars[3];
    PyObject *var_n1 = NULL;
    PyObject *var_n2 = NULL;
    struct Nuitka_FrameObject *frame_c6b7280659477d55b8ca26077ec59098;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c6b7280659477d55b8ca26077ec59098 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c6b7280659477d55b8ca26077ec59098)) {
        Py_XDECREF(cache_frame_c6b7280659477d55b8ca26077ec59098);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6b7280659477d55b8ca26077ec59098 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6b7280659477d55b8ca26077ec59098 = MAKE_FUNCTION_FRAME(codeobj_c6b7280659477d55b8ca26077ec59098, module_bokeh$palettes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c6b7280659477d55b8ca26077ec59098->m_type_description == NULL);
    frame_c6b7280659477d55b8ca26077ec59098 = cache_frame_c6b7280659477d55b8ca26077ec59098;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c6b7280659477d55b8ca26077ec59098);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c6b7280659477d55b8ca26077ec59098) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_palette2);
        tmp_expression_value_1 = par_palette2;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_palette2;
            assert(old != NULL);
            par_palette2 = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_midpoint);
        tmp_left_value_1 = par_midpoint;
        CHECK_OBJECT(par_n);
        tmp_right_value_1 = par_n;
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c6b7280659477d55b8ca26077ec59098->m_frame.f_lineno = 1306;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n1 == NULL);
        var_n1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[15]);
        assert(tmp_called_value_2 != NULL);
        tmp_left_value_3 = mod_consts[6];
        CHECK_OBJECT(par_midpoint);
        tmp_right_value_2 = par_midpoint;
        tmp_left_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_left_value_3, tmp_right_value_2);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1307;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_right_value_3 = par_n;
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_3);
        Py_DECREF(tmp_left_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1307;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c6b7280659477d55b8ca26077ec59098->m_frame.f_lineno = 1307;
        tmp_int_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1307;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1307;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n2 == NULL);
        var_n2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_left_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_palette1);
        tmp_args_element_value_3 = par_palette1;
        CHECK_OBJECT(var_n1);
        tmp_args_element_value_4 = var_n1;
        frame_c6b7280659477d55b8ca26077ec59098->m_frame.f_lineno = 1310;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_left_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_4);

            exception_lineno = 1310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_palette2);
        tmp_args_element_value_5 = par_palette2;
        CHECK_OBJECT(var_n2);
        tmp_args_element_value_6 = var_n2;
        frame_c6b7280659477d55b8ca26077ec59098->m_frame.f_lineno = 1310;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_right_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_4);

            exception_lineno = 1310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_left_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6b7280659477d55b8ca26077ec59098);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6b7280659477d55b8ca26077ec59098);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6b7280659477d55b8ca26077ec59098);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6b7280659477d55b8ca26077ec59098, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6b7280659477d55b8ca26077ec59098->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6b7280659477d55b8ca26077ec59098, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6b7280659477d55b8ca26077ec59098,
        type_description_1,
        par_palette1,
        par_palette2,
        par_n,
        par_midpoint,
        var_n1,
        var_n2
    );


    // Release cached frame if used for exception.
    if (frame_c6b7280659477d55b8ca26077ec59098 == cache_frame_c6b7280659477d55b8ca26077ec59098) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c6b7280659477d55b8ca26077ec59098);
        cache_frame_c6b7280659477d55b8ca26077ec59098 = NULL;
    }

    assertFrameObject(frame_c6b7280659477d55b8ca26077ec59098);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_palette2);
    Py_DECREF(par_palette2);
    par_palette2 = NULL;
    CHECK_OBJECT(var_n1);
    Py_DECREF(var_n1);
    var_n1 = NULL;
    CHECK_OBJECT(var_n2);
    Py_DECREF(var_n2);
    var_n2 = NULL;
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

    Py_XDECREF(par_palette2);
    par_palette2 = NULL;
    Py_XDECREF(var_n1);
    var_n1 = NULL;
    Py_XDECREF(var_n2);
    var_n2 = NULL;
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
    CHECK_OBJECT(par_palette1);
    Py_DECREF(par_palette1);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_midpoint);
    Py_DECREF(par_midpoint);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_palette1);
    Py_DECREF(par_palette1);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_midpoint);
    Py_DECREF(par_midpoint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__3_magma(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_0128993943c2978ff5275cd59bd78518;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0128993943c2978ff5275cd59bd78518 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0128993943c2978ff5275cd59bd78518)) {
        Py_XDECREF(cache_frame_0128993943c2978ff5275cd59bd78518);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0128993943c2978ff5275cd59bd78518 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0128993943c2978ff5275cd59bd78518 = MAKE_FUNCTION_FRAME(codeobj_0128993943c2978ff5275cd59bd78518, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0128993943c2978ff5275cd59bd78518->m_type_description == NULL);
    frame_0128993943c2978ff5275cd59bd78518 = cache_frame_0128993943c2978ff5275cd59bd78518;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0128993943c2978ff5275cd59bd78518);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0128993943c2978ff5275cd59bd78518) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_0128993943c2978ff5275cd59bd78518->m_frame.f_lineno = 1339;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0128993943c2978ff5275cd59bd78518);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0128993943c2978ff5275cd59bd78518);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0128993943c2978ff5275cd59bd78518);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0128993943c2978ff5275cd59bd78518, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0128993943c2978ff5275cd59bd78518->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0128993943c2978ff5275cd59bd78518, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0128993943c2978ff5275cd59bd78518,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_0128993943c2978ff5275cd59bd78518 == cache_frame_0128993943c2978ff5275cd59bd78518) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0128993943c2978ff5275cd59bd78518);
        cache_frame_0128993943c2978ff5275cd59bd78518 = NULL;
    }

    assertFrameObject(frame_0128993943c2978ff5275cd59bd78518);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__4_inferno(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_bc895e9abb4cd14e64590ee9ce391d9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc895e9abb4cd14e64590ee9ce391d9b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc895e9abb4cd14e64590ee9ce391d9b)) {
        Py_XDECREF(cache_frame_bc895e9abb4cd14e64590ee9ce391d9b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc895e9abb4cd14e64590ee9ce391d9b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc895e9abb4cd14e64590ee9ce391d9b = MAKE_FUNCTION_FRAME(codeobj_bc895e9abb4cd14e64590ee9ce391d9b, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bc895e9abb4cd14e64590ee9ce391d9b->m_type_description == NULL);
    frame_bc895e9abb4cd14e64590ee9ce391d9b = cache_frame_bc895e9abb4cd14e64590ee9ce391d9b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bc895e9abb4cd14e64590ee9ce391d9b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bc895e9abb4cd14e64590ee9ce391d9b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_bc895e9abb4cd14e64590ee9ce391d9b->m_frame.f_lineno = 1368;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc895e9abb4cd14e64590ee9ce391d9b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc895e9abb4cd14e64590ee9ce391d9b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc895e9abb4cd14e64590ee9ce391d9b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc895e9abb4cd14e64590ee9ce391d9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc895e9abb4cd14e64590ee9ce391d9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc895e9abb4cd14e64590ee9ce391d9b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc895e9abb4cd14e64590ee9ce391d9b,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_bc895e9abb4cd14e64590ee9ce391d9b == cache_frame_bc895e9abb4cd14e64590ee9ce391d9b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bc895e9abb4cd14e64590ee9ce391d9b);
        cache_frame_bc895e9abb4cd14e64590ee9ce391d9b = NULL;
    }

    assertFrameObject(frame_bc895e9abb4cd14e64590ee9ce391d9b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__5_plasma(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_d6e9ede88d97db60ab16a5f56900d371;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6e9ede88d97db60ab16a5f56900d371 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6e9ede88d97db60ab16a5f56900d371)) {
        Py_XDECREF(cache_frame_d6e9ede88d97db60ab16a5f56900d371);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6e9ede88d97db60ab16a5f56900d371 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6e9ede88d97db60ab16a5f56900d371 = MAKE_FUNCTION_FRAME(codeobj_d6e9ede88d97db60ab16a5f56900d371, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d6e9ede88d97db60ab16a5f56900d371->m_type_description == NULL);
    frame_d6e9ede88d97db60ab16a5f56900d371 = cache_frame_d6e9ede88d97db60ab16a5f56900d371;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d6e9ede88d97db60ab16a5f56900d371);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d6e9ede88d97db60ab16a5f56900d371) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_d6e9ede88d97db60ab16a5f56900d371->m_frame.f_lineno = 1397;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d6e9ede88d97db60ab16a5f56900d371);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d6e9ede88d97db60ab16a5f56900d371);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d6e9ede88d97db60ab16a5f56900d371);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6e9ede88d97db60ab16a5f56900d371, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6e9ede88d97db60ab16a5f56900d371->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6e9ede88d97db60ab16a5f56900d371, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6e9ede88d97db60ab16a5f56900d371,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_d6e9ede88d97db60ab16a5f56900d371 == cache_frame_d6e9ede88d97db60ab16a5f56900d371) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d6e9ede88d97db60ab16a5f56900d371);
        cache_frame_d6e9ede88d97db60ab16a5f56900d371 = NULL;
    }

    assertFrameObject(frame_d6e9ede88d97db60ab16a5f56900d371);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__6_viridis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_b8fe558a21c585620f9d21aa2e6cfdc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2)) {
        Py_XDECREF(cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2 = MAKE_FUNCTION_FRAME(codeobj_b8fe558a21c585620f9d21aa2e6cfdc2, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2->m_type_description == NULL);
    frame_b8fe558a21c585620f9d21aa2e6cfdc2 = cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b8fe558a21c585620f9d21aa2e6cfdc2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b8fe558a21c585620f9d21aa2e6cfdc2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_b8fe558a21c585620f9d21aa2e6cfdc2->m_frame.f_lineno = 1426;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8fe558a21c585620f9d21aa2e6cfdc2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8fe558a21c585620f9d21aa2e6cfdc2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8fe558a21c585620f9d21aa2e6cfdc2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b8fe558a21c585620f9d21aa2e6cfdc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8fe558a21c585620f9d21aa2e6cfdc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8fe558a21c585620f9d21aa2e6cfdc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8fe558a21c585620f9d21aa2e6cfdc2,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_b8fe558a21c585620f9d21aa2e6cfdc2 == cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2);
        cache_frame_b8fe558a21c585620f9d21aa2e6cfdc2 = NULL;
    }

    assertFrameObject(frame_b8fe558a21c585620f9d21aa2e6cfdc2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__7_cividis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_39e7d0c9c62fd1d012007c80f45a6013;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_39e7d0c9c62fd1d012007c80f45a6013 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_39e7d0c9c62fd1d012007c80f45a6013)) {
        Py_XDECREF(cache_frame_39e7d0c9c62fd1d012007c80f45a6013);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39e7d0c9c62fd1d012007c80f45a6013 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39e7d0c9c62fd1d012007c80f45a6013 = MAKE_FUNCTION_FRAME(codeobj_39e7d0c9c62fd1d012007c80f45a6013, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_39e7d0c9c62fd1d012007c80f45a6013->m_type_description == NULL);
    frame_39e7d0c9c62fd1d012007c80f45a6013 = cache_frame_39e7d0c9c62fd1d012007c80f45a6013;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_39e7d0c9c62fd1d012007c80f45a6013);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_39e7d0c9c62fd1d012007c80f45a6013) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_39e7d0c9c62fd1d012007c80f45a6013->m_frame.f_lineno = 1455;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39e7d0c9c62fd1d012007c80f45a6013);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_39e7d0c9c62fd1d012007c80f45a6013);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39e7d0c9c62fd1d012007c80f45a6013);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39e7d0c9c62fd1d012007c80f45a6013, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39e7d0c9c62fd1d012007c80f45a6013->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39e7d0c9c62fd1d012007c80f45a6013, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39e7d0c9c62fd1d012007c80f45a6013,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_39e7d0c9c62fd1d012007c80f45a6013 == cache_frame_39e7d0c9c62fd1d012007c80f45a6013) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_39e7d0c9c62fd1d012007c80f45a6013);
        cache_frame_39e7d0c9c62fd1d012007c80f45a6013 = NULL;
    }

    assertFrameObject(frame_39e7d0c9c62fd1d012007c80f45a6013);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__8_turbo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_d5a8e029a330bab13c1824e61e709e63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d5a8e029a330bab13c1824e61e709e63 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d5a8e029a330bab13c1824e61e709e63)) {
        Py_XDECREF(cache_frame_d5a8e029a330bab13c1824e61e709e63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5a8e029a330bab13c1824e61e709e63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5a8e029a330bab13c1824e61e709e63 = MAKE_FUNCTION_FRAME(codeobj_d5a8e029a330bab13c1824e61e709e63, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d5a8e029a330bab13c1824e61e709e63->m_type_description == NULL);
    frame_d5a8e029a330bab13c1824e61e709e63 = cache_frame_d5a8e029a330bab13c1824e61e709e63;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d5a8e029a330bab13c1824e61e709e63);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d5a8e029a330bab13c1824e61e709e63) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_d5a8e029a330bab13c1824e61e709e63->m_frame.f_lineno = 1488;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5a8e029a330bab13c1824e61e709e63);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5a8e029a330bab13c1824e61e709e63);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d5a8e029a330bab13c1824e61e709e63);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5a8e029a330bab13c1824e61e709e63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5a8e029a330bab13c1824e61e709e63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5a8e029a330bab13c1824e61e709e63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5a8e029a330bab13c1824e61e709e63,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_d5a8e029a330bab13c1824e61e709e63 == cache_frame_d5a8e029a330bab13c1824e61e709e63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d5a8e029a330bab13c1824e61e709e63);
        cache_frame_d5a8e029a330bab13c1824e61e709e63 = NULL;
    }

    assertFrameObject(frame_d5a8e029a330bab13c1824e61e709e63);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__9_grey(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_80caae4bb43f55c596c55358637ec06a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80caae4bb43f55c596c55358637ec06a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80caae4bb43f55c596c55358637ec06a)) {
        Py_XDECREF(cache_frame_80caae4bb43f55c596c55358637ec06a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80caae4bb43f55c596c55358637ec06a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80caae4bb43f55c596c55358637ec06a = MAKE_FUNCTION_FRAME(codeobj_80caae4bb43f55c596c55358637ec06a, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_80caae4bb43f55c596c55358637ec06a->m_type_description == NULL);
    frame_80caae4bb43f55c596c55358637ec06a = cache_frame_80caae4bb43f55c596c55358637ec06a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_80caae4bb43f55c596c55358637ec06a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_80caae4bb43f55c596c55358637ec06a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_80caae4bb43f55c596c55358637ec06a->m_frame.f_lineno = 1520;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_80caae4bb43f55c596c55358637ec06a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_80caae4bb43f55c596c55358637ec06a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_80caae4bb43f55c596c55358637ec06a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_80caae4bb43f55c596c55358637ec06a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80caae4bb43f55c596c55358637ec06a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80caae4bb43f55c596c55358637ec06a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80caae4bb43f55c596c55358637ec06a,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_80caae4bb43f55c596c55358637ec06a == cache_frame_80caae4bb43f55c596c55358637ec06a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_80caae4bb43f55c596c55358637ec06a);
        cache_frame_80caae4bb43f55c596c55358637ec06a = NULL;
    }

    assertFrameObject(frame_80caae4bb43f55c596c55358637ec06a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__10_gray(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_88e0544e0596252d81f66a6e2c9266e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88e0544e0596252d81f66a6e2c9266e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_88e0544e0596252d81f66a6e2c9266e5)) {
        Py_XDECREF(cache_frame_88e0544e0596252d81f66a6e2c9266e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88e0544e0596252d81f66a6e2c9266e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88e0544e0596252d81f66a6e2c9266e5 = MAKE_FUNCTION_FRAME(codeobj_88e0544e0596252d81f66a6e2c9266e5, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_88e0544e0596252d81f66a6e2c9266e5->m_type_description == NULL);
    frame_88e0544e0596252d81f66a6e2c9266e5 = cache_frame_88e0544e0596252d81f66a6e2c9266e5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_88e0544e0596252d81f66a6e2c9266e5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_88e0544e0596252d81f66a6e2c9266e5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1552;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1552;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_88e0544e0596252d81f66a6e2c9266e5->m_frame.f_lineno = 1552;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1552;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_88e0544e0596252d81f66a6e2c9266e5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_88e0544e0596252d81f66a6e2c9266e5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_88e0544e0596252d81f66a6e2c9266e5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88e0544e0596252d81f66a6e2c9266e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88e0544e0596252d81f66a6e2c9266e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88e0544e0596252d81f66a6e2c9266e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88e0544e0596252d81f66a6e2c9266e5,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_88e0544e0596252d81f66a6e2c9266e5 == cache_frame_88e0544e0596252d81f66a6e2c9266e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_88e0544e0596252d81f66a6e2c9266e5);
        cache_frame_88e0544e0596252d81f66a6e2c9266e5 = NULL;
    }

    assertFrameObject(frame_88e0544e0596252d81f66a6e2c9266e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_bokeh$palettes$$$function__11_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arg = python_pars[0];
    struct Nuitka_FrameObject *frame_c8f1dfe6c0102c820ea17b5725bc5c85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85)) {
        Py_XDECREF(cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85 = MAKE_FUNCTION_FRAME(codeobj_c8f1dfe6c0102c820ea17b5725bc5c85, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85->m_type_description == NULL);
    frame_c8f1dfe6c0102c820ea17b5725bc5c85 = cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c8f1dfe6c0102c820ea17b5725bc5c85);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c8f1dfe6c0102c820ea17b5725bc5c85) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_arg);
        tmp_expression_value_1 = par_arg;
        tmp_subscript_value_1 = mod_consts[5];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8f1dfe6c0102c820ea17b5725bc5c85);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8f1dfe6c0102c820ea17b5725bc5c85);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8f1dfe6c0102c820ea17b5725bc5c85);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8f1dfe6c0102c820ea17b5725bc5c85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8f1dfe6c0102c820ea17b5725bc5c85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8f1dfe6c0102c820ea17b5725bc5c85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8f1dfe6c0102c820ea17b5725bc5c85,
        type_description_1,
        par_arg
    );


    // Release cached frame if used for exception.
    if (frame_c8f1dfe6c0102c820ea17b5725bc5c85 == cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85);
        cache_frame_c8f1dfe6c0102c820ea17b5725bc5c85 = NULL;
    }

    assertFrameObject(frame_c8f1dfe6c0102c820ea17b5725bc5c85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__10_gray(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__10_gray,
        mod_consts[849],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88e0544e0596252d81f66a6e2c9266e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__11_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__11_lambda,
        mod_consts[853],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c8f1dfe6c0102c820ea17b5725bc5c85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_bokeh$palettes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__1_linear_palette(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__1_linear_palette,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f871ac7c2cab8f945ecb0497b8dea97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__2_diverging_palette(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__2_diverging_palette,
        mod_consts[841],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c6b7280659477d55b8ca26077ec59098,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__3_magma(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__3_magma,
        mod_consts[842],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0128993943c2978ff5275cd59bd78518,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__4_inferno(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__4_inferno,
        mod_consts[843],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc895e9abb4cd14e64590ee9ce391d9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__5_plasma(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__5_plasma,
        mod_consts[844],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d6e9ede88d97db60ab16a5f56900d371,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__6_viridis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__6_viridis,
        mod_consts[845],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b8fe558a21c585620f9d21aa2e6cfdc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__7_cividis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__7_cividis,
        mod_consts[846],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_39e7d0c9c62fd1d012007c80f45a6013,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__8_turbo(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__8_turbo,
        mod_consts[847],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5a8e029a330bab13c1824e61e709e63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bokeh$palettes$$$function__9_grey(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bokeh$palettes$$$function__9_grey,
        mod_consts[848],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_80caae4bb43f55c596c55358637ec06a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_bokeh$palettes,
        mod_consts[31],
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

function_impl_code functable_bokeh$palettes[] = {
    impl_bokeh$palettes$$$function__1_linear_palette,
    impl_bokeh$palettes$$$function__2_diverging_palette,
    impl_bokeh$palettes$$$function__3_magma,
    impl_bokeh$palettes$$$function__4_inferno,
    impl_bokeh$palettes$$$function__5_plasma,
    impl_bokeh$palettes$$$function__6_viridis,
    impl_bokeh$palettes$$$function__7_cividis,
    impl_bokeh$palettes$$$function__8_turbo,
    impl_bokeh$palettes$$$function__9_grey,
    impl_bokeh$palettes$$$function__10_gray,
    impl_bokeh$palettes$$$function__11_lambda,
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

    function_impl_code *current = functable_bokeh$palettes;
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

    if (offset > sizeof(functable_bokeh$palettes) || offset < 0) {
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
        functable_bokeh$palettes[offset],
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
        module_bokeh$palettes,
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
PyObject *modulecode_bokeh$palettes(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("bokeh.palettes");

    // Store the module for future use.
    module_bokeh$palettes = module;

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
        PRINT_STRING("bokeh.palettes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("bokeh.palettes: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("bokeh.palettes: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initbokeh$palettes\n");

    moduledict_bokeh$palettes = MODULE_DICT(module_bokeh$palettes);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_bokeh$palettes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_bokeh$palettes,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[871]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_bokeh$palettes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_bokeh$palettes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_bokeh$palettes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_bokeh$palettes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_bokeh$palettes);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_index = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3fe6bb565b1612f50f35b84f2e3d5685;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_ec0b80ac2bf61ba289fb32392628a0d2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_inplace_orig;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_3fe6bb565b1612f50f35b84f2e3d5685 = MAKE_MODULE_FRAME(codeobj_3fe6bb565b1612f50f35b84f2e3d5685, module_bokeh$palettes);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_3fe6bb565b1612f50f35b84f2e3d5685);
    assert(Py_REFCNT(frame_3fe6bb565b1612f50f35b84f2e3d5685) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[41];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_bokeh$palettes;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[5];
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 345;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 346;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[42],
            PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[10];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_bokeh$palettes;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[5];
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 353;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[45];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_bokeh$palettes;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[46];
        tmp_level_value_3 = mod_consts[5];
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 354;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_bokeh$palettes,
                mod_consts[47],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_bokeh$palettes,
                mod_consts[48],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[48]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_bokeh$palettes,
                mod_consts[49],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[49]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_bokeh$palettes,
                mod_consts[50],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[50]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[51];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_bokeh$palettes;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[5];
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 358;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[52];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
        tmp_subscript_value_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_tuple_element_2 == NULL));
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[220];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[224];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[226];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[260];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[266];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[274];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[278];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[280];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[282];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[284];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[286];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[290];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[306];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[308];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[312];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[314];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[316];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[323];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[325];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[329];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[371];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[373];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[375];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[377];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[379];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[393];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[395];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[397];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[401];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[403];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[405];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[411];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[413];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[415];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[417];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[419];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[421];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[423];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[429];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[431];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[433];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[435];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[437];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[439];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[441];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[443];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[445];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[447];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[449];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[451];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[453];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[455];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[456], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[457];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[459];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[460], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[461];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[463];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[465];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[467];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[469];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[471];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[473];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[475];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[477];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[479];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[481];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[483];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[485];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[486], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[486]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[486]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_subscript_value_4 = mod_consts[487];
        tmp_assign_source_233 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[486]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[486]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[489];
        tmp_assign_source_234 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assign_source_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[486]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[486]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[491];
        tmp_assign_source_235 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_assign_source_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[486]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[486]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[493];
        tmp_assign_source_236 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_assign_source_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[486]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[486]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[495];
        tmp_assign_source_237 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        if (tmp_assign_source_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[497];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[498], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[498]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[498]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_subscript_value_9 = mod_consts[487];
        tmp_assign_source_239 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
        if (tmp_assign_source_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[498]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[498]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 759;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[489];
        tmp_assign_source_240 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_assign_source_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 759;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[500], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[498]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[498]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[491];
        tmp_assign_source_241 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
        if (tmp_assign_source_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[498]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[498]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = mod_consts[493];
        tmp_assign_source_242 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
        if (tmp_assign_source_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[498]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[498]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[495];
        tmp_assign_source_243 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
        if (tmp_assign_source_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[504];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        assert(!(tmp_expression_value_14 == NULL));
        tmp_subscript_value_14 = mod_consts[506];
        tmp_assign_source_245 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
        if (tmp_assign_source_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[508];
        tmp_assign_source_246 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
        if (tmp_assign_source_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 768;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[510];
        tmp_assign_source_247 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_16);
        if (tmp_assign_source_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 768;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[512];
        tmp_assign_source_248 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_17);
        if (tmp_assign_source_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = mod_consts[487];
        tmp_assign_source_249 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_18);
        if (tmp_assign_source_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[514], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = mod_consts[489];
        tmp_assign_source_250 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_19);
        if (tmp_assign_source_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = mod_consts[491];
        tmp_assign_source_251 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_20);
        if (tmp_assign_source_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[516], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_21;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = mod_consts[493];
        tmp_assign_source_252 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_21);
        if (tmp_assign_source_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = mod_consts[495];
        tmp_assign_source_253 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_22);
        if (tmp_assign_source_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[518], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[519];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[520]);
        }

        assert(!(tmp_expression_value_23 == NULL));
        tmp_subscript_value_23 = mod_consts[512];
        tmp_assign_source_255 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_23);
        if (tmp_assign_source_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[520]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 779;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = mod_consts[487];
        tmp_assign_source_256 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_24);
        if (tmp_assign_source_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 779;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[522], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[520]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = mod_consts[489];
        tmp_assign_source_257 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_25);
        if (tmp_assign_source_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[520]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = mod_consts[491];
        tmp_assign_source_258 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_26);
        if (tmp_assign_source_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[524], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[520]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_27 = mod_consts[493];
        tmp_assign_source_259 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_27);
        if (tmp_assign_source_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_28;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[520]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_28 = mod_consts[495];
        tmp_assign_source_260 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_28);
        if (tmp_assign_source_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[526], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[527];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[528], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_29;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[528]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[528]);
        }

        assert(!(tmp_expression_value_29 == NULL));
        tmp_subscript_value_29 = mod_consts[487];
        tmp_assign_source_262 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_29);
        if (tmp_assign_source_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[528]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[528]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = mod_consts[489];
        tmp_assign_source_263 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_30);
        if (tmp_assign_source_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[530], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[528]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[528]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = mod_consts[491];
        tmp_assign_source_264 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_31);
        if (tmp_assign_source_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[528]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[528]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_32 = mod_consts[493];
        tmp_assign_source_265 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_32);
        if (tmp_assign_source_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[532], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[528]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[528]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_33 = mod_consts[495];
        tmp_assign_source_266 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_33);
        if (tmp_assign_source_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[534];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_34;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[535]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_subscript_value_34 = mod_consts[512];
        tmp_assign_source_268 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_34);
        if (tmp_assign_source_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 795;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[536], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[535]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_35 = mod_consts[487];
        tmp_assign_source_269 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_35);
        if (tmp_assign_source_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_36;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[535]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_36 = mod_consts[489];
        tmp_assign_source_270 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_36);
        if (tmp_assign_source_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[538], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_37;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[535]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_37 = mod_consts[491];
        tmp_assign_source_271 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_37);
        if (tmp_assign_source_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_38;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[535]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_38 = mod_consts[493];
        tmp_assign_source_272 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_38);
        if (tmp_assign_source_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_39;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[535]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_39 = mod_consts[495];
        tmp_assign_source_273 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_39);
        if (tmp_assign_source_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[541], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[542];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_40;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[543]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[543]);
        }

        assert(!(tmp_expression_value_40 == NULL));
        tmp_subscript_value_40 = mod_consts[487];
        tmp_assign_source_275 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_40);
        if (tmp_assign_source_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[544], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_41;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[543]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[543]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_41 = mod_consts[489];
        tmp_assign_source_276 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_41);
        if (tmp_assign_source_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[543]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[543]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_42 = mod_consts[491];
        tmp_assign_source_277 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_42);
        if (tmp_assign_source_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[546], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_43;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[543]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[543]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 807;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = mod_consts[493];
        tmp_assign_source_278 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_43);
        if (tmp_assign_source_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 807;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_44;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[543]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[543]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 808;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_44 = mod_consts[495];
        tmp_assign_source_279 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_44);
        if (tmp_assign_source_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 808;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[548], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[549];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_45;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        assert(!(tmp_expression_value_45 == NULL));
        tmp_subscript_value_45 = mod_consts[506];
        tmp_assign_source_281 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_45);
        if (tmp_assign_source_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[551], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_46;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_46 = mod_consts[508];
        tmp_assign_source_282 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_46);
        if (tmp_assign_source_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[552], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_47;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_47 = mod_consts[510];
        tmp_assign_source_283 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_47);
        if (tmp_assign_source_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_48;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_48 = mod_consts[512];
        tmp_assign_source_284 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_48);
        if (tmp_assign_source_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 815;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[554], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_49;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_49 = mod_consts[487];
        tmp_assign_source_285 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_49);
        if (tmp_assign_source_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_50;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_50 = mod_consts[489];
        tmp_assign_source_286 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_50);
        if (tmp_assign_source_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[556], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_51;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_51 = mod_consts[491];
        tmp_assign_source_287 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_51);
        if (tmp_assign_source_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 818;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[557], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_52;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_52 = mod_consts[493];
        tmp_assign_source_288 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_52);
        if (tmp_assign_source_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[558], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_53;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_53 = mod_consts[495];
        tmp_assign_source_289 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_53);
        if (tmp_assign_source_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[560];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[562];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[564];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[566];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[568];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[570];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[571], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[572];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[573], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[574];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[575], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[576];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[578];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[579];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[580], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[581];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[582], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[583];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[584], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[585];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[587];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[588], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[589];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[590], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[591];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[592], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[593];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[595];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[597];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[598];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[600];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[602];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[603], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[604];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[606];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[608];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[610];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[612];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[613], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[614];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[616];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[617];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[619];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[620], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[621];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[622], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[623];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[624], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[625];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[626], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[627];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[628], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[629];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[630], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[631];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[632], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[633];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[634], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[635];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[636];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[637], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[638];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[639], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[640];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[641], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[642];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[643], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[644];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[645], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[646];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[647], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[648];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[649], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[650];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[651], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[652];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[653], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[654];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[655];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[656], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        tmp_assign_source_341 = mod_consts[657];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[658], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        tmp_assign_source_342 = mod_consts[659];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[660], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        tmp_assign_source_343 = mod_consts[661];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[662], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        tmp_assign_source_344 = mod_consts[663];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[664], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        tmp_assign_source_345 = mod_consts[665];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[666], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        tmp_assign_source_346 = mod_consts[667];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[668], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;
        tmp_assign_source_347 = mod_consts[669];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[670], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        tmp_assign_source_348 = mod_consts[671];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[672], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        tmp_assign_source_349 = mod_consts[673];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        tmp_assign_source_350 = mod_consts[674];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_54;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        assert(!(tmp_expression_value_54 == NULL));
        tmp_subscript_value_54 = mod_consts[510];
        tmp_assign_source_351 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_54);
        if (tmp_assign_source_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[676], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_55;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1022;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_55 = mod_consts[512];
        tmp_assign_source_352 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_55);
        if (tmp_assign_source_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1022;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[677], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_56;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1023;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_56 = mod_consts[487];
        tmp_assign_source_353 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_56);
        if (tmp_assign_source_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1023;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[678], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_57;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_57 = mod_consts[489];
        tmp_assign_source_354 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_57);
        if (tmp_assign_source_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[679], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_58;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_58 = mod_consts[491];
        tmp_assign_source_355 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_58);
        if (tmp_assign_source_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[680], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_59;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1026;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_59 = mod_consts[493];
        tmp_assign_source_356 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_59);
        if (tmp_assign_source_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1026;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[681], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_60;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1027;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_60 = mod_consts[495];
        tmp_assign_source_357 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_60);
        if (tmp_assign_source_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1027;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[682], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        tmp_assign_source_358 = mod_consts[683];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_61;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        assert(!(tmp_expression_value_61 == NULL));
        tmp_subscript_value_61 = mod_consts[685];
        tmp_assign_source_359 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_61);
        if (tmp_assign_source_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1032;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[686], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_62;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_62 = mod_consts[687];
        tmp_assign_source_360 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_62);
        if (tmp_assign_source_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[688], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_63;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1034;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_63 = mod_consts[689];
        tmp_assign_source_361 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_63);
        if (tmp_assign_source_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1034;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[690], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_64;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1035;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_64 = mod_consts[691];
        tmp_assign_source_362 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_64);
        if (tmp_assign_source_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1035;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[692], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_65;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1036;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_65 = mod_consts[693];
        tmp_assign_source_363 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_65);
        if (tmp_assign_source_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1036;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[694], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_66;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1037;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_66 = mod_consts[695];
        tmp_assign_source_364 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_66);
        if (tmp_assign_source_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1037;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[696], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_67 = mod_consts[697];
        tmp_assign_source_365 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_67);
        if (tmp_assign_source_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[698], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_68;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1039;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_68 = mod_consts[699];
        tmp_assign_source_366 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_68);
        if (tmp_assign_source_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1039;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[700], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_69;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_69 = mod_consts[506];
        tmp_assign_source_367 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_69);
        if (tmp_assign_source_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[701], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_70;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_70 = mod_consts[508];
        tmp_assign_source_368 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_70);
        if (tmp_assign_source_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[702], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_71;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1042;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_71 = mod_consts[510];
        tmp_assign_source_369 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_71);
        if (tmp_assign_source_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1042;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[703], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_subscript_value_72;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_72 = mod_consts[512];
        tmp_assign_source_370 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_72);
        if (tmp_assign_source_370 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1043;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[704], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_73;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_73 = mod_consts[487];
        tmp_assign_source_371 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_73);
        if (tmp_assign_source_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1044;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[705], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_subscript_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_74 = mod_consts[489];
        tmp_assign_source_372 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_74);
        if (tmp_assign_source_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[706], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_75;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_75 = mod_consts[491];
        tmp_assign_source_373 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_75);
        if (tmp_assign_source_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[707], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_subscript_value_76;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1047;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_76 = mod_consts[493];
        tmp_assign_source_374 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_76);
        if (tmp_assign_source_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1047;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[708], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_77;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_77 = mod_consts[495];
        tmp_assign_source_375 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_77);
        if (tmp_assign_source_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[709], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        tmp_assign_source_376 = mod_consts[710];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_subscript_value_78;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        assert(!(tmp_expression_value_78 == NULL));
        tmp_subscript_value_78 = mod_consts[685];
        tmp_assign_source_377 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_78);
        if (tmp_assign_source_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1053;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[712], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_79;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_79 = mod_consts[687];
        tmp_assign_source_378 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_79);
        if (tmp_assign_source_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[713], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_subscript_value_80;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_80 = mod_consts[689];
        tmp_assign_source_379 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_80);
        if (tmp_assign_source_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[714], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_81;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1056;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_81 = mod_consts[691];
        tmp_assign_source_380 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_81);
        if (tmp_assign_source_380 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1056;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[715], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_82;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1057;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_82 = mod_consts[693];
        tmp_assign_source_381 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_82);
        if (tmp_assign_source_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1057;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[716], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_83;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1058;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_83 = mod_consts[695];
        tmp_assign_source_382 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_83);
        if (tmp_assign_source_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1058;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[717], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_84;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1059;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_84 = mod_consts[697];
        tmp_assign_source_383 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_84);
        if (tmp_assign_source_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1059;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[718], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_85;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_85 = mod_consts[699];
        tmp_assign_source_384 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_85);
        if (tmp_assign_source_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[719], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_86;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1061;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_86 = mod_consts[506];
        tmp_assign_source_385 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_86);
        if (tmp_assign_source_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1061;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[720], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_87;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_87 = mod_consts[508];
        tmp_assign_source_386 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_87);
        if (tmp_assign_source_386 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[721], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_subscript_value_88;
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1063;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_88 = mod_consts[510];
        tmp_assign_source_387 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_88);
        if (tmp_assign_source_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1063;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[722], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_89;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1064;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_89 = mod_consts[512];
        tmp_assign_source_388 = LOOKUP_SUBSCRIPT(tmp_expression_value_89, tmp_subscript_value_89);
        if (tmp_assign_source_388 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1064;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[723], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_90;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_90 = mod_consts[487];
        tmp_assign_source_389 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_90);
        if (tmp_assign_source_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[724], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_91;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1066;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_91 = mod_consts[489];
        tmp_assign_source_390 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_91);
        if (tmp_assign_source_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1066;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[725], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_subscript_value_92;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1067;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_92 = mod_consts[491];
        tmp_assign_source_391 = LOOKUP_SUBSCRIPT(tmp_expression_value_92, tmp_subscript_value_92);
        if (tmp_assign_source_391 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1067;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[726], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_93;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_93 = mod_consts[493];
        tmp_assign_source_392 = LOOKUP_SUBSCRIPT(tmp_expression_value_93, tmp_subscript_value_93);
        if (tmp_assign_source_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[727], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_94;
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1069;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_94 = mod_consts[495];
        tmp_assign_source_393 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_94);
        if (tmp_assign_source_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1069;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[728], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        tmp_assign_source_394 = mod_consts[729];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_95;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        assert(!(tmp_expression_value_95 == NULL));
        tmp_subscript_value_95 = mod_consts[685];
        tmp_assign_source_395 = LOOKUP_SUBSCRIPT(tmp_expression_value_95, tmp_subscript_value_95);
        if (tmp_assign_source_395 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1074;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[731], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_subscript_value_96;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_96 = mod_consts[687];
        tmp_assign_source_396 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_96);
        if (tmp_assign_source_396 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[732], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_97;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_97 = mod_consts[689];
        tmp_assign_source_397 = LOOKUP_SUBSCRIPT(tmp_expression_value_97, tmp_subscript_value_97);
        if (tmp_assign_source_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[733], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_subscript_value_98;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_98 = mod_consts[691];
        tmp_assign_source_398 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_98);
        if (tmp_assign_source_398 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[734], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_99;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_99 = mod_consts[693];
        tmp_assign_source_399 = LOOKUP_SUBSCRIPT(tmp_expression_value_99, tmp_subscript_value_99);
        if (tmp_assign_source_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[735], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_100;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1079;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_100 = mod_consts[695];
        tmp_assign_source_400 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_100);
        if (tmp_assign_source_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1079;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[736], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_101;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1080;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_101 = mod_consts[697];
        tmp_assign_source_401 = LOOKUP_SUBSCRIPT(tmp_expression_value_101, tmp_subscript_value_101);
        if (tmp_assign_source_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1080;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[737], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_102;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1081;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_102 = mod_consts[699];
        tmp_assign_source_402 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_102);
        if (tmp_assign_source_402 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1081;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[738], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_103;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_103 = mod_consts[506];
        tmp_assign_source_403 = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_103);
        if (tmp_assign_source_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1082;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[739], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_subscript_value_104;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_104 = mod_consts[508];
        tmp_assign_source_404 = LOOKUP_SUBSCRIPT(tmp_expression_value_104, tmp_subscript_value_104);
        if (tmp_assign_source_404 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[740], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_105;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1084;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_105 = mod_consts[510];
        tmp_assign_source_405 = LOOKUP_SUBSCRIPT(tmp_expression_value_105, tmp_subscript_value_105);
        if (tmp_assign_source_405 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1084;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[741], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_106;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1085;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_106 = mod_consts[512];
        tmp_assign_source_406 = LOOKUP_SUBSCRIPT(tmp_expression_value_106, tmp_subscript_value_106);
        if (tmp_assign_source_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1085;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[742], tmp_assign_source_406);
    }
    {
        PyObject *tmp_assign_source_407;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_subscript_value_107;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1086;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_107 = mod_consts[487];
        tmp_assign_source_407 = LOOKUP_SUBSCRIPT(tmp_expression_value_107, tmp_subscript_value_107);
        if (tmp_assign_source_407 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1086;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[743], tmp_assign_source_407);
    }
    {
        PyObject *tmp_assign_source_408;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_subscript_value_108;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_108 = mod_consts[489];
        tmp_assign_source_408 = LOOKUP_SUBSCRIPT(tmp_expression_value_108, tmp_subscript_value_108);
        if (tmp_assign_source_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[744], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_109;
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1088;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_109 = mod_consts[491];
        tmp_assign_source_409 = LOOKUP_SUBSCRIPT(tmp_expression_value_109, tmp_subscript_value_109);
        if (tmp_assign_source_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1088;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[745], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_subscript_value_110;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1089;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_110 = mod_consts[493];
        tmp_assign_source_410 = LOOKUP_SUBSCRIPT(tmp_expression_value_110, tmp_subscript_value_110);
        if (tmp_assign_source_410 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1089;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[746], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_subscript_value_111;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1090;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_111 = mod_consts[495];
        tmp_assign_source_411 = LOOKUP_SUBSCRIPT(tmp_expression_value_111, tmp_subscript_value_111);
        if (tmp_assign_source_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1090;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[747], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        tmp_assign_source_412 = mod_consts[748];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[749], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_subscript_value_112;
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[749]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[749]);
        }

        assert(!(tmp_expression_value_112 == NULL));
        tmp_subscript_value_112 = mod_consts[487];
        tmp_assign_source_413 = LOOKUP_SUBSCRIPT(tmp_expression_value_112, tmp_subscript_value_112);
        if (tmp_assign_source_413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1095;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[750], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_subscript_value_113;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[749]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[749]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1096;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_113 = mod_consts[489];
        tmp_assign_source_414 = LOOKUP_SUBSCRIPT(tmp_expression_value_113, tmp_subscript_value_113);
        if (tmp_assign_source_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1096;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[751], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_subscript_value_114;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[749]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[749]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1097;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_114 = mod_consts[491];
        tmp_assign_source_415 = LOOKUP_SUBSCRIPT(tmp_expression_value_114, tmp_subscript_value_114);
        if (tmp_assign_source_415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1097;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[752], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_115;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[749]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[749]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1098;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_115 = mod_consts[493];
        tmp_assign_source_416 = LOOKUP_SUBSCRIPT(tmp_expression_value_115, tmp_subscript_value_115);
        if (tmp_assign_source_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1098;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[753], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_subscript_value_116;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[749]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[749]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1099;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_116 = mod_consts[495];
        tmp_assign_source_417 = LOOKUP_SUBSCRIPT(tmp_expression_value_116, tmp_subscript_value_116);
        if (tmp_assign_source_417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1099;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[754], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        tmp_assign_source_418 = mod_consts[755];
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[756], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_subscript_value_117;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[756]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[756]);
        }

        assert(!(tmp_expression_value_117 == NULL));
        tmp_subscript_value_117 = mod_consts[489];
        tmp_assign_source_419 = LOOKUP_SUBSCRIPT(tmp_expression_value_117, tmp_subscript_value_117);
        if (tmp_assign_source_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[757], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_118;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[756]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[756]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_118 = mod_consts[491];
        tmp_assign_source_420 = LOOKUP_SUBSCRIPT(tmp_expression_value_118, tmp_subscript_value_118);
        if (tmp_assign_source_420 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[758], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_subscript_value_119;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[756]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[756]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_119 = mod_consts[493];
        tmp_assign_source_421 = LOOKUP_SUBSCRIPT(tmp_expression_value_119, tmp_subscript_value_119);
        if (tmp_assign_source_421 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[759], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_subscript_value_120;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[756]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[756]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1106;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_120 = mod_consts[495];
        tmp_assign_source_422 = LOOKUP_SUBSCRIPT(tmp_expression_value_120, tmp_subscript_value_120);
        if (tmp_assign_source_422 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[760], tmp_assign_source_422);
    }
    {
        PyObject *tmp_assign_source_423;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[761];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_423 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_423, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[762];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_423, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[763];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_423, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[764];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_423, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[765];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_423, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[766];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_423, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[767];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_423, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_423);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[768], tmp_assign_source_423);
    }
    {
        PyObject *tmp_assign_source_424;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[761];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_424 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_424, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[762];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_424, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[763];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_424, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[764];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_424, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[765];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_424, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[766];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_424, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[767];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_424, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_424);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[769], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[761];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_425 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_425, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[762];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_425, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[763];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_425, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[764];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_425, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[765];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_425, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[766];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_425, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[767];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_425, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_425);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[770], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[761];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_426 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_426, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[762];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_426, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[763];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_426, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[764];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_426, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[765];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_426, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[766];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_426, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[767];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1112;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_426, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_assign_source_426);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[771], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[761];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1113;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_427 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_427, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[762];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1113;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_427, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[763];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1113;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_427, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[764];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1113;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_427, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[765];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1113;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_427, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[766];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1113;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_427, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[767];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1113;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_427, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_assign_source_427);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[772], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[761];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_428 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_428, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[762];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_428, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[763];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_428, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[764];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_428, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[765];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_428, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[766];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_428, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[767];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_428, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_assign_source_428);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[773], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[761];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1115;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_429 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_429, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[762];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1115;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_429, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[763];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1115;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_429, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[764];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1115;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_429, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[765];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1115;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_429, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[766];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1115;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_429, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[767];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1115;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_429, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_assign_source_429);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[774], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[761];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_430 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_430, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[762];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_430, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[763];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_430, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[764];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_430, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[765];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_430, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[766];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_430, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[767];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1116;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_430, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_assign_source_430);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[775], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[761];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1117;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_431 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_431, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[762];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1117;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_431, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[763];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1117;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_431, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[764];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1117;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_431, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[765];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1117;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_431, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[766];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1117;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_431, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[767];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1117;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_431, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_assign_source_431);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[776], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_dict_key_10 = mod_consts[761];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_432 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_432, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[762];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_432, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[763];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_432, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[764];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_432, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[765];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_432, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[766];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_432, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[767];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_432, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_assign_source_432);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[777], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_dict_key_11 = mod_consts[761];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_433 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_433, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[762];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_433, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[763];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_433, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[764];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_433, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[765];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_433, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[766];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_433, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[767];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_433, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_assign_source_433);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[778], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_12 = mod_consts[761];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_434 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_434, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[762];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[213]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_434, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[763];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[215]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_434, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[764];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_434, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[765];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[219]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_434, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[766];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[221]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_434, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[767];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_434, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_assign_source_434);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[779], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_13 = mod_consts[761];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[225]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_435 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[762];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[763];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[229]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[764];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[765];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[766];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[235]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[767];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[237]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[780];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[239]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1121;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_435, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_assign_source_435);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[781], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_dict_key_14 = mod_consts[761];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[241]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_436 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[762];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[763];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[764];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[765];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[249]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[766];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[767];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[253]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[780];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[255]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_436, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_assign_source_436);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[782], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_dict_key_15 = mod_consts[761];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[257]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_437 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[762];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[259]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[259]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[763];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[261]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[261]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[764];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[263]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[765];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[265]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[265]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[766];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[267]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[267]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[767];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[269]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[269]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[780];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[271]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[271]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_437, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_assign_source_437);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[783], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        tmp_dict_key_16 = mod_consts[761];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[273]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[273]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_438 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[762];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[275]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[763];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[277]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[277]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[764];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[279]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[279]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[765];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[281]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[281]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[766];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[283]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[767];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[780];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[287]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_438, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_assign_source_438);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[784], tmp_assign_source_438);
    }
    {
        PyObject *tmp_assign_source_439;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_dict_key_17 = mod_consts[761];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[289]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[289]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_439 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[762];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[291]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[291]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[763];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[293]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[293]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[764];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[295]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[295]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[765];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[297]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[297]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[766];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[299]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[767];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[301]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[780];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[303]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[303]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_439, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_assign_source_439);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[785], tmp_assign_source_439);
    }
    {
        PyObject *tmp_assign_source_440;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_dict_key_18 = mod_consts[761];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[305]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_440 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[762];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[307]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[307]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[763];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[309]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[309]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[764];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[311]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[311]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[765];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[313]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[313]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[766];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[315]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[315]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[767];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[317]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[317]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[780];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_440, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_18;
        // Exception handling pass through code for dict_build:
        dict_build_exception_18:;
        Py_DECREF(tmp_assign_source_440);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_18:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[786], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        tmp_dict_key_19 = mod_consts[761];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[324]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[324]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_441 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[762];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[326]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[326]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[763];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[328]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[328]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[764];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[330]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[330]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[765];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[766];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[334]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[334]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[767];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[336]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[336]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[787];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[338]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[338]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[788];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[340]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[340]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1127;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_441, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_19;
        // Exception handling pass through code for dict_build:
        dict_build_exception_19:;
        Py_DECREF(tmp_assign_source_441);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_19:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[789], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_dict_key_20 = mod_consts[761];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[342]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[342]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_442 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[762];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[344]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[344]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[763];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[346]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[346]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[764];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[348]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[348]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[765];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[350]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[350]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[766];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[352]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[767];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[354]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[354]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[787];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[356]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[788];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[358]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[358]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_442, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_20;
        // Exception handling pass through code for dict_build:
        dict_build_exception_20:;
        Py_DECREF(tmp_assign_source_442);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_20:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[790], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        tmp_dict_key_21 = mod_consts[761];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[360]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[360]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_443 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[762];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[362]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[362]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[763];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[364]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[364]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[764];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[366]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[366]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[765];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[368]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[368]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[766];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[370]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[370]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[767];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[372]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[372]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[787];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[374]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[374]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[788];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[376]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[376]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_443, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_21;
        // Exception handling pass through code for dict_build:
        dict_build_exception_21:;
        Py_DECREF(tmp_assign_source_443);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_21:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[791], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        tmp_dict_key_22 = mod_consts[761];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[378]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[378]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_444 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[762];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[380]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[380]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[763];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[382]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[382]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[764];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[384]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[384]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[765];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[386]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[386]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[766];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[388]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[388]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[767];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[390]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[390]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[787];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[392]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[392]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[788];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[394]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[394]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_444, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_22;
        // Exception handling pass through code for dict_build:
        dict_build_exception_22:;
        Py_DECREF(tmp_assign_source_444);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_22:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[792], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        tmp_dict_key_23 = mod_consts[761];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[396]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[396]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_445 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[762];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[398]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[398]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[763];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[400]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[400]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[764];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[402]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[402]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[765];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[404]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[404]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[766];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[406]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[767];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[408]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[408]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[787];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[410]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[410]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[788];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_445, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_23;
        // Exception handling pass through code for dict_build:
        dict_build_exception_23:;
        Py_DECREF(tmp_assign_source_445);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_23:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[793], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        tmp_dict_key_24 = mod_consts[761];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[414]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[414]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_446 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[762];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[416]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[416]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[763];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[418]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[418]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[764];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[420]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[420]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[765];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[422]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[422]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[766];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[424]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[424]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[767];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[426]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[426]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[787];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[428]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[428]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[788];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[430]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[430]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_446, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_24;
        // Exception handling pass through code for dict_build:
        dict_build_exception_24:;
        Py_DECREF(tmp_assign_source_446);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_24:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[794], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        tmp_dict_key_25 = mod_consts[761];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[432]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[432]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_447 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[762];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[434]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[434]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[763];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[436]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[436]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[764];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[438]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[438]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[765];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[440]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[440]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[766];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[442]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[442]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[767];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[444]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[444]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[787];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[446]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[788];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[448]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[448]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_447, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_25;
        // Exception handling pass through code for dict_build:
        dict_build_exception_25:;
        Py_DECREF(tmp_assign_source_447);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_25:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[795], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        tmp_dict_key_26 = mod_consts[761];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[450]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[450]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_448 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[762];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[452]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[452]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[763];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[454]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[454]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[764];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[456]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[456]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[765];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[458]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[458]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[766];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[460]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[460]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[767];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[462]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[462]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[787];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[464]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[464]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[788];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[466]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[466]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_448, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_26;
        // Exception handling pass through code for dict_build:
        dict_build_exception_26:;
        Py_DECREF(tmp_assign_source_448);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_26:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[796], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        tmp_dict_key_27 = mod_consts[761];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[468]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[468]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_449 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[762];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[763];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[472]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[472]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[764];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[474]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[474]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[765];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[476]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[476]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[766];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[478]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[478]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[767];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[480]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[480]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[787];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[482]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[482]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[788];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[484]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[484]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_449, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_27;
        // Exception handling pass through code for dict_build:
        dict_build_exception_27:;
        Py_DECREF(tmp_assign_source_449);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_27:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[797], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        tmp_dict_key_28 = mod_consts[761];
        tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[496]);

        if (unlikely(tmp_dict_value_28 == NULL)) {
            tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[496]);
        }

        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_450 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_450, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = mod_consts[762];
        tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[494]);

        if (unlikely(tmp_dict_value_28 == NULL)) {
            tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[494]);
        }

        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto dict_build_exception_28;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_450, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = mod_consts[763];
        tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[492]);

        if (unlikely(tmp_dict_value_28 == NULL)) {
            tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[492]);
        }

        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto dict_build_exception_28;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_450, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = mod_consts[764];
        tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_dict_value_28 == NULL)) {
            tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto dict_build_exception_28;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_450, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = mod_consts[765];
        tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[488]);

        if (unlikely(tmp_dict_value_28 == NULL)) {
            tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[488]);
        }

        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto dict_build_exception_28;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_450, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = mod_consts[766];
        tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[486]);

        if (unlikely(tmp_dict_value_28 == NULL)) {
            tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[486]);
        }

        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto dict_build_exception_28;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_450, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_28;
        // Exception handling pass through code for dict_build:
        dict_build_exception_28:;
        Py_DECREF(tmp_assign_source_450);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_28:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[798], tmp_assign_source_450);
    }
    {
        PyObject *tmp_assign_source_451;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        tmp_dict_key_29 = mod_consts[761];
        tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[503]);

        if (unlikely(tmp_dict_value_29 == NULL)) {
            tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[503]);
        }

        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_451 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_451, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = mod_consts[762];
        tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[502]);

        if (unlikely(tmp_dict_value_29 == NULL)) {
            tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[502]);
        }

        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto dict_build_exception_29;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_451, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = mod_consts[763];
        tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[501]);

        if (unlikely(tmp_dict_value_29 == NULL)) {
            tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[501]);
        }

        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto dict_build_exception_29;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_451, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = mod_consts[764];
        tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[500]);

        if (unlikely(tmp_dict_value_29 == NULL)) {
            tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[500]);
        }

        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto dict_build_exception_29;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_451, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = mod_consts[765];
        tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[499]);

        if (unlikely(tmp_dict_value_29 == NULL)) {
            tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[499]);
        }

        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto dict_build_exception_29;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_451, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = mod_consts[766];
        tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[498]);

        if (unlikely(tmp_dict_value_29 == NULL)) {
            tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[498]);
        }

        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto dict_build_exception_29;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_451, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_29;
        // Exception handling pass through code for dict_build:
        dict_build_exception_29:;
        Py_DECREF(tmp_assign_source_451);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_29:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[799], tmp_assign_source_451);
    }
    {
        PyObject *tmp_assign_source_452;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        tmp_dict_key_30 = mod_consts[761];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[518]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[518]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_452 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[762];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[517]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[517]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[763];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[516]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[516]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[764];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[515]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[515]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[765];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[514]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[514]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[766];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[513]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[513]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[767];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[511]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[511]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[787];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[509]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[509]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[788];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[507]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[507]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = mod_consts[800];
        tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[505]);

        if (unlikely(tmp_dict_value_30 == NULL)) {
            tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[505]);
        }

        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto dict_build_exception_30;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_452, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_30;
        // Exception handling pass through code for dict_build:
        dict_build_exception_30:;
        Py_DECREF(tmp_assign_source_452);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_30:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[801], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        tmp_dict_key_31 = mod_consts[761];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[526]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[526]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_453 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_453, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = mod_consts[762];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[525]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[525]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto dict_build_exception_31;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_453, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = mod_consts[763];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[524]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[524]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto dict_build_exception_31;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_453, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = mod_consts[764];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[523]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[523]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto dict_build_exception_31;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_453, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = mod_consts[765];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[522]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[522]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto dict_build_exception_31;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_453, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = mod_consts[766];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[521]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[521]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto dict_build_exception_31;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_453, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = mod_consts[767];
        tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[520]);

        if (unlikely(tmp_dict_value_31 == NULL)) {
            tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[520]);
        }

        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto dict_build_exception_31;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_453, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_31;
        // Exception handling pass through code for dict_build:
        dict_build_exception_31:;
        Py_DECREF(tmp_assign_source_453);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_31:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[802], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        tmp_dict_key_32 = mod_consts[761];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[533]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[533]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_454 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_454, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = mod_consts[762];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[532]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[532]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;

            goto dict_build_exception_32;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_454, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = mod_consts[763];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[531]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[531]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;

            goto dict_build_exception_32;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_454, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = mod_consts[764];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[530]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[530]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;

            goto dict_build_exception_32;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_454, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = mod_consts[765];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[529]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[529]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;

            goto dict_build_exception_32;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_454, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = mod_consts[766];
        tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[528]);

        if (unlikely(tmp_dict_value_32 == NULL)) {
            tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[528]);
        }

        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1140;

            goto dict_build_exception_32;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_454, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_32;
        // Exception handling pass through code for dict_build:
        dict_build_exception_32:;
        Py_DECREF(tmp_assign_source_454);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_32:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[803], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        tmp_dict_key_33 = mod_consts[761];
        tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[541]);

        if (unlikely(tmp_dict_value_33 == NULL)) {
            tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[541]);
        }

        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_455 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_455, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = mod_consts[762];
        tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[540]);

        if (unlikely(tmp_dict_value_33 == NULL)) {
            tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[540]);
        }

        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto dict_build_exception_33;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_455, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = mod_consts[763];
        tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[539]);

        if (unlikely(tmp_dict_value_33 == NULL)) {
            tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[539]);
        }

        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto dict_build_exception_33;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_455, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = mod_consts[764];
        tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[538]);

        if (unlikely(tmp_dict_value_33 == NULL)) {
            tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[538]);
        }

        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto dict_build_exception_33;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_455, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = mod_consts[765];
        tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[537]);

        if (unlikely(tmp_dict_value_33 == NULL)) {
            tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[537]);
        }

        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto dict_build_exception_33;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_455, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = mod_consts[766];
        tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[536]);

        if (unlikely(tmp_dict_value_33 == NULL)) {
            tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[536]);
        }

        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto dict_build_exception_33;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_455, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = mod_consts[767];
        tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[535]);

        if (unlikely(tmp_dict_value_33 == NULL)) {
            tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[535]);
        }

        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1141;

            goto dict_build_exception_33;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_455, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_33;
        // Exception handling pass through code for dict_build:
        dict_build_exception_33:;
        Py_DECREF(tmp_assign_source_455);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_33:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[804], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        tmp_dict_key_34 = mod_consts[761];
        tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[548]);

        if (unlikely(tmp_dict_value_34 == NULL)) {
            tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[548]);
        }

        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_456 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_456, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_dict_key_34 = mod_consts[762];
        tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[547]);

        if (unlikely(tmp_dict_value_34 == NULL)) {
            tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[547]);
        }

        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;

            goto dict_build_exception_34;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_456, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_dict_key_34 = mod_consts[763];
        tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[546]);

        if (unlikely(tmp_dict_value_34 == NULL)) {
            tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[546]);
        }

        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;

            goto dict_build_exception_34;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_456, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_dict_key_34 = mod_consts[764];
        tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[545]);

        if (unlikely(tmp_dict_value_34 == NULL)) {
            tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[545]);
        }

        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;

            goto dict_build_exception_34;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_456, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_dict_key_34 = mod_consts[765];
        tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[544]);

        if (unlikely(tmp_dict_value_34 == NULL)) {
            tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[544]);
        }

        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;

            goto dict_build_exception_34;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_456, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_dict_key_34 = mod_consts[766];
        tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[543]);

        if (unlikely(tmp_dict_value_34 == NULL)) {
            tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[543]);
        }

        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1142;

            goto dict_build_exception_34;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_456, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_34;
        // Exception handling pass through code for dict_build:
        dict_build_exception_34:;
        Py_DECREF(tmp_assign_source_456);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_34:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[805], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        tmp_dict_key_35 = mod_consts[761];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[559]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[559]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_457 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[762];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[558]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[558]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[763];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[557]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[557]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[764];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[556]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[556]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[765];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[555]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[555]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[766];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[554]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[554]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[767];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[553]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[553]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[787];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[552]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[552]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[788];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[551]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[551]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = mod_consts[800];
        tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[550]);

        if (unlikely(tmp_dict_value_35 == NULL)) {
            tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[550]);
        }

        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto dict_build_exception_35;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_457, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_35;
        // Exception handling pass through code for dict_build:
        dict_build_exception_35:;
        Py_DECREF(tmp_assign_source_457);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_35:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[806], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        tmp_dict_key_36 = mod_consts[761];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[580]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[580]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_458 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[762];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[582]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[582]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[763];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[584]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[584]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[764];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[586]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[586]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[765];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[588]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[588]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[766];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[590]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[590]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[767];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[592]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[592]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[787];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[594]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[594]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[788];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[596]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[596]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = mod_consts[780];
        tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_dict_value_36 == NULL)) {
            tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto dict_build_exception_36;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_458, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_36;
        // Exception handling pass through code for dict_build:
        dict_build_exception_36:;
        Py_DECREF(tmp_assign_source_458);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_36:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[807], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        tmp_dict_key_37 = mod_consts[761];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[561]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[561]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_459 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[762];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[563]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[563]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[763];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[565]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[565]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[764];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[567]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[567]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[765];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[569]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[569]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[766];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[571]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[571]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[767];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[573]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[573]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[787];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[575]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[575]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[788];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[577]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[577]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = mod_consts[780];
        tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dict_value_37 == NULL)) {
            tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1145;

            goto dict_build_exception_37;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_459, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_37;
        // Exception handling pass through code for dict_build:
        dict_build_exception_37:;
        Py_DECREF(tmp_assign_source_459);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_37:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[808], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        tmp_dict_key_38 = mod_consts[761];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[599]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[599]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_460 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[762];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[601]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[601]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[763];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[603]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[603]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[764];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[605]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[605]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[765];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[607]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[607]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[766];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[609]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[609]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[767];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[611]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[611]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[787];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[613]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[613]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[788];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[615]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[615]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = mod_consts[780];
        tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dict_value_38 == NULL)) {
            tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1146;

            goto dict_build_exception_38;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_460, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_38;
        // Exception handling pass through code for dict_build:
        dict_build_exception_38:;
        Py_DECREF(tmp_assign_source_460);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_38:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[809], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        tmp_dict_key_39 = mod_consts[761];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[618]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[618]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_461 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[762];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[620]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[620]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[763];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[622]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[622]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[764];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[624]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[624]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[765];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[626]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[626]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[766];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[628]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[628]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[767];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[630]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[630]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[787];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[632]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[632]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[788];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[634]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[634]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = mod_consts[780];
        tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_dict_value_39 == NULL)) {
            tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1147;

            goto dict_build_exception_39;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_461, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_39;
        // Exception handling pass through code for dict_build:
        dict_build_exception_39:;
        Py_DECREF(tmp_assign_source_461);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_39:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[810], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        tmp_dict_key_40 = mod_consts[761];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[637]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[637]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_462 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[762];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[639]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[639]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[763];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[641]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[641]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[764];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[643]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[643]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[765];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[645]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[645]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[766];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[647]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[647]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[767];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[649]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[649]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[787];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[651]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[651]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[788];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[653]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[653]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = mod_consts[780];
        tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_dict_value_40 == NULL)) {
            tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1148;

            goto dict_build_exception_40;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_462, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_40;
        // Exception handling pass through code for dict_build:
        dict_build_exception_40:;
        Py_DECREF(tmp_assign_source_462);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_40:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[811], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        tmp_dict_key_41 = mod_consts[761];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[656]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[656]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_463 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[762];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[658]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[658]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[763];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[660]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[660]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[764];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[662]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[662]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[765];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[664]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[664]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[766];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[666]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[666]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[767];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[668]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[668]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[787];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[670]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[670]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[788];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[672]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[672]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = mod_consts[780];
        tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_dict_value_41 == NULL)) {
            tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto dict_build_exception_41;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_463, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_41;
        // Exception handling pass through code for dict_build:
        dict_build_exception_41:;
        Py_DECREF(tmp_assign_source_463);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_41:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[812], tmp_assign_source_463);
    }
    {
        PyObject *tmp_assign_source_464;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        tmp_dict_key_42 = mod_consts[761];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[682]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[682]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_464 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = mod_consts[762];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[681]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[681]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;

            goto dict_build_exception_42;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = mod_consts[763];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[680]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[680]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;

            goto dict_build_exception_42;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = mod_consts[764];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[679]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[679]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;

            goto dict_build_exception_42;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = mod_consts[765];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[678]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[678]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto dict_build_exception_42;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = mod_consts[766];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[677]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[677]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto dict_build_exception_42;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = mod_consts[767];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[676]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[676]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto dict_build_exception_42;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = mod_consts[787];
        tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_dict_value_42 == NULL)) {
            tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto dict_build_exception_42;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_464, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_42;
        // Exception handling pass through code for dict_build:
        dict_build_exception_42:;
        Py_DECREF(tmp_assign_source_464);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_42:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[813], tmp_assign_source_464);
    }
    {
        PyObject *tmp_assign_source_465;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        tmp_dict_key_43 = mod_consts[761];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[709]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[709]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_465 = _PyDict_NewPresized( 18 );
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[762];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[708]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[708]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[763];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[707]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[707]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[764];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[706]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[706]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[765];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[705]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[705]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[766];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[704]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[704]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1153;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[767];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[703]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[703]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1153;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[787];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[702]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[702]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1153;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[788];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[701]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[701]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1153;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[800];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[700]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[700]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1153;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[814];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[698]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[698]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1154;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[815];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[696]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[696]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1154;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[816];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[694]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[694]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1154;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[817];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[692]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[692]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1154;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[818];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[690]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[690]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1154;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[819];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[688]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[688]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[820];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[686]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[686]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = mod_consts[821];
        tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[684]);

        if (unlikely(tmp_dict_value_43 == NULL)) {
            tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[684]);
        }

        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto dict_build_exception_43;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_465, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_43;
        // Exception handling pass through code for dict_build:
        dict_build_exception_43:;
        Py_DECREF(tmp_assign_source_465);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_43:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[822], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        tmp_dict_key_44 = mod_consts[761];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[728]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[728]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_466 = _PyDict_NewPresized( 18 );
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[762];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[727]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[727]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[763];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[726]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[726]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[764];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[725]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[725]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[765];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[724]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[724]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[766];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[723]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[723]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1157;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[767];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[722]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[722]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1157;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[787];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[721]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[721]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1157;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[788];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[720]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[720]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1157;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[800];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[719]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[719]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1157;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[814];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[718]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[718]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[815];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[717]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[717]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[816];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[716]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[716]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[817];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[715]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[715]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[818];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[714]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[714]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[819];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[713]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[713]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1159;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[820];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[712]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[712]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1159;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = mod_consts[821];
        tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[711]);

        if (unlikely(tmp_dict_value_44 == NULL)) {
            tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[711]);
        }

        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1159;

            goto dict_build_exception_44;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_466, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_44;
        // Exception handling pass through code for dict_build:
        dict_build_exception_44:;
        Py_DECREF(tmp_assign_source_466);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_44:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[823], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        tmp_dict_key_45 = mod_consts[761];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[747]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[747]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1160;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_467 = _PyDict_NewPresized( 18 );
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[762];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[746]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[746]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1160;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[763];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[745]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[745]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1160;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[764];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[744]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[744]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1160;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[765];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[743]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[743]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1160;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[766];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[742]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[742]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[767];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[741]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[741]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[787];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[740]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[740]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[788];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[739]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[739]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[800];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[738]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[738]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[814];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[737]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[737]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1162;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[815];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[736]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[736]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1162;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[816];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[735]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[735]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1162;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[817];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[734]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[734]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1162;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[818];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[733]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[733]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1162;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[819];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[732]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[732]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1163;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[820];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[731]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[731]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1163;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = mod_consts[821];
        tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_dict_value_45 == NULL)) {
            tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1163;

            goto dict_build_exception_45;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_467, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_45;
        // Exception handling pass through code for dict_build:
        dict_build_exception_45:;
        Py_DECREF(tmp_assign_source_467);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_45:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[824], tmp_assign_source_467);
    }
    {
        PyObject *tmp_assign_source_468;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        tmp_dict_key_46 = mod_consts[761];
        tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[754]);

        if (unlikely(tmp_dict_value_46 == NULL)) {
            tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[754]);
        }

        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_468 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_468, tmp_dict_key_46, tmp_dict_value_46);
        assert(!(tmp_res != 0));
        tmp_dict_key_46 = mod_consts[762];
        tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[753]);

        if (unlikely(tmp_dict_value_46 == NULL)) {
            tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[753]);
        }

        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto dict_build_exception_46;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_468, tmp_dict_key_46, tmp_dict_value_46);
        assert(!(tmp_res != 0));
        tmp_dict_key_46 = mod_consts[763];
        tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[752]);

        if (unlikely(tmp_dict_value_46 == NULL)) {
            tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[752]);
        }

        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto dict_build_exception_46;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_468, tmp_dict_key_46, tmp_dict_value_46);
        assert(!(tmp_res != 0));
        tmp_dict_key_46 = mod_consts[764];
        tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[751]);

        if (unlikely(tmp_dict_value_46 == NULL)) {
            tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[751]);
        }

        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto dict_build_exception_46;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_468, tmp_dict_key_46, tmp_dict_value_46);
        assert(!(tmp_res != 0));
        tmp_dict_key_46 = mod_consts[765];
        tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[750]);

        if (unlikely(tmp_dict_value_46 == NULL)) {
            tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[750]);
        }

        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto dict_build_exception_46;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_468, tmp_dict_key_46, tmp_dict_value_46);
        assert(!(tmp_res != 0));
        tmp_dict_key_46 = mod_consts[766];
        tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[749]);

        if (unlikely(tmp_dict_value_46 == NULL)) {
            tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[749]);
        }

        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto dict_build_exception_46;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_468, tmp_dict_key_46, tmp_dict_value_46);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_46;
        // Exception handling pass through code for dict_build:
        dict_build_exception_46:;
        Py_DECREF(tmp_assign_source_468);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_46:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[825], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        tmp_dict_key_47 = mod_consts[761];
        tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[760]);

        if (unlikely(tmp_dict_value_47 == NULL)) {
            tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[760]);
        }

        assert(!(tmp_dict_value_47 == NULL));
        tmp_assign_source_469 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_469, tmp_dict_key_47, tmp_dict_value_47);
        assert(!(tmp_res != 0));
        tmp_dict_key_47 = mod_consts[762];
        tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[759]);

        if (unlikely(tmp_dict_value_47 == NULL)) {
            tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[759]);
        }

        if (tmp_dict_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto dict_build_exception_47;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_469, tmp_dict_key_47, tmp_dict_value_47);
        assert(!(tmp_res != 0));
        tmp_dict_key_47 = mod_consts[763];
        tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[758]);

        if (unlikely(tmp_dict_value_47 == NULL)) {
            tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[758]);
        }

        if (tmp_dict_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto dict_build_exception_47;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_469, tmp_dict_key_47, tmp_dict_value_47);
        assert(!(tmp_res != 0));
        tmp_dict_key_47 = mod_consts[764];
        tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[757]);

        if (unlikely(tmp_dict_value_47 == NULL)) {
            tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[757]);
        }

        if (tmp_dict_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto dict_build_exception_47;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_469, tmp_dict_key_47, tmp_dict_value_47);
        assert(!(tmp_res != 0));
        tmp_dict_key_47 = mod_consts[765];
        tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[756]);

        if (unlikely(tmp_dict_value_47 == NULL)) {
            tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[756]);
        }

        if (tmp_dict_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto dict_build_exception_47;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_469, tmp_dict_key_47, tmp_dict_value_47);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_47;
        // Exception handling pass through code for dict_build:
        dict_build_exception_47:;
        Py_DECREF(tmp_assign_source_469);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_47:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[826], tmp_assign_source_469);
    }
    {
        PyObject *tmp_assign_source_470;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        tmp_dict_key_48 = mod_consts[768];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[768]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[768]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_assign_source_470 = _PyDict_NewPresized( 35 );
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[769];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[769]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[769]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[770];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[770]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[770]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[771];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[771]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[771]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[772];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[772]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[772]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[773];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[773]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[773]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[774];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[774]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[774]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[775];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[775]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[775]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[776];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[776]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[776]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[777];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[777]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[777]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[778];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[778]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[778]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[779];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[779]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[779]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[781];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[781]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[781]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[782];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[782]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[782]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[783];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[783]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[783]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[784];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[784]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[784]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[785];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[785]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[785]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[786];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[786]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[786]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[789];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[789]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[789]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[790];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[790]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[790]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[791];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[791]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[791]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[792];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[792]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[792]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[793];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[793]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[793]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[794];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[794]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[794]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[795];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[795]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[795]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[796];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[796]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[796]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[797];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[797]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[797]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[798];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[798]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[798]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[799];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[799]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[799]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[801];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[801]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[801]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[802];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[802]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[802]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[803];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[803]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[803]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[804];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[804]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[804]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[805];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[805]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[805]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = mod_consts[806];
        tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[806]);

        if (unlikely(tmp_dict_value_48 == NULL)) {
            tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[806]);
        }

        assert(!(tmp_dict_value_48 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_470, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[827], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        tmp_dict_key_49 = mod_consts[826];
        tmp_dict_value_49 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[826]);

        if (unlikely(tmp_dict_value_49 == NULL)) {
            tmp_dict_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[826]);
        }

        assert(!(tmp_dict_value_49 == NULL));
        tmp_assign_source_471 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_471, tmp_dict_key_49, tmp_dict_value_49);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[828], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        tmp_dict_key_50 = mod_consts[813];
        tmp_dict_value_50 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[813]);

        if (unlikely(tmp_dict_value_50 == NULL)) {
            tmp_dict_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[813]);
        }

        assert(!(tmp_dict_value_50 == NULL));
        tmp_assign_source_472 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_assign_source_472, tmp_dict_key_50, tmp_dict_value_50);
        assert(!(tmp_res != 0));
        tmp_dict_key_50 = mod_consts[822];
        tmp_dict_value_50 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[822]);

        if (unlikely(tmp_dict_value_50 == NULL)) {
            tmp_dict_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[822]);
        }

        assert(!(tmp_dict_value_50 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_472, tmp_dict_key_50, tmp_dict_value_50);
        assert(!(tmp_res != 0));
        tmp_dict_key_50 = mod_consts[823];
        tmp_dict_value_50 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[823]);

        if (unlikely(tmp_dict_value_50 == NULL)) {
            tmp_dict_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[823]);
        }

        assert(!(tmp_dict_value_50 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_472, tmp_dict_key_50, tmp_dict_value_50);
        assert(!(tmp_res != 0));
        tmp_dict_key_50 = mod_consts[824];
        tmp_dict_value_50 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[824]);

        if (unlikely(tmp_dict_value_50 == NULL)) {
            tmp_dict_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[824]);
        }

        assert(!(tmp_dict_value_50 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_472, tmp_dict_key_50, tmp_dict_value_50);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[829], tmp_assign_source_472);
    }
    {
        PyObject *tmp_assign_source_473;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        tmp_dict_key_51 = mod_consts[807];
        tmp_dict_value_51 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[807]);

        if (unlikely(tmp_dict_value_51 == NULL)) {
            tmp_dict_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[807]);
        }

        assert(!(tmp_dict_value_51 == NULL));
        tmp_assign_source_473 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_473, tmp_dict_key_51, tmp_dict_value_51);
        assert(!(tmp_res != 0));
        tmp_dict_key_51 = mod_consts[808];
        tmp_dict_value_51 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[808]);

        if (unlikely(tmp_dict_value_51 == NULL)) {
            tmp_dict_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[808]);
        }

        assert(!(tmp_dict_value_51 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_473, tmp_dict_key_51, tmp_dict_value_51);
        assert(!(tmp_res != 0));
        tmp_dict_key_51 = mod_consts[809];
        tmp_dict_value_51 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[809]);

        if (unlikely(tmp_dict_value_51 == NULL)) {
            tmp_dict_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[809]);
        }

        assert(!(tmp_dict_value_51 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_473, tmp_dict_key_51, tmp_dict_value_51);
        assert(!(tmp_res != 0));
        tmp_dict_key_51 = mod_consts[810];
        tmp_dict_value_51 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[810]);

        if (unlikely(tmp_dict_value_51 == NULL)) {
            tmp_dict_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[810]);
        }

        assert(!(tmp_dict_value_51 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_473, tmp_dict_key_51, tmp_dict_value_51);
        assert(!(tmp_res != 0));
        tmp_dict_key_51 = mod_consts[811];
        tmp_dict_value_51 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[811]);

        if (unlikely(tmp_dict_value_51 == NULL)) {
            tmp_dict_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[811]);
        }

        assert(!(tmp_dict_value_51 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_473, tmp_dict_key_51, tmp_dict_value_51);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[830], tmp_assign_source_473);
    }
    {
        PyObject *tmp_assign_source_474;
        PyObject *tmp_dict_key_52;
        PyObject *tmp_dict_value_52;
        tmp_dict_key_52 = mod_consts[825];
        tmp_dict_value_52 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[825]);

        if (unlikely(tmp_dict_value_52 == NULL)) {
            tmp_dict_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[825]);
        }

        assert(!(tmp_dict_value_52 == NULL));
        tmp_assign_source_474 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_474, tmp_dict_key_52, tmp_dict_value_52);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[831], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[827]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[827]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1228;
        tmp_assign_source_475 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_475 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832], tmp_assign_source_475);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        assert(!(tmp_expression_value_121 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[833]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[829]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[829]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 1229;

            goto frame_exception_exit_1;
        }
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1229;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1229;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[825]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[825]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1230;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1230;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[825];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1230;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[807]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[807]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1231;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1231;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[807];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1231;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[808]);

        if (unlikely(tmp_ass_subvalue_3 == NULL)) {
            tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[808]);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[808];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[809]);

        if (unlikely(tmp_ass_subvalue_4 == NULL)) {
            tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[809]);
        }

        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1233;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1233;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[809];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1233;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[810]);

        if (unlikely(tmp_ass_subvalue_5 == NULL)) {
            tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[810]);
        }

        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1234;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1234;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[810];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1234;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[811]);

        if (unlikely(tmp_ass_subvalue_6 == NULL)) {
            tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[811]);
        }

        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1235;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1235;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[811];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1235;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[812]);

        if (unlikely(tmp_ass_subvalue_7 == NULL)) {
            tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[812]);
        }

        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1236;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1236;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[812];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1236;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[826]);

        if (unlikely(tmp_ass_subvalue_8 == NULL)) {
            tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[826]);
        }

        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[826];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_476;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1239;

            goto frame_exception_exit_1;
        }
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1239;
        tmp_assign_source_476 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_476 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1239;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834], tmp_assign_source_476);
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_subscript_value_121;
        PyObject *tmp_delsubscr_subscript_1;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[834]);
        }

        assert(!(tmp_expression_value_122 == NULL));
        tmp_subscript_value_121 = mod_consts[786];
        tmp_delsubscr_target_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_122, tmp_subscript_value_121);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1240;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_1 = mod_consts[780];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1240;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_subscript_value_122;
        PyObject *tmp_delsubscr_subscript_2;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[834]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1241;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_122 = mod_consts[807];
        tmp_delsubscr_target_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_123, tmp_subscript_value_122);
        if (tmp_delsubscr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1241;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_2 = mod_consts[780];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        Py_DECREF(tmp_delsubscr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1241;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_3;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_subscript_value_123;
        PyObject *tmp_delsubscr_subscript_3;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[834]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1242;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_123 = mod_consts[808];
        tmp_delsubscr_target_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_124, tmp_subscript_value_123);
        if (tmp_delsubscr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1242;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_3 = mod_consts[780];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_3, tmp_delsubscr_subscript_3);
        Py_DECREF(tmp_delsubscr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1242;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_4;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_subscript_value_124;
        PyObject *tmp_delsubscr_subscript_4;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[834]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1243;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_124 = mod_consts[809];
        tmp_delsubscr_target_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_125, tmp_subscript_value_124);
        if (tmp_delsubscr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1243;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_4 = mod_consts[780];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_4, tmp_delsubscr_subscript_4);
        Py_DECREF(tmp_delsubscr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1243;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_5;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_subscript_value_125;
        PyObject *tmp_delsubscr_subscript_5;
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[834]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1244;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_125 = mod_consts[810];
        tmp_delsubscr_target_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_126, tmp_subscript_value_125);
        if (tmp_delsubscr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1244;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_5 = mod_consts[780];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_5, tmp_delsubscr_subscript_5);
        Py_DECREF(tmp_delsubscr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1244;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_6;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_126;
        PyObject *tmp_delsubscr_subscript_6;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[834]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1245;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_126 = mod_consts[811];
        tmp_delsubscr_target_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_127, tmp_subscript_value_126);
        if (tmp_delsubscr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1245;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_6 = mod_consts[780];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_6, tmp_delsubscr_subscript_6);
        Py_DECREF(tmp_delsubscr_target_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1245;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_7;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_subscript_value_127;
        PyObject *tmp_delsubscr_subscript_7;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[834]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[834]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1246;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_127 = mod_consts[812];
        tmp_delsubscr_target_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_128, tmp_subscript_value_127);
        if (tmp_delsubscr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1246;

            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_7 = mod_consts[780];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_7, tmp_delsubscr_subscript_7);
        Py_DECREF(tmp_delsubscr_target_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1246;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_477;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_53;
        PyObject *tmp_dict_value_53;
        tmp_dict_key_53 = mod_consts[9];
        tmp_dict_value_53 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_53 == NULL)) {
            tmp_dict_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1248;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_53, tmp_dict_value_53);
        assert(!(tmp_res != 0));
        tmp_dict_key_53 = mod_consts[835];
        tmp_dict_value_53 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_53, tmp_dict_value_53);
        assert(!(tmp_res != 0));
        tmp_dict_key_53 = mod_consts[836];
        tmp_dict_value_53 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_53 == NULL)) {
            tmp_dict_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1248;

            goto dict_build_exception_48;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_53, tmp_dict_value_53);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_48;
        // Exception handling pass through code for dict_build:
        dict_build_exception_48:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_48:;


        tmp_assign_source_477 = MAKE_FUNCTION_bokeh$palettes$$$function__1_linear_palette(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_477);
    }
    {
        PyObject *tmp_assign_source_478;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_54;
        PyObject *tmp_dict_value_54;
        tmp_defaults_1 = mod_consts[837];
        tmp_dict_key_54 = mod_consts[838];
        tmp_dict_value_54 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_54 == NULL)) {
            tmp_dict_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1270;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_54, tmp_dict_value_54);
        assert(!(tmp_res != 0));
        tmp_dict_key_54 = mod_consts[839];
        tmp_dict_value_54 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_54 == NULL)) {
            tmp_dict_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1270;

            goto dict_build_exception_49;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_54, tmp_dict_value_54);
        assert(!(tmp_res != 0));
        tmp_dict_key_54 = mod_consts[835];
        tmp_dict_value_54 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_54, tmp_dict_value_54);
        assert(!(tmp_res != 0));
        tmp_dict_key_54 = mod_consts[840];
        tmp_dict_value_54 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_54, tmp_dict_value_54);
        assert(!(tmp_res != 0));
        tmp_dict_key_54 = mod_consts[836];
        tmp_dict_value_54 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_54 == NULL)) {
            tmp_dict_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1270;

            goto dict_build_exception_49;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_54, tmp_dict_value_54);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_49;
        // Exception handling pass through code for dict_build:
        dict_build_exception_49:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_49:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_478 = MAKE_FUNCTION_bokeh$palettes$$$function__2_diverging_palette(tmp_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[841], tmp_assign_source_478);
    }
    {
        PyObject *tmp_assign_source_479;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_55;
        PyObject *tmp_dict_value_55;
        tmp_dict_key_55 = mod_consts[835];
        tmp_dict_value_55 = (PyObject *)&PyLong_Type;
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_55, tmp_dict_value_55);
        assert(!(tmp_res != 0));
        tmp_dict_key_55 = mod_consts[836];
        tmp_dict_value_55 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_55 == NULL)) {
            tmp_dict_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1312;

            goto dict_build_exception_50;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_55, tmp_dict_value_55);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_50;
        // Exception handling pass through code for dict_build:
        dict_build_exception_50:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_50:;


        tmp_assign_source_479 = MAKE_FUNCTION_bokeh$palettes$$$function__3_magma(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[842], tmp_assign_source_479);
    }
    {
        PyObject *tmp_assign_source_480;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_56;
        PyObject *tmp_dict_value_56;
        tmp_dict_key_56 = mod_consts[835];
        tmp_dict_value_56 = (PyObject *)&PyLong_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_56, tmp_dict_value_56);
        assert(!(tmp_res != 0));
        tmp_dict_key_56 = mod_consts[836];
        tmp_dict_value_56 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_56 == NULL)) {
            tmp_dict_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1341;

            goto dict_build_exception_51;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_56, tmp_dict_value_56);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_51;
        // Exception handling pass through code for dict_build:
        dict_build_exception_51:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_51:;


        tmp_assign_source_480 = MAKE_FUNCTION_bokeh$palettes$$$function__4_inferno(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[843], tmp_assign_source_480);
    }
    {
        PyObject *tmp_assign_source_481;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_57;
        PyObject *tmp_dict_value_57;
        tmp_dict_key_57 = mod_consts[835];
        tmp_dict_value_57 = (PyObject *)&PyLong_Type;
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_57, tmp_dict_value_57);
        assert(!(tmp_res != 0));
        tmp_dict_key_57 = mod_consts[836];
        tmp_dict_value_57 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_57 == NULL)) {
            tmp_dict_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1370;

            goto dict_build_exception_52;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_57, tmp_dict_value_57);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_52;
        // Exception handling pass through code for dict_build:
        dict_build_exception_52:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_52:;


        tmp_assign_source_481 = MAKE_FUNCTION_bokeh$palettes$$$function__5_plasma(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[844], tmp_assign_source_481);
    }
    {
        PyObject *tmp_assign_source_482;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_58;
        PyObject *tmp_dict_value_58;
        tmp_dict_key_58 = mod_consts[835];
        tmp_dict_value_58 = (PyObject *)&PyLong_Type;
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_58, tmp_dict_value_58);
        assert(!(tmp_res != 0));
        tmp_dict_key_58 = mod_consts[836];
        tmp_dict_value_58 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_58 == NULL)) {
            tmp_dict_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1399;

            goto dict_build_exception_53;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_58, tmp_dict_value_58);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_53;
        // Exception handling pass through code for dict_build:
        dict_build_exception_53:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_53:;


        tmp_assign_source_482 = MAKE_FUNCTION_bokeh$palettes$$$function__6_viridis(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[845], tmp_assign_source_482);
    }
    {
        PyObject *tmp_assign_source_483;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_59;
        PyObject *tmp_dict_value_59;
        tmp_dict_key_59 = mod_consts[835];
        tmp_dict_value_59 = (PyObject *)&PyLong_Type;
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_59, tmp_dict_value_59);
        assert(!(tmp_res != 0));
        tmp_dict_key_59 = mod_consts[836];
        tmp_dict_value_59 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_59 == NULL)) {
            tmp_dict_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1428;

            goto dict_build_exception_54;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_59, tmp_dict_value_59);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_54;
        // Exception handling pass through code for dict_build:
        dict_build_exception_54:;
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_54:;


        tmp_assign_source_483 = MAKE_FUNCTION_bokeh$palettes$$$function__7_cividis(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[846], tmp_assign_source_483);
    }
    {
        PyObject *tmp_assign_source_484;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_60;
        PyObject *tmp_dict_value_60;
        tmp_dict_key_60 = mod_consts[835];
        tmp_dict_value_60 = (PyObject *)&PyLong_Type;
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_60, tmp_dict_value_60);
        assert(!(tmp_res != 0));
        tmp_dict_key_60 = mod_consts[836];
        tmp_dict_value_60 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_60 == NULL)) {
            tmp_dict_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1457;

            goto dict_build_exception_55;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_60, tmp_dict_value_60);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_55;
        // Exception handling pass through code for dict_build:
        dict_build_exception_55:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_55:;


        tmp_assign_source_484 = MAKE_FUNCTION_bokeh$palettes$$$function__8_turbo(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[847], tmp_assign_source_484);
    }
    {
        PyObject *tmp_assign_source_485;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_61;
        PyObject *tmp_dict_value_61;
        tmp_dict_key_61 = mod_consts[835];
        tmp_dict_value_61 = (PyObject *)&PyLong_Type;
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_61, tmp_dict_value_61);
        assert(!(tmp_res != 0));
        tmp_dict_key_61 = mod_consts[836];
        tmp_dict_value_61 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_61 == NULL)) {
            tmp_dict_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1490;

            goto dict_build_exception_56;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_61, tmp_dict_value_61);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_56;
        // Exception handling pass through code for dict_build:
        dict_build_exception_56:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_56:;


        tmp_assign_source_485 = MAKE_FUNCTION_bokeh$palettes$$$function__9_grey(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[848], tmp_assign_source_485);
    }
    {
        PyObject *tmp_assign_source_486;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_62;
        PyObject *tmp_dict_value_62;
        tmp_dict_key_62 = mod_consts[835];
        tmp_dict_value_62 = (PyObject *)&PyLong_Type;
        tmp_annotations_10 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_62, tmp_dict_value_62);
        assert(!(tmp_res != 0));
        tmp_dict_key_62 = mod_consts[836];
        tmp_dict_value_62 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_62 == NULL)) {
            tmp_dict_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1522;

            goto dict_build_exception_57;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_62, tmp_dict_value_62);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_57;
        // Exception handling pass through code for dict_build:
        dict_build_exception_57:;
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_57:;


        tmp_assign_source_486 = MAKE_FUNCTION_bokeh$palettes$$$function__10_gray(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[849], tmp_assign_source_486);
    }
    {
        PyObject *tmp_assign_source_487;
        tmp_assign_source_487 = PyList_New(0);
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[850], tmp_assign_source_487);
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_subscript_value_128;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1566;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_128 = (PyObject *)&PyUnicode_Type;
        tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_129, tmp_subscript_value_128);
        if (tmp_ass_subvalue_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1566;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_9);

            exception_lineno = 1566;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[850];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1566;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_488;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[851]);
        assert(tmp_called_value_4 != NULL);
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[832]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[832]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[852]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1567;
        tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_bokeh$palettes$$$function__11_lambda();

        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1567;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[854]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_488 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_488 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_488;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_489;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_489 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_489 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 1567;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_489;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_490;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_490 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_490 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1567;

            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_490;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_491;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_491 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_491 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 1567;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_491;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_492;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_492 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_492 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 1567;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_492;
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


                    exception_lineno = 1567;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[855];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 1567;
            goto try_except_handler_4;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_493;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_493 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[856], tmp_assign_source_493);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_494;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_494 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[857], tmp_assign_source_494);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_495;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_subscript_value_129;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[856]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[856]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        tmp_subscript_value_129 = mod_consts[858];
        tmp_expression_value_131 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_132, tmp_subscript_value_129, -1);
        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[859]);
        Py_DECREF(tmp_expression_value_131);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1568;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[856]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[856]);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        tmp_right_value_1 = mod_consts[860];
        tmp_assign_source_495 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_1, tmp_right_value_1);
        if (tmp_assign_source_495 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_495 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[856]);

        if (unlikely(tmp_assign_source_495 == NULL)) {
            tmp_assign_source_495 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[856]);
        }

        if (tmp_assign_source_495 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1568;

            goto try_except_handler_2;
        }
        Py_INCREF(tmp_assign_source_495);
        condexpr_end_1:;
        UPDATE_STRING_DICT1(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[856], tmp_assign_source_495);
    }
    {
        PyObject *tmp_assign_source_496;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        tmp_left_value_2 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[850]);

        if (unlikely(tmp_left_value_2 == NULL)) {
            tmp_left_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[850]);
        }

        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1569;

            goto try_except_handler_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_497;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_133;
            tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[851]);
            assert(tmp_called_value_7 != NULL);
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[857]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[857]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;

                goto try_except_handler_5;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[861]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;

                goto try_except_handler_5;
            }
            frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1569;
            tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
            Py_DECREF(tmp_called_value_8);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;

                goto try_except_handler_5;
            }
            frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame.f_lineno = 1569;
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;

                goto try_except_handler_5;
            }
            tmp_assign_source_497 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_497 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;

                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_497;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_498;
            tmp_assign_source_498 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_498;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2)) {
            Py_XDECREF(cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2 = MAKE_FUNCTION_FRAME(codeobj_ec0b80ac2bf61ba289fb32392628a0d2, module_bokeh$palettes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2->m_type_description == NULL);
        frame_ec0b80ac2bf61ba289fb32392628a0d2_2 = cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ec0b80ac2bf61ba289fb32392628a0d2_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ec0b80ac2bf61ba289fb32392628a0d2_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_499;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_499 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_499 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 1569;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_499;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_500;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_500 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_index;
                outline_0_var_index = tmp_assign_source_500;
                Py_INCREF(outline_0_var_index);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_left_value_3;
            PyObject *tmp_right_value_3;
            PyObject *tmp_unicode_arg_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_left_value_3 = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[856]);

            if (unlikely(tmp_left_value_3 == NULL)) {
                tmp_left_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[856]);
            }

            if (tmp_left_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            CHECK_OBJECT(outline_0_var_index);
            tmp_unicode_arg_1 = outline_0_var_index;
            tmp_right_value_3 = PyObject_Unicode(tmp_unicode_arg_1);
            if (tmp_right_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
            Py_DECREF(tmp_right_value_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1569;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1569;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_right_value_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_right_value_2);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ec0b80ac2bf61ba289fb32392628a0d2_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_ec0b80ac2bf61ba289fb32392628a0d2_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ec0b80ac2bf61ba289fb32392628a0d2_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ec0b80ac2bf61ba289fb32392628a0d2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ec0b80ac2bf61ba289fb32392628a0d2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ec0b80ac2bf61ba289fb32392628a0d2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ec0b80ac2bf61ba289fb32392628a0d2_2,
            type_description_2,
            outline_0_var_index
        );


        // Release cached frame if used for exception.
        if (frame_ec0b80ac2bf61ba289fb32392628a0d2_2 == cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2);
            cache_frame_ec0b80ac2bf61ba289fb32392628a0d2_2 = NULL;
        }

        assertFrameObject(frame_ec0b80ac2bf61ba289fb32392628a0d2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_index);
        outline_0_var_index = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_index);
        outline_0_var_index = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 1569;
        goto try_except_handler_2;
        outline_result_1:;
        tmp_inplace_orig = tmp_left_value_2;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1569;

            goto try_except_handler_2;
        }
        tmp_assign_source_496 = tmp_left_value_2;
        if (tmp_inplace_orig != tmp_assign_source_496) {
        UPDATE_STRING_DICT_INPLACE(moduledict_bokeh$palettes, (Nuitka_StringObject *)mod_consts[850], tmp_assign_source_496);
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 1567;

        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3fe6bb565b1612f50f35b84f2e3d5685);
#endif
    popFrameStack();

    assertFrameObject(frame_3fe6bb565b1612f50f35b84f2e3d5685);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3fe6bb565b1612f50f35b84f2e3d5685);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3fe6bb565b1612f50f35b84f2e3d5685, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3fe6bb565b1612f50f35b84f2e3d5685->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3fe6bb565b1612f50f35b84f2e3d5685, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("bokeh.palettes", false);

    Py_INCREF(module_bokeh$palettes);
    return module_bokeh$palettes;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_bokeh$palettes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("bokeh$palettes", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
